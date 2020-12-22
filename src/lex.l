%{
    #include <stdio.h>
    #include "y.tab.h"
    #define YYDEBUG 1
%}

%option noyywrap 
%option caseless 
%option yylineno

comilla			                		[\'|\"]+
Ent  							[ _a-zA-Z0-9À-ÿ|\!|\?|\$|\%|\&|\-|\.|\:|\/|\_|\*|\(|\=|\)|\{|\}|\[|\]|\+|\@|\^|\#|\;|\,|u00f1]*
REG_ID							([ ]*id=\"[ a-zA-Z0-9-]*\"[ ]*)
REG_CLASS						([ ]*class=\"[ a-zA-Z0-9-]*\"[ ]*)
Alistaol						([ ]*type=\"[ a-zA-Z0-9-]*\"[ ]*)
REG_BORDER						([ ]*border=\"[ 0-9]\"[ ]*)
REG_RULES						([ ]*rules=\"[ a-zA-Z0-9]*\"[ ]*)
Alistali						([ ]*value=\"[0-9]*\"[ ]*)
REG_BLANK						([ ]*target=\"_blank\"[ ]*)
REG_PARENT						([ ]*target=\"_parent\"[ ]*)
REG_SELF						([ ]*target=\"_self\"[ ]*)
REG_TOP							([ ]*target=\"_top\"[ ]*)
REG_ALT							([ ]*alt=\"[ a-zA-Z0-9]*\"[ ]*)
REG_WIDTH						([ ]*width=\"[ 0-9]*\"[ ]*)
REG_HEIGHT						([ ]*height=\"[ 0-9]*\"[ ]*)
Enlace							\"({Prot}{URL}{Term}*)\"
Term							.[a-z]{2,3}|:[0-9]*|[/[_a-zA-Z0-9]*]*|#[_a-zA-Z0-9]*
Prot							(htt|ft)
href							([ ]*href=)
URL							ps{0,1}:\/\/[a-zA-Z0-9]*\.[a-zA-Z]*
ContMeta						\"(description|keywords|author|robots)\"
UTF							\"UTF-8\"
Idioma							\"[a-z]*\"
ignora 							" "|\t|\n
img							("<img ")			
src							src=\"[-_a-zA-Z0-9]*(\/[-_a-zA-Z]+)*"\."[a-z]*\"|src={Enlace}


%%
"<!DOCTYPE html>"					{return(DOCTYPE);}
"<html lang="{Idioma}">"				{return(HTML);}
"<head>"						{return(A_HEAD);}
"</head>"						{return(C_HEAD);}
"<meta name="{ContMeta}" content="\"{Ent}\"">"		{return(META_CHARSET);}
"<meta charset="{UTF}">"				{return(METAS);} 
"<title"						{return(A_TITLE);}
"</title>"						{return(C_TITLE);}
"<body"							{return(A_BODY);}
"</body>"						{return(C_BODY);}
"<section"						{return(A_SECCION);}
"</section>"						{return(C_SECCION);}
"<div"							{return(A_DIV);}
"</div>"						{return(C_DIV);}
"<p"							{return(A_P);}
"</p>"							{return(C_P);}
"<h1"							{return(H1);}								
"<h2"							{return(H2);}
"<h3"							{return(H3);}
"<h4"							{return(H4);}
"<h5"							{return(H5);}
"<h6"							{return(H6);}
"</h1>"							{return(C_H1);}
"</h2>"							{return(C_H2);}
"</h3>"							{return(C_H3);}
"</h4>"							{return(C_H4);}
"</h5>"							{return(C_H5);}
"</h6>"							{return(C_H6);}
"<em"							{return(A_EM);}
"</em>"							{return(C_EM);}
"<strong"						{return(A_STRONG);} 
"</strong>"						{return(C_STRONG);}
"<mark"							{return(A_MARK);} 
"</mark>"						{return(C_MARK);}
"<a"							{return(A_A);}				
"</a>"							{return(C_A);}
{img}							{return(A_IMG);}
{src}							{return(SRC);}
{href}{Enlace}|{href}\""#"{Ent}\"			{return(ENLACE);}
{REG_BLANK}						{return(BLANK);}
{REG_PARENT}						{return(PARENT);}
{REG_SELF}                                              {return(SELF);} 
{REG_TOP}						{return(TOP);}
{REG_ALT}						{return(ALT);}
{REG_WIDTH}						{return(WIDTH);}
{REG_HEIGHT}						{return(HEIGHT);}	
"<br"							{return(A_BR);}  
"<hr"							{return(A_HR);}
"<ul"							{return(A_UL);} 
"</ul>"							{return(C_UL);} 
"<li"							{return(A_LI);}
"</li>"							{return(C_LI);} 
"<ol"							{return(A_OL);} 
"</ol>"							{return(C_OL);} 
"<table"						{return(A_TABLA);}
"</table>"						{return(C_TABLA);}
{REG_BORDER}						{return(BORDER);}
{REG_RULES}						{return(RULES);}
"<caption"						{return(A_CAPTION);}
"</caption>"						{return(C_CAPTION);}
"<thead>"						{return(A_TBH);} 
"<tbody>"						{return(A_TBB);}
"<tfoot>"						{return(A_TBF);}
"</thead>"						{return(C_TBH);}
"</tbody>"						{return(C_TBB);}
"</tfoot>"						{return(C_TBF);} 
"<tr>"							{return(A_TR);}
"</tr>"							{return(C_TR);}
"<th>"							{return(A_TH);}
"</th>"							{return(C_TH);}
"<td>"							{return(A_TD);}
"</td>"							{return(C_TD);}
"</html>"						{return(C_HTML);}
{Alistali}						{return(VALUE);} 
{Alistaol}						{return(TYPE);}
">"							{return(LC);}
{REG_ID}						{return(ID);}	
{REG_CLASS}					        {return(CLASS);}							       
{Ent}						        {return(ENTRADA);}		
{ignora}*						{;}
"^D"							{exit (-1);}


%%
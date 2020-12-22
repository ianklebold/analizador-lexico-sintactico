%{
	#include <stdio.h>
	#include <stdlib.h>
	#include<time.h>
	#include <string.h>
  	extern int yylex(void);
  	extern char *yytext;
 	extern int linea;
 	extern FILE *yyin;
	extern int yylineno; 
  	void yyerror(char *s);
	#define YYDEBUG 1
	#include "y.tab.h"
 
%}

%union
{

}

%start sigma

%token DOCTYPE HTML A_HEAD META_CHARSET METAS C_HEAD A_TITLE ENTRADA C_TITLE ID CLASS LC C_HTML
%token A_BODY C_BODY A_SECCION A_DIV C_SECCION C_DIV H1 H2 H3 H4 H5 H6 C_H1 C_H2 C_H3 C_H4 C_H5 C_H6
%token A_P C_P A_EM C_EM A_STRONG C_STRONG A_MARK C_MARK A_BR C_BR A_HR C_HR A_UL C_UL A_LI C_LI A_OL C_OL VALUE TYPE
%token A_TABLA C_TABLA BORDER RULES A_CAPTION C_CAPTION A_TBH A_TBB A_TBF C_TBH C_TBB C_TBF A_TR C_TR A_TH C_TH A_TD C_TD
%token ENLACE BLANK PARENT SELF C_A A_A TOP 
%token A_IMG SRC ALT WIDTH HEIGHT

%%

sigma 			:  DOCTYPE HTML head cuerpo C_HTML;

head			:  A_HEAD cont_cabeza;

cont_cabeza		:  METAS enc;

enc				:  META_CHARSET enc | C_HEAD | A_TITLE atrib ENTRADA C_TITLE enc;

cuerpo			: A_BODY atrib  otrocuerpo;

 otrocuerpo		: seccion | division | funciones | ENTRADA | C_BODY;

seccion			: A_SECCION atrib funciones C_SECCION otrocuerpo
				| A_SECCION atrib funciones C_SECCION;
division		: A_DIV atrib funciones C_DIV otrocuerpo
				| A_DIV atrib funciones C_DIV;
funciones		: encabezado   | parrafo   | em   | strong   | mark   | br   | hr   | lista   | tabla    |  a	| img	| selector;
selector		: seccion	   | division;

img			: A_IMG cont_img otrocuerpo | A_IMG cont_img ENTRADA otrocuerpo;

cont_img	: atribglb SRC atrib_img LC
			| atribglb atrib_img SRC LC
			| SRC atrib_img atribglb LC
			| SRC atribglb atrib_img LC
			| atrib_img SRC atribglb LC
			| atrib_img SRC atrib_img LC
			| atrib_img atribglb SRC LC
			| SRC atrib_img LC
			| atrib_img SRC LC
			| SRC atribglb LC
			| atribglb SRC LC
			| SRC LC;

atrib_img		: ALT WIDTH HEIGHT
			| ALT HEIGHT WIDTH
			| WIDTH ALT HEIGHT
			| WIDTH HEIGHT ALT 
			| HEIGHT ALT WIDTH
			| HEIGHT WIDTH ALT
			| ALT WIDTH
			| WIDTH ALT
			| ALT HEIGHT
			| HEIGHT ALT
			| HEIGHT WIDTH 
			| WIDTH  HEIGHT
			| ALT
			| HEIGHT 
			| WIDTH;

a			: A_A cont_enlace C_A otrocuerpo
			| A_A cont_enlace ENTRADA C_A otrocuerpo
			| A_A cont_enlace ENTRADA C_A | A_A cont_enlace C_A
			| A_A cont_enlace funciones C_A
			| A_A cont_enlace funciones C_A otrocuerpo;

cont_enlace		: atribglb ENLACE atrib_enlace LC
			| ENLACE atribglb atrib_enlace LC
			| atrib_enlace ENLACE atribglb LC
			| ENLACE atrib_enlace atribglb LC
			| ENLACE atrib_enlace LC
			| atrib_enlace ENLACE LC
			| ENLACE LC
			| atrib_enlace LC
			| atribglb ENLACE LC
			| ENLACE atribglb LC
			| LC; 

tabla			: A_TABLA opciones_t elementos_t C_TABLA
			| A_TABLA opciones_t elementos_t C_TABLA otrocuerpo;

opciones_t		: LC | BORDER RULES LC | RULES BORDER LC | RULES LC | BORDER LC;

elementos_t		: A_CAPTION atrib ENTRADA C_CAPTION parte_tab | parte_tab;

parte_tab	:  tabla_i 
			| t_cabeza t_cuerpo  t_pies 
			| t_cuerpo t_cabeza  t_pies
			| t_cuerpo t_pies   t_cabeza  
			| t_cabeza t_pies    t_cuerpo
			| t_pies   t_cabeza  t_cuerpo
			| t_cabeza t_cuerpo 
			| t_cabeza t_pies
			| t_cuerpo t_cabeza 
			| t_pies   t_cabeza;

t_cabeza		: A_TBH tabla_i C_TBH
t_cuerpo		: A_TBB tabla_i C_TBB
t_pies			: A_TBF tabla_i C_TBF;	

tabla_i 	: A_TR tablas;

tablas      : A_TH ENTRADA C_TH tablas
			| A_TD ENTRADA C_TD tablas
 			| A_TH C_TH tablas
			| A_TD C_TD tablas
			| C_TR tabla_i
			| C_TR;			
			
lista		: A_UL atrib ENTRADA funciones C_UL otrocuerpo
			| A_UL atrib ENTRADA funciones C_UL
			| A_UL atrib funciones ENTRADA C_UL otrocuerpo
			| A_UL atrib funciones ENTRADA C_UL
			| A_UL atrib ENTRADA C_UL
			| A_UL atrib ENTRADA C_UL otrocuerpo
			| A_UL atrib funciones C_UL
			| A_UL atrib funciones C_UL otrocuerpo
			| A_LI atribli ENTRADA funciones C_LI otrocuerpo
			| A_LI atribli ENTRADA funciones C_LI
			| A_LI atribli funciones ENTRADA C_LI otrocuerpo
			| A_LI atribli funciones ENTRADA C_LI
			| A_LI atribli ENTRADA C_LI
			| A_LI atribli ENTRADA C_LI otrocuerpo
			| A_LI atribli funciones C_LI
			| A_LI atribli funciones C_LI otrocuerpo
			| A_OL atriblo ENTRADA funciones C_OL otrocuerpo
			| A_OL atriblo ENTRADA funciones C_OL
			| A_OL atriblo funciones ENTRADA C_OL otrocuerpo
			| A_OL atriblo funciones ENTRADA C_OL
			| A_OL atriblo ENTRADA C_OL
			| A_OL atriblo ENTRADA C_OL otrocuerpo
			| A_OL atriblo funciones C_OL
			| A_OL atriblo funciones C_OL otrocuerpo;

atribli 		:LC | atribglb LC | VALUE LC | atribglb VALUE LC; 
atriblo			:LC | atribglb LC | TYPE LC | atribglb TYPE LC; 

atribglb 		:ID | CLASS | ID CLASS | CLASS ID;
atrib			:ID LC | CLASS  LC | ID CLASS LC | CLASS ID LC | LC;

parrafo		: A_P atrib ENTRADA funciones C_P otrocuerpo
			| A_P atrib ENTRADA funciones C_P
			| A_P atrib funciones ENTRADA C_P otrocuerpo
			| A_P atrib funciones ENTRADA C_P
			| A_P atrib ENTRADA C_P
			| A_P atrib ENTRADA C_P otrocuerpo
			| A_P atrib funciones C_P
			| A_P atrib funciones C_P otrocuerpo;

em			: A_EM atrib ENTRADA funciones C_EM otrocuerpo
			| A_EM atrib ENTRADA funciones C_EM
			| A_EM atrib funciones ENTRADA C_EM otrocuerpo
			| A_EM atrib funciones ENTRADA C_EM
			| A_EM atrib ENTRADA C_EM
			| A_EM atrib ENTRADA C_EM otrocuerpo
			| A_EM atrib funciones C_EM
			| A_EM atrib funciones C_EM otrocuerpo;
strong		: A_STRONG atrib ENTRADA funciones C_STRONG otrocuerpo
			| A_STRONG atrib ENTRADA funciones C_STRONG
			| A_STRONG atrib funciones ENTRADA C_STRONG otrocuerpo
			| A_STRONG atrib funciones ENTRADA C_STRONG
			| A_STRONG atrib ENTRADA C_STRONG
			| A_STRONG atrib ENTRADA C_STRONG otrocuerpo
			| A_STRONG atrib funciones C_STRONG
			| A_STRONG atrib funciones C_STRONG otrocuerpo;
mark		: A_MARK atrib ENTRADA funciones C_MARK otrocuerpo
			| A_MARK atrib ENTRADA funciones C_MARK
			| A_MARK atrib funciones ENTRADA C_MARK otrocuerpo
			| A_MARK atrib funciones ENTRADA C_MARK
			| A_MARK atrib ENTRADA C_MARK
			| A_MARK atrib ENTRADA C_MARK otrocuerpo
			| A_MARK atrib funciones C_MARK
			| A_MARK atrib funciones C_MARK otrocuerpo;

br			: A_BR atrib otrocuerpo | A_BR atrib otrocuerpo  C_BODY ;
hr			: A_HR atrib otrocuerpo | A_HR atrib otrocuerpo  C_BODY ;  

encabezado	: H1 atrib ENTRADA C_H1 ENTRADA otrocuerpo  
			| H1 atrib ENTRADA C_H1
			| H1 atrib ENTRADA C_H1 otrocuerpo
			| H2 atrib ENTRADA C_H2 ENTRADA otrocuerpo 
			| H2 atrib ENTRADA C_H2 
			| H2 atrib ENTRADA C_H2 otrocuerpo
			| H3 atrib ENTRADA C_H3 ENTRADA otrocuerpo      
			| H3 atrib ENTRADA C_H3
			| H3 atrib ENTRADA C_H3 otrocuerpo
			| H4 atrib ENTRADA C_H4 ENTRADA otrocuerpo     
			| H4 atrib ENTRADA C_H4
			| H4 atrib ENTRADA C_H4 otrocuerpo
			| H5 atrib ENTRADA C_H5 ENTRADA otrocuerpo   
			| H5 atrib ENTRADA C_H5 
			| H5 atrib ENTRADA C_H5 otrocuerpo
			| H6 atrib ENTRADA C_H6 ENTRADA otrocuerpo 
			| H6 atrib ENTRADA C_H6
			| H6 atrib ENTRADA C_H6 otrocuerpo;



atrib_enlace		: BLANK 
			| PARENT  
			| SELF 
			| TOP
     			| BLANK PARENT 
			| PARENT BLANK 
			| BLANK SELF 
			| SELF BLANK 
			| SELF PARENT
			| PARENT SELF 
			| BLANK PARENT SELF 
 			| BLANK SELF PARENT 
			| PARENT BLANK SELF
			| PARENT SELF BLANK
			| SELF BLANK PARENT 
			| SELF PARENT BLANK;

%%
yyerror(char *msg)
{
}

int main(int argc, char *argv[])
{
	if (argc==2)
	{
		yyin=fopen(argv[1],"rt");
		if(yyin==NULL)
		printf("\nNo se puede leer el archivo");
		if( yyparse() == 0)
		{
			int valor;
			char salidas_serror[6][50]={"Todo bien por aqui :D ","Esto esta bien escrito :D  ","Excelente  ","Sin errores, muy bien ","Nada mal por aca  ","Un codigo excelente  "};
			srand(time(NULL));
			valor= rand() % 6 ;
			printf(salidas_serror[valor],"\n");
		}
		else
		{
			int valor;
			char salidas_error[6][50]={"Algo no va bien en esta linea : ","Uy hicimos macana en la linea : ","Se encontro un error : ","Hay algo que corregir en la linea : ","Error en linea : ","Tenes que corregir en : "};
			srand(time(NULL));
			valor= rand() % 6 ;
			printf(salidas_error[valor]," : \n");
			printf("%d\n",yylineno);
			fclose(yyin); 
			return 0; 
		}
		fclose(yyin);
		getchar();
	} else 
	
		{	
			yyin=stdin;
		
			
			if(yyparse() == 0)
			{
				int valor;
				char salidas_serror[6][50]={"Todo bien por aqui :D ","Esto esta bien escrito :D  ","Excelente  ","Sin errores, muy bien ","Nada mal por aca  ","Un codigo excelente  "};
				srand(time(NULL));
				valor= rand() % 6 ;
				printf(salidas_serror[valor],"\n");
			}
			else 
			{
				int valor;
				char salidas_error[6][50]={"Algo no va bien en esta linea : ","Uy hicimos macana en la linea : ","Se encontro un error : ","Hay algo que corregir en la linea : ","Error en linea : ","Tenes que corregir en : "};
				srand(time(NULL));
				valor= rand() % 6 ;
				printf(salidas_error[valor],": \n");
				printf("%i\n",yylineno); 
			}
			fclose(yyin);
	}
}
 //PREGUNTAR %EMPTY
 
 
 
 
 //  1: ZONA DE DECLARACIONES
 // PARTE 1.2: Cosas que necesitamos que esten en el .c
%{
	#include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison
%}

 //PARTE 2.2: Declaracion de los tokens del lenguaje y declaracion de los tipos del
 // union en los que flex nos enviara el valor asociado a los tokens multivaluados

%token constTK
%token <literal> literalTK
%token fconstTK
%token igualTK
%token <cadena> nombreCteTK
%token puntoYComaTK

 // Tokens del scanner de la Practica 1 (constTK, fconstTK, igualTK y literalTK ya est�n arriba)

 // Palabras reservadas
%token accionTK
%token algoritmoTK
%token booleanoTK
%token cadenaTK
%token caracterTK
%token continuarTK
%token deTK
%token devTK
%token divTK
%token entTK
%token enteroTK
%token entradaSalidaTK
%token faccionTK
%token falgoritmoTK
%token ffuncionTK
%token fmientrasTK
%token fparaTK
%token fsiTK
%token ftipoTK
%token ftuplaTK
%token funcionTK
%token fvarTK
%token hacerTK
%token hastaTK
%token mientrasTK
%token modTK
%token noTK
%token oTK
%token paraTK
%token realTK
%token refTK
%token salTK
%token siTK
%token tablaTK
%token tipoTK
%token tuplaTK
%token varTK
%token yTK

 // Identificadores (llevan su nombre)
%token <cadena> identificadorTK

 // Comentarios { ... }
%token comentarioTK

 // Simbolos y operadores
%token asignacionTK
%token composicionSecuencialTK
%token separadorTK
%token subrangoTK
%token tipoVariableTK
%token entoncesTK
%token siNoSiTK
%token inicioArrayTK
%token finArrayTK
%token puntoTK
%token parentesisAbiertoTK
%token parentesisCerradoTK
%token masTK
%token menosTK
%token porTK
%token divisionTK
%token menorTK
%token mayorTK
%token menorIgualTK
%token mayorIgualTK
%token distintoTK
%token punteroTK

 //PARTE 2.3: Definiciones (algunas innecearias) de prioridades

%nonassoc constTK //hago no asociativo y de baja prioridad a constTK
%right fconstTK //hago fcosntTK es mas prioritario que constTK y asociativo a derecha
%left puntoYComaTK //Hago muy prioritario y asociativo a izquierdas al ;

 //PARTE 2.3: Creamos el union necesario para valores de flex y traducciones de bison

%union{
	char* cadena;
	LiteralT literal;
	int entero;
}

 //PARTE 2.4: Asignacion de traducciones a las variables

//%type <entero> listaDeclConstantesV  //para contar las que se definen

%%

 //zona producciones

 //4.1 (axioma: es la primera produccion)
desc_algoritmoV: algoritmoTK identificadorTK composicionSecuencialTK cabecera_algV bloque_algV falgoritmoTK puntoTK {}
	;
cabecera_algV: decl_globalesV decl_a_fV decl_ent_salV comentarioTK {}
	;
bloque_algV: bloqueV comentarioTK {}
	;
decl_globalesV: declaracion_tipoV decl_globalesV {}
	| declaracion_cteV decl_globalesV {}
	| %empty {}
	;
decl_a_fV: accion_dV decl_a_fV {}
	| funcion_dV decl_a_fV {}
	| %empty {}
	;
bloqueV: declaracionesV instruccionesV {}
	;
declaracionesV: declaracion_tipoV declaracionesV {}
	| declaracion_cteV declaracionesV {}
	| declaracion_varV declaracionesV {}
	| %empty {}
	;

 //4.1.1
declaracion_tipoV: tipoTK lista_d_tipoV ftipoTK puntoYComaTK {}
	;
declaracion_cteV: constTK lista_d_cteV fconstTK puntoYComaTK {}
	;
declaracion_varV: varTK lista_d_varV fvarTK puntoYComaTK {}
	;

 //4.1.2
lista_d_tipoV: identificadorTK igualTK d_tipoV puntoYComaTK lista_d_tipoV {}
	| %empty {}
	;
tipo_baseV: enteroTK {}
	| realTK {}
	| booleanoTK {}
	| caracterTK {}
	| cadenaTK {}
	;
d_tipoV: tuplaTK lista_camposV ftuplaTK {}
	| tablaTK inicioArrayTK expresion_tV subrangoTK finArrayTK deTK d_tipoV {}
	| identificadorTK {}
	| expresion_tV subrangoTK expresion_tV {}
	| refTK d_tipoV {}
	| tipo_baseV {}
	;
expresion_tV: expresionV {}
	| literalTK {}
	;

 //4.1.3
lista_d_cteV: identificadorTK igualTK literalTK puntoYComaTK lista_d_cteV {}
	| %empty {}
	;
lista_d_varV: lista_idV tipoVariableTK d_tipoV puntoYComaTK lista_d_varV {}
	| %empty {}
	;
lista_idV: identificadorTK separadorTK lista_idV {}
	| identificadorTK {}
	;
lista_camposV: identificadorTK tipoVariableTK d_tipoV puntoYComaTK lista_camposV {}
	| %empty {}
	;
decl_ent_salV: decl_entV {}
	| decl_entV decl_salV {}
	| decl_salV {}
	;
decl_entV: entTK lista_d_varV {}
	;
decl_salV: salTK lista_d_varV {}
	;
 //4.1.4
 expresionV: exp_aV {}
	| exp_bV {}
	| funcion_llV {}
	;

exp_aV: exp_aV masTK exp_aV {}
	| exp_aV menosTK exp_aV {}
	| exp_aV porTK exp_aV {}
	| exp_aV divisionTK exp_aV {}
	| exp_aV modTK exp_aV {}
	| exp_aV divTK exp_aV {}
	| parentesisAbiertoTK exp_aV parentesisCerradoTK {}
	| operandoV {}
	| literalTK {} //comprobar el tipo de literal en {}
	| menosTK exp_aV {}
	| masTK exp_aV {}
	;
exp_bV: exp_bV yTK exp_bV {}
	| exp_bV oTK exp_bV {}
	| noTK exp_bV {}
	| operandoV {}
	| literalTK {} //comprobar el tipo de literal en {}
	| expresionV oprelV expresionV {}
	| parentesisAbiertoTK exp_bV parentesisCerradoTK {}
	;
oprelV: menorTK {}
	| mayorTK {}
	| igualTK {}
	| distintoTK {}
	| mayorIgualTK {}
	| menorIgualTK {}
	;
operandoV: identificadorTK {}
	| operandoV puntoTK operandoV {}
	| operandoV inicioArrayTK expresionV finArrayTK {}
	| operandoV refTK {}
	;

 //4.1.5
instruccionesV: instruccionV composicionSecuencialTK instruccionesV {}
	| instruccionV {}
	;
instruccionV: continuarTK {}
	| asignacionV {}
	| alternativaV {}
	| iteracionV {}
	| accion_llV {}
	;
asignacionV: operandoV asignacionTK expresionV {}
	;
alternativaV: siTK expresionV entoncesTK instruccionesV lista_opcionesV fsiTK {}
	;
lista_opcionesV: siNoSiTK expresionV entoncesTK instruccionesV lista_opcionesV {}
	| %empty {}
	;
iteracionV: it_cota_fijaV {}
	| it_cota_expV {}
	;
it_cota_expV: mientrasTK expresionV hacerTK instruccionesV fmientrasTK {}
	;
it_cota_fijaV: paraTK identificadorTK asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fparaTK {}
	;

 //4.1.6
accion_dV: accionTK a_cabeceraV bloqueV faccionTK {}
	;
funcion_dV: funcionTK f_cabeceraV bloqueV devTK expresionV ffuncionTK {}
	;
a_cabeceraV: identificadorTK parentesisAbiertoTK d_par_formV parentesisCerradoTK composicionSecuencialTK {}
	;
f_cabeceraV: identificadorTK parentesisAbiertoTK lista_d_varV parentesisCerradoTK devTK d_tipoV composicionSecuencialTK {}
	;
d_par_formV: d_p_formV composicionSecuencialTK d_par_formV {}
	| %empty {}
	;
d_p_formV: entTK lista_idV tipoVariableTK d_tipoV {}
	| salTK lista_idV tipoVariableTK d_tipoV {}
	| entradaSalidaTK lista_idV tipoVariableTK d_tipoV {}
	;
accion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK {}
	;
funcion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK {}
	;
l_llV: expresionV separadorTK l_llV {}
	| expresionV {}
	;

%%
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	tc = nuevaTablaDeConstantes();
	yyparse();
	imprimeTablaDeConstantes(tc);
}


void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}


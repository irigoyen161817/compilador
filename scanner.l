%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	#include "parser.tab.h"
%}

%option noyywrap
 
letraDR           [a-zA-Z]
cifraDR             [0-9]
identificadorBooleanoDR  b_({letraDR}|{cifraDR})+
identificadorDR     {letraDR}({letraDR}|{cifraDR})*

falsoDR           (?i:falso)
verdaderoDR       (?i:verdadero)


literalEnteroDR   {cifraDR}+([eE]{cifraDR}+)?
literalRealDR     {cifraDR}+(\.{cifraDR}+)?([eE][+-]?{cifraDR}+)?|{literalEnteroDR}[rR]

literalCaracterDR       \".\"
literalCadenaDR         '([^']|\/')*'


comentarioDR            \{([^}]|\/\})*\}


asignacionDR            ":="
composicionSecuencialDR  ";"
separadorDR             ","
subrangoDR              ".."
tipoVariableDR          ":"
entoncesDR              "->"
siNoSiDR                "[]"
igualDR                 "="
inicioArrayDR           "["
finArrayDR              "]"
puntoDR                 "."
parentesisAbiertoDR     "("
parentesisCerradoDR     ")"
masDR                   "+"
menosDR                 "-"
porDR                   "*"
divisionDR              "/"
menorDR                 "<"
mayorDR                 ">"
menorIgualDR            "<="
mayorIgualDR            ">="
distintoDR              "<>"

accionDR    (?i:accion)
algoritmoDR     (?i:algoritmo)
booleanoDR        (?i:booleano)
cadenaDR          (?i:cadena)
caracterDR        (?i:caracter)
constDR           (?i:const)
continuarDR       (?i:continuar)
deDR              (?i:de)
devDR             (?i:dev)
divDR             (?i:div)
entDR             (?i:ent)
enteroDR          (?i:entero)
entradaSalidaDR   (?i:e\/s)
faccionDR         (?i:faccion)
falgoritmoDR      (?i:falgoritmo)
fconstDR          (?i:fconst)
ffuncionDR        (?i:ffuncion)
fmientrasDR       (?i:fmientras)
fparaDR           (?i:fpara)
fsiDR             (?i:fsi)
ftipoDR           (?i:ftipo)
ftuplaDR          (?i:ftupla)
funcionDR         (?i:funcion)
fvarDR            (?i:fvar)
hacerDR           (?i:hacer)
hastaDR           (?i:hasta)
mientrasDR        (?i:mientras)
modDR             (?i:mod)
noDR              (?i:no)
oDR               (?i:o)
paraDR            (?i:para)
realDR            (?i:real)
refDR             (?i:ref)
salDR             (?i:sal)
siDR              (?i:si)
tablaDR           (?i:tabla)
tipoDR            (?i:tipo)
tuplaDR           (?i:tupla)
varDR             (?i:var)
yDR               (?i:y)


 // REGLAS
%%
{accionDR} {
    return accionTK;
}
{algoritmoDR} {
    return algoritmoTK;
}
{booleanoDR} {
    return booleanoTK;
}
{cadenaDR} {
    return cadenaTK;
}
{caracterDR} {
    return caracterTK;
}
{constDR} {
    return constTK;
}
{continuarDR} {
    return continuarTK;
}
{deDR} {
    return deTK;
}
{devDR} {
    return devTK;
}
{divDR} {
    return divTK;
}
{entDR} {
    return entTK;
}
{enteroDR} {
    return enteroTK;
}
{entradaSalidaDR} {
    return entradaSalidaTK;
}
{faccionDR} {
    return faccionTK;
}
{falgoritmoDR} {
    return falgoritmoTK;
}
{fconstDR} {
    return fconstTK;
}
{ffuncionDR} {
    return ffuncionTK;
}
{fmientrasDR} {
    return fmientrasTK;
}
{fparaDR} {
    return fparaTK;
}
{fsiDR} {
    return fsiTK;
}
{ftipoDR} {
    return ftipoTK;
}
{ftuplaDR} {
    return ftuplaTK;
}
{funcionDR} {
    return funcionTK;
}
{fvarDR} {
    return fvarTK;
}
{hacerDR} {
    return hacerTK;
}
{hastaDR} {
    return hastaTK;
}
{mientrasDR} {
    return mientrasTK;
}
{modDR} {
    return modTK;
}
{noDR} {
    return noTK;
}
{oDR} {
    return oTK;
}
{paraDR} {
    return paraTK;
}
{realDR} {
    return realTK;
}
{refDR} {
    return refTK;
}
{salDR} {
    return salTK;
}
{siDR} {
    return siTK;
}
{tablaDR} {
    return tablaTK;
}
{tipoDR} {
    return tipoTK;
}
{tuplaDR} {
    return tuplaTK;
}
{varDR} {
    return varTK;
}
{yDR} {
    return yTK;
}
{verdaderoDR} {
    yylval.booleano = VERDADERO;
    return literalBooleanoTK;
}
{falsoDR} {
    yylval.booleano = FALSO;
    return literalBooleanoTK;
}
{identificadorBooleanoDR} {
    yylval.cadena = strdup(yytext);
    return identificadorBooleanoTK;
}
{identificadorDR} {
    yylval.cadena = strdup(yytext);
    return identificadorTK;
}
{literalEnteroDR} {
    yylval.entero = (int) atof(yytext);
    return literalEnteroTK;
}
{literalRealDR} {
    yylval.real = atof(yytext);
    return literalRealTK;
}
{literalCaracterDR} {
    yylval.caracter = yytext[1];
    return literalCaracterTK;
}
{literalCadenaDR} {
    yylval.cadena = strdup(yytext);
    return literalCadenaTK;
}
{comentarioDR} {
    return comentarioTK;
}
{asignacionDR} {
    return asignacionTK;
}
{composicionSecuencialDR} {
    return composicionSecuencialTK;
}
{separadorDR} {
    return separadorTK;
}
{subrangoDR} {
    return subrangoTK;
}
{tipoVariableDR} {
    return tipoVariableTK;
}
{entoncesDR} {
    return entoncesTK;
}
{siNoSiDR} {
    return siNoSiTK;
}
{igualDR} {
    return igualTK;
}
{inicioArrayDR} {
    return inicioArrayTK;
}
{finArrayDR} {
    return finArrayTK;
}
{puntoDR} {
    return puntoTK;
}
{parentesisAbiertoDR} {
    return parentesisAbiertoTK;
}
{parentesisCerradoDR} {
    return parentesisCerradoTK;
}
{masDR} {
    return masTK;
}
{menosDR} {
    return menosTK;
}
{porDR} {
    return porTK;
}
{divisionDR} {
    return divisionTK;
}
{menorDR} {
    return menorTK;
}
{mayorDR} {
    return mayorTK;
}
{menorIgualDR} {
    return menorIgualTK;
}
{mayorIgualDR} {
    return mayorIgualTK;
}
{distintoDR} {
    return distintoTK;
}
[ \t\r\n]+ {
}


. {
    printf("ERROR: caracter no reconocido '%s'\n", yytext);
}

%%
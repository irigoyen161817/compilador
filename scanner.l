%{
	#include <stdio.h>
	#include <stdlib.h>
%}
 
letraDR           [a-zA-Z]
cifraDR             [0-9]
identificadorDR     {letraDR}({letraDR}|{cifraDR})*

falsoDR           (?i:falso)
verdaderoDR       (?i:verdadero)


literalEnteroDR   {cifraDR}+([eE]{cifraDR}+)?
literalRealDR     {cifraDR}+(\.{cifraDR}+)?([eE][+-]?{cifraDR}+)?|{literalEnteroDR}[rR]

literalCaracterDR       \".\"
literalCadenaDR         '([^']|\/')*'


comentarioDR            \{([^}]|\/\})*\}


asignacionDR              ":="
composicionSecuencialDR   ";"
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
punteroDR               "^"


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
    printf("(accionTK, )\n");
}
{algoritmoDR} {
    printf("(algoritmoTK, )\n");
}
{booleanoDR} {
    printf("(booleanoTK, )\n");
}
{cadenaDR} {
    printf("(cadenaTK, )\n");
}
{caracterDR} {
    printf("(caracterTK, )\n");
}
{constDR} {
    printf("(constTK, )\n");
}
{continuarDR} {
    printf("(continuarTK, )\n");
}
{deDR} {
    printf("(deTK, )\n");
}
{devDR} {
    printf("(devTK, )\n");
}
{divDR} {
    printf("(divTK, )\n");
}
{entDR} {
    printf("(entTK, )\n");
}
{enteroDR} {
    printf("(enteroTK, )\n");
}
{entradaSalidaDR} {
    printf("(entradaSalidaTK, )\n");
}
{faccionDR} {
    printf("(faccionTK, )\n");
}
{falgoritmoDR} {
    printf("(falgoritmoTK, )\n");
}
{fconstDR} {
    printf("(fconstTK, )\n");
}
{ffuncionDR} {
    printf("(ffuncionTK, )\n");
}
{fmientrasDR} {
    printf("(fmientrasTK, )\n");
}
{fparaDR} {
    printf("(fparaTK, )\n");
}
{fsiDR} {
    printf("(fsiTK, )\n");
}
{ftipoDR} {
    printf("(ftipoTK, )\n");
}
{ftuplaDR} {
    printf("(ftuplaTK, )\n");
}
{funcionDR} {
    printf("(funcionTK, )\n");
}
{fvarDR} {
    printf("(fvarTK, )\n");
}
{hacerDR} {
    printf("(hacerTK, )\n");
}
{hastaDR} {
    printf("(hastaTK, )\n");
}
{mientrasDR} {
    printf("(mientrasTK, )\n");
}
{modDR} {
    printf("(modTK, )\n");
}
{noDR} {
    printf("(noTK, )\n");
}
{oDR} {
    printf("(oTK, )\n");
}
{paraDR} {
    printf("(paraTK, )\n");
}
{realDR} {
    printf("(realTK, )\n");
}
{refDR} {
    printf("(refTK, )\n");
}
{salDR} {
    printf("(salTK, )\n");
}
{siDR} {
    printf("(siTK, )\n");
}
{tablaDR} {
    printf("(tablaTK, )\n");
}
{tipoDR} {
    printf("(tipoTK, )\n");
}
{tuplaDR} {
    printf("(tuplaTK, )\n");
}
{varDR} {
    printf("(varTK, )\n");
}
{yDR} {
    printf("(yTK, )\n");
}
{verdaderoDR} {
    printf("(literalBooleanoTK, verdadero)\n");
}
{falsoDR} {
    printf("(literalBooleanoTK, falso)\n");
}
{identificadorDR} {
    printf("(identificadorTK, %s)\n", yytext);
}
{literalEnteroDR} {
    printf("(literalEnteroTK, %d)\n", (int) atof(yytext));
}
{literalRealDR} {
    printf("(literalRealTK, %f)\n", atof(yytext));
}
{literalCaracterDR} {
    printf("(literalCaracterTK, %c)\n", yytext[1]);
}
{literalCadenaDR} {
    printf("(literalCadenaTK, %s)\n", yytext);
}
{comentarioDR} {
    printf("(comentarioTK, %s)\n", yytext);
}
{asignacionDR} {
    printf("(asignacionTK, )\n");
}
{composicionSecuencialDR} {
    printf("(composicionSecuencialTK, )\n");
}
{separadorDR} {
    printf("(separadorTK, )\n");
}
{subrangoDR} {
    printf("(subrangoTK, )\n");
}
{tipoVariableDR} {
    printf("(tipoVariableTK, )\n");
}
{entoncesDR} {
    printf("(entoncesTK, )\n");
}
{siNoSiDR} {
    printf("(siNoSiTK, )\n");
}
{igualDR} {
    printf("(igualTK, )\n");
}
{inicioArrayDR} {
    printf("(inicioArrayTK, )\n");
}
{finArrayDR} {
    printf("(finArrayTK, )\n");
}
{puntoDR} {
    printf("(puntoTK, )\n");
}
{parentesisAbiertoDR} {
    printf("(parentesisAbiertoTK, )\n");
}
{parentesisCerradoDR} {
    printf("(parentesisCerradoTK, )\n");
}
{masDR} {
    printf("(masTK, )\n");
}
{menosDR} {
    printf("(menosTK, )\n");
}
{porDR} {
    printf("(porTK, )\n");
}
{divisionDR} {
    printf("(divisionTK, )\n");
}
{menorDR} {
    printf("(menorTK, )\n");
}
{mayorDR} {
    printf("(mayorTK, )\n");
}
{menorIgualDR} {
    printf("(menorIgualTK, )\n");
}
{mayorIgualDR} {
    printf("(mayorIgualTK, )\n");
}
{distintoDR} {
    printf("(distintoTK, )\n");
}
{punteroDR} {
    printf("(punteroTK, )\n");
}
[ \t\r\n]+ {
}


. {
    printf("ERROR: caracter no reconocido '%s'\n", yytext);
}

%%
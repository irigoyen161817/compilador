#ifndef TABLA_DE_SIMBOLOS_H
#define TABLA_DE_SIMBOLOS_H

#define NUMERO_ELEMENTOS_TABLA 200

#include <stdbool.h>
#include "literal.h"
#include "nombresDeTipos.h"

typedef struct elementoTabla{
    char* nombre;
    NombreDeTipoT tipo;
} ElementoTabla;

typedef struct tablaDeSimbolos {
    ElementoTabla tabla[NUMERO_ELEMENTOS_TABLA];
    int indiceElementoLibre;
} TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);

#endif

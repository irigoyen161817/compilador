#ifndef TABLA_DE_CONSTANTES_H
#define TABLA_DE_CONSTANTES_H

#define NUMERO_ELEMENTOS_TABLA 200

#include <stdbool.h>
#include "literal.h"
#include "nombresDeTipos.h"

typedef struct elementoTabla{
    char* nombre;
    nombreDeTipoT tipo;
} ElementoTabla;

typedef struct tabladeConstantes {
    ElementoTabla tabla[NUMERO_ELEMENTOS_TABLA];
    int indiceElementoLibre;
} TablaDeConstantes; 
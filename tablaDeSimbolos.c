#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"


TablaDeSimbolos nuevaTablaDeSimbolos() {
    TablaDeSimbolos tabla;
    tabla.indiceElementoLibre = 0;
    return tabla;
}

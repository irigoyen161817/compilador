/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    constTK = 258,                 /* constTK  */
    literalTK = 259,               /* literalTK  */
    fconstTK = 260,                /* fconstTK  */
    igualTK = 261,                 /* igualTK  */
    puntoYComaTK = 262,            /* puntoYComaTK  */
    accionTK = 263,                /* accionTK  */
    algoritmoTK = 264,             /* algoritmoTK  */
    booleanoTK = 265,              /* booleanoTK  */
    cadenaTK = 266,                /* cadenaTK  */
    caracterTK = 267,              /* caracterTK  */
    continuarTK = 268,             /* continuarTK  */
    deTK = 269,                    /* deTK  */
    devTK = 270,                   /* devTK  */
    divTK = 271,                   /* divTK  */
    entTK = 272,                   /* entTK  */
    enteroTK = 273,                /* enteroTK  */
    entradaSalidaTK = 274,         /* entradaSalidaTK  */
    faccionTK = 275,               /* faccionTK  */
    falgoritmoTK = 276,            /* falgoritmoTK  */
    ffuncionTK = 277,              /* ffuncionTK  */
    fmientrasTK = 278,             /* fmientrasTK  */
    fparaTK = 279,                 /* fparaTK  */
    fsiTK = 280,                   /* fsiTK  */
    ftipoTK = 281,                 /* ftipoTK  */
    ftuplaTK = 282,                /* ftuplaTK  */
    funcionTK = 283,               /* funcionTK  */
    fvarTK = 284,                  /* fvarTK  */
    hacerTK = 285,                 /* hacerTK  */
    hastaTK = 286,                 /* hastaTK  */
    mientrasTK = 287,              /* mientrasTK  */
    modTK = 288,                   /* modTK  */
    noTK = 289,                    /* noTK  */
    oTK = 290,                     /* oTK  */
    paraTK = 291,                  /* paraTK  */
    realTK = 292,                  /* realTK  */
    refTK = 293,                   /* refTK  */
    salTK = 294,                   /* salTK  */
    siTK = 295,                    /* siTK  */
    tablaTK = 296,                 /* tablaTK  */
    tipoTK = 297,                  /* tipoTK  */
    tuplaTK = 298,                 /* tuplaTK  */
    varTK = 299,                   /* varTK  */
    yTK = 300,                     /* yTK  */
    identificadorTK = 301,         /* identificadorTK  */
    comentarioTK = 302,            /* comentarioTK  */
    asignacionTK = 303,            /* asignacionTK  */
    composicionSecuencialTK = 304, /* composicionSecuencialTK  */
    separadorTK = 305,             /* separadorTK  */
    subrangoTK = 306,              /* subrangoTK  */
    tipoVariableTK = 307,          /* tipoVariableTK  */
    entoncesTK = 308,              /* entoncesTK  */
    siNoSiTK = 309,                /* siNoSiTK  */
    inicioArrayTK = 310,           /* inicioArrayTK  */
    finArrayTK = 311,              /* finArrayTK  */
    puntoTK = 312,                 /* puntoTK  */
    parentesisAbiertoTK = 313,     /* parentesisAbiertoTK  */
    parentesisCerradoTK = 314,     /* parentesisCerradoTK  */
    masTK = 315,                   /* masTK  */
    menosTK = 316,                 /* menosTK  */
    porTK = 317,                   /* porTK  */
    divisionTK = 318,              /* divisionTK  */
    menorTK = 319,                 /* menorTK  */
    mayorTK = 320,                 /* mayorTK  */
    menorIgualTK = 321,            /* menorIgualTK  */
    mayorIgualTK = 322,            /* mayorIgualTK  */
    distintoTK = 323               /* distintoTK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 103 "parser.y"

	char* cadena;
	LiteralT literal;
	int entero;

#line 138 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

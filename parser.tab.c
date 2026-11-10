/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 3 "parser.y"

	#include <stdio.h>
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "tablaDeConstantes.h"
	int yylex(); // Usamos la funcion que se crea gracias a flex
	void yyerror(char *); // Prototipo de una funcion necesaria
	extern FILE* yyin; // Usamos la varible de Flex en la que viene la entrada
	TablaDeConstantes tc; //Es donde guardaremos las constantes
	#define YYDEBUG 1 //Permite activar el modo Debugg de Bison

#line 83 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_constTK = 3,                    /* constTK  */
  YYSYMBOL_literalTK = 4,                  /* literalTK  */
  YYSYMBOL_fconstTK = 5,                   /* fconstTK  */
  YYSYMBOL_igualTK = 6,                    /* igualTK  */
  YYSYMBOL_composicionSecuencialTK = 7,    /* composicionSecuencialTK  */
  YYSYMBOL_accionTK = 8,                   /* accionTK  */
  YYSYMBOL_algoritmoTK = 9,                /* algoritmoTK  */
  YYSYMBOL_booleanoTK = 10,                /* booleanoTK  */
  YYSYMBOL_cadenaTK = 11,                  /* cadenaTK  */
  YYSYMBOL_caracterTK = 12,                /* caracterTK  */
  YYSYMBOL_continuarTK = 13,               /* continuarTK  */
  YYSYMBOL_deTK = 14,                      /* deTK  */
  YYSYMBOL_devTK = 15,                     /* devTK  */
  YYSYMBOL_divTK = 16,                     /* divTK  */
  YYSYMBOL_entTK = 17,                     /* entTK  */
  YYSYMBOL_enteroTK = 18,                  /* enteroTK  */
  YYSYMBOL_entradaSalidaTK = 19,           /* entradaSalidaTK  */
  YYSYMBOL_faccionTK = 20,                 /* faccionTK  */
  YYSYMBOL_falgoritmoTK = 21,              /* falgoritmoTK  */
  YYSYMBOL_ffuncionTK = 22,                /* ffuncionTK  */
  YYSYMBOL_fmientrasTK = 23,               /* fmientrasTK  */
  YYSYMBOL_fparaTK = 24,                   /* fparaTK  */
  YYSYMBOL_fsiTK = 25,                     /* fsiTK  */
  YYSYMBOL_ftipoTK = 26,                   /* ftipoTK  */
  YYSYMBOL_ftuplaTK = 27,                  /* ftuplaTK  */
  YYSYMBOL_funcionTK = 28,                 /* funcionTK  */
  YYSYMBOL_fvarTK = 29,                    /* fvarTK  */
  YYSYMBOL_hacerTK = 30,                   /* hacerTK  */
  YYSYMBOL_hastaTK = 31,                   /* hastaTK  */
  YYSYMBOL_mientrasTK = 32,                /* mientrasTK  */
  YYSYMBOL_modTK = 33,                     /* modTK  */
  YYSYMBOL_noTK = 34,                      /* noTK  */
  YYSYMBOL_oTK = 35,                       /* oTK  */
  YYSYMBOL_paraTK = 36,                    /* paraTK  */
  YYSYMBOL_realTK = 37,                    /* realTK  */
  YYSYMBOL_refTK = 38,                     /* refTK  */
  YYSYMBOL_salTK = 39,                     /* salTK  */
  YYSYMBOL_siTK = 40,                      /* siTK  */
  YYSYMBOL_tablaTK = 41,                   /* tablaTK  */
  YYSYMBOL_tipoTK = 42,                    /* tipoTK  */
  YYSYMBOL_tuplaTK = 43,                   /* tuplaTK  */
  YYSYMBOL_varTK = 44,                     /* varTK  */
  YYSYMBOL_yTK = 45,                       /* yTK  */
  YYSYMBOL_identificadorTK = 46,           /* identificadorTK  */
  YYSYMBOL_comentarioTK = 47,              /* comentarioTK  */
  YYSYMBOL_asignacionTK = 48,              /* asignacionTK  */
  YYSYMBOL_separadorTK = 49,               /* separadorTK  */
  YYSYMBOL_subrangoTK = 50,                /* subrangoTK  */
  YYSYMBOL_tipoVariableTK = 51,            /* tipoVariableTK  */
  YYSYMBOL_entoncesTK = 52,                /* entoncesTK  */
  YYSYMBOL_siNoSiTK = 53,                  /* siNoSiTK  */
  YYSYMBOL_inicioArrayTK = 54,             /* inicioArrayTK  */
  YYSYMBOL_finArrayTK = 55,                /* finArrayTK  */
  YYSYMBOL_puntoTK = 56,                   /* puntoTK  */
  YYSYMBOL_parentesisAbiertoTK = 57,       /* parentesisAbiertoTK  */
  YYSYMBOL_parentesisCerradoTK = 58,       /* parentesisCerradoTK  */
  YYSYMBOL_masTK = 59,                     /* masTK  */
  YYSYMBOL_menosTK = 60,                   /* menosTK  */
  YYSYMBOL_porTK = 61,                     /* porTK  */
  YYSYMBOL_divisionTK = 62,                /* divisionTK  */
  YYSYMBOL_menorTK = 63,                   /* menorTK  */
  YYSYMBOL_mayorTK = 64,                   /* mayorTK  */
  YYSYMBOL_menorIgualTK = 65,              /* menorIgualTK  */
  YYSYMBOL_mayorIgualTK = 66,              /* mayorIgualTK  */
  YYSYMBOL_distintoTK = 67,                /* distintoTK  */
  YYSYMBOL_literalEnteroTK = 68,           /* literalEnteroTK  */
  YYSYMBOL_literalRealTK = 69,             /* literalRealTK  */
  YYSYMBOL_literalCaracterTK = 70,         /* literalCaracterTK  */
  YYSYMBOL_literalCadenaTK = 71,           /* literalCadenaTK  */
  YYSYMBOL_literalBooleanoTK = 72,         /* literalBooleanoTK  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_desc_algoritmoV = 74,           /* desc_algoritmoV  */
  YYSYMBOL_cabecera_algV = 75,             /* cabecera_algV  */
  YYSYMBOL_bloque_algV = 76,               /* bloque_algV  */
  YYSYMBOL_decl_globalesV = 77,            /* decl_globalesV  */
  YYSYMBOL_decl_a_fV = 78,                 /* decl_a_fV  */
  YYSYMBOL_bloqueV = 79,                   /* bloqueV  */
  YYSYMBOL_declaracionesV = 80,            /* declaracionesV  */
  YYSYMBOL_declaracion_tipoV = 81,         /* declaracion_tipoV  */
  YYSYMBOL_declaracion_cteV = 82,          /* declaracion_cteV  */
  YYSYMBOL_declaracion_varV = 83,          /* declaracion_varV  */
  YYSYMBOL_lista_d_tipoV = 84,             /* lista_d_tipoV  */
  YYSYMBOL_tipo_baseV = 85,                /* tipo_baseV  */
  YYSYMBOL_d_tipoV = 86,                   /* d_tipoV  */
  YYSYMBOL_expresion_tV = 87,              /* expresion_tV  */
  YYSYMBOL_literalV = 88,                  /* literalV  */
  YYSYMBOL_lista_d_cteV = 89,              /* lista_d_cteV  */
  YYSYMBOL_lista_d_varV = 90,              /* lista_d_varV  */
  YYSYMBOL_lista_idV = 91,                 /* lista_idV  */
  YYSYMBOL_lista_camposV = 92,             /* lista_camposV  */
  YYSYMBOL_decl_ent_salV = 93,             /* decl_ent_salV  */
  YYSYMBOL_decl_entV = 94,                 /* decl_entV  */
  YYSYMBOL_decl_salV = 95,                 /* decl_salV  */
  YYSYMBOL_expresionV = 96,                /* expresionV  */
  YYSYMBOL_exp_aV = 97,                    /* exp_aV  */
  YYSYMBOL_exp_bV = 98,                    /* exp_bV  */
  YYSYMBOL_oprelV = 99,                    /* oprelV  */
  YYSYMBOL_operandoV = 100,                /* operandoV  */
  YYSYMBOL_instruccionesV = 101,           /* instruccionesV  */
  YYSYMBOL_instruccionV = 102,             /* instruccionV  */
  YYSYMBOL_asignacionV = 103,              /* asignacionV  */
  YYSYMBOL_alternativaV = 104,             /* alternativaV  */
  YYSYMBOL_lista_opcionesV = 105,          /* lista_opcionesV  */
  YYSYMBOL_iteracionV = 106,               /* iteracionV  */
  YYSYMBOL_it_cota_expV = 107,             /* it_cota_expV  */
  YYSYMBOL_it_cota_fijaV = 108,            /* it_cota_fijaV  */
  YYSYMBOL_accion_dV = 109,                /* accion_dV  */
  YYSYMBOL_funcion_dV = 110,               /* funcion_dV  */
  YYSYMBOL_a_cabeceraV = 111,              /* a_cabeceraV  */
  YYSYMBOL_f_cabeceraV = 112,              /* f_cabeceraV  */
  YYSYMBOL_d_par_formV = 113,              /* d_par_formV  */
  YYSYMBOL_d_p_formV = 114,                /* d_p_formV  */
  YYSYMBOL_accion_llV = 115,               /* accion_llV  */
  YYSYMBOL_funcion_llV = 116,              /* funcion_llV  */
  YYSYMBOL_l_llV = 117                     /* l_llV  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  111
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   124,   124,   126,   128,   130,   131,   132,   134,   135,
     136,   138,   140,   141,   142,   143,   147,   149,   151,   155,
     156,   158,   159,   160,   161,   162,   164,   165,   166,   167,
     168,   169,   171,   172,   175,   176,   177,   178,   179,   182,
     183,   185,   186,   188,   189,   191,   192,   194,   195,   196,
     198,   200,   203,   204,   205,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   221,   222,   223,
     224,   225,   226,   227,   229,   230,   231,   232,   233,   234,
     236,   237,   238,   239,   243,   244,   246,   247,   248,   249,
     250,   252,   254,   256,   257,   259,   260,   262,   264,   268,
     270,   272,   274,   276,   277,   279,   280,   281,   283,   285,
     287,   288
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "constTK", "literalTK",
  "fconstTK", "igualTK", "composicionSecuencialTK", "accionTK",
  "algoritmoTK", "booleanoTK", "cadenaTK", "caracterTK", "continuarTK",
  "deTK", "devTK", "divTK", "entTK", "enteroTK", "entradaSalidaTK",
  "faccionTK", "falgoritmoTK", "ffuncionTK", "fmientrasTK", "fparaTK",
  "fsiTK", "ftipoTK", "ftuplaTK", "funcionTK", "fvarTK", "hacerTK",
  "hastaTK", "mientrasTK", "modTK", "noTK", "oTK", "paraTK", "realTK",
  "refTK", "salTK", "siTK", "tablaTK", "tipoTK", "tuplaTK", "varTK", "yTK",
  "identificadorTK", "comentarioTK", "asignacionTK", "separadorTK",
  "subrangoTK", "tipoVariableTK", "entoncesTK", "siNoSiTK",
  "inicioArrayTK", "finArrayTK", "puntoTK", "parentesisAbiertoTK",
  "parentesisCerradoTK", "masTK", "menosTK", "porTK", "divisionTK",
  "menorTK", "mayorTK", "menorIgualTK", "mayorIgualTK", "distintoTK",
  "literalEnteroTK", "literalRealTK", "literalCaracterTK",
  "literalCadenaTK", "literalBooleanoTK", "$accept", "desc_algoritmoV",
  "cabecera_algV", "bloque_algV", "decl_globalesV", "decl_a_fV", "bloqueV",
  "declaracionesV", "declaracion_tipoV", "declaracion_cteV",
  "declaracion_varV", "lista_d_tipoV", "tipo_baseV", "d_tipoV",
  "expresion_tV", "literalV", "lista_d_cteV", "lista_d_varV", "lista_idV",
  "lista_camposV", "decl_ent_salV", "decl_entV", "decl_salV", "expresionV",
  "exp_aV", "exp_bV", "oprelV", "operandoV", "instruccionesV",
  "instruccionV", "asignacionV", "alternativaV", "lista_opcionesV",
  "iteracionV", "it_cota_expV", "it_cota_fijaV", "accion_dV", "funcion_dV",
  "a_cabeceraV", "f_cabeceraV", "d_par_formV", "d_p_formV", "accion_llV",
  "funcion_llV", "l_llV", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-123)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-54)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,   -23,    33,    34,  -123,     8,    16,    20,     9,    30,
       8,     8,    43,    64,    73,    56,    45,    91,    70,   248,
       9,     9,     9,    80,    99,     1,    30,    30,  -123,  -123,
     203,   128,    18,   162,   135,   160,   144,   150,  -123,  -123,
     -25,   171,   -25,   166,   214,  -123,   219,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,   167,     9,   172,     9,
      45,    45,   184,   193,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,   228,  -123,  -123,  -123,  -123,  -123,  -123,   -25,
    -123,    18,   185,   192,     3,   -25,   168,   168,  -123,  -123,
    -123,  -123,   246,   204,   145,   217,   -20,   213,  -123,  -123,
      45,   253,    18,  -123,   206,   107,   216,   133,   -25,  -123,
     -25,   -25,   220,   248,     0,   245,    45,   266,  -123,  -123,
    -123,  -123,    16,   145,   114,  -123,    50,   231,   256,   -25,
     197,   -21,  -123,   168,   217,   213,   217,    20,    50,  -123,
    -123,  -123,  -123,  -123,  -123,   -25,   168,   168,   168,   168,
     168,   168,   -25,   -25,  -123,  -123,   278,   248,   -25,   248,
     138,   229,   145,   127,   213,  -123,    45,    45,    45,   232,
     279,  -123,   233,   -25,  -123,   239,    18,  -123,   234,  -123,
    -123,   197,  -123,  -123,   145,   217,   217,   217,   217,   217,
     217,   114,   114,    45,   270,   155,   242,   -25,  -123,  -123,
     247,   249,   250,   289,     0,   282,    89,    50,   292,  -123,
    -123,  -123,   -25,   -25,   277,  -123,    18,    18,    18,  -123,
    -123,    18,  -123,   251,   192,   177,   182,  -123,  -123,  -123,
    -123,   296,   290,  -123,   248,   248,  -123,    18,   281,   242,
    -123,  -123,  -123
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    40,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    42,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    44,     0,     0,     0,     4,    86,
       0,     0,     0,    80,     0,    11,    85,    87,    88,    89,
      96,    95,    90,    12,    13,    14,     0,    15,     0,    15,
      42,    42,     0,    47,    49,     8,     9,    34,    35,    36,
      37,    38,     0,    17,    33,    23,    25,    24,    21,     0,
      22,     0,     0,    46,    80,     0,     0,     0,    63,    64,
      71,    31,     0,     0,    32,    52,    53,    62,    54,    16,
       0,     0,     0,     2,    80,     0,     0,     0,     0,    83,
       0,     0,     0,     0,   104,     0,    42,     0,    50,    51,
       3,    48,    40,     0,    69,    30,     0,     0,     0,     0,
      52,    53,    80,     0,    66,    62,    65,    20,     0,    76,
      74,    75,    79,    78,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    18,     0,     0,     0,     0,
     111,     0,    91,     0,    81,    84,     0,     0,     0,     0,
       0,    99,     0,     0,    39,     0,     0,    26,     0,    61,
      73,     0,    19,    29,    72,    60,    59,    55,    56,    57,
      58,    68,    67,    42,     0,     0,    94,     0,   108,    82,
       0,     0,     0,     0,   104,     0,     0,     0,     0,   109,
      41,    97,     0,     0,     0,   110,     0,     0,     0,   101,
     103,     0,   100,     0,    46,     0,     0,    92,   105,   107,
     106,     0,     0,    45,     0,     0,   102,     0,     0,    94,
      27,    98,    93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,  -123,  -123,  -123,    35,   131,     6,   103,    78,    95,
    -123,   170,  -123,   -75,  -122,  -123,   186,   -59,   -69,    85,
    -123,  -123,   252,   -37,    17,   -72,  -123,   -19,   -87,  -123,
    -123,  -123,    71,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
     108,  -123,  -123,  -123,  -121
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    91,    92,    93,    72,    13,    35,    36,   128,
      62,    63,    64,    94,    95,    96,   145,    97,    45,    46,
      47,    48,   214,    49,    50,    51,    26,    27,    57,    59,
     169,   170,    52,    98,   161
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   118,   119,   105,   175,   107,   125,   124,   178,    79,
     -28,     6,     6,   131,   152,   152,   183,   166,    60,   167,
       1,   104,    74,     3,   153,   153,   165,   156,    75,    76,
      77,   154,    85,     4,    86,    87,    78,   180,    23,   168,
      61,     5,   123,    88,    89,    28,    29,    90,   123,    30,
       7,     7,    79,    16,    74,    80,    81,   172,    24,    82,
     129,    83,    12,   115,    84,   117,    14,   135,   135,    31,
     194,   160,   196,   162,   163,    85,   215,    86,    87,    32,
     191,   192,    33,    10,    79,   223,    88,    89,    10,    10,
      90,    34,   160,   164,    44,   139,   104,   200,   201,   202,
      11,   208,   130,   134,   136,    11,    11,    85,   184,    86,
      87,   222,    37,   139,   135,   123,   123,    38,    88,    89,
     -53,   195,    90,    53,    54,    55,    56,   135,   135,   135,
     135,   135,   135,   139,   210,    73,   206,   157,    44,   139,
      44,   228,   229,   230,   139,    58,   231,   238,   239,   152,
     181,   139,   140,   141,   142,   143,   144,    65,    66,   153,
     160,   139,   240,   185,   186,   187,   188,   189,   190,    99,
     140,   141,   142,   143,   144,   225,   226,   -53,   -53,   -53,
     -53,   -53,   199,   139,   100,   159,   212,   197,   139,   101,
     140,   141,   142,   143,   144,   102,   140,   141,   142,   143,
     144,   140,   141,   142,   143,   144,   103,   234,   140,   141,
     142,   143,   144,   146,   132,    44,    44,   106,   140,   141,
     142,   143,   144,   108,   114,   133,   113,    86,    87,   116,
     147,   120,    61,   146,   235,   122,    88,    89,   127,   126,
     140,   141,   142,   143,   144,   140,   141,   142,   143,   144,
     147,   109,   109,   137,   138,   179,   148,   149,   150,   151,
     155,    39,   110,   129,   158,   171,   132,   111,   111,   112,
     112,    67,    68,    69,    70,    71,   148,   149,   150,   151,
      40,   173,   176,   177,    41,   193,   204,   198,    42,   207,
     203,   205,   209,   211,    43,   213,   219,   221,   216,   224,
     217,   218,   227,   236,   237,   241,   232,   182,   174,   233,
     242,     0,   220,     0,     0,   121
};

static const yytype_int16 yycheck[] =
{
      19,    60,    61,    40,   126,    42,    81,    79,   129,    34,
       7,     3,     3,    85,    35,    35,   138,    17,    17,    19,
       9,    46,     4,    46,    45,    45,   113,   102,    10,    11,
      12,   100,    57,     0,    59,    60,    18,    58,     8,    39,
      39,     7,    79,    68,    69,    10,    11,    72,    85,     6,
      42,    42,    34,    44,     4,    37,    38,   116,    28,    41,
      57,    43,    46,    57,    46,    59,    46,    86,    87,     5,
     157,   108,   159,   110,   111,    57,   197,    59,    60,     6,
     152,   153,    26,     5,    34,   207,    68,    69,    10,    11,
      72,    46,   129,   112,   113,     6,    46,   166,   167,   168,
       5,   176,    85,    86,    87,    10,    11,    57,   145,    59,
      60,    22,    21,     6,   133,   152,   153,    47,    68,    69,
       6,   158,    72,    20,    21,    22,    46,   146,   147,   148,
     149,   150,   151,     6,   193,     7,   173,    30,   157,     6,
     159,   216,   217,   218,     6,    46,   221,   234,   235,    35,
     133,     6,    63,    64,    65,    66,    67,    26,    27,    45,
     197,     6,   237,   146,   147,   148,   149,   150,   151,     7,
      63,    64,    65,    66,    67,   212,   213,    63,    64,    65,
      66,    67,    55,     6,    49,    52,    31,    49,     6,    29,
      63,    64,    65,    66,    67,    51,    63,    64,    65,    66,
      67,    63,    64,    65,    66,    67,    56,    30,    63,    64,
      65,    66,    67,    16,    46,   234,   235,    46,    63,    64,
      65,    66,    67,    57,    57,    57,     7,    59,    60,    57,
      33,    47,    39,    16,    52,     7,    68,    69,    46,    54,
      63,    64,    65,    66,    67,    63,    64,    65,    66,    67,
      33,    38,    38,     7,    50,    58,    59,    60,    61,    62,
       7,    13,    48,    57,    48,    20,    46,    54,    54,    56,
      56,    68,    69,    70,    71,    72,    59,    60,    61,    62,
      32,    15,    51,    27,    36,     7,     7,    58,    40,    50,
      58,    58,    58,    23,    46,    53,     7,    15,    51,     7,
      51,    51,    25,     7,    14,    24,    55,   137,   122,   224,
     239,    -1,   204,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    74,    46,     0,     7,     3,    42,    75,    77,
      81,    82,    46,    89,    46,    84,    44,    76,    79,    80,
      81,    82,    83,     8,    28,    78,   109,   110,    77,    77,
       6,     5,     6,    26,    46,    90,    91,    21,    47,    13,
      32,    36,    40,    46,   100,   101,   102,   103,   104,   106,
     107,   108,   115,    80,    80,    80,    46,   111,    46,   112,
      17,    39,    93,    94,    95,    78,    78,    68,    69,    70,
      71,    72,    88,     7,     4,    10,    11,    12,    18,    34,
      37,    38,    41,    43,    46,    57,    59,    60,    68,    69,
      72,    85,    86,    87,    96,    97,    98,   100,   116,     7,
      49,    29,    51,    56,    46,    96,    46,    96,    57,    38,
      48,    54,    56,     7,    57,    79,    57,    79,    90,    90,
      47,    95,     7,    96,    98,    86,    54,    46,    92,    57,
      97,    98,    46,    57,    97,   100,    97,     7,    50,     6,
      63,    64,    65,    66,    67,    99,    16,    33,    59,    60,
      61,    62,    35,    45,    91,     7,    86,    30,    48,    52,
      96,   117,    96,    96,   100,   101,    17,    19,    39,   113,
     114,    20,    90,    15,    89,    87,    51,    27,   117,    58,
      58,    97,    84,    87,    96,    97,    97,    97,    97,    97,
      97,    98,    98,     7,   101,    96,   101,    49,    58,    55,
      91,    91,    91,    58,     7,    58,    96,    50,    86,    58,
      90,    23,    31,    53,   105,   117,    51,    51,    51,     7,
     113,    15,    22,    87,     7,    96,    96,    25,    86,    86,
      86,    86,    55,    92,    30,    52,     7,    14,   101,   101,
      86,    24,   105
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    75,    76,    77,    77,    77,    78,    78,
      78,    79,    80,    80,    80,    80,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      94,    95,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    99,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   101,   101,   102,   102,   102,   102,
     102,   103,   104,   105,   105,   106,   106,   107,   108,   109,
     110,   111,   112,   113,   113,   114,   114,   114,   115,   116,
     117,   117
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     3,     8,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     5,     0,     3,     1,     5,     0,     1,     2,     1,
       2,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     2,     2,     3,     3,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     6,     5,     0,     1,     1,     5,     9,     4,
       6,     5,     7,     3,     0,     4,     4,     4,     4,     4,
       3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* desc_algoritmoV: algoritmoTK identificadorTK composicionSecuencialTK cabecera_algV bloque_algV falgoritmoTK puntoTK  */
#line 124 "parser.y"
                                                                                                                    {}
#line 1378 "parser.tab.c"
    break;

  case 3: /* cabecera_algV: decl_globalesV decl_a_fV decl_ent_salV comentarioTK  */
#line 126 "parser.y"
                                                                   {}
#line 1384 "parser.tab.c"
    break;

  case 4: /* bloque_algV: bloqueV comentarioTK  */
#line 128 "parser.y"
                                  {}
#line 1390 "parser.tab.c"
    break;

  case 5: /* decl_globalesV: declaracion_tipoV decl_globalesV  */
#line 130 "parser.y"
                                                 {}
#line 1396 "parser.tab.c"
    break;

  case 6: /* decl_globalesV: declaracion_cteV decl_globalesV  */
#line 131 "parser.y"
                                          {}
#line 1402 "parser.tab.c"
    break;

  case 7: /* decl_globalesV: %empty  */
#line 132 "parser.y"
                      {}
#line 1408 "parser.tab.c"
    break;

  case 8: /* decl_a_fV: accion_dV decl_a_fV  */
#line 134 "parser.y"
                               {}
#line 1414 "parser.tab.c"
    break;

  case 9: /* decl_a_fV: funcion_dV decl_a_fV  */
#line 135 "parser.y"
                               {}
#line 1420 "parser.tab.c"
    break;

  case 10: /* decl_a_fV: %empty  */
#line 136 "parser.y"
                      {}
#line 1426 "parser.tab.c"
    break;

  case 11: /* bloqueV: declaracionesV instruccionesV  */
#line 138 "parser.y"
                                       {}
#line 1432 "parser.tab.c"
    break;

  case 12: /* declaracionesV: declaracion_tipoV declaracionesV  */
#line 140 "parser.y"
                                                 {}
#line 1438 "parser.tab.c"
    break;

  case 13: /* declaracionesV: declaracion_cteV declaracionesV  */
#line 141 "parser.y"
                                          {}
#line 1444 "parser.tab.c"
    break;

  case 14: /* declaracionesV: declaracion_varV declaracionesV  */
#line 142 "parser.y"
                                          {}
#line 1450 "parser.tab.c"
    break;

  case 15: /* declaracionesV: %empty  */
#line 143 "parser.y"
                      {}
#line 1456 "parser.tab.c"
    break;

  case 16: /* declaracion_tipoV: tipoTK lista_d_tipoV ftipoTK composicionSecuencialTK  */
#line 147 "parser.y"
                                                                        {}
#line 1462 "parser.tab.c"
    break;

  case 17: /* declaracion_cteV: constTK lista_d_cteV fconstTK composicionSecuencialTK  */
#line 149 "parser.y"
                                                                        {}
#line 1468 "parser.tab.c"
    break;

  case 18: /* declaracion_varV: varTK lista_d_varV fvarTK composicionSecuencialTK  */
#line 151 "parser.y"
                                                                    {}
#line 1474 "parser.tab.c"
    break;

  case 19: /* lista_d_tipoV: identificadorTK igualTK d_tipoV composicionSecuencialTK lista_d_tipoV  */
#line 155 "parser.y"
                                                                                     {}
#line 1480 "parser.tab.c"
    break;

  case 20: /* lista_d_tipoV: %empty  */
#line 156 "parser.y"
                      {}
#line 1486 "parser.tab.c"
    break;

  case 21: /* tipo_baseV: enteroTK  */
#line 158 "parser.y"
                     {}
#line 1492 "parser.tab.c"
    break;

  case 22: /* tipo_baseV: realTK  */
#line 159 "parser.y"
                 {}
#line 1498 "parser.tab.c"
    break;

  case 23: /* tipo_baseV: booleanoTK  */
#line 160 "parser.y"
                     {}
#line 1504 "parser.tab.c"
    break;

  case 24: /* tipo_baseV: caracterTK  */
#line 161 "parser.y"
                     {}
#line 1510 "parser.tab.c"
    break;

  case 25: /* tipo_baseV: cadenaTK  */
#line 162 "parser.y"
                   {}
#line 1516 "parser.tab.c"
    break;

  case 26: /* d_tipoV: tuplaTK lista_camposV ftuplaTK  */
#line 164 "parser.y"
                                        {}
#line 1522 "parser.tab.c"
    break;

  case 27: /* d_tipoV: tablaTK inicioArrayTK expresion_tV subrangoTK expresion_tV finArrayTK deTK d_tipoV  */
#line 165 "parser.y"
                                                                                             {}
#line 1528 "parser.tab.c"
    break;

  case 28: /* d_tipoV: identificadorTK  */
#line 166 "parser.y"
                          {}
#line 1534 "parser.tab.c"
    break;

  case 29: /* d_tipoV: expresion_tV subrangoTK expresion_tV  */
#line 167 "parser.y"
                                               {}
#line 1540 "parser.tab.c"
    break;

  case 30: /* d_tipoV: refTK d_tipoV  */
#line 168 "parser.y"
                        {}
#line 1546 "parser.tab.c"
    break;

  case 31: /* d_tipoV: tipo_baseV  */
#line 169 "parser.y"
                     {}
#line 1552 "parser.tab.c"
    break;

  case 32: /* expresion_tV: expresionV  */
#line 171 "parser.y"
                         {}
#line 1558 "parser.tab.c"
    break;

  case 33: /* expresion_tV: literalTK  */
#line 172 "parser.y"
                    {}
#line 1564 "parser.tab.c"
    break;

  case 34: /* literalV: literalEnteroTK  */
#line 175 "parser.y"
                            {}
#line 1570 "parser.tab.c"
    break;

  case 35: /* literalV: literalRealTK  */
#line 176 "parser.y"
                            {}
#line 1576 "parser.tab.c"
    break;

  case 36: /* literalV: literalCaracterTK  */
#line 177 "parser.y"
                            {}
#line 1582 "parser.tab.c"
    break;

  case 37: /* literalV: literalCadenaTK  */
#line 178 "parser.y"
                            {}
#line 1588 "parser.tab.c"
    break;

  case 38: /* literalV: literalBooleanoTK  */
#line 179 "parser.y"
                            {}
#line 1594 "parser.tab.c"
    break;

  case 39: /* lista_d_cteV: identificadorTK igualTK literalV composicionSecuencialTK lista_d_cteV  */
#line 182 "parser.y"
                                                                                    {}
#line 1600 "parser.tab.c"
    break;

  case 40: /* lista_d_cteV: %empty  */
#line 183 "parser.y"
                      {}
#line 1606 "parser.tab.c"
    break;

  case 41: /* lista_d_varV: lista_idV tipoVariableTK d_tipoV composicionSecuencialTK lista_d_varV  */
#line 185 "parser.y"
                                                                                    {}
#line 1612 "parser.tab.c"
    break;

  case 42: /* lista_d_varV: %empty  */
#line 186 "parser.y"
                      {}
#line 1618 "parser.tab.c"
    break;

  case 43: /* lista_idV: identificadorTK separadorTK lista_idV  */
#line 188 "parser.y"
                                                 {}
#line 1624 "parser.tab.c"
    break;

  case 44: /* lista_idV: identificadorTK  */
#line 189 "parser.y"
                          {}
#line 1630 "parser.tab.c"
    break;

  case 45: /* lista_camposV: identificadorTK tipoVariableTK d_tipoV composicionSecuencialTK lista_camposV  */
#line 191 "parser.y"
                                                                                            {}
#line 1636 "parser.tab.c"
    break;

  case 46: /* lista_camposV: %empty  */
#line 192 "parser.y"
                      {}
#line 1642 "parser.tab.c"
    break;

  case 47: /* decl_ent_salV: decl_entV  */
#line 194 "parser.y"
                         {}
#line 1648 "parser.tab.c"
    break;

  case 48: /* decl_ent_salV: decl_entV decl_salV  */
#line 195 "parser.y"
                              {}
#line 1654 "parser.tab.c"
    break;

  case 49: /* decl_ent_salV: decl_salV  */
#line 196 "parser.y"
                    {}
#line 1660 "parser.tab.c"
    break;

  case 50: /* decl_entV: entTK lista_d_varV  */
#line 198 "parser.y"
                              {}
#line 1666 "parser.tab.c"
    break;

  case 51: /* decl_salV: salTK lista_d_varV  */
#line 200 "parser.y"
                              {}
#line 1672 "parser.tab.c"
    break;

  case 52: /* expresionV: exp_aV  */
#line 203 "parser.y"
                    {}
#line 1678 "parser.tab.c"
    break;

  case 53: /* expresionV: exp_bV  */
#line 204 "parser.y"
                 {}
#line 1684 "parser.tab.c"
    break;

  case 54: /* expresionV: funcion_llV  */
#line 205 "parser.y"
                      {}
#line 1690 "parser.tab.c"
    break;

  case 55: /* exp_aV: exp_aV masTK exp_aV  */
#line 208 "parser.y"
                            {}
#line 1696 "parser.tab.c"
    break;

  case 56: /* exp_aV: exp_aV menosTK exp_aV  */
#line 209 "parser.y"
                                {}
#line 1702 "parser.tab.c"
    break;

  case 57: /* exp_aV: exp_aV porTK exp_aV  */
#line 210 "parser.y"
                              {}
#line 1708 "parser.tab.c"
    break;

  case 58: /* exp_aV: exp_aV divisionTK exp_aV  */
#line 211 "parser.y"
                                   {}
#line 1714 "parser.tab.c"
    break;

  case 59: /* exp_aV: exp_aV modTK exp_aV  */
#line 212 "parser.y"
                              {}
#line 1720 "parser.tab.c"
    break;

  case 60: /* exp_aV: exp_aV divTK exp_aV  */
#line 213 "parser.y"
                              {}
#line 1726 "parser.tab.c"
    break;

  case 61: /* exp_aV: parentesisAbiertoTK exp_aV parentesisCerradoTK  */
#line 214 "parser.y"
                                                         {}
#line 1732 "parser.tab.c"
    break;

  case 62: /* exp_aV: operandoV  */
#line 215 "parser.y"
                    {}
#line 1738 "parser.tab.c"
    break;

  case 63: /* exp_aV: literalEnteroTK  */
#line 216 "parser.y"
                          {}
#line 1744 "parser.tab.c"
    break;

  case 64: /* exp_aV: literalRealTK  */
#line 217 "parser.y"
                        {}
#line 1750 "parser.tab.c"
    break;

  case 65: /* exp_aV: menosTK exp_aV  */
#line 218 "parser.y"
                         {}
#line 1756 "parser.tab.c"
    break;

  case 66: /* exp_aV: masTK exp_aV  */
#line 219 "parser.y"
                       {}
#line 1762 "parser.tab.c"
    break;

  case 67: /* exp_bV: exp_bV yTK exp_bV  */
#line 221 "parser.y"
                          {}
#line 1768 "parser.tab.c"
    break;

  case 68: /* exp_bV: exp_bV oTK exp_bV  */
#line 222 "parser.y"
                            {}
#line 1774 "parser.tab.c"
    break;

  case 69: /* exp_bV: noTK exp_bV  */
#line 223 "parser.y"
                      {}
#line 1780 "parser.tab.c"
    break;

  case 70: /* exp_bV: operandoV  */
#line 224 "parser.y"
                    {}
#line 1786 "parser.tab.c"
    break;

  case 71: /* exp_bV: literalBooleanoTK  */
#line 225 "parser.y"
                            {}
#line 1792 "parser.tab.c"
    break;

  case 72: /* exp_bV: expresionV oprelV expresionV  */
#line 226 "parser.y"
                                       {}
#line 1798 "parser.tab.c"
    break;

  case 73: /* exp_bV: parentesisAbiertoTK exp_bV parentesisCerradoTK  */
#line 227 "parser.y"
                                                         {}
#line 1804 "parser.tab.c"
    break;

  case 74: /* oprelV: menorTK  */
#line 229 "parser.y"
                {}
#line 1810 "parser.tab.c"
    break;

  case 75: /* oprelV: mayorTK  */
#line 230 "parser.y"
                  {}
#line 1816 "parser.tab.c"
    break;

  case 76: /* oprelV: igualTK  */
#line 231 "parser.y"
                  {}
#line 1822 "parser.tab.c"
    break;

  case 77: /* oprelV: distintoTK  */
#line 232 "parser.y"
                     {}
#line 1828 "parser.tab.c"
    break;

  case 78: /* oprelV: mayorIgualTK  */
#line 233 "parser.y"
                       {}
#line 1834 "parser.tab.c"
    break;

  case 79: /* oprelV: menorIgualTK  */
#line 234 "parser.y"
                       {}
#line 1840 "parser.tab.c"
    break;

  case 80: /* operandoV: identificadorTK  */
#line 236 "parser.y"
                           {}
#line 1846 "parser.tab.c"
    break;

  case 81: /* operandoV: operandoV puntoTK operandoV  */
#line 237 "parser.y"
                                      {}
#line 1852 "parser.tab.c"
    break;

  case 82: /* operandoV: operandoV inicioArrayTK expresionV finArrayTK  */
#line 238 "parser.y"
                                                        {}
#line 1858 "parser.tab.c"
    break;

  case 83: /* operandoV: operandoV refTK  */
#line 239 "parser.y"
                          {}
#line 1864 "parser.tab.c"
    break;

  case 84: /* instruccionesV: instruccionV composicionSecuencialTK instruccionesV  */
#line 243 "parser.y"
                                                                    {}
#line 1870 "parser.tab.c"
    break;

  case 85: /* instruccionesV: instruccionV  */
#line 244 "parser.y"
                       {}
#line 1876 "parser.tab.c"
    break;

  case 86: /* instruccionV: continuarTK  */
#line 246 "parser.y"
                          {}
#line 1882 "parser.tab.c"
    break;

  case 87: /* instruccionV: asignacionV  */
#line 247 "parser.y"
                      {}
#line 1888 "parser.tab.c"
    break;

  case 88: /* instruccionV: alternativaV  */
#line 248 "parser.y"
                       {}
#line 1894 "parser.tab.c"
    break;

  case 89: /* instruccionV: iteracionV  */
#line 249 "parser.y"
                     {}
#line 1900 "parser.tab.c"
    break;

  case 90: /* instruccionV: accion_llV  */
#line 250 "parser.y"
                     {}
#line 1906 "parser.tab.c"
    break;

  case 91: /* asignacionV: operandoV asignacionTK expresionV  */
#line 252 "parser.y"
                                               {}
#line 1912 "parser.tab.c"
    break;

  case 92: /* alternativaV: siTK expresionV entoncesTK instruccionesV lista_opcionesV fsiTK  */
#line 254 "parser.y"
                                                                              {}
#line 1918 "parser.tab.c"
    break;

  case 93: /* lista_opcionesV: siNoSiTK expresionV entoncesTK instruccionesV lista_opcionesV  */
#line 256 "parser.y"
                                                                               {}
#line 1924 "parser.tab.c"
    break;

  case 94: /* lista_opcionesV: %empty  */
#line 257 "parser.y"
                      {}
#line 1930 "parser.tab.c"
    break;

  case 95: /* iteracionV: it_cota_fijaV  */
#line 259 "parser.y"
                          {}
#line 1936 "parser.tab.c"
    break;

  case 96: /* iteracionV: it_cota_expV  */
#line 260 "parser.y"
                       {}
#line 1942 "parser.tab.c"
    break;

  case 97: /* it_cota_expV: mientrasTK expresionV hacerTK instruccionesV fmientrasTK  */
#line 262 "parser.y"
                                                                       {}
#line 1948 "parser.tab.c"
    break;

  case 98: /* it_cota_fijaV: paraTK identificadorTK asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fparaTK  */
#line 264 "parser.y"
                                                                                                                {}
#line 1954 "parser.tab.c"
    break;

  case 99: /* accion_dV: accionTK a_cabeceraV bloqueV faccionTK  */
#line 268 "parser.y"
                                                  {}
#line 1960 "parser.tab.c"
    break;

  case 100: /* funcion_dV: funcionTK f_cabeceraV bloqueV devTK expresionV ffuncionTK  */
#line 270 "parser.y"
                                                                      {}
#line 1966 "parser.tab.c"
    break;

  case 101: /* a_cabeceraV: identificadorTK parentesisAbiertoTK d_par_formV parentesisCerradoTK composicionSecuencialTK  */
#line 272 "parser.y"
                                                                                                         {}
#line 1972 "parser.tab.c"
    break;

  case 102: /* f_cabeceraV: identificadorTK parentesisAbiertoTK lista_d_varV parentesisCerradoTK devTK d_tipoV composicionSecuencialTK  */
#line 274 "parser.y"
                                                                                                                        {}
#line 1978 "parser.tab.c"
    break;

  case 103: /* d_par_formV: d_p_formV composicionSecuencialTK d_par_formV  */
#line 276 "parser.y"
                                                           {}
#line 1984 "parser.tab.c"
    break;

  case 104: /* d_par_formV: %empty  */
#line 277 "parser.y"
                      {}
#line 1990 "parser.tab.c"
    break;

  case 105: /* d_p_formV: entTK lista_idV tipoVariableTK d_tipoV  */
#line 279 "parser.y"
                                                  {}
#line 1996 "parser.tab.c"
    break;

  case 106: /* d_p_formV: salTK lista_idV tipoVariableTK d_tipoV  */
#line 280 "parser.y"
                                                 {}
#line 2002 "parser.tab.c"
    break;

  case 107: /* d_p_formV: entradaSalidaTK lista_idV tipoVariableTK d_tipoV  */
#line 281 "parser.y"
                                                           {}
#line 2008 "parser.tab.c"
    break;

  case 108: /* accion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK  */
#line 283 "parser.y"
                                                                          {}
#line 2014 "parser.tab.c"
    break;

  case 109: /* funcion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK  */
#line 285 "parser.y"
                                                                           {}
#line 2020 "parser.tab.c"
    break;

  case 110: /* l_llV: expresionV separadorTK l_llV  */
#line 287 "parser.y"
                                    {}
#line 2026 "parser.tab.c"
    break;

  case 111: /* l_llV: expresionV  */
#line 288 "parser.y"
                     {}
#line 2032 "parser.tab.c"
    break;


#line 2036 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 291 "parser.y"

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


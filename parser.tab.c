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
  YYSYMBOL_puntoYComaTK = 7,               /* puntoYComaTK  */
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
  YYSYMBOL_composicionSecuencialTK = 49,   /* composicionSecuencialTK  */
  YYSYMBOL_separadorTK = 50,               /* separadorTK  */
  YYSYMBOL_subrangoTK = 51,                /* subrangoTK  */
  YYSYMBOL_tipoVariableTK = 52,            /* tipoVariableTK  */
  YYSYMBOL_entoncesTK = 53,                /* entoncesTK  */
  YYSYMBOL_siNoSiTK = 54,                  /* siNoSiTK  */
  YYSYMBOL_inicioArrayTK = 55,             /* inicioArrayTK  */
  YYSYMBOL_finArrayTK = 56,                /* finArrayTK  */
  YYSYMBOL_puntoTK = 57,                   /* puntoTK  */
  YYSYMBOL_parentesisAbiertoTK = 58,       /* parentesisAbiertoTK  */
  YYSYMBOL_parentesisCerradoTK = 59,       /* parentesisCerradoTK  */
  YYSYMBOL_masTK = 60,                     /* masTK  */
  YYSYMBOL_menosTK = 61,                   /* menosTK  */
  YYSYMBOL_porTK = 62,                     /* porTK  */
  YYSYMBOL_divisionTK = 63,                /* divisionTK  */
  YYSYMBOL_menorTK = 64,                   /* menorTK  */
  YYSYMBOL_mayorTK = 65,                   /* mayorTK  */
  YYSYMBOL_menorIgualTK = 66,              /* menorIgualTK  */
  YYSYMBOL_mayorIgualTK = 67,              /* mayorIgualTK  */
  YYSYMBOL_distintoTK = 68,                /* distintoTK  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_desc_algoritmoV = 70,           /* desc_algoritmoV  */
  YYSYMBOL_cabecera_algV = 71,             /* cabecera_algV  */
  YYSYMBOL_bloque_algV = 72,               /* bloque_algV  */
  YYSYMBOL_decl_globalesV = 73,            /* decl_globalesV  */
  YYSYMBOL_decl_a_fV = 74,                 /* decl_a_fV  */
  YYSYMBOL_bloqueV = 75,                   /* bloqueV  */
  YYSYMBOL_declaracionesV = 76,            /* declaracionesV  */
  YYSYMBOL_declaracion_tipoV = 77,         /* declaracion_tipoV  */
  YYSYMBOL_declaracion_cteV = 78,          /* declaracion_cteV  */
  YYSYMBOL_declaracion_varV = 79,          /* declaracion_varV  */
  YYSYMBOL_lista_d_tipoV = 80,             /* lista_d_tipoV  */
  YYSYMBOL_tipo_baseV = 81,                /* tipo_baseV  */
  YYSYMBOL_d_tipoV = 82,                   /* d_tipoV  */
  YYSYMBOL_expresion_tV = 83,              /* expresion_tV  */
  YYSYMBOL_lista_d_cteV = 84,              /* lista_d_cteV  */
  YYSYMBOL_lista_d_varV = 85,              /* lista_d_varV  */
  YYSYMBOL_lista_idV = 86,                 /* lista_idV  */
  YYSYMBOL_lista_camposV = 87,             /* lista_camposV  */
  YYSYMBOL_decl_ent_salV = 88,             /* decl_ent_salV  */
  YYSYMBOL_decl_entV = 89,                 /* decl_entV  */
  YYSYMBOL_decl_salV = 90,                 /* decl_salV  */
  YYSYMBOL_expresionV = 91,                /* expresionV  */
  YYSYMBOL_exp_aV = 92,                    /* exp_aV  */
  YYSYMBOL_exp_bV = 93,                    /* exp_bV  */
  YYSYMBOL_oprelV = 94,                    /* oprelV  */
  YYSYMBOL_operandoV = 95,                 /* operandoV  */
  YYSYMBOL_instruccionesV = 96,            /* instruccionesV  */
  YYSYMBOL_instruccionV = 97,              /* instruccionV  */
  YYSYMBOL_asignacionV = 98,               /* asignacionV  */
  YYSYMBOL_alternativaV = 99,              /* alternativaV  */
  YYSYMBOL_lista_opcionesV = 100,          /* lista_opcionesV  */
  YYSYMBOL_iteracionV = 101,               /* iteracionV  */
  YYSYMBOL_it_cota_expV = 102,             /* it_cota_expV  */
  YYSYMBOL_it_cota_fijaV = 103,            /* it_cota_fijaV  */
  YYSYMBOL_accion_dV = 104,                /* accion_dV  */
  YYSYMBOL_funcion_dV = 105,               /* funcion_dV  */
  YYSYMBOL_a_cabeceraV = 106,              /* a_cabeceraV  */
  YYSYMBOL_f_cabeceraV = 107,              /* f_cabeceraV  */
  YYSYMBOL_d_par_formV = 108,              /* d_par_formV  */
  YYSYMBOL_d_p_formV = 109,                /* d_p_formV  */
  YYSYMBOL_accion_llV = 110,               /* accion_llV  */
  YYSYMBOL_funcion_llV = 111,              /* funcion_llV  */
  YYSYMBOL_l_llV = 112                     /* l_llV  */
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
#define YYLAST   306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


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
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   118,   118,   120,   122,   124,   125,   126,   128,   129,
     130,   132,   134,   135,   136,   137,   141,   143,   145,   149,
     150,   152,   153,   154,   155,   156,   158,   159,   160,   161,
     162,   163,   165,   166,   170,   171,   173,   174,   176,   177,
     179,   180,   182,   183,   184,   186,   188,   191,   192,   193,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   208,   209,   210,   211,   212,   213,   214,   216,   217,
     218,   219,   220,   221,   223,   224,   225,   226,   230,   231,
     233,   234,   235,   236,   237,   239,   241,   243,   244,   246,
     247,   249,   251,   255,   257,   259,   261,   263,   264,   266,
     267,   268,   270,   272,   274,   275
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
  "fconstTK", "igualTK", "puntoYComaTK", "accionTK", "algoritmoTK",
  "booleanoTK", "cadenaTK", "caracterTK", "continuarTK", "deTK", "devTK",
  "divTK", "entTK", "enteroTK", "entradaSalidaTK", "faccionTK",
  "falgoritmoTK", "ffuncionTK", "fmientrasTK", "fparaTK", "fsiTK",
  "ftipoTK", "ftuplaTK", "funcionTK", "fvarTK", "hacerTK", "hastaTK",
  "mientrasTK", "modTK", "noTK", "oTK", "paraTK", "realTK", "refTK",
  "salTK", "siTK", "tablaTK", "tipoTK", "tuplaTK", "varTK", "yTK",
  "identificadorTK", "comentarioTK", "asignacionTK",
  "composicionSecuencialTK", "separadorTK", "subrangoTK", "tipoVariableTK",
  "entoncesTK", "siNoSiTK", "inicioArrayTK", "finArrayTK", "puntoTK",
  "parentesisAbiertoTK", "parentesisCerradoTK", "masTK", "menosTK",
  "porTK", "divisionTK", "menorTK", "mayorTK", "menorIgualTK",
  "mayorIgualTK", "distintoTK", "$accept", "desc_algoritmoV",
  "cabecera_algV", "bloque_algV", "decl_globalesV", "decl_a_fV", "bloqueV",
  "declaracionesV", "declaracion_tipoV", "declaracion_cteV",
  "declaracion_varV", "lista_d_tipoV", "tipo_baseV", "d_tipoV",
  "expresion_tV", "lista_d_cteV", "lista_d_varV", "lista_idV",
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

#define YYPACT_NINF (-119)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,     7,    58,    12,  -119,    10,    19,    35,    15,    14,
      10,    10,    78,    83,    92,    74,    55,    90,    65,   107,
      15,    15,    15,    68,    71,     0,    14,    14,  -119,  -119,
     125,   124,   235,   137,    98,   113,    97,    95,  -119,  -119,
     160,   104,   160,   109,   -23,  -119,   117,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,   115,    15,   126,    15,
      55,    55,   132,   123,  -119,  -119,  -119,   161,  -119,     5,
    -119,  -119,  -119,  -119,   160,  -119,   235,   101,   146,     2,
     160,   231,   231,  -119,   186,   144,   184,   238,    -7,   -11,
    -119,  -119,    55,   190,   235,  -119,  -119,   140,    39,   156,
     110,   160,  -119,   160,   160,   162,   107,    -3,   163,    55,
     192,  -119,  -119,  -119,  -119,    19,   184,    93,  -119,   224,
     153,   185,   160,   203,   -24,  -119,  -119,   231,   238,   -11,
     238,    35,   224,  -119,  -119,  -119,  -119,  -119,  -119,   160,
     231,   231,   231,   231,   231,   231,   160,   160,  -119,  -119,
     204,   107,   160,   107,   121,   178,   184,   135,   -11,  -119,
      55,    55,    55,   179,   173,  -119,   196,   160,  -119,   205,
     235,  -119,   198,  -119,  -119,   203,  -119,  -119,   184,   238,
     238,   238,   238,   238,   238,    93,    93,    55,   236,   149,
     206,   160,  -119,  -119,   209,   215,   216,   225,    -3,   260,
     159,   223,   273,  -119,  -119,  -119,   160,   160,   258,  -119,
     235,   235,   235,  -119,  -119,   235,  -119,   272,   146,   166,
     176,  -119,  -119,  -119,  -119,   239,   235,  -119,   107,   107,
    -119,  -119,   263,   206,  -119,  -119
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    35,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    37,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    39,     0,     0,     0,     4,    80,
       0,     0,     0,    74,     0,    11,    79,    81,    82,    83,
      90,    89,    84,    12,    13,    14,     0,    15,     0,    15,
      37,    37,     0,    42,    44,     8,     9,     0,    17,    58,
      23,    25,    24,    21,     0,    22,     0,     0,    41,    74,
       0,     0,     0,    31,     0,     0,    32,    47,    48,    57,
      49,    16,     0,     0,     0,     2,    58,    74,     0,     0,
       0,     0,    77,     0,     0,     0,     0,    98,     0,    37,
       0,    45,    46,     3,    43,    35,     0,    63,    30,     0,
       0,     0,     0,    47,    48,    58,    74,     0,    60,    57,
      59,    20,     0,    70,    68,    69,    73,    72,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    18,
       0,     0,     0,     0,   105,     0,    85,     0,    75,    78,
       0,     0,     0,     0,     0,    93,     0,     0,    34,     0,
       0,    26,     0,    56,    67,     0,    19,    29,    66,    55,
      54,    50,    51,    52,    53,    62,    61,    37,     0,     0,
      88,     0,   102,    76,     0,     0,     0,     0,    98,     0,
       0,     0,     0,   103,    36,    91,     0,     0,     0,   104,
       0,     0,     0,    95,    97,     0,    94,     0,    41,     0,
       0,    86,    99,   101,   100,     0,     0,    40,     0,     0,
      96,    27,     0,    88,    92,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,  -119,  -119,  -119,    61,    70,   -33,    27,    72,   108,
    -119,   171,  -119,   -75,   -99,   175,   -54,   -82,    76,  -119,
    -119,   234,   -37,   -51,   -72,  -119,   -19,   -83,  -119,  -119,
    -119,    73,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   105,
    -119,  -119,  -119,  -118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    83,    84,    85,    13,    35,    36,   121,    62,
      63,    64,    86,    87,    88,   139,    89,    45,    46,    47,
      48,   208,    49,    50,    51,    26,    27,    57,    59,   163,
     164,    52,    90,   155
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   118,   117,    98,   172,   100,   111,   112,   124,   -28,
     148,   146,   -33,     6,   160,   102,   161,    60,     6,   150,
     169,   147,    23,   159,   108,   103,   110,   102,   146,   123,
     128,   130,   104,   177,   105,   174,   162,   116,   147,    61,
     -65,     1,    24,   116,   104,   133,   105,    53,    54,    55,
     -65,   -28,     7,     3,   -33,   166,   -33,     7,     4,    16,
     122,     5,   129,   129,   154,    12,   156,   157,   188,   151,
     190,    28,    29,   209,   185,   186,   175,    10,   194,   195,
     196,    14,    10,    10,    30,   154,   158,    44,    31,   179,
     180,   181,   182,   183,   184,   202,    65,    66,    32,   -48,
      33,    34,   178,   134,   135,   136,   137,   138,   129,   116,
     116,    37,    38,    11,    56,   189,   133,    58,    11,    11,
      39,   129,   129,   129,   129,   129,   129,   133,   146,    67,
     200,    68,    44,   204,    44,   222,   223,   224,   147,    40,
     225,   133,    93,    41,    91,   232,   233,    42,    92,    94,
      99,   231,    95,    43,   154,   133,   119,   -48,   -48,   -48,
     -48,   -48,    61,   153,    96,   133,   106,   101,   115,   219,
     220,   191,   133,   107,   134,   135,   136,   137,   138,   113,
     206,   216,   133,   165,   109,   134,   135,   136,   137,   138,
     133,   193,   120,   131,    74,   132,   228,   149,   122,   134,
     135,   136,   137,   138,   152,   170,    97,   167,   126,    44,
      44,   187,   171,   134,   135,   136,   137,   138,    80,   140,
      81,    82,   198,   134,   135,   136,   137,   138,    69,   229,
     134,   135,   136,   137,   138,   125,   141,   192,   197,    69,
     134,   135,   136,   137,   138,    70,    71,    72,   134,   135,
     136,   137,   138,    73,   140,   199,   201,   203,    74,   205,
     207,   210,   173,   142,   143,   144,   145,   211,   212,    74,
      97,   141,    75,    76,   213,   215,    77,   126,    78,   217,
     218,    79,    80,   221,    81,    82,   226,   234,   230,   127,
     168,    81,    82,    80,   227,    81,    82,   114,   142,   143,
     144,   145,   176,   214,     0,     0,   235
};

static const yytype_int16 yycheck[] =
{
      19,    76,    74,    40,   122,    42,    60,    61,    80,     7,
      92,    35,     7,     3,    17,    38,    19,    17,     3,    94,
     119,    45,     8,   106,    57,    48,    59,    38,    35,    80,
      81,    82,    55,   132,    57,    59,    39,    74,    45,    39,
      35,     9,    28,    80,    55,     6,    57,    20,    21,    22,
      45,    49,    42,    46,    49,   109,    51,    42,     0,    44,
      58,    49,    81,    82,   101,    46,   103,   104,   151,    30,
     153,    10,    11,   191,   146,   147,   127,     5,   160,   161,
     162,    46,    10,    11,     6,   122,   105,   106,     5,   140,
     141,   142,   143,   144,   145,   170,    26,    27,     6,     6,
      26,    46,   139,    64,    65,    66,    67,    68,   127,   146,
     147,    21,    47,     5,    46,   152,     6,    46,    10,    11,
      13,   140,   141,   142,   143,   144,   145,     6,    35,     4,
     167,     7,   151,   187,   153,   210,   211,   212,    45,    32,
     215,     6,    29,    36,     7,   228,   229,    40,    50,    52,
      46,   226,    57,    46,   191,     6,    55,    64,    65,    66,
      67,    68,    39,    53,     4,     6,    49,    58,     7,   206,
     207,    50,     6,    58,    64,    65,    66,    67,    68,    47,
      31,    22,     6,    20,    58,    64,    65,    66,    67,    68,
       6,    56,    46,     7,    34,    51,    30,     7,    58,    64,
      65,    66,    67,    68,    48,    52,    46,    15,    46,   228,
     229,     7,    27,    64,    65,    66,    67,    68,    58,    16,
      60,    61,    49,    64,    65,    66,    67,    68,     4,    53,
      64,    65,    66,    67,    68,     4,    33,    59,    59,     4,
      64,    65,    66,    67,    68,    10,    11,    12,    64,    65,
      66,    67,    68,    18,    16,    59,    51,    59,    34,    23,
      54,    52,    59,    60,    61,    62,    63,    52,    52,    34,
      46,    33,    37,    38,    49,    15,    41,    46,    43,    56,
       7,    46,    58,    25,    60,    61,    14,    24,    49,    58,
     115,    60,    61,    58,   218,    60,    61,    63,    60,    61,
      62,    63,   131,   198,    -1,    -1,   233
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    70,    46,     0,    49,     3,    42,    71,    73,
      77,    78,    46,    84,    46,    80,    44,    72,    75,    76,
      77,    78,    79,     8,    28,    74,   104,   105,    73,    73,
       6,     5,     6,    26,    46,    85,    86,    21,    47,    13,
      32,    36,    40,    46,    95,    96,    97,    98,    99,   101,
     102,   103,   110,    76,    76,    76,    46,   106,    46,   107,
      17,    39,    88,    89,    90,    74,    74,     4,     7,     4,
      10,    11,    12,    18,    34,    37,    38,    41,    43,    46,
      58,    60,    61,    81,    82,    83,    91,    92,    93,    95,
     111,     7,    50,    29,    52,    57,     4,    46,    91,    46,
      91,    58,    38,    48,    55,    57,    49,    58,    75,    58,
      75,    85,    85,    47,    90,     7,    91,    93,    82,    55,
      46,    87,    58,    92,    93,     4,    46,    58,    92,    95,
      92,     7,    51,     6,    64,    65,    66,    67,    68,    94,
      16,    33,    60,    61,    62,    63,    35,    45,    86,     7,
      82,    30,    48,    53,    91,   112,    91,    91,    95,    96,
      17,    19,    39,   108,   109,    20,    85,    15,    84,    83,
      52,    27,   112,    59,    59,    92,    80,    83,    91,    92,
      92,    92,    92,    92,    92,    93,    93,     7,    96,    91,
      96,    50,    59,    56,    86,    86,    86,    59,    49,    59,
      91,    51,    82,    59,    85,    23,    31,    54,   100,   112,
      52,    52,    52,    49,   108,    15,    22,    56,     7,    91,
      91,    25,    82,    82,    82,    82,    14,    87,    30,    53,
      49,    82,    96,    96,    24,   100
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    72,    73,    73,    73,    74,    74,
      74,    75,    76,    76,    76,    76,    77,    78,    79,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    88,    89,    90,    91,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    96,    96,
      97,    97,    97,    97,    97,    98,    99,   100,   100,   101,
     101,   102,   103,   104,   105,   106,   107,   108,   108,   109,
     109,   109,   110,   111,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     1,     1,     1,     1,     1,     3,     7,     1,     3,
       2,     1,     1,     1,     5,     0,     5,     0,     3,     1,
       5,     0,     1,     2,     1,     2,     2,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     2,
       2,     3,     3,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     3,     1,
       1,     1,     1,     1,     1,     3,     6,     5,     0,     1,
       1,     5,     9,     4,     6,     5,     7,     3,     0,     4,
       4,     4,     4,     4,     3,     1
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
#line 118 "parser.y"
                                                                                                                    {}
#line 1364 "parser.tab.c"
    break;

  case 3: /* cabecera_algV: decl_globalesV decl_a_fV decl_ent_salV comentarioTK  */
#line 120 "parser.y"
                                                                   {}
#line 1370 "parser.tab.c"
    break;

  case 4: /* bloque_algV: bloqueV comentarioTK  */
#line 122 "parser.y"
                                  {}
#line 1376 "parser.tab.c"
    break;

  case 5: /* decl_globalesV: declaracion_tipoV decl_globalesV  */
#line 124 "parser.y"
                                                 {}
#line 1382 "parser.tab.c"
    break;

  case 6: /* decl_globalesV: declaracion_cteV decl_globalesV  */
#line 125 "parser.y"
                                          {}
#line 1388 "parser.tab.c"
    break;

  case 7: /* decl_globalesV: %empty  */
#line 126 "parser.y"
                      {}
#line 1394 "parser.tab.c"
    break;

  case 8: /* decl_a_fV: accion_dV decl_a_fV  */
#line 128 "parser.y"
                               {}
#line 1400 "parser.tab.c"
    break;

  case 9: /* decl_a_fV: funcion_dV decl_a_fV  */
#line 129 "parser.y"
                               {}
#line 1406 "parser.tab.c"
    break;

  case 10: /* decl_a_fV: %empty  */
#line 130 "parser.y"
                      {}
#line 1412 "parser.tab.c"
    break;

  case 11: /* bloqueV: declaracionesV instruccionesV  */
#line 132 "parser.y"
                                       {}
#line 1418 "parser.tab.c"
    break;

  case 12: /* declaracionesV: declaracion_tipoV declaracionesV  */
#line 134 "parser.y"
                                                 {}
#line 1424 "parser.tab.c"
    break;

  case 13: /* declaracionesV: declaracion_cteV declaracionesV  */
#line 135 "parser.y"
                                          {}
#line 1430 "parser.tab.c"
    break;

  case 14: /* declaracionesV: declaracion_varV declaracionesV  */
#line 136 "parser.y"
                                          {}
#line 1436 "parser.tab.c"
    break;

  case 15: /* declaracionesV: %empty  */
#line 137 "parser.y"
                      {}
#line 1442 "parser.tab.c"
    break;

  case 16: /* declaracion_tipoV: tipoTK lista_d_tipoV ftipoTK puntoYComaTK  */
#line 141 "parser.y"
                                                             {}
#line 1448 "parser.tab.c"
    break;

  case 17: /* declaracion_cteV: constTK lista_d_cteV fconstTK puntoYComaTK  */
#line 143 "parser.y"
                                                             {}
#line 1454 "parser.tab.c"
    break;

  case 18: /* declaracion_varV: varTK lista_d_varV fvarTK puntoYComaTK  */
#line 145 "parser.y"
                                                         {}
#line 1460 "parser.tab.c"
    break;

  case 19: /* lista_d_tipoV: identificadorTK igualTK d_tipoV puntoYComaTK lista_d_tipoV  */
#line 149 "parser.y"
                                                                          {}
#line 1466 "parser.tab.c"
    break;

  case 20: /* lista_d_tipoV: %empty  */
#line 150 "parser.y"
                      {}
#line 1472 "parser.tab.c"
    break;

  case 21: /* tipo_baseV: enteroTK  */
#line 152 "parser.y"
                     {}
#line 1478 "parser.tab.c"
    break;

  case 22: /* tipo_baseV: realTK  */
#line 153 "parser.y"
                 {}
#line 1484 "parser.tab.c"
    break;

  case 23: /* tipo_baseV: booleanoTK  */
#line 154 "parser.y"
                     {}
#line 1490 "parser.tab.c"
    break;

  case 24: /* tipo_baseV: caracterTK  */
#line 155 "parser.y"
                     {}
#line 1496 "parser.tab.c"
    break;

  case 25: /* tipo_baseV: cadenaTK  */
#line 156 "parser.y"
                   {}
#line 1502 "parser.tab.c"
    break;

  case 26: /* d_tipoV: tuplaTK lista_camposV ftuplaTK  */
#line 158 "parser.y"
                                        {}
#line 1508 "parser.tab.c"
    break;

  case 27: /* d_tipoV: tablaTK inicioArrayTK expresion_tV subrangoTK finArrayTK deTK d_tipoV  */
#line 159 "parser.y"
                                                                                {}
#line 1514 "parser.tab.c"
    break;

  case 28: /* d_tipoV: identificadorTK  */
#line 160 "parser.y"
                          {}
#line 1520 "parser.tab.c"
    break;

  case 29: /* d_tipoV: expresion_tV subrangoTK expresion_tV  */
#line 161 "parser.y"
                                               {}
#line 1526 "parser.tab.c"
    break;

  case 30: /* d_tipoV: refTK d_tipoV  */
#line 162 "parser.y"
                        {}
#line 1532 "parser.tab.c"
    break;

  case 31: /* d_tipoV: tipo_baseV  */
#line 163 "parser.y"
                     {}
#line 1538 "parser.tab.c"
    break;

  case 32: /* expresion_tV: expresionV  */
#line 165 "parser.y"
                         {}
#line 1544 "parser.tab.c"
    break;

  case 33: /* expresion_tV: literalTK  */
#line 166 "parser.y"
                    {}
#line 1550 "parser.tab.c"
    break;

  case 34: /* lista_d_cteV: identificadorTK igualTK literalTK puntoYComaTK lista_d_cteV  */
#line 170 "parser.y"
                                                                          {}
#line 1556 "parser.tab.c"
    break;

  case 35: /* lista_d_cteV: %empty  */
#line 171 "parser.y"
                      {}
#line 1562 "parser.tab.c"
    break;

  case 36: /* lista_d_varV: lista_idV tipoVariableTK d_tipoV puntoYComaTK lista_d_varV  */
#line 173 "parser.y"
                                                                         {}
#line 1568 "parser.tab.c"
    break;

  case 37: /* lista_d_varV: %empty  */
#line 174 "parser.y"
                      {}
#line 1574 "parser.tab.c"
    break;

  case 38: /* lista_idV: identificadorTK separadorTK lista_idV  */
#line 176 "parser.y"
                                                 {}
#line 1580 "parser.tab.c"
    break;

  case 39: /* lista_idV: identificadorTK  */
#line 177 "parser.y"
                          {}
#line 1586 "parser.tab.c"
    break;

  case 40: /* lista_camposV: identificadorTK tipoVariableTK d_tipoV puntoYComaTK lista_camposV  */
#line 179 "parser.y"
                                                                                 {}
#line 1592 "parser.tab.c"
    break;

  case 41: /* lista_camposV: %empty  */
#line 180 "parser.y"
                      {}
#line 1598 "parser.tab.c"
    break;

  case 42: /* decl_ent_salV: decl_entV  */
#line 182 "parser.y"
                         {}
#line 1604 "parser.tab.c"
    break;

  case 43: /* decl_ent_salV: decl_entV decl_salV  */
#line 183 "parser.y"
                              {}
#line 1610 "parser.tab.c"
    break;

  case 44: /* decl_ent_salV: decl_salV  */
#line 184 "parser.y"
                    {}
#line 1616 "parser.tab.c"
    break;

  case 45: /* decl_entV: entTK lista_d_varV  */
#line 186 "parser.y"
                              {}
#line 1622 "parser.tab.c"
    break;

  case 46: /* decl_salV: salTK lista_d_varV  */
#line 188 "parser.y"
                              {}
#line 1628 "parser.tab.c"
    break;

  case 47: /* expresionV: exp_aV  */
#line 191 "parser.y"
                    {}
#line 1634 "parser.tab.c"
    break;

  case 48: /* expresionV: exp_bV  */
#line 192 "parser.y"
                 {}
#line 1640 "parser.tab.c"
    break;

  case 49: /* expresionV: funcion_llV  */
#line 193 "parser.y"
                      {}
#line 1646 "parser.tab.c"
    break;

  case 50: /* exp_aV: exp_aV masTK exp_aV  */
#line 196 "parser.y"
                            {}
#line 1652 "parser.tab.c"
    break;

  case 51: /* exp_aV: exp_aV menosTK exp_aV  */
#line 197 "parser.y"
                                {}
#line 1658 "parser.tab.c"
    break;

  case 52: /* exp_aV: exp_aV porTK exp_aV  */
#line 198 "parser.y"
                              {}
#line 1664 "parser.tab.c"
    break;

  case 53: /* exp_aV: exp_aV divisionTK exp_aV  */
#line 199 "parser.y"
                                   {}
#line 1670 "parser.tab.c"
    break;

  case 54: /* exp_aV: exp_aV modTK exp_aV  */
#line 200 "parser.y"
                              {}
#line 1676 "parser.tab.c"
    break;

  case 55: /* exp_aV: exp_aV divTK exp_aV  */
#line 201 "parser.y"
                              {}
#line 1682 "parser.tab.c"
    break;

  case 56: /* exp_aV: parentesisAbiertoTK exp_aV parentesisCerradoTK  */
#line 202 "parser.y"
                                                         {}
#line 1688 "parser.tab.c"
    break;

  case 57: /* exp_aV: operandoV  */
#line 203 "parser.y"
                    {}
#line 1694 "parser.tab.c"
    break;

  case 58: /* exp_aV: literalTK  */
#line 204 "parser.y"
                    {}
#line 1700 "parser.tab.c"
    break;

  case 59: /* exp_aV: menosTK exp_aV  */
#line 205 "parser.y"
                         {}
#line 1706 "parser.tab.c"
    break;

  case 60: /* exp_aV: masTK exp_aV  */
#line 206 "parser.y"
                       {}
#line 1712 "parser.tab.c"
    break;

  case 61: /* exp_bV: exp_bV yTK exp_bV  */
#line 208 "parser.y"
                          {}
#line 1718 "parser.tab.c"
    break;

  case 62: /* exp_bV: exp_bV oTK exp_bV  */
#line 209 "parser.y"
                            {}
#line 1724 "parser.tab.c"
    break;

  case 63: /* exp_bV: noTK exp_bV  */
#line 210 "parser.y"
                      {}
#line 1730 "parser.tab.c"
    break;

  case 64: /* exp_bV: operandoV  */
#line 211 "parser.y"
                    {}
#line 1736 "parser.tab.c"
    break;

  case 65: /* exp_bV: literalTK  */
#line 212 "parser.y"
                    {}
#line 1742 "parser.tab.c"
    break;

  case 66: /* exp_bV: expresionV oprelV expresionV  */
#line 213 "parser.y"
                                       {}
#line 1748 "parser.tab.c"
    break;

  case 67: /* exp_bV: parentesisAbiertoTK exp_bV parentesisCerradoTK  */
#line 214 "parser.y"
                                                         {}
#line 1754 "parser.tab.c"
    break;

  case 68: /* oprelV: menorTK  */
#line 216 "parser.y"
                {}
#line 1760 "parser.tab.c"
    break;

  case 69: /* oprelV: mayorTK  */
#line 217 "parser.y"
                  {}
#line 1766 "parser.tab.c"
    break;

  case 70: /* oprelV: igualTK  */
#line 218 "parser.y"
                  {}
#line 1772 "parser.tab.c"
    break;

  case 71: /* oprelV: distintoTK  */
#line 219 "parser.y"
                     {}
#line 1778 "parser.tab.c"
    break;

  case 72: /* oprelV: mayorIgualTK  */
#line 220 "parser.y"
                       {}
#line 1784 "parser.tab.c"
    break;

  case 73: /* oprelV: menorIgualTK  */
#line 221 "parser.y"
                       {}
#line 1790 "parser.tab.c"
    break;

  case 74: /* operandoV: identificadorTK  */
#line 223 "parser.y"
                           {}
#line 1796 "parser.tab.c"
    break;

  case 75: /* operandoV: operandoV puntoTK operandoV  */
#line 224 "parser.y"
                                      {}
#line 1802 "parser.tab.c"
    break;

  case 76: /* operandoV: operandoV inicioArrayTK expresionV finArrayTK  */
#line 225 "parser.y"
                                                        {}
#line 1808 "parser.tab.c"
    break;

  case 77: /* operandoV: operandoV refTK  */
#line 226 "parser.y"
                          {}
#line 1814 "parser.tab.c"
    break;

  case 78: /* instruccionesV: instruccionV composicionSecuencialTK instruccionesV  */
#line 230 "parser.y"
                                                                    {}
#line 1820 "parser.tab.c"
    break;

  case 79: /* instruccionesV: instruccionV  */
#line 231 "parser.y"
                       {}
#line 1826 "parser.tab.c"
    break;

  case 80: /* instruccionV: continuarTK  */
#line 233 "parser.y"
                          {}
#line 1832 "parser.tab.c"
    break;

  case 81: /* instruccionV: asignacionV  */
#line 234 "parser.y"
                      {}
#line 1838 "parser.tab.c"
    break;

  case 82: /* instruccionV: alternativaV  */
#line 235 "parser.y"
                       {}
#line 1844 "parser.tab.c"
    break;

  case 83: /* instruccionV: iteracionV  */
#line 236 "parser.y"
                     {}
#line 1850 "parser.tab.c"
    break;

  case 84: /* instruccionV: accion_llV  */
#line 237 "parser.y"
                     {}
#line 1856 "parser.tab.c"
    break;

  case 85: /* asignacionV: operandoV asignacionTK expresionV  */
#line 239 "parser.y"
                                               {}
#line 1862 "parser.tab.c"
    break;

  case 86: /* alternativaV: siTK expresionV entoncesTK instruccionesV lista_opcionesV fsiTK  */
#line 241 "parser.y"
                                                                              {}
#line 1868 "parser.tab.c"
    break;

  case 87: /* lista_opcionesV: siNoSiTK expresionV entoncesTK instruccionesV lista_opcionesV  */
#line 243 "parser.y"
                                                                               {}
#line 1874 "parser.tab.c"
    break;

  case 88: /* lista_opcionesV: %empty  */
#line 244 "parser.y"
                      {}
#line 1880 "parser.tab.c"
    break;

  case 89: /* iteracionV: it_cota_fijaV  */
#line 246 "parser.y"
                          {}
#line 1886 "parser.tab.c"
    break;

  case 90: /* iteracionV: it_cota_expV  */
#line 247 "parser.y"
                       {}
#line 1892 "parser.tab.c"
    break;

  case 91: /* it_cota_expV: mientrasTK expresionV hacerTK instruccionesV fmientrasTK  */
#line 249 "parser.y"
                                                                       {}
#line 1898 "parser.tab.c"
    break;

  case 92: /* it_cota_fijaV: paraTK identificadorTK asignacionTK expresionV hastaTK expresionV hacerTK instruccionesV fparaTK  */
#line 251 "parser.y"
                                                                                                                {}
#line 1904 "parser.tab.c"
    break;

  case 93: /* accion_dV: accionTK a_cabeceraV bloqueV faccionTK  */
#line 255 "parser.y"
                                                  {}
#line 1910 "parser.tab.c"
    break;

  case 94: /* funcion_dV: funcionTK f_cabeceraV bloqueV devTK expresionV ffuncionTK  */
#line 257 "parser.y"
                                                                      {}
#line 1916 "parser.tab.c"
    break;

  case 95: /* a_cabeceraV: identificadorTK parentesisAbiertoTK d_par_formV parentesisCerradoTK composicionSecuencialTK  */
#line 259 "parser.y"
                                                                                                         {}
#line 1922 "parser.tab.c"
    break;

  case 96: /* f_cabeceraV: identificadorTK parentesisAbiertoTK lista_d_varV parentesisCerradoTK devTK d_tipoV composicionSecuencialTK  */
#line 261 "parser.y"
                                                                                                                        {}
#line 1928 "parser.tab.c"
    break;

  case 97: /* d_par_formV: d_p_formV composicionSecuencialTK d_par_formV  */
#line 263 "parser.y"
                                                           {}
#line 1934 "parser.tab.c"
    break;

  case 98: /* d_par_formV: %empty  */
#line 264 "parser.y"
                      {}
#line 1940 "parser.tab.c"
    break;

  case 99: /* d_p_formV: entTK lista_idV tipoVariableTK d_tipoV  */
#line 266 "parser.y"
                                                  {}
#line 1946 "parser.tab.c"
    break;

  case 100: /* d_p_formV: salTK lista_idV tipoVariableTK d_tipoV  */
#line 267 "parser.y"
                                                 {}
#line 1952 "parser.tab.c"
    break;

  case 101: /* d_p_formV: entradaSalidaTK lista_idV tipoVariableTK d_tipoV  */
#line 268 "parser.y"
                                                           {}
#line 1958 "parser.tab.c"
    break;

  case 102: /* accion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK  */
#line 270 "parser.y"
                                                                          {}
#line 1964 "parser.tab.c"
    break;

  case 103: /* funcion_llV: identificadorTK parentesisAbiertoTK l_llV parentesisCerradoTK  */
#line 272 "parser.y"
                                                                           {}
#line 1970 "parser.tab.c"
    break;

  case 104: /* l_llV: expresionV separadorTK l_llV  */
#line 274 "parser.y"
                                    {}
#line 1976 "parser.tab.c"
    break;

  case 105: /* l_llV: expresionV  */
#line 275 "parser.y"
                     {}
#line 1982 "parser.tab.c"
    break;


#line 1986 "parser.tab.c"

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

#line 278 "parser.y"

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


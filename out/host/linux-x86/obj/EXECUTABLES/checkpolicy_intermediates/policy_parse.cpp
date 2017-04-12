/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 31 "external/selinux/checkpolicy/policy_parse.y"

#include <sys/types.h>
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>

#include <sepol/policydb/expand.h>
#include <sepol/policydb/policydb.h>
#include <sepol/policydb/services.h>
#include <sepol/policydb/conditional.h>
#include <sepol/policydb/flask.h>
#include <sepol/policydb/hierarchy.h>
#include <sepol/policydb/polcaps.h>
#include "queue.h"
#include "checkpolicy.h"
#include "module_compiler.h"
#include "policy_define.h"

extern policydb_t *policydbp;
extern unsigned int pass;

extern char yytext[];
extern int yylex(void);
extern int yywarn(const char *msg);
extern int yyerror(const char *msg);

typedef int (* require_func_t)(int pass);


/* Line 371 of yacc.c  */
#line 105 "out/host/linux-x86/obj/EXECUTABLES/checkpolicy_intermediates/policy_parse.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "policy_parse.hpp".  */
#ifndef YY_YY_OUT_HOST_LINUX_X86_OBJ_EXECUTABLES_CHECKPOLICY_INTERMEDIATES_POLICY_PARSE_HPP_INCLUDED
# define YY_YY_OUT_HOST_LINUX_X86_OBJ_EXECUTABLES_CHECKPOLICY_INTERMEDIATES_POLICY_PARSE_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PATH = 258,
     QPATH = 259,
     FILENAME = 260,
     CLONE = 261,
     COMMON = 262,
     CLASS = 263,
     CONSTRAIN = 264,
     VALIDATETRANS = 265,
     INHERITS = 266,
     SID = 267,
     ROLE = 268,
     ROLEATTRIBUTE = 269,
     ATTRIBUTE_ROLE = 270,
     ROLES = 271,
     TYPEALIAS = 272,
     TYPEATTRIBUTE = 273,
     TYPEBOUNDS = 274,
     TYPE = 275,
     TYPES = 276,
     ALIAS = 277,
     ATTRIBUTE = 278,
     BOOL = 279,
     TUNABLE = 280,
     IF = 281,
     ELSE = 282,
     TYPE_TRANSITION = 283,
     TYPE_MEMBER = 284,
     TYPE_CHANGE = 285,
     ROLE_TRANSITION = 286,
     RANGE_TRANSITION = 287,
     SENSITIVITY = 288,
     DOMINANCE = 289,
     DOM = 290,
     DOMBY = 291,
     INCOMP = 292,
     CATEGORY = 293,
     LEVEL = 294,
     RANGE = 295,
     MLSCONSTRAIN = 296,
     MLSVALIDATETRANS = 297,
     USER = 298,
     NEVERALLOW = 299,
     ALLOW = 300,
     AUDITALLOW = 301,
     AUDITDENY = 302,
     DONTAUDIT = 303,
     SOURCE = 304,
     TARGET = 305,
     SAMEUSER = 306,
     FSCON = 307,
     PORTCON = 308,
     NETIFCON = 309,
     NODECON = 310,
     PIRQCON = 311,
     IOMEMCON = 312,
     IOPORTCON = 313,
     PCIDEVICECON = 314,
     DEVICETREECON = 315,
     FSUSEXATTR = 316,
     FSUSETASK = 317,
     FSUSETRANS = 318,
     GENFSCON = 319,
     U1 = 320,
     U2 = 321,
     U3 = 322,
     R1 = 323,
     R2 = 324,
     R3 = 325,
     T1 = 326,
     T2 = 327,
     T3 = 328,
     L1 = 329,
     L2 = 330,
     H1 = 331,
     H2 = 332,
     NOT = 333,
     AND = 334,
     OR = 335,
     XOR = 336,
     CTRUE = 337,
     CFALSE = 338,
     IDENTIFIER = 339,
     NUMBER = 340,
     EQUALS = 341,
     NOTEQUAL = 342,
     IPV4_ADDR = 343,
     IPV6_ADDR = 344,
     MODULE = 345,
     VERSION_IDENTIFIER = 346,
     REQUIRE = 347,
     OPTIONAL = 348,
     POLICYCAP = 349,
     PERMISSIVE = 350,
     FILESYSTEM = 351,
     DEFAULT_USER = 352,
     DEFAULT_ROLE = 353,
     DEFAULT_TYPE = 354,
     DEFAULT_RANGE = 355,
     LOW_HIGH = 356,
     LOW = 357,
     HIGH = 358
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 68 "external/selinux/checkpolicy/policy_parse.y"

	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;


/* Line 387 of yacc.c  */
#line 260 "out/host/linux-x86/obj/EXECUTABLES/checkpolicy_intermediates/policy_parse.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_OUT_HOST_LINUX_X86_OBJ_EXECUTABLES_CHECKPOLICY_INTERMEDIATES_POLICY_PARSE_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 288 "out/host/linux-x86/obj/EXECUTABLES/checkpolicy_intermediates/policy_parse.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1024

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  114
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  190
/* YYNRULES -- Number of rules.  */
#define YYNRULES  391
/* YYNRULES -- Number of states.  */
#define YYNSTATES  765

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   358

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     109,   110,   113,     2,   108,   111,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,   106,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   104,     2,   105,   112,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     8,     9,    10,    28,    30,
      33,    36,    38,    41,    44,    47,    49,    50,    52,    55,
      61,    63,    66,    72,    77,    85,    87,    88,    90,    92,
      94,    96,    99,   102,   105,   108,   113,   118,   123,   128,
     133,   138,   144,   150,   156,   162,   168,   174,   176,   177,
     183,   185,   188,   193,   197,   200,   203,   208,   210,   211,
     213,   216,   221,   225,   227,   230,   236,   240,   242,   245,
     247,   249,   255,   260,   262,   265,   267,   269,   271,   273,
     275,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   309,   311,   313,
     317,   323,   328,   333,   338,   343,   346,   347,   352,   357,
     359,   361,   368,   373,   374,   378,   381,   385,   389,   393,
     397,   401,   403,   405,   408,   409,   411,   413,   415,   424,
     432,   440,   448,   450,   452,   454,   456,   464,   472,   480,
     488,   497,   505,   513,   521,   527,   535,   537,   539,   541,
     543,   545,   547,   549,   551,   559,   567,   575,   583,   591,
     599,   607,   615,   619,   625,   630,   635,   641,   649,   654,
     656,   659,   663,   669,   674,   676,   677,   679,   682,   684,
     686,   692,   697,   701,   704,   708,   712,   714,   718,   722,
     726,   727,   732,   733,   738,   739,   744,   745,   750,   751,
     756,   757,   762,   763,   768,   769,   774,   775,   780,   782,
     783,   788,   789,   794,   797,   798,   803,   804,   809,   813,
     817,   821,   825,   829,   833,   835,   837,   839,   841,   843,
     845,   847,   850,   857,   862,   863,   865,   868,   872,   874,
     875,   877,   880,   882,   884,   886,   888,   890,   894,   898,
     904,   908,   914,   918,   922,   924,   925,   927,   930,   936,
     940,   942,   943,   945,   948,   953,   960,   962,   963,   965,
     968,   973,   975,   976,   978,   981,   986,   991,   993,   994,
     996,   999,  1004,  1009,  1014,  1016,  1017,  1019,  1022,  1029,
    1030,  1038,  1043,  1045,  1047,  1049,  1052,  1055,  1059,  1061,
    1064,  1065,  1070,  1072,  1074,  1076,  1083,  1086,  1087,  1091,
    1093,  1097,  1099,  1101,  1105,  1107,  1109,  1111,  1113,  1115,
    1118,  1121,  1122,  1127,  1129,  1131,  1133,  1137,  1139,  1142,
    1147,  1149,  1152,  1154,  1156,  1159,  1163,  1165,  1168,  1170,
    1171,  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,
    1193,  1195,  1199,  1203,  1206,  1211,  1213,  1215,  1217,  1220,
    1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,  1242,  1245,
    1247,  1250,  1254,  1258,  1260,  1262,  1264,  1266,  1268,  1270,
    1272,  1274,  1276,  1278,  1282,  1283,  1290,  1295,  1296,  1298,
    1300,  1303
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     115,     0,    -1,   116,    -1,   286,    -1,    -1,    -1,    -1,
     117,   120,   122,   124,   118,   130,   136,   151,   218,   196,
     119,   221,   231,   244,   247,   234,   223,    -1,   121,    -1,
     120,   121,    -1,     8,   277,    -1,   123,    -1,   122,   123,
      -1,    12,   277,    -1,   125,   128,    -1,   126,    -1,    -1,
     127,    -1,   126,   127,    -1,     7,   277,   104,   272,   105,
      -1,   129,    -1,   128,   129,    -1,     8,   277,   104,   272,
     105,    -1,     8,   277,    11,   277,    -1,     8,   277,    11,
     277,   104,   272,   105,    -1,   131,    -1,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,   131,   132,    -1,   131,
     133,    -1,   131,   134,    -1,   131,   135,    -1,    97,   265,
      49,   106,    -1,    97,   265,    50,   106,    -1,    98,   265,
      49,   106,    -1,    98,   265,    50,   106,    -1,    99,   265,
      49,   106,    -1,    99,   265,    50,   106,    -1,   100,   265,
      49,   102,   106,    -1,   100,   265,    49,   103,   106,    -1,
     100,   265,    49,   101,   106,    -1,   100,   265,    50,   102,
     106,    -1,   100,   265,    50,   103,   106,    -1,   100,   265,
      50,   101,   106,    -1,   137,    -1,    -1,   138,   141,   142,
     145,   147,    -1,   139,    -1,   138,   139,    -1,    33,   277,
     140,   106,    -1,    33,   277,   106,    -1,    22,   265,    -1,
      34,   277,    -1,    34,   104,   272,   105,    -1,   143,    -1,
      -1,   144,    -1,   143,   144,    -1,    38,   277,   140,   106,
      -1,    38,   277,   106,    -1,   146,    -1,   145,   146,    -1,
      39,   277,   107,   262,   106,    -1,    39,   277,   106,    -1,
     148,    -1,   147,   148,    -1,   149,    -1,   150,    -1,    41,
     265,   265,   201,   106,    -1,    42,   265,   201,   106,    -1,
     152,    -1,   151,   152,    -1,   154,    -1,   153,    -1,   164,
      -1,   298,    -1,   284,    -1,   106,    -1,   187,    -1,   188,
      -1,   190,    -1,   191,    -1,   192,    -1,   195,    -1,   189,
      -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,   159,
      -1,   161,    -1,   162,    -1,   176,    -1,   177,    -1,   178,
      -1,   285,    -1,    23,   277,   106,    -1,    20,   277,   140,
     160,   106,    -1,    20,   277,   160,   106,    -1,    17,   277,
     140,   106,    -1,    18,   277,   262,   106,    -1,    19,   277,
     262,   106,    -1,   108,   262,    -1,    -1,    24,   277,   163,
     106,    -1,    25,   277,   163,   106,    -1,    82,    -1,    83,
      -1,    26,   166,   104,   168,   105,   165,    -1,    27,   104,
     168,   105,    -1,    -1,   109,   166,   110,    -1,    78,   166,
      -1,   166,    79,   166,    -1,   166,    80,   166,    -1,   166,
      81,   166,    -1,   166,    86,   166,    -1,   166,    87,   166,
      -1,   167,    -1,   277,    -1,   168,   169,    -1,    -1,   170,
      -1,   171,    -1,   292,    -1,    28,   265,   265,   107,   265,
     277,   280,   106,    -1,    28,   265,   265,   107,   265,   277,
     106,    -1,    29,   265,   265,   107,   265,   277,   106,    -1,
      30,   265,   265,   107,   265,   277,   106,    -1,   172,    -1,
     173,    -1,   174,    -1,   175,    -1,    45,   265,   265,   107,
     265,   265,   106,    -1,    46,   265,   265,   107,   265,   265,
     106,    -1,    47,   265,   265,   107,   265,   265,   106,    -1,
      48,   265,   265,   107,   265,   265,   106,    -1,    28,   265,
     265,   107,   265,   277,   280,   106,    -1,    28,   265,   265,
     107,   265,   277,   106,    -1,    29,   265,   265,   107,   265,
     277,   106,    -1,    30,   265,   265,   107,   265,   277,   106,
      -1,    32,   265,   265,   260,   106,    -1,    32,   265,   265,
     107,   265,   260,   106,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,   186,
      -1,    45,   265,   265,   107,   265,   265,   106,    -1,    46,
     265,   265,   107,   265,   265,   106,    -1,    47,   265,   265,
     107,   265,   265,   106,    -1,    48,   265,   265,   107,   265,
     265,   106,    -1,    44,   265,   265,   107,   265,   265,   106,
      -1,    45,   265,   265,   107,   265,   252,   106,    -1,    46,
     265,   265,   107,   265,   252,   106,    -1,    48,   265,   265,
     107,   265,   252,   106,    -1,    15,   277,   106,    -1,    13,
     277,    21,   265,   106,    -1,    13,   277,   160,   106,    -1,
      34,   104,   193,   105,    -1,    31,   265,   265,   277,   106,
      -1,    31,   265,   265,   107,   265,   277,   106,    -1,    45,
     265,   265,   106,    -1,   194,    -1,   193,   194,    -1,    13,
     271,   106,    -1,    13,   271,   104,   193,   105,    -1,    14,
     277,   262,   106,    -1,   197,    -1,    -1,   198,    -1,   197,
     198,    -1,   199,    -1,   200,    -1,     9,   265,   265,   201,
     106,    -1,    10,   265,   201,   106,    -1,   109,   201,   110,
      -1,    78,   201,    -1,   201,    79,   201,    -1,   201,    80,
     201,    -1,   202,    -1,    65,   216,    66,    -1,    68,   217,
      69,    -1,    71,   216,    72,    -1,    -1,    65,   216,   203,
     269,    -1,    -1,    66,   216,   204,   269,    -1,    -1,    67,
     216,   205,   269,    -1,    -1,    68,   216,   206,   269,    -1,
      -1,    69,   216,   207,   269,    -1,    -1,    70,   216,   208,
     269,    -1,    -1,    71,   216,   209,   269,    -1,    -1,    72,
     216,   210,   269,    -1,    -1,    73,   216,   211,   269,    -1,
      51,    -1,    -1,    49,    13,   212,   269,    -1,    -1,    50,
      13,   213,   269,    -1,    13,   217,    -1,    -1,    49,    20,
     214,   269,    -1,    -1,    50,    20,   215,   269,    -1,    74,
     217,    75,    -1,    74,   217,    77,    -1,    76,   217,    75,
      -1,    76,   217,    77,    -1,    74,   217,    76,    -1,    75,
     217,    77,    -1,    86,    -1,    87,    -1,   216,    -1,    35,
      -1,    36,    -1,    37,    -1,   219,    -1,   218,   219,    -1,
      43,   277,    16,   265,   220,   106,    -1,    39,   261,    40,
     260,    -1,    -1,   222,    -1,   221,   222,    -1,    12,   277,
     258,    -1,   224,    -1,    -1,   225,    -1,   224,   225,    -1,
     226,    -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,
      56,   281,   258,    -1,    57,   282,   258,    -1,    57,   282,
     111,   282,   258,    -1,    58,   281,   258,    -1,    58,   281,
     111,   281,   258,    -1,    59,   281,   258,    -1,    60,   279,
     258,    -1,   232,    -1,    -1,   233,    -1,   232,   233,    -1,
      52,   281,   281,   258,   258,    -1,   235,   238,   241,    -1,
     236,    -1,    -1,   237,    -1,   236,   237,    -1,    53,   277,
     281,   258,    -1,    53,   277,   281,   111,   281,   258,    -1,
     239,    -1,    -1,   240,    -1,   239,   240,    -1,    54,   277,
     258,   258,    -1,   242,    -1,    -1,   243,    -1,   242,   243,
      -1,    55,   251,   251,   258,    -1,    55,   283,   283,   258,
      -1,   245,    -1,    -1,   246,    -1,   245,   246,    -1,    61,
     278,   258,   106,    -1,    62,   277,   258,   106,    -1,    63,
     277,   258,   106,    -1,   248,    -1,    -1,   249,    -1,   248,
     249,    -1,    64,   278,   279,   111,   277,   258,    -1,    -1,
      64,   278,   279,   111,   111,   250,   258,    -1,    64,   278,
     279,   258,    -1,    88,    -1,   257,    -1,   253,    -1,   263,
     257,    -1,   263,   253,    -1,   104,   254,   105,    -1,   255,
      -1,   254,   255,    -1,    -1,   257,   111,   256,   257,    -1,
     257,    -1,   253,    -1,   281,    -1,   277,   107,   277,   107,
     277,   259,    -1,   107,   260,    -1,    -1,   261,   111,   261,
      -1,   261,    -1,   277,   107,   262,    -1,   277,    -1,   277,
      -1,   262,   108,   277,    -1,   112,    -1,   113,    -1,   277,
      -1,   273,    -1,   264,    -1,   263,   277,    -1,   263,   273,
      -1,    -1,   277,   111,   266,   277,    -1,   263,    -1,   264,
      -1,   271,    -1,   104,   270,   105,    -1,   268,    -1,   267,
     271,    -1,   267,   104,   270,   105,    -1,   271,    -1,   270,
     271,    -1,    84,    -1,   277,    -1,   272,   277,    -1,   104,
     274,   105,    -1,   275,    -1,   274,   275,    -1,   277,    -1,
      -1,   111,   276,   277,    -1,   273,    -1,    84,    -1,    96,
      -1,    84,    -1,     3,    -1,     4,    -1,     5,    -1,    85,
      -1,    85,    -1,    89,    -1,    94,   277,   106,    -1,    95,
     277,   106,    -1,   287,   289,    -1,    90,   277,   288,   106,
      -1,    91,    -1,   281,    -1,   251,    -1,   290,   303,    -1,
     290,   291,    -1,   291,    -1,   153,    -1,   154,    -1,   164,
      -1,   292,    -1,   298,    -1,   106,    -1,    92,   104,   293,
     105,    -1,   293,   294,    -1,   294,    -1,   295,   106,    -1,
     296,   297,   106,    -1,     8,   277,   265,    -1,    13,    -1,
      20,    -1,    23,    -1,    15,    -1,    43,    -1,    24,    -1,
      25,    -1,    33,    -1,    38,    -1,   277,    -1,   297,   108,
     277,    -1,    -1,   301,   104,   289,   105,   299,   300,    -1,
     302,   104,   289,   105,    -1,    -1,    93,    -1,    27,    -1,
     219,   303,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   158,   158,   159,   161,   163,   166,   161,   170,   171,
     173,   176,   177,   179,   182,   184,   185,   187,   188,   190,
     193,   194,   196,   198,   200,   203,   204,   206,   207,   208,
     209,   210,   211,   212,   213,   215,   217,   220,   222,   225,
     227,   230,   232,   234,   236,   238,   240,   243,   244,   246,
     248,   249,   251,   253,   256,   258,   260,   263,   264,   266,
     267,   269,   271,   274,   275,   277,   279,   282,   283,   285,
     286,   288,   291,   294,   295,   297,   298,   299,   300,   301,
     302,   304,   305,   306,   307,   308,   309,   310,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   324,
     327,   329,   332,   335,   338,   341,   342,   344,   347,   350,
     352,   355,   358,   361,   363,   365,   368,   371,   374,   377,
     380,   383,   386,   390,   393,   395,   397,   399,   402,   405,
     408,   411,   415,   417,   419,   421,   424,   428,   432,   436,
     441,   443,   445,   447,   450,   452,   455,   456,   457,   458,
     459,   460,   461,   462,   464,   467,   470,   473,   476,   479,
     482,   485,   488,   491,   494,   497,   499,   501,   504,   507,
     509,   512,   514,   517,   520,   521,   523,   524,   526,   527,
     529,   532,   535,   537,   540,   543,   546,   549,   552,   555,
     558,   558,   561,   561,   564,   564,   567,   567,   570,   570,
     573,   573,   576,   576,   579,   579,   582,   582,   585,   588,
     588,   591,   591,   594,   597,   597,   600,   600,   603,   606,
     609,   612,   615,   618,   622,   624,   627,   629,   631,   633,
     636,   637,   639,   642,   643,   645,   646,   648,   651,   651,
     653,   654,   656,   657,   658,   659,   660,   662,   665,   667,
     670,   672,   675,   678,   681,   682,   684,   685,   687,   690,
     692,   693,   695,   696,   698,   700,   703,   704,   706,   707,
     709,   712,   713,   715,   716,   718,   720,   723,   724,   726,
     727,   729,   731,   733,   736,   737,   739,   740,   742,   744,
     744,   746,   749,   752,   754,   756,   758,   762,   764,   765,
     767,   767,   768,   769,   771,   774,   776,   777,   779,   781,
     784,   786,   789,   790,   792,   794,   796,   798,   800,   803,
     806,   809,   809,   812,   815,   818,   819,   820,   821,   822,
     824,   825,   827,   830,   831,   833,   835,   835,   837,   837,
     837,   837,   839,   842,   844,   847,   849,   852,   855,   858,
     861,   864,   867,   872,   877,   880,   882,   884,   886,   888,
     889,   891,   892,   893,   894,   895,   896,   898,   900,   901,
     903,   904,   906,   909,   910,   911,   912,   913,   914,   915,
     916,   917,   919,   921,   925,   924,   929,   931,   933,   936,
     939,   940
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PATH", "QPATH", "FILENAME", "CLONE",
  "COMMON", "CLASS", "CONSTRAIN", "VALIDATETRANS", "INHERITS", "SID",
  "ROLE", "ROLEATTRIBUTE", "ATTRIBUTE_ROLE", "ROLES", "TYPEALIAS",
  "TYPEATTRIBUTE", "TYPEBOUNDS", "TYPE", "TYPES", "ALIAS", "ATTRIBUTE",
  "BOOL", "TUNABLE", "IF", "ELSE", "TYPE_TRANSITION", "TYPE_MEMBER",
  "TYPE_CHANGE", "ROLE_TRANSITION", "RANGE_TRANSITION", "SENSITIVITY",
  "DOMINANCE", "DOM", "DOMBY", "INCOMP", "CATEGORY", "LEVEL", "RANGE",
  "MLSCONSTRAIN", "MLSVALIDATETRANS", "USER", "NEVERALLOW", "ALLOW",
  "AUDITALLOW", "AUDITDENY", "DONTAUDIT", "SOURCE", "TARGET", "SAMEUSER",
  "FSCON", "PORTCON", "NETIFCON", "NODECON", "PIRQCON", "IOMEMCON",
  "IOPORTCON", "PCIDEVICECON", "DEVICETREECON", "FSUSEXATTR", "FSUSETASK",
  "FSUSETRANS", "GENFSCON", "U1", "U2", "U3", "R1", "R2", "R3", "T1", "T2",
  "T3", "L1", "L2", "H1", "H2", "NOT", "AND", "OR", "XOR", "CTRUE",
  "CFALSE", "IDENTIFIER", "NUMBER", "EQUALS", "NOTEQUAL", "IPV4_ADDR",
  "IPV6_ADDR", "MODULE", "VERSION_IDENTIFIER", "REQUIRE", "OPTIONAL",
  "POLICYCAP", "PERMISSIVE", "FILESYSTEM", "DEFAULT_USER", "DEFAULT_ROLE",
  "DEFAULT_TYPE", "DEFAULT_RANGE", "LOW_HIGH", "LOW", "HIGH", "'{'", "'}'",
  "';'", "':'", "','", "'('", "')'", "'-'", "'~'", "'*'", "$accept",
  "policy", "base_policy", "$@1", "$@2", "$@3", "classes", "class_def",
  "initial_sids", "initial_sid_def", "access_vectors", "opt_common_perms",
  "common_perms", "common_perms_def", "av_perms", "av_perms_def",
  "opt_default_rules", "default_rules", "default_user_def",
  "default_role_def", "default_type_def", "default_range_def", "opt_mls",
  "mls", "sensitivities", "sensitivity_def", "alias_def", "dominance",
  "opt_categories", "categories", "category_def", "levels", "level_def",
  "mlspolicy", "mlspolicy_decl", "mlsconstraint_def",
  "mlsvalidatetrans_def", "te_rbac", "te_rbac_decl", "rbac_decl",
  "te_decl", "attribute_def", "type_def", "typealias_def",
  "typeattribute_def", "typebounds_def", "opt_attr_list", "bool_def",
  "tunable_def", "bool_val", "cond_stmt_def", "cond_else", "cond_expr",
  "cond_expr_prim", "cond_pol_list", "cond_rule_def",
  "cond_transition_def", "cond_te_avtab_def", "cond_allow_def",
  "cond_auditallow_def", "cond_auditdeny_def", "cond_dontaudit_def",
  "transition_def", "range_trans_def", "te_avtab_def", "allow_def",
  "auditallow_def", "auditdeny_def", "dontaudit_def", "neverallow_def",
  "operation_allow_def", "operation_auditallow_def",
  "operation_dontaudit_def", "attribute_role_def", "role_type_def",
  "role_attr_def", "role_dominance", "role_trans_def", "role_allow_def",
  "roles", "role_def", "roleattribute_def", "opt_constraints",
  "constraints", "constraint_decl", "constraint_def", "validatetrans_def",
  "cexpr", "cexpr_prim", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "op", "role_mls_op",
  "users", "user_def", "opt_mls_user", "initial_sid_contexts",
  "initial_sid_context_def", "opt_dev_contexts", "dev_contexts",
  "dev_context_def", "pirq_context_def", "iomem_context_def",
  "ioport_context_def", "pci_context_def", "dtree_context_def",
  "opt_fs_contexts", "fs_contexts", "fs_context_def", "net_contexts",
  "opt_port_contexts", "port_contexts", "port_context_def",
  "opt_netif_contexts", "netif_contexts", "netif_context_def",
  "opt_node_contexts", "node_contexts", "node_context_def", "opt_fs_uses",
  "fs_uses", "fs_use_def", "opt_genfs_contexts", "genfs_contexts",
  "genfs_context_def", "$@17", "ipv4_addr_def", "operations",
  "nested_operation_set", "nested_operation_list",
  "nested_operation_element", "$@18", "operation", "security_context_def",
  "opt_mls_range_def", "mls_range_def", "mls_level_def", "id_comma_list",
  "tilde", "asterisk", "names", "$@19", "tilde_push", "asterisk_push",
  "names_push", "identifier_list_push", "identifier_push",
  "identifier_list", "nested_id_set", "nested_id_list",
  "nested_id_element", "$@20", "identifier", "filesystem", "path",
  "filename", "number", "number64", "ipv6_addr", "policycap_def",
  "permissive_def", "module_policy", "module_def", "version_identifier",
  "avrules_block", "avrule_decls", "avrule_decl", "require_block",
  "require_list", "require_decl", "require_class", "require_decl_def",
  "require_id_list", "optional_block", "$@21", "optional_else",
  "optional_decl", "else_decl", "avrule_user_defs", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   123,   125,    59,    58,    44,    40,
      41,    45,   126,    42
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   114,   115,   115,   117,   118,   119,   116,   120,   120,
     121,   122,   122,   123,   124,   125,   125,   126,   126,   127,
     128,   128,   129,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   135,   135,   136,   136,   137,
     138,   138,   139,   139,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   151,   151,   152,   152,   152,   152,   152,
     152,   153,   153,   153,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   155,
     156,   156,   157,   158,   159,   160,   160,   161,   162,   163,
     163,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   171,   171,   171,   171,   172,   173,   174,   175,
     176,   176,   176,   176,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   191,   192,   193,
     193,   194,   194,   195,   196,   196,   197,   197,   198,   198,
     199,   200,   201,   201,   201,   201,   201,   202,   202,   202,
     203,   202,   204,   202,   205,   202,   206,   202,   207,   202,
     208,   202,   209,   202,   210,   202,   211,   202,   202,   212,
     202,   213,   202,   202,   214,   202,   215,   202,   202,   202,
     202,   202,   202,   202,   216,   216,   217,   217,   217,   217,
     218,   218,   219,   220,   220,   221,   221,   222,   223,   223,
     224,   224,   225,   225,   225,   225,   225,   226,   227,   227,
     228,   228,   229,   230,   231,   231,   232,   232,   233,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   241,   241,   242,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   246,   247,   247,   248,   248,   249,   250,
     249,   249,   251,   252,   252,   252,   252,   253,   254,   254,
     256,   255,   255,   255,   257,   258,   259,   259,   260,   260,
     261,   261,   262,   262,   263,   264,   265,   265,   265,   265,
     265,   266,   265,   267,   268,   269,   269,   269,   269,   269,
     270,   270,   271,   272,   272,   273,   274,   274,   275,   276,
     275,   275,   277,   278,   278,   279,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   288,   288,   289,   290,
     290,   291,   291,   291,   291,   291,   291,   292,   293,   293,
     294,   294,   295,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   299,   298,   300,   300,   301,   302,
     303,   303
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,    17,     1,     2,
       2,     1,     2,     2,     2,     1,     0,     1,     2,     5,
       1,     2,     5,     4,     7,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     5,     1,     0,     5,
       1,     2,     4,     3,     2,     2,     4,     1,     0,     1,
       2,     4,     3,     1,     2,     5,     3,     1,     2,     1,
       1,     5,     4,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     4,     4,     4,     4,     2,     0,     4,     4,     1,
       1,     6,     4,     0,     3,     2,     3,     3,     3,     3,
       3,     1,     1,     2,     0,     1,     1,     1,     8,     7,
       7,     7,     1,     1,     1,     1,     7,     7,     7,     7,
       8,     7,     7,     7,     5,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     7,     7,     7,     7,
       7,     7,     3,     5,     4,     4,     5,     7,     4,     1,
       2,     3,     5,     4,     1,     0,     1,     2,     1,     1,
       5,     4,     3,     2,     3,     3,     1,     3,     3,     3,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     1,     0,
       4,     0,     4,     2,     0,     4,     0,     4,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     6,     4,     0,     1,     2,     3,     1,     0,
       1,     2,     1,     1,     1,     1,     1,     3,     3,     5,
       3,     5,     3,     3,     1,     0,     1,     2,     5,     3,
       1,     0,     1,     2,     4,     6,     1,     0,     1,     2,
       4,     1,     0,     1,     2,     4,     4,     1,     0,     1,
       2,     4,     4,     4,     1,     0,     1,     2,     6,     0,
       7,     4,     1,     1,     1,     2,     2,     3,     1,     2,
       0,     4,     1,     1,     1,     6,     2,     0,     3,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     2,
       2,     0,     4,     1,     1,     1,     3,     1,     2,     4,
       1,     2,     1,     1,     2,     3,     1,     2,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     4,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     1,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     6,     4,     0,     1,     1,
       2,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     2,     0,     3,     0,   342,     0,     1,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,   366,   361,
     362,    88,    89,    90,    91,    92,    93,    94,   363,    95,
      96,    97,   146,   147,   148,   149,   150,   151,   152,   153,
      81,    82,    87,    83,    84,    85,    86,    98,   353,   391,
     360,   364,   365,     0,   348,   292,   355,   357,   356,     0,
      10,     0,     9,    16,    11,   106,     0,     0,     0,     0,
       0,   106,     0,     0,     0,     0,     0,     0,   121,   122,
       0,   314,   315,     0,   318,     0,   317,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   391,   359,   358,     0,   354,    13,     0,    12,     5,
       0,    15,    17,     0,     0,     0,     0,   312,   162,     0,
       0,     0,     0,   106,     0,    99,   109,   110,     0,     0,
     115,     0,     0,     0,     0,     0,     0,   124,   339,   341,
       0,   336,   338,   320,   319,     0,   321,     0,     0,     0,
       0,     0,     0,   169,     0,     0,     0,     0,     0,     0,
     373,   376,   374,   375,   378,   379,   380,   381,   377,     0,
     369,     0,     0,   352,     0,   390,     0,     0,    26,     0,
      14,    20,    18,     0,   105,   164,   173,     0,    54,   102,
     103,   104,     0,   101,   107,   108,   114,   116,   117,   118,
     119,   120,     0,     0,   335,   337,     0,     0,     0,     0,
       0,     0,     0,     0,   309,   311,   332,     0,   165,   170,
       0,   168,     0,     0,     0,     0,     0,   367,   368,   370,
     382,     0,     0,   384,     0,     0,     0,     0,     0,    48,
      25,    27,    28,    29,    30,     0,    21,   163,   313,   100,
       0,     0,     0,     0,     0,     0,     0,   113,   123,   125,
     126,   132,   133,   134,   135,   127,   340,     0,   322,     0,
       0,     0,   166,     0,   144,     0,     0,     0,   171,     0,
       0,     0,     0,     0,   372,   371,     0,   234,   387,     0,
     333,     0,     0,     0,     0,     0,     0,    47,     0,    50,
      31,    32,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
     308,   310,     0,     0,     0,     0,   294,   293,     0,     0,
     304,     0,     0,     0,     0,     0,   383,     0,     0,   389,
     385,     0,    19,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,     0,    73,    76,    75,    77,
      79,    78,     0,    51,    58,    23,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   347,   141,     0,   142,   143,
     167,   145,   172,   158,   303,     0,   298,   302,   159,   296,
     295,   154,   160,   155,   156,   161,   157,     0,   232,     0,
      35,    36,    37,    38,    39,    40,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    74,   175,   230,     0,    55,
       0,     0,    57,    59,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,   140,     0,   297,   299,   300,     0,
       0,    43,    41,    42,    46,    44,    45,    52,   351,     0,
       0,     6,   174,   176,   178,   179,   231,     0,     0,     0,
       0,    63,    60,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,   233,   386,     0,     0,     0,   177,    56,
      62,     0,     0,     0,     0,    64,    49,    67,    69,    70,
      24,     0,     0,     0,     0,     0,     0,     0,   301,     0,
       0,     0,     0,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   186,
       0,   255,   235,    61,    66,     0,     0,     0,    68,   129,
       0,   130,   131,   136,   137,   138,   139,     0,   227,   228,
     229,   224,   225,   226,   213,   209,   214,   211,   216,   190,
     192,   194,   196,     0,   198,   200,   202,   204,   206,     0,
       0,     0,   183,     0,     0,     0,   181,     0,     0,   236,
     278,   254,   256,     0,     0,     0,   128,   180,     0,     0,
       0,     0,   187,     0,     0,     0,     0,   188,     0,     0,
     189,     0,     0,     0,   218,   222,   219,   223,   220,   221,
     182,   184,   185,   237,     0,     0,     0,     0,     0,   285,
     277,   279,   257,    65,     0,    72,     0,   323,   324,     0,
     327,   210,   325,   215,   212,   217,   191,   193,   195,   197,
     199,   201,   203,   205,   207,     0,     0,   344,   343,     0,
       0,     0,     0,   261,   284,   286,   280,    71,     0,   330,
       0,   328,     0,     0,     0,     0,     0,     0,     0,   239,
     267,   260,   262,   287,   326,   331,     0,     0,   258,   281,
     282,   283,   345,   346,     0,     0,     0,     0,     0,     0,
       0,     7,   238,   240,   242,   243,   244,   245,   246,     0,
     272,   266,   268,   263,   329,   307,     0,   291,     0,     0,
     349,     0,     0,     0,     0,   241,     0,     0,   259,   271,
     273,   269,     0,   305,   289,     0,     0,   264,   247,     0,
     248,     0,   250,   252,   253,     0,   350,     0,     0,   274,
     306,     0,   288,     0,     0,     0,   270,     0,     0,   290,
     265,   249,   251,   275,   276
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,   198,   497,    11,    12,    83,    84,
     129,   130,   131,   132,   200,   201,   259,   260,   261,   262,
     263,   264,   316,   317,   318,   319,   140,   384,   441,   442,
     443,   480,   481,   506,   507,   508,   509,   375,   376,    39,
      40,    41,    42,    43,    44,    45,   135,    46,    47,   148,
      48,   334,    97,    98,   222,   278,   279,   280,   281,   282,
     283,   284,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,   172,
     173,    66,   471,   472,   473,   474,   475,   538,   539,   603,
     604,   605,   606,   608,   609,   611,   612,   613,   598,   600,
     599,   601,   563,   564,   436,   121,   358,   541,   542,   701,
     702,   703,   704,   705,   706,   707,   708,   590,   591,   592,
     679,   680,   681,   682,   710,   711,   712,   728,   729,   730,
     629,   630,   631,   663,   664,   665,   751,    77,   345,   346,
     405,   406,   492,   347,   623,   733,   233,   234,   136,   103,
     104,   105,   227,   639,   640,   641,   668,   642,   309,   106,
     160,   161,   223,   107,   659,   694,   397,   350,   721,   748,
     380,    67,     5,     6,    79,    68,    69,    70,    71,   189,
     190,   191,   192,   251,    72,   308,   360,    73,   361,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -616
static const yytype_int16 yypact[] =
{
     102,   127,   221,  -616,   216,  -616,   866,  -616,   334,  -616,
     127,   101,  -616,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,    -9,     3,     3,     3,     3,     3,   170,
       3,     3,     3,     3,     3,   183,  -616,   127,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   828,
    -616,  -616,  -616,   187,  -616,  -616,  -616,  -616,  -616,   206,
    -616,   127,  -616,   228,  -616,    20,   127,   209,   315,   127,
     127,    12,   239,   200,   200,    -9,    -9,   230,  -616,  -616,
      -6,  -616,  -616,   217,  -616,     3,  -616,   254,     3,     3,
       3,     3,   367,     3,     3,     3,     3,     3,   480,   287,
     127,   359,  -616,  -616,   866,  -616,  -616,   127,  -616,  -616,
     405,   428,  -616,     3,   127,   342,   330,  -616,  -616,     3,
     354,   351,   381,   360,   368,  -616,  -616,  -616,   371,   380,
      88,   115,    -9,    -9,    -9,    -9,    -9,  -616,  -616,  -616,
     192,  -616,  -616,  -616,  -616,   335,  -616,   395,   408,    55,
      92,   427,    33,  -616,   421,   253,   424,   438,   454,   127,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,    24,
    -616,   457,   127,  -616,   551,  -616,   464,   466,   276,   127,
     405,  -616,  -616,   465,   467,  -616,  -616,   127,  -616,  -616,
    -616,  -616,   468,  -616,  -616,  -616,  -616,    88,   265,   271,
    -616,  -616,    25,   127,  -616,  -616,     3,   127,     3,     3,
       3,   477,     3,   479,   461,   470,  -616,   390,  -616,  -616,
       3,  -616,     3,     3,     3,     3,     3,  -616,  -616,  -616,
    -616,   400,     3,  -616,   127,     3,     3,     3,     3,   540,
     276,  -616,  -616,  -616,  -616,    27,  -616,  -616,  -616,  -616,
       3,     3,     3,     3,     3,     3,     3,   560,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,   127,  -616,   127,
     127,   127,  -616,   127,  -616,   127,   127,   367,  -616,     3,
     194,   194,     3,   194,  -616,  -616,   127,   550,   563,   -26,
    -616,   348,   358,   441,   448,   127,   918,  -616,   502,  -616,
    -616,  -616,  -616,  -616,   127,   127,     3,     3,     3,     3,
       3,     3,     3,   491,  -616,    21,   490,   492,   493,   494,
    -616,   467,    39,   495,    -8,   496,  -616,  -616,   196,   497,
    -616,   498,   499,   507,   508,   509,  -616,   127,   510,  -616,
    -616,   513,  -616,  -616,   512,   514,   516,   517,   518,   519,
     252,   325,    18,   127,  -616,   386,  -616,  -616,  -616,  -616,
    -616,  -616,   238,  -616,   559,   515,     9,   521,   522,   523,
     524,   525,   526,   527,  -616,  -616,  -616,   534,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,   214,  -616,   530,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,   602,  -616,   866,
    -616,  -616,  -616,  -616,  -616,  -616,   537,   538,   539,   541,
     542,   543,  -616,   544,   545,  -616,    54,  -616,   127,  -616,
     127,   607,   559,  -616,   127,  -616,     3,     3,     3,     3,
       3,     3,     3,   118,  -616,   -20,  -616,  -616,  -616,   127,
     547,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,     3,
       3,  -616,   528,  -616,  -616,  -616,  -616,    74,    34,   127,
     382,  -616,  -616,   134,   127,   127,   127,     3,     3,     3,
       3,  -616,   568,  -616,  -616,     3,   195,   644,  -616,  -616,
    -616,   555,   434,     3,     3,  -616,   501,  -616,  -616,  -616,
    -616,    28,   564,   565,   567,   569,   570,   572,  -616,   195,
     168,   300,   328,  -616,   469,   469,   469,   168,   469,   469,
     469,   469,   469,   168,   168,   168,   195,   195,    81,  -616,
     127,    31,  -616,  -616,  -616,   127,     3,   195,  -616,  -616,
     573,  -616,  -616,  -616,  -616,  -616,  -616,   153,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   591,
    -616,  -616,   600,   605,  -616,  -616,   608,  -616,  -616,   379,
     604,   432,  -616,   -19,   195,   195,  -616,   127,   568,  -616,
     410,   630,  -616,   404,   195,   169,  -616,  -616,   130,   130,
     130,   130,  -616,   130,   130,   130,   130,  -616,   130,   130,
    -616,   130,   130,   130,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,   606,  -616,   576,   568,    61,   127,   127,   620,
     410,  -616,  -616,  -616,   171,  -616,   427,  -616,  -616,   245,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,   127,   127,  -616,  -616,   127,
     127,   127,    61,   634,   620,  -616,  -616,  -616,   152,  -616,
     427,  -616,   581,   127,   583,   584,   590,   554,   127,   406,
     643,   634,  -616,  -616,  -616,  -616,   188,   127,  -616,  -616,
    -616,  -616,  -616,  -616,   -10,   568,   568,   613,   568,   568,
     554,  -616,   406,  -616,  -616,  -616,  -616,  -616,  -616,   127,
     645,   643,  -616,  -616,  -616,   592,    -3,  -616,    66,   127,
    -616,    98,   174,   127,   127,  -616,   127,   471,  -616,   645,
    -616,  -616,   127,  -616,  -616,   127,   568,  -616,  -616,   613,
    -616,   568,  -616,  -616,  -616,   127,  -616,   614,   612,  -616,
    -616,   127,  -616,   127,   127,   127,  -616,   127,   127,  -616,
    -616,  -616,  -616,  -616,  -616
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -616,  -616,  -616,  -616,  -616,  -616,  -616,   692,  -616,   621,
    -616,  -616,  -616,   574,  -616,   506,  -616,  -616,   447,   449,
     450,   451,  -616,  -616,  -616,   394,   -88,  -616,  -616,  -616,
     272,  -616,   233,  -616,   210,  -616,  -616,  -616,   344,  -265,
    -250,  -616,  -616,  -616,  -616,  -616,   -32,  -616,  -616,   632,
    -234,  -616,    75,  -616,   333,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   431,
    -149,  -616,  -616,  -616,   257,  -616,  -616,  -347,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,    22,  -156,  -616,  -330,  -616,  -616,   189,  -616,
    -616,    36,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   133,
    -616,  -616,  -616,    52,  -616,  -616,    29,  -616,  -616,     6,
    -616,  -616,   106,  -616,  -616,    77,  -616,  -615,   213,  -313,
    -616,   337,  -616,  -319,  -538,  -616,  -292,  -253,   -84,  -273,
     -79,   336,  -616,  -616,  -616,  -217,    69,  -169,  -301,   -92,
    -616,   585,  -616,    -1,    84,    43,   236,    -4,    10,     0,
    -616,  -616,  -616,  -616,  -616,  -117,  -616,   682,  -212,  -616,
     566,  -616,  -616,  -616,  -226,  -616,  -616,  -616,  -616,   637
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -227
static const yytype_int16 yytable[] =
{
       8,   339,   237,   143,    78,   141,   142,   196,   159,    80,
     285,   163,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    99,   239,   386,   407,   395,   348,   348,   410,
     348,   404,   179,   395,   139,   409,   119,   180,   324,   181,
     139,   133,   340,   540,   182,   437,   171,   183,   184,   185,
     204,   377,   171,   270,   271,   272,   139,   186,     7,   144,
     584,   585,   187,   469,   470,    74,   378,   188,   159,    95,
     273,   274,   275,   276,     7,     7,     7,    74,     7,   362,
     126,     7,   379,   588,   455,   137,   407,     7,   137,   137,
     381,   620,   404,     7,    99,    99,   344,   120,   100,   162,
      96,   716,   164,   158,   417,   158,   476,   100,   734,    10,
     377,   212,   747,    81,   445,   101,   102,    35,   673,   194,
     134,   674,   675,   676,   432,   378,   197,   396,   134,   247,
     277,   325,   757,   137,   549,   688,   407,   477,   238,     7,
     500,   379,   404,   483,   402,   657,   270,   271,   272,   381,
       7,    99,    99,    99,    99,    99,   717,   658,     7,   162,
     584,   585,   230,   273,   274,   275,   276,   493,   231,   235,
     150,   151,   557,   518,   155,   156,     7,   736,   246,   499,
     737,   738,     7,   740,   742,   743,   744,   586,   745,   582,
     583,   250,     1,   239,   152,   153,   154,   752,   265,   232,
     595,   155,   156,   558,   559,   560,   268,   756,   520,   739,
      35,     7,   341,   759,   236,   760,   761,   762,     7,   763,
     764,     9,   286,   491,    10,   216,   288,   217,   218,   219,
     220,   221,   584,   585,   636,   127,   236,   621,   622,   510,
      81,   285,   101,   102,   521,   522,   523,   634,   584,   585,
     584,   585,   159,   310,   561,   562,   163,   684,     7,   597,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   236,   536,   112,   635,     7,   667,     7,    74,
       7,    74,   146,   147,   433,   741,   335,   118,   336,   337,
     338,   124,   235,   714,   235,   137,   100,   224,   344,    74,
     344,     7,   460,   158,   537,   356,   101,   102,   363,   152,
     153,   154,   125,   565,   372,   138,   155,   156,   455,   456,
     566,   100,     7,   385,   310,   637,   637,   637,   637,   236,
     637,   637,   637,   637,   157,   637,   637,   139,   637,   637,
     637,   567,   438,   162,   152,   145,   154,   164,   568,   670,
     152,   155,   156,   426,   427,   428,   235,   155,   156,   241,
     242,   108,   109,   110,   111,   166,   113,   114,   115,   116,
     117,   573,   434,   255,   256,   257,   258,   579,   580,   581,
     171,   439,   643,   644,   645,   363,   646,   647,   648,   649,
     501,   650,   651,   193,   652,   653,   654,   364,   365,    13,
      14,    15,   120,    16,    17,    18,    19,   366,   367,    20,
      21,    22,    23,   199,    24,    25,    26,    27,    28,    74,
      29,   479,    75,   503,   504,    76,   429,   430,   431,   120,
      30,    31,    32,    33,    34,   127,   206,   310,   207,   478,
     750,   165,   226,   310,   167,   168,   169,   170,   205,   174,
     175,   176,   177,   178,   614,   615,   616,   210,   235,   207,
     209,   593,   696,   697,   698,   699,   700,   669,   134,   203,
     671,   626,   627,   628,   213,   208,   363,   214,   502,    36,
     373,    37,   363,   511,   512,   513,   215,   211,   179,   207,
     368,   369,   374,   180,   297,   181,   298,   370,   371,   685,
     182,   669,   228,   183,   184,   185,   305,   618,   306,   619,
     633,   236,   207,   186,   351,   229,   354,   685,   187,   638,
     638,   638,   638,   188,   638,   638,   638,   638,   240,   638,
     638,   243,   638,   638,   638,   315,   382,   469,   470,   587,
     544,   545,   503,   504,   137,   244,   569,   570,   571,   572,
     574,   575,   576,   577,   578,   561,   562,   692,   693,    75,
     746,   245,   287,   249,   289,   290,   291,   252,   293,   253,
     254,   267,   295,   315,   269,   207,   299,   296,   300,   301,
     302,   303,   304,   292,   625,   294,   624,   333,   307,   357,
     359,   311,   312,   313,   314,   394,   398,   440,   399,   400,
     401,   403,   408,   411,   412,   413,   326,   327,   328,   329,
     330,   331,   332,   414,   415,   416,   418,   419,   420,   444,
     421,   656,   422,   423,   424,   425,   660,   661,   446,   447,
     448,   449,   450,   451,   452,   343,   349,   352,   353,   355,
     454,   458,   459,   461,   462,   463,   479,   464,   465,   466,
     467,   468,   494,    74,   672,   624,   540,   602,   624,   624,
     624,   543,   387,   388,   389,   390,   391,   392,   393,  -226,
     551,   552,   624,   553,   607,   554,   555,   695,   556,   596,
     610,   617,   588,   655,   662,   584,   715,   678,   687,   689,
     690,   718,   719,   624,   722,   723,   691,   709,   720,   732,
     727,   746,    75,    82,   128,   202,   266,   320,   726,   321,
     322,   323,   383,   505,   482,   735,   548,   624,   624,   435,
     624,   624,   624,   624,   632,   624,   149,   453,   342,   498,
     589,   235,   753,   713,   624,   749,   666,   755,   725,   686,
     731,   683,   457,   724,   624,   225,   677,   550,   758,   754,
     624,   122,   624,   624,   624,   248,   624,   624,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   484,   485,   486,   487,   488,   489,   490,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,   496,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   514,   515,   516,   517,     0,     0,     0,
       0,   519,     0,     0,     0,     0,     0,     0,     0,   546,
     547,    13,    14,    15,     0,    16,    17,    18,    19,     0,
       0,    20,    21,    22,    23,     0,    24,    25,    26,    27,
      28,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,   120,    30,    31,    32,    33,    34,     0,     0,    13,
      14,    15,   594,    16,    17,    18,    19,     0,     0,    20,
      21,    22,    23,     0,    24,    25,    26,    27,    28,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
      35,    36,     0,    37,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    38,    16,    17,    18,    19,     0,
       0,    20,    21,    22,    23,     0,    24,    25,    26,    27,
      28,     0,    29,     0,     0,     0,     0,     0,    35,    36,
       0,    37,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,   373,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   374
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-616)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       1,   293,   171,    91,     8,    89,    90,   124,   100,    10,
     222,   103,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   172,   325,   344,     5,   300,   301,   348,
     303,   344,     8,     5,    22,   348,    37,    13,    11,    15,
      22,    21,   295,    12,    20,   375,    13,    23,    24,    25,
     134,   316,    13,    28,    29,    30,    22,    33,    84,    91,
      79,    80,    38,     9,    10,    85,   316,    43,   160,    78,
      45,    46,    47,    48,    84,    84,    84,    85,    84,   105,
      81,    84,   316,    52,   104,    86,   405,    84,    89,    90,
     316,   110,   405,    84,    95,    96,   104,    43,   104,   100,
     109,   111,   103,   111,   357,   111,   436,   104,   111,     8,
     375,   143,   727,    12,   105,   112,   113,    92,   656,   120,
     108,   659,   660,   661,   106,   375,   127,   106,   108,   105,
     105,   104,   747,   134,   106,   673,   455,   438,   105,    84,
     106,   375,   455,   444,   105,    84,    28,    29,    30,   375,
      84,   152,   153,   154,   155,   156,   694,    96,    84,   160,
      79,    80,   107,    45,    46,    47,    48,   459,   169,   170,
      95,    96,   519,   492,    86,    87,    84,   111,   179,   105,
     718,   719,    84,   721,   722,   723,   724,   106,   726,   536,
     537,   192,    90,   342,    79,    80,    81,   735,   199,   107,
     547,    86,    87,    35,    36,    37,   207,   745,    13,   111,
      92,    84,   296,   751,    84,   753,   754,   755,    84,   757,
     758,     0,   223,   105,     8,   110,   227,   152,   153,   154,
     155,   156,    79,    80,   104,     7,    84,   584,   585,   105,
      12,   453,   112,   113,    49,    50,    51,   594,    79,    80,
      79,    80,   344,   254,    86,    87,   348,   105,    84,   106,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    84,    78,   104,   106,    84,   106,    84,    85,
      84,    85,    82,    83,   372,   111,   287,   104,   289,   290,
     291,   104,   293,   105,   295,   296,   104,   105,   104,    85,
     104,    84,   419,   111,   109,   306,   112,   113,   309,    79,
      80,    81,   106,    13,   315,   106,    86,    87,   104,   105,
      20,   104,    84,   324,   325,   598,   599,   600,   601,    84,
     603,   604,   605,   606,   104,   608,   609,    22,   611,   612,
     613,    13,   104,   344,    79,   106,    81,   348,    20,   104,
      79,    86,    87,   101,   102,   103,   357,    86,    87,   106,
     107,    25,    26,    27,    28,   111,    30,    31,    32,    33,
      34,   527,   373,    97,    98,    99,   100,   533,   534,   535,
      13,   382,   599,   600,   601,   386,   603,   604,   605,   606,
     478,   608,   609,   106,   611,   612,   613,    49,    50,    13,
      14,    15,    43,    17,    18,    19,    20,    49,    50,    23,
      24,    25,    26,     8,    28,    29,    30,    31,    32,    85,
      34,    39,    88,    41,    42,    91,   101,   102,   103,    43,
      44,    45,    46,    47,    48,     7,   106,   438,   108,   440,
     732,   105,   107,   444,   108,   109,   110,   111,   106,   113,
     114,   115,   116,   117,    75,    76,    77,   106,   459,   108,
     106,   545,    56,    57,    58,    59,    60,   636,   108,   133,
     639,    61,    62,    63,   106,   139,   477,   106,   479,    93,
      94,    95,   483,   484,   485,   486,   106,   106,     8,   108,
      49,    50,   106,    13,   104,    15,   106,    49,    50,   668,
      20,   670,   107,    23,    24,    25,   106,    75,   108,    77,
     106,    84,   108,    33,   301,   107,   303,   686,    38,   598,
     599,   600,   601,    43,   603,   604,   605,   606,   107,   608,
     609,   107,   611,   612,   613,    33,    34,     9,    10,   540,
     106,   107,    41,    42,   545,   107,   524,   525,   526,   527,
     528,   529,   530,   531,   532,    86,    87,     3,     4,    88,
      89,   107,   226,   106,   228,   229,   230,    16,   232,   105,
     104,   106,   111,    33,   106,   108,   240,   107,   242,   243,
     244,   245,   246,   106,   588,   106,   587,    27,   252,    39,
      27,   255,   256,   257,   258,   104,   106,    38,   106,   106,
     106,   106,   106,   106,   106,   106,   270,   271,   272,   273,
     274,   275,   276,   106,   106,   106,   106,   104,   106,   104,
     106,   625,   106,   106,   106,   106,   627,   628,   107,   107,
     107,   107,   107,   107,   107,   299,   300,   301,   302,   303,
     106,   111,    40,   106,   106,   106,    39,   106,   106,   106,
     106,   106,   105,    85,   655,   656,    12,    66,   659,   660,
     661,   106,   326,   327,   328,   329,   330,   331,   332,    69,
     106,   106,   673,   106,    69,   106,   106,   678,   106,   106,
      72,    77,    52,   107,    64,    79,   687,    53,   107,   106,
     106,   695,   696,   694,   698,   699,   106,    54,    85,   107,
      55,    89,    88,    11,    83,   131,   200,   260,   709,   260,
     260,   260,   318,   480,   442,   716,   506,   718,   719,   375,
     721,   722,   723,   724,   591,   726,    94,   394,   297,   472,
     541,   732,   736,   681,   735,   729,   630,   741,   702,   670,
     711,   664,   405,   700,   745,   160,   662,   511,   748,   739,
     751,    69,   753,   754,   755,   189,   757,   758,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   446,   447,   448,   449,   450,   451,   452,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   469,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   487,   488,   489,   490,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   503,
     504,    13,    14,    15,    -1,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    45,    46,    47,    48,    -1,    -1,    13,
      14,    15,   546,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    -1,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    13,    14,    15,   106,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    95,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    90,   115,   116,   117,   286,   287,    84,   277,     0,
       8,   120,   121,    13,    14,    15,    17,    18,    19,    20,
      23,    24,    25,    26,    28,    29,    30,    31,    32,    34,
      44,    45,    46,    47,    48,    92,    93,    95,   106,   153,
     154,   155,   156,   157,   158,   159,   161,   162,   164,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   195,   285,   289,   290,
     291,   292,   298,   301,    85,    88,    91,   251,   281,   288,
     277,    12,   121,   122,   123,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,    78,   109,   166,   167,   277,
     104,   112,   113,   263,   264,   265,   273,   277,   265,   265,
     265,   265,   104,   265,   265,   265,   265,   265,   104,   277,
      43,   219,   291,   303,   104,   106,   277,     7,   123,   124,
     125,   126,   127,    21,   108,   160,   262,   277,   106,    22,
     140,   262,   262,   140,   160,   106,    82,    83,   163,   163,
     166,   166,    79,    80,    81,    86,    87,   104,   111,   273,
     274,   275,   277,   273,   277,   265,   111,   265,   265,   265,
     265,    13,   193,   194,   265,   265,   265,   265,   265,     8,
      13,    15,    20,    23,    24,    25,    33,    38,    43,   293,
     294,   295,   296,   106,   277,   303,   289,   277,   118,     8,
     128,   129,   127,   265,   262,   106,   106,   108,   265,   106,
     106,   106,   160,   106,   106,   106,   110,   166,   166,   166,
     166,   166,   168,   276,   105,   275,   107,   266,   107,   107,
     107,   277,   107,   260,   261,   277,    84,   271,   105,   194,
     107,   106,   107,   107,   107,   107,   277,   105,   294,   106,
     277,   297,    16,   105,   104,    97,    98,    99,   100,   130,
     131,   132,   133,   134,   135,   277,   129,   106,   277,   106,
      28,    29,    30,    45,    46,    47,    48,   105,   169,   170,
     171,   172,   173,   174,   175,   292,   277,   265,   277,   265,
     265,   265,   106,   265,   106,   111,   107,   104,   106,   265,
     265,   265,   265,   265,   265,   106,   108,   265,   299,   272,
     277,   265,   265,   265,   265,    33,   136,   137,   138,   139,
     132,   133,   134,   135,    11,   104,   265,   265,   265,   265,
     265,   265,   265,    27,   165,   277,   277,   277,   277,   260,
     261,   262,   193,   265,   104,   252,   253,   257,   263,   265,
     281,   252,   265,   265,   252,   265,   277,    39,   220,    27,
     300,   302,   105,   277,    49,    50,    49,    50,    49,    50,
      49,    50,   277,    94,   106,   151,   152,   153,   154,   164,
     284,   298,    34,   139,   141,   277,   272,   265,   265,   265,
     265,   265,   265,   265,   104,     5,   106,   280,   106,   106,
     106,   106,   105,   106,   253,   254,   255,   257,   106,   253,
     257,   106,   106,   106,   106,   106,   106,   261,   106,   104,
     106,   106,   106,   106,   106,   106,   101,   102,   103,   101,
     102,   103,   106,   140,   277,   152,   218,   219,   104,   277,
      38,   142,   143,   144,   104,   105,   107,   107,   107,   107,
     107,   107,   107,   168,   106,   104,   105,   255,   111,    40,
     289,   106,   106,   106,   106,   106,   106,   106,   106,     9,
      10,   196,   197,   198,   199,   200,   219,   272,   277,    39,
     145,   146,   144,   272,   265,   265,   265,   265,   265,   265,
     265,   105,   256,   260,   105,   265,   265,   119,   198,   105,
     106,   140,   277,    41,    42,   146,   147,   148,   149,   150,
     105,   277,   277,   277,   265,   265,   265,   265,   257,   265,
      13,    49,    50,    51,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    78,   109,   201,   202,
      12,   221,   222,   106,   106,   107,   265,   265,   148,   106,
     280,   106,   106,   106,   106,   106,   106,   201,    35,    36,
      37,    86,    87,   216,   217,    13,    20,    13,    20,   216,
     216,   216,   216,   217,   216,   216,   216,   216,   216,   217,
     217,   217,   201,   201,    79,    80,   106,   277,    52,   222,
     231,   232,   233,   262,   265,   201,   106,   106,   212,   214,
     213,   215,    66,   203,   204,   205,   206,    69,   207,   208,
      72,   209,   210,   211,    75,    76,    77,    77,    75,    77,
     110,   201,   201,   258,   277,   281,    61,    62,    63,   244,
     245,   246,   233,   106,   201,   106,   104,   263,   264,   267,
     268,   269,   271,   269,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   107,   281,    84,    96,   278,
     277,   277,    64,   247,   248,   249,   246,   106,   270,   271,
     104,   271,   277,   258,   258,   258,   258,   278,    53,   234,
     235,   236,   237,   249,   105,   271,   270,   107,   258,   106,
     106,   106,     3,     4,   279,   277,    56,    57,    58,    59,
      60,   223,   224,   225,   226,   227,   228,   229,   230,    54,
     238,   239,   240,   237,   105,   277,   111,   258,   281,   281,
      85,   282,   281,   281,   279,   225,   277,    55,   241,   242,
     243,   240,   107,   259,   111,   277,   111,   258,   258,   111,
     258,   111,   258,   258,   258,   258,    89,   251,   283,   243,
     260,   250,   258,   281,   282,   281,   258,   251,   283,   258,
     258,   258,   258,   258,   258
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
/* Line 1792 of yacc.c  */
#line 161 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_policy(pass, 0) == -1) return -1; }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 163 "external/selinux/checkpolicy/policy_parse.y"
    { if (pass == 1) { if (policydb_index_classes(policydbp)) return -1; }
                            else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1; }}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 166 "external/selinux/checkpolicy/policy_parse.y"
    { if (pass == 1) { if (policydb_index_bools(policydbp)) return -1;}
			   else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1;}}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 174 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_class()) return -1;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 180 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_initial_sid()) return -1;}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 191 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_common_perms()) return -1;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 197 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_av_perms(FALSE)) return -1;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 199 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_av_perms(TRUE)) return -1;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 201 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_av_perms(TRUE)) return -1;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 216 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_user(DEFAULT_SOURCE)) return -1; }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 218 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_user(DEFAULT_TARGET)) return -1; }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 221 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_role(DEFAULT_SOURCE)) return -1; }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 223 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_role(DEFAULT_TARGET)) return -1; }
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 226 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_type(DEFAULT_SOURCE)) return -1; }
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 228 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_type(DEFAULT_TARGET)) return -1; }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 231 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_LOW)) return -1; }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 233 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_HIGH)) return -1; }
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 235 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_SOURCE_LOW_HIGH)) return -1; }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 237 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_LOW)) return -1; }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 239 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_HIGH)) return -1; }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 241 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_default_range(DEFAULT_TARGET_LOW_HIGH)) return -1; }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 252 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_sens()) return -1;}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 254 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_sens()) return -1;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 259 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_dominance()) return -1;}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 261 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_dominance()) return -1;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 270 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_category()) return -1;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 272 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_category()) return -1;}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 278 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_level()) return -1;}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 280 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_level()) return -1;}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 289 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_constraint((constraint_expr_t*)(yyvsp[(4) - (5)].valptr))) return -1; }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 292 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[(3) - (4)].valptr))) return -1; }
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 325 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_attrib()) return -1;}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 328 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_type(1)) return -1;}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 330 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_type(0)) return -1;}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 333 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_typealias()) return -1;}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 336 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_typeattribute()) return -1;}
    break;

  case 104:
/* Line 1792 of yacc.c  */
#line 339 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_typebounds()) return -1;}
    break;

  case 107:
/* Line 1792 of yacc.c  */
#line 345 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_bool_tunable(0)) return -1; }
    break;

  case 108:
/* Line 1792 of yacc.c  */
#line 348 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_bool_tunable(1)) return -1; }
    break;

  case 109:
/* Line 1792 of yacc.c  */
#line 351 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("T",0)) return -1; }
    break;

  case 110:
/* Line 1792 of yacc.c  */
#line 353 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("F",0)) return -1; }
    break;

  case 111:
/* Line 1792 of yacc.c  */
#line 356 "external/selinux/checkpolicy/policy_parse.y"
    { if (pass == 2) { if (define_conditional((cond_expr_t*)(yyvsp[(2) - (6)].ptr), (avrule_t*)(yyvsp[(4) - (6)].ptr), (avrule_t*)(yyvsp[(6) - (6)].ptr)) < 0) return -1;  }}
    break;

  case 112:
/* Line 1792 of yacc.c  */
#line 359 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(3) - (4)].ptr); }
    break;

  case 113:
/* Line 1792 of yacc.c  */
#line 361 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 114:
/* Line 1792 of yacc.c  */
#line 364 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(2) - (3)].ptr);}
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 366 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_NOT, (yyvsp[(2) - (2)].ptr), 0);
			  if ((yyval.ptr) == 0) return -1; }
    break;

  case 116:
/* Line 1792 of yacc.c  */
#line 369 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_AND, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 372 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_OR, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return   -1; }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 375 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_XOR, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 378 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_EQ, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 120:
/* Line 1792 of yacc.c  */
#line 381 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_NEQ, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
    break;

  case 121:
/* Line 1792 of yacc.c  */
#line 384 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 122:
/* Line 1792 of yacc.c  */
#line 387 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_expr(COND_BOOL,0, 0);
			  if ((yyval.ptr) == COND_ERR) return   -1; }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 391 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_pol_list((avrule_t *)(yyvsp[(1) - (2)].ptr), (avrule_t *)(yyvsp[(2) - (2)].ptr)); }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 393 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 396 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 398 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 400 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = NULL; }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 403 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_filename_trans() ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 406 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_TRANSITION) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 409 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_MEMBER) ;
                          if ((yyval.ptr) ==  COND_ERR) return -1;}
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 412 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_compute_type(AVRULE_CHANGE) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 416 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 418 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 420 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 422 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 425 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_ALLOWED) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 429 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITALLOW) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 433 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITDENY) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 437 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_DONTAUDIT);
                          if ((yyval.ptr) == COND_ERR) return -1; }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 442 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_filename_trans()) return -1; }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 444 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_compute_type(AVRULE_TRANSITION)) return -1;}
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 446 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_compute_type(AVRULE_MEMBER)) return -1;}
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 448 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_compute_type(AVRULE_CHANGE)) return -1;}
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 451 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_range_trans(0)) return -1; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 453 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_range_trans(1)) return -1; }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 465 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab(AVRULE_ALLOWED)) return -1; }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 468 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab(AVRULE_AUDITALLOW)) return -1; }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 471 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab(AVRULE_AUDITDENY)) return -1; }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 474 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab(AVRULE_DONTAUDIT)) return -1; }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 477 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab(AVRULE_NEVERALLOW)) return -1; }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 480 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab_operation(AVRULE_OPNUM_ALLOWED)) return -1; }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 483 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab_operation(AVRULE_OPNUM_AUDITALLOW)) return -1; }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 486 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_te_avtab_operation(AVRULE_OPNUM_DONTAUDIT)) return -1; }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 489 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_attrib_role()) return -1; }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 492 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_role_types()) return -1;}
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 495 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_role_attr()) return -1;}
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 500 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_role_trans(0)) return -1; }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 502 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_role_trans(1)) return -1;}
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 505 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_role_allow()) return -1; }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 508 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = (yyvsp[(1) - (1)].ptr); }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 510 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.ptr) = merge_roles_dom((role_datum_t*)(yyvsp[(1) - (2)].ptr), (role_datum_t*)(yyvsp[(2) - (2)].ptr)); if ((yyval.ptr) == 0) return -1;}
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 513 "external/selinux/checkpolicy/policy_parse.y"
    {(yyval.ptr) = define_role_dom(NULL); if ((yyval.ptr) == 0) return -1;}
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 515 "external/selinux/checkpolicy/policy_parse.y"
    {(yyval.ptr) = define_role_dom((role_datum_t*)(yyvsp[(4) - (5)].ptr)); if ((yyval.ptr) == 0) return -1;}
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 518 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_roleattribute()) return -1;}
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 530 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_constraint((constraint_expr_t*)(yyvsp[(4) - (5)].valptr))) return -1; }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 533 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[(3) - (4)].valptr))) return -1; }
    break;

  case 182:
/* Line 1792 of yacc.c  */
#line 536 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = (yyvsp[(2) - (3)].valptr); }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 538 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NOT, (yyvsp[(2) - (2)].valptr), 0);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 541 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_AND, (yyvsp[(1) - (3)].valptr), (yyvsp[(3) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 544 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_OR, (yyvsp[(1) - (3)].valptr), (yyvsp[(3) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 547 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = (yyvsp[(1) - (1)].valptr); }
    break;

  case 187:
/* Line 1792 of yacc.c  */
#line 550 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 188:
/* Line 1792 of yacc.c  */
#line 553 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 189:
/* Line 1792 of yacc.c  */
#line 556 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_TYPE, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 190:
/* Line 1792 of yacc.c  */
#line 558 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 191:
/* Line 1792 of yacc.c  */
#line 559 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_USER, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 192:
/* Line 1792 of yacc.c  */
#line 561 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 193:
/* Line 1792 of yacc.c  */
#line 562 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 194:
/* Line 1792 of yacc.c  */
#line 564 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 195:
/* Line 1792 of yacc.c  */
#line 565 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 196:
/* Line 1792 of yacc.c  */
#line 567 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 197:
/* Line 1792 of yacc.c  */
#line 568 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 198:
/* Line 1792 of yacc.c  */
#line 570 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 199:
/* Line 1792 of yacc.c  */
#line 571 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 200:
/* Line 1792 of yacc.c  */
#line 573 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 574 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 576 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 577 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 579 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 580 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 582 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 207:
/* Line 1792 of yacc.c  */
#line 583 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_XTARGET), (yyvsp[(2) - (4)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 208:
/* Line 1792 of yacc.c  */
#line 586 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 209:
/* Line 1792 of yacc.c  */
#line 588 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 210:
/* Line 1792 of yacc.c  */
#line 589 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 211:
/* Line 1792 of yacc.c  */
#line 591 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 592 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 595 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[(2) - (2)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 597 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 215:
/* Line 1792 of yacc.c  */
#line 598 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 216:
/* Line 1792 of yacc.c  */
#line 600 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(1)) return -1; }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 601 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 604 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1L2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 219:
/* Line 1792 of yacc.c  */
#line 607 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 610 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1L2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 613 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 616 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H1, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 619 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L2H2, (yyvsp[(2) - (3)].valptr));
			  if ((yyval.valptr) == 0) return -1; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 623 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = CEXPR_EQ; }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 625 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = CEXPR_NEQ; }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 628 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = (yyvsp[(1) - (1)].valptr); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 630 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = CEXPR_DOM; }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 632 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = CEXPR_DOMBY; }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 634 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.valptr) = CEXPR_INCOMP; }
    break;

  case 232:
/* Line 1792 of yacc.c  */
#line 640 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_user()) return -1;}
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 649 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_initial_sid_context()) return -1;}
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 663 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_pirq_context((yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 666 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_iomem_context((yyvsp[(2) - (3)].val64),(yyvsp[(2) - (3)].val64))) return -1;}
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 668 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_iomem_context((yyvsp[(2) - (5)].val64),(yyvsp[(4) - (5)].val64))) return -1;}
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 671 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_ioport_context((yyvsp[(2) - (3)].val),(yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 673 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_ioport_context((yyvsp[(2) - (5)].val),(yyvsp[(4) - (5)].val))) return -1;}
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 676 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_pcidevice_context((yyvsp[(2) - (3)].val))) return -1;}
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 679 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_devicetree_context()) return -1;}
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 688 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_fs_context((yyvsp[(2) - (5)].val),(yyvsp[(3) - (5)].val))) return -1;}
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 699 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_port_context((yyvsp[(3) - (4)].val),(yyvsp[(3) - (4)].val))) return -1;}
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 701 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_port_context((yyvsp[(3) - (6)].val),(yyvsp[(5) - (6)].val))) return -1;}
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 710 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_netif_context()) return -1;}
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 719 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_ipv4_node_context()) return -1;}
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 721 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_ipv6_node_context()) return -1;}
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 730 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_XATTR)) return -1;}
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 732 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_TASK)) return -1;}
    break;

  case 283:
/* Line 1792 of yacc.c  */
#line 734 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_fs_use(SECURITY_FS_USE_TRANS)) return -1;}
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 743 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_genfs_context(1)) return -1;}
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 744 "external/selinux/checkpolicy/policy_parse.y"
    {insert_id("-", 0);}
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 745 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_genfs_context(1)) return -1;}
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 747 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_genfs_context(0)) return -1;}
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 750 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 753 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 755 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 757 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("~", 0)) return -1; }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 759 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 767 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 304:
/* Line 1792 of yacc.c  */
#line 772 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 308:
/* Line 1792 of yacc.c  */
#line 780 "external/selinux/checkpolicy/policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 309:
/* Line 1792 of yacc.c  */
#line 782 "external/selinux/checkpolicy/policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 785 "external/selinux/checkpolicy/policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 787 "external/selinux/checkpolicy/policy_parse.y"
    {if (insert_separator(0)) return -1;}
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 797 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 799 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 801 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("*", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 804 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 807 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("~", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 809 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 810 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_separator(0)) return -1; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 813 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("~", 1)) return -1; }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 816 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("*", 1)) return -1; }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 828 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext, 1)) return -1; }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 837 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id("-", 0)) return -1; }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 840 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 843 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 845 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 848 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 850 "external/selinux/checkpolicy/policy_parse.y"
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 853 "external/selinux/checkpolicy/policy_parse.y"
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 856 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.val) = strtoul(yytext,NULL,0); }
    break;

  case 349:
/* Line 1792 of yacc.c  */
#line 859 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.val64) = strtoull(yytext,NULL,0); }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 862 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 865 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_polcap()) return -1;}
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 868 "external/selinux/checkpolicy/policy_parse.y"
    {if (define_permissive()) return -1;}
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 873 "external/selinux/checkpolicy/policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1;
                          if (policydb_index_others(NULL, policydbp, 0)) return -1;
                        }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 878 "external/selinux/checkpolicy/policy_parse.y"
    { if (define_policy(pass, 1) == -1) return -1; }
    break;

  case 355:
/* Line 1792 of yacc.c  */
#line 881 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 883 "external/selinux/checkpolicy/policy_parse.y"
    { if (insert_id(yytext,0)) return -1; }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 907 "external/selinux/checkpolicy/policy_parse.y"
    { if (require_class(pass)) return -1; }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 909 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_role; }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 910 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_type; }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 911 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_attribute; }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 912 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_attribute_role; }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 913 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_user; }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 914 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_bool; }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 915 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_tunable; }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 916 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_sens; }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 917 "external/selinux/checkpolicy/policy_parse.y"
    { (yyval.require_func) = require_cat; }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 920 "external/selinux/checkpolicy/policy_parse.y"
    { if ((yyvsp[(0) - (1)].require_func) (pass)) return -1; }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 922 "external/selinux/checkpolicy/policy_parse.y"
    { if ((yyvsp[(0) - (3)].require_func) (pass)) return -1; }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 925 "external/selinux/checkpolicy/policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1; }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 927 "external/selinux/checkpolicy/policy_parse.y"
    { if (end_optional(pass) == -1) return -1; }
    break;

  case 386:
/* Line 1792 of yacc.c  */
#line 930 "external/selinux/checkpolicy/policy_parse.y"
    { if (end_avrule_block(pass) == -1) return -1; }
    break;

  case 388:
/* Line 1792 of yacc.c  */
#line 934 "external/selinux/checkpolicy/policy_parse.y"
    { if (begin_optional(pass) == -1) return -1; }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 937 "external/selinux/checkpolicy/policy_parse.y"
    { if (begin_optional_else(pass) == -1) return -1; }
    break;


/* Line 1792 of yacc.c  */
#line 3677 "out/host/linux-x86/obj/EXECUTABLES/checkpolicy_intermediates/policy_parse.cpp"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



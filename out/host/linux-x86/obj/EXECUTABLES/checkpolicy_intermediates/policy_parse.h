#ifndef policy_parse_h
#define policy_parse_h
/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2058 of yacc.c  */
#line 68 "external/selinux/checkpolicy/policy_parse.y"

	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;


/* Line 2058 of yacc.c  */
#line 169 "out/host/linux-x86/obj/EXECUTABLES/checkpolicy_intermediates/policy_parse.hpp"
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
#endif

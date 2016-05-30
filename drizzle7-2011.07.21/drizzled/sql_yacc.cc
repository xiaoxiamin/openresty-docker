
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         base_sql_parse
#define yylex           base_sql_lex
#define yyerror         base_sql_error
#define yylval          base_sql_lval
#define yychar          base_sql_char
#define yydebug         base_sql_debug
#define yynerrs         base_sql_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 25 "drizzled/sql_yacc.yy"

/* session is passed as an argument to yyparse(), and subsequently to yylex().
** The type will be void*, so it must be  cast to (Session*) when used.
** Use the YYSession macro for this.
*/

#define YYSession (session)

#define YYENABLE_NLS 0
#define YYLTYPE_IS_TRIVIAL 0

#define YYINITDEPTH 100
#define YYMAXDEPTH 3200                        /* Because of 64K stack */
#define Lex (session->lex())

#include <config.h>
#include <cstdio>
#include <drizzled/parser.h>
#include <drizzled/session.h>
#include <drizzled/alter_column.h>
#include <drizzled/alter_info.h>
#include <drizzled/message/alter_table.pb.h>
#include <drizzled/item/subselect.h>
#include <drizzled/table_ident.h>
#include <drizzled/var.h>
#include <drizzled/system_variables.h>

int yylex(union ParserType *yylval, drizzled::Session *session);

#define yyoverflow(A,B,C,D,E,F)               \
  {                                           \
    unsigned long val= *(F);                          \
    if (drizzled::my_yyoverflow((B), (D), &val)) \
    {                                         \
      yyerror(NULL, (char*) (A));                   \
      return 2;                               \
    }                                         \
    else                                      \
    {                                         \
      *(F)= (YYSIZE_T)val;                    \
    }                                         \
  }

#define DRIZZLE_YYABORT                         \
  do                                          \
  {                                           \
    YYABORT;                                  \
  } while (0)

#define DRIZZLE_YYABORT_UNLESS(A)         \
  if (!(A))                             \
  {                                     \
    parser::my_parse_error(YYSession->m_lip);\
    DRIZZLE_YYABORT;                      \
  }

namespace drizzled
{

class Table_ident;
class Item;
class Item_num;

namespace item
{
class Boolean;
class True;
class False;
}


/**
  @brief Bison callback to report a syntax/OOM error

  This function is invoked by the bison-generated parser
  when a syntax error, a parse error or an out-of-memory
  condition occurs. This function is not invoked when the
  parser is requested to abort by semantic action code
  by means of YYABORT or YYACCEPT macros. This is why these
  macros should not be used (use DRIZZLE_YYABORT/DRIZZLE_YYACCEPT
  instead).

  The parser will abort immediately after invoking this callback.

  This function is not for use in semantic actions and is internal to
  the parser, as it performs some pre-return cleanup.
  In semantic actions, please use parser::my_parse_error or my_error to
  push an error into the error stack and DRIZZLE_YYABORT
  to abort from the parser.
*/

static void base_sql_error(drizzled::Session *session, const char *s)
{
  parser::errorOn(session, s);
}

} /* namespace drizzled; */

using namespace drizzled;


/* Line 189 of yacc.c  */
#line 183 "drizzled/sql_yacc.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ABORT_SYM = 258,
     ACTION = 259,
     ADDDATE_SYM = 260,
     ADD_SYM = 261,
     AFTER_SYM = 262,
     AGGREGATE_SYM = 263,
     ALL = 264,
     ALTER_SYM = 265,
     ANALYZE_SYM = 266,
     AND_SYM = 267,
     ANY_SYM = 268,
     AS = 269,
     ASC = 270,
     ASENSITIVE_SYM = 271,
     AT_SYM = 272,
     AUTO_INC = 273,
     AVG_SYM = 274,
     BEFORE_SYM = 275,
     BEGIN_SYM = 276,
     BETWEEN_SYM = 277,
     BIGINT_SYM = 278,
     BINARY = 279,
     BIN_NUM = 280,
     BIT_SYM = 281,
     BLOB_SYM = 282,
     BOOLEAN_SYM = 283,
     BOOL_SYM = 284,
     BOTH = 285,
     BTREE_SYM = 286,
     BY = 287,
     CALL_SYM = 288,
     CASCADE = 289,
     CASCADED = 290,
     CASE_SYM = 291,
     CAST_SYM = 292,
     CATALOG_SYM = 293,
     CHAIN_SYM = 294,
     CHANGE_SYM = 295,
     CHARSET = 296,
     CHAR_SYM = 297,
     CHECKSUM_SYM = 298,
     CHECK_SYM = 299,
     CLOSE_SYM = 300,
     COALESCE = 301,
     COLLATE_SYM = 302,
     COLLATION_SYM = 303,
     COLUMNS = 304,
     COLUMN_SYM = 305,
     COMMENT_SYM = 306,
     COMMITTED_SYM = 307,
     COMMIT_SYM = 308,
     COMPACT_SYM = 309,
     COMPRESSED_SYM = 310,
     CONCURRENT = 311,
     CONDITION_SYM = 312,
     CONNECTION_SYM = 313,
     CONSISTENT_SYM = 314,
     CONSTRAINT = 315,
     CONTAINS_SYM = 316,
     CONVERT_SYM = 317,
     COUNT_SYM = 318,
     CREATE = 319,
     CROSS = 320,
     CUBE_SYM = 321,
     CURDATE = 322,
     CURRENT_USER = 323,
     CURSOR_SYM = 324,
     DATABASE = 325,
     DATABASES = 326,
     DATA_SYM = 327,
     DATETIME_SYM = 328,
     DATE_ADD_INTERVAL = 329,
     DATE_SUB_INTERVAL = 330,
     DATE_SYM = 331,
     DAY_HOUR_SYM = 332,
     DAY_MICROSECOND_SYM = 333,
     DAY_MINUTE_SYM = 334,
     DAY_SECOND_SYM = 335,
     DAY_SYM = 336,
     DEALLOCATE_SYM = 337,
     DECIMAL_NUM = 338,
     DECIMAL_SYM = 339,
     DECLARE_SYM = 340,
     DEFAULT = 341,
     DEFINER = 342,
     DELETE_SYM = 343,
     DESC = 344,
     DESCRIBE = 345,
     DETERMINISTIC_SYM = 346,
     DISABLE_SYM = 347,
     DISCARD = 348,
     DISTINCT = 349,
     DIV_SYM = 350,
     DOUBLE_SYM = 351,
     DO_SYM = 352,
     DROP = 353,
     DUMPFILE = 354,
     DUPLICATE_SYM = 355,
     DYNAMIC_SYM = 356,
     EACH_SYM = 357,
     ELSE = 358,
     ENABLE_SYM = 359,
     ENCLOSED = 360,
     END = 361,
     ENDS_SYM = 362,
     END_OF_INPUT = 363,
     ENGINE_SYM = 364,
     ENUM_SYM = 365,
     EQUAL_SYM = 366,
     ERRORS = 367,
     ESCAPED = 368,
     ESCAPE_SYM = 369,
     EXCLUSIVE_SYM = 370,
     EXECUTE_SYM = 371,
     EXISTS = 372,
     EXTENDED_SYM = 373,
     EXTRACT_SYM = 374,
     FALSE_SYM = 375,
     FILE_SYM = 376,
     FIRST_SYM = 377,
     FIXED_SYM = 378,
     FLOAT_NUM = 379,
     FLUSH_SYM = 380,
     FORCE_SYM = 381,
     FOREIGN = 382,
     FOR_SYM = 383,
     FOUND_SYM = 384,
     FRAC_SECOND_SYM = 385,
     FROM = 386,
     FULL = 387,
     GE = 388,
     GLOBAL_SYM = 389,
     GROUP_CONCAT_SYM = 390,
     GROUP_SYM = 391,
     HASH_SYM = 392,
     HAVING = 393,
     HEX_NUM = 394,
     HOUR_MICROSECOND_SYM = 395,
     HOUR_MINUTE_SYM = 396,
     HOUR_SECOND_SYM = 397,
     HOUR_SYM = 398,
     IDENT = 399,
     IDENTIFIED_SYM = 400,
     IDENTITY_SYM = 401,
     IDENT_QUOTED = 402,
     IF = 403,
     IGNORE_SYM = 404,
     IMPORT = 405,
     INDEXES = 406,
     INDEX_SYM = 407,
     INFILE = 408,
     INNER_SYM = 409,
     INOUT_SYM = 410,
     INSENSITIVE_SYM = 411,
     INSERT = 412,
     INTERVAL_SYM = 413,
     INTO = 414,
     INT_SYM = 415,
     INVOKER = 416,
     IN_SYM = 417,
     IS = 418,
     ISOLATION = 419,
     ITERATE_SYM = 420,
     JOIN_SYM = 421,
     KEYS = 422,
     KEY_BLOCK_SIZE = 423,
     KEY_SYM = 424,
     KILL_SYM = 425,
     LAST_SYM = 426,
     LE = 427,
     LEADING = 428,
     LEFT = 429,
     LEVEL_SYM = 430,
     LEX_HOSTNAME = 431,
     LIKE = 432,
     LIMIT = 433,
     LINES = 434,
     LOAD = 435,
     LOCAL_SYM = 436,
     LOCKS_SYM = 437,
     LOCK_SYM = 438,
     LOGS_SYM = 439,
     LONG_NUM = 440,
     LONG_SYM = 441,
     MATCH = 442,
     MAX_SYM = 443,
     MAX_VALUE_SYM = 444,
     MEDIUM_SYM = 445,
     MERGE_SYM = 446,
     MICROSECOND_SYM = 447,
     MINUTE_MICROSECOND_SYM = 448,
     MINUTE_SECOND_SYM = 449,
     MINUTE_SYM = 450,
     MIN_SYM = 451,
     MODE_SYM = 452,
     MODIFIES_SYM = 453,
     MODIFY_SYM = 454,
     MOD_SYM = 455,
     MONTH_SYM = 456,
     NAMES_SYM = 457,
     NAME_SYM = 458,
     NATIONAL_SYM = 459,
     NATURAL = 460,
     NE = 461,
     NEW_SYM = 462,
     NEXT_SYM = 463,
     NONE_SYM = 464,
     NOT_SYM = 465,
     NOW_SYM = 466,
     NO_SYM = 467,
     NULL_SYM = 468,
     NUM = 469,
     NUMERIC_SYM = 470,
     OFFLINE_SYM = 471,
     OFFSET_SYM = 472,
     ON = 473,
     ONE_SHOT_SYM = 474,
     ONE_SYM = 475,
     ONLINE_SYM = 476,
     OPEN_SYM = 477,
     OPTIMIZE = 478,
     OPTION = 479,
     OPTIONALLY = 480,
     ORDER_SYM = 481,
     OR_SYM = 482,
     OUTER = 483,
     OUTFILE = 484,
     OUT_SYM = 485,
     PARTIAL = 486,
     POSITION_SYM = 487,
     PRECISION = 488,
     PREV_SYM = 489,
     PRIMARY_SYM = 490,
     PROCESS = 491,
     PROCESSLIST_SYM = 492,
     QUARTER_SYM = 493,
     QUERY_SYM = 494,
     RANGE_SYM = 495,
     READS_SYM = 496,
     READ_SYM = 497,
     READ_WRITE_SYM = 498,
     REAL = 499,
     REDUNDANT_SYM = 500,
     REFERENCES = 501,
     REGEXP_SYM = 502,
     RELEASE_SYM = 503,
     RENAME = 504,
     REPEATABLE_SYM = 505,
     REPEAT_SYM = 506,
     REPLACE = 507,
     REPLICATE = 508,
     REPLICATION = 509,
     RESTRICT = 510,
     RETURNS_SYM = 511,
     RETURN_SYM = 512,
     REVOKE = 513,
     RIGHT = 514,
     ROLLBACK_SYM = 515,
     ROLLUP_SYM = 516,
     ROUTINE_SYM = 517,
     ROWS_SYM = 518,
     ROW_FORMAT_SYM = 519,
     ROW_SYM = 520,
     SAVEPOINT_SYM = 521,
     SECOND_MICROSECOND_SYM = 522,
     SECOND_SYM = 523,
     SECURITY_SYM = 524,
     SELECT_SYM = 525,
     SENSITIVE_SYM = 526,
     SEPARATOR_SYM = 527,
     SERIALIZABLE_SYM = 528,
     SERIAL_SYM = 529,
     SERVER_SYM = 530,
     SESSION_SYM = 531,
     SET_SYM = 532,
     SET_VAR = 533,
     SHARE_SYM = 534,
     SHOW = 535,
     SIGNED_SYM = 536,
     SIMPLE_SYM = 537,
     SNAPSHOT_SYM = 538,
     SPECIFIC_SYM = 539,
     SQLEXCEPTION_SYM = 540,
     SQLSTATE_SYM = 541,
     SQLWARNING_SYM = 542,
     SQL_BIG_RESULT = 543,
     SQL_BUFFER_RESULT = 544,
     SQL_CALC_FOUND_ROWS = 545,
     SQL_SMALL_RESULT = 546,
     SQL_SYM = 547,
     STARTING = 548,
     START_SYM = 549,
     STATUS_SYM = 550,
     STDDEV_SAMP_SYM = 551,
     STD_SYM = 552,
     STOP_SYM = 553,
     STORED_SYM = 554,
     STRAIGHT_JOIN = 555,
     STRING_SYM = 556,
     SUBDATE_SYM = 557,
     SUBJECT_SYM = 558,
     SUBSTRING = 559,
     SUM_SYM = 560,
     SUSPEND_SYM = 561,
     SYSDATE = 562,
     TABLES = 563,
     TABLESPACE = 564,
     TABLE_REF_PRIORITY = 565,
     TABLE_SYM = 566,
     TEMPORARY_SYM = 567,
     TERMINATED = 568,
     TEXT_STRING = 569,
     TEXT_SYM = 570,
     THEN_SYM = 571,
     TIMESTAMP_ADD = 572,
     TIMESTAMP_DIFF = 573,
     TIMESTAMP_SYM = 574,
     TIME_SYM = 575,
     TO_SYM = 576,
     TRAILING = 577,
     TRANSACTION_SYM = 578,
     TRIM = 579,
     TRUE_SYM = 580,
     TRUNCATE_SYM = 581,
     TYPE_SYM = 582,
     ULONGLONG_NUM = 583,
     UNCOMMITTED_SYM = 584,
     UNDOFILE_SYM = 585,
     UNDO_SYM = 586,
     UNION_SYM = 587,
     UNIQUE_SYM = 588,
     UNKNOWN_SYM = 589,
     UNLOCK_SYM = 590,
     UNSIGNED_SYM = 591,
     UPDATE_SYM = 592,
     USAGE = 593,
     USER = 594,
     USE_SYM = 595,
     USING = 596,
     UTC_DATE_SYM = 597,
     UTC_TIMESTAMP_SYM = 598,
     UTF8_SYM = 599,
     UUID_SYM = 600,
     VALUES = 601,
     VALUE_SYM = 602,
     VARBINARY = 603,
     VARCHAR_SYM = 604,
     VARIABLES = 605,
     VARIANCE_SYM = 606,
     VARYING = 607,
     VAR_SAMP_SYM = 608,
     WAIT_SYM = 609,
     WARNINGS = 610,
     WEEK_SYM = 611,
     WHEN_SYM = 612,
     WHERE = 613,
     WITH = 614,
     WITH_ROLLUP_SYM = 615,
     WORK_SYM = 616,
     WRITE_SYM = 617,
     XOR = 618,
     YEAR_MONTH_SYM = 619,
     YEAR_SYM = 620,
     ZEROFILL_SYM = 621,
     LESS_THAN = 622,
     GREATER_THAN = 623,
     CONCAT = 624,
     SHIFT_RIGHT = 625,
     SHIFT_LEFT = 626,
     UMINUS = 627
   };
#endif
/* Tokens.  */
#define ABORT_SYM 258
#define ACTION 259
#define ADDDATE_SYM 260
#define ADD_SYM 261
#define AFTER_SYM 262
#define AGGREGATE_SYM 263
#define ALL 264
#define ALTER_SYM 265
#define ANALYZE_SYM 266
#define AND_SYM 267
#define ANY_SYM 268
#define AS 269
#define ASC 270
#define ASENSITIVE_SYM 271
#define AT_SYM 272
#define AUTO_INC 273
#define AVG_SYM 274
#define BEFORE_SYM 275
#define BEGIN_SYM 276
#define BETWEEN_SYM 277
#define BIGINT_SYM 278
#define BINARY 279
#define BIN_NUM 280
#define BIT_SYM 281
#define BLOB_SYM 282
#define BOOLEAN_SYM 283
#define BOOL_SYM 284
#define BOTH 285
#define BTREE_SYM 286
#define BY 287
#define CALL_SYM 288
#define CASCADE 289
#define CASCADED 290
#define CASE_SYM 291
#define CAST_SYM 292
#define CATALOG_SYM 293
#define CHAIN_SYM 294
#define CHANGE_SYM 295
#define CHARSET 296
#define CHAR_SYM 297
#define CHECKSUM_SYM 298
#define CHECK_SYM 299
#define CLOSE_SYM 300
#define COALESCE 301
#define COLLATE_SYM 302
#define COLLATION_SYM 303
#define COLUMNS 304
#define COLUMN_SYM 305
#define COMMENT_SYM 306
#define COMMITTED_SYM 307
#define COMMIT_SYM 308
#define COMPACT_SYM 309
#define COMPRESSED_SYM 310
#define CONCURRENT 311
#define CONDITION_SYM 312
#define CONNECTION_SYM 313
#define CONSISTENT_SYM 314
#define CONSTRAINT 315
#define CONTAINS_SYM 316
#define CONVERT_SYM 317
#define COUNT_SYM 318
#define CREATE 319
#define CROSS 320
#define CUBE_SYM 321
#define CURDATE 322
#define CURRENT_USER 323
#define CURSOR_SYM 324
#define DATABASE 325
#define DATABASES 326
#define DATA_SYM 327
#define DATETIME_SYM 328
#define DATE_ADD_INTERVAL 329
#define DATE_SUB_INTERVAL 330
#define DATE_SYM 331
#define DAY_HOUR_SYM 332
#define DAY_MICROSECOND_SYM 333
#define DAY_MINUTE_SYM 334
#define DAY_SECOND_SYM 335
#define DAY_SYM 336
#define DEALLOCATE_SYM 337
#define DECIMAL_NUM 338
#define DECIMAL_SYM 339
#define DECLARE_SYM 340
#define DEFAULT 341
#define DEFINER 342
#define DELETE_SYM 343
#define DESC 344
#define DESCRIBE 345
#define DETERMINISTIC_SYM 346
#define DISABLE_SYM 347
#define DISCARD 348
#define DISTINCT 349
#define DIV_SYM 350
#define DOUBLE_SYM 351
#define DO_SYM 352
#define DROP 353
#define DUMPFILE 354
#define DUPLICATE_SYM 355
#define DYNAMIC_SYM 356
#define EACH_SYM 357
#define ELSE 358
#define ENABLE_SYM 359
#define ENCLOSED 360
#define END 361
#define ENDS_SYM 362
#define END_OF_INPUT 363
#define ENGINE_SYM 364
#define ENUM_SYM 365
#define EQUAL_SYM 366
#define ERRORS 367
#define ESCAPED 368
#define ESCAPE_SYM 369
#define EXCLUSIVE_SYM 370
#define EXECUTE_SYM 371
#define EXISTS 372
#define EXTENDED_SYM 373
#define EXTRACT_SYM 374
#define FALSE_SYM 375
#define FILE_SYM 376
#define FIRST_SYM 377
#define FIXED_SYM 378
#define FLOAT_NUM 379
#define FLUSH_SYM 380
#define FORCE_SYM 381
#define FOREIGN 382
#define FOR_SYM 383
#define FOUND_SYM 384
#define FRAC_SECOND_SYM 385
#define FROM 386
#define FULL 387
#define GE 388
#define GLOBAL_SYM 389
#define GROUP_CONCAT_SYM 390
#define GROUP_SYM 391
#define HASH_SYM 392
#define HAVING 393
#define HEX_NUM 394
#define HOUR_MICROSECOND_SYM 395
#define HOUR_MINUTE_SYM 396
#define HOUR_SECOND_SYM 397
#define HOUR_SYM 398
#define IDENT 399
#define IDENTIFIED_SYM 400
#define IDENTITY_SYM 401
#define IDENT_QUOTED 402
#define IF 403
#define IGNORE_SYM 404
#define IMPORT 405
#define INDEXES 406
#define INDEX_SYM 407
#define INFILE 408
#define INNER_SYM 409
#define INOUT_SYM 410
#define INSENSITIVE_SYM 411
#define INSERT 412
#define INTERVAL_SYM 413
#define INTO 414
#define INT_SYM 415
#define INVOKER 416
#define IN_SYM 417
#define IS 418
#define ISOLATION 419
#define ITERATE_SYM 420
#define JOIN_SYM 421
#define KEYS 422
#define KEY_BLOCK_SIZE 423
#define KEY_SYM 424
#define KILL_SYM 425
#define LAST_SYM 426
#define LE 427
#define LEADING 428
#define LEFT 429
#define LEVEL_SYM 430
#define LEX_HOSTNAME 431
#define LIKE 432
#define LIMIT 433
#define LINES 434
#define LOAD 435
#define LOCAL_SYM 436
#define LOCKS_SYM 437
#define LOCK_SYM 438
#define LOGS_SYM 439
#define LONG_NUM 440
#define LONG_SYM 441
#define MATCH 442
#define MAX_SYM 443
#define MAX_VALUE_SYM 444
#define MEDIUM_SYM 445
#define MERGE_SYM 446
#define MICROSECOND_SYM 447
#define MINUTE_MICROSECOND_SYM 448
#define MINUTE_SECOND_SYM 449
#define MINUTE_SYM 450
#define MIN_SYM 451
#define MODE_SYM 452
#define MODIFIES_SYM 453
#define MODIFY_SYM 454
#define MOD_SYM 455
#define MONTH_SYM 456
#define NAMES_SYM 457
#define NAME_SYM 458
#define NATIONAL_SYM 459
#define NATURAL 460
#define NE 461
#define NEW_SYM 462
#define NEXT_SYM 463
#define NONE_SYM 464
#define NOT_SYM 465
#define NOW_SYM 466
#define NO_SYM 467
#define NULL_SYM 468
#define NUM 469
#define NUMERIC_SYM 470
#define OFFLINE_SYM 471
#define OFFSET_SYM 472
#define ON 473
#define ONE_SHOT_SYM 474
#define ONE_SYM 475
#define ONLINE_SYM 476
#define OPEN_SYM 477
#define OPTIMIZE 478
#define OPTION 479
#define OPTIONALLY 480
#define ORDER_SYM 481
#define OR_SYM 482
#define OUTER 483
#define OUTFILE 484
#define OUT_SYM 485
#define PARTIAL 486
#define POSITION_SYM 487
#define PRECISION 488
#define PREV_SYM 489
#define PRIMARY_SYM 490
#define PROCESS 491
#define PROCESSLIST_SYM 492
#define QUARTER_SYM 493
#define QUERY_SYM 494
#define RANGE_SYM 495
#define READS_SYM 496
#define READ_SYM 497
#define READ_WRITE_SYM 498
#define REAL 499
#define REDUNDANT_SYM 500
#define REFERENCES 501
#define REGEXP_SYM 502
#define RELEASE_SYM 503
#define RENAME 504
#define REPEATABLE_SYM 505
#define REPEAT_SYM 506
#define REPLACE 507
#define REPLICATE 508
#define REPLICATION 509
#define RESTRICT 510
#define RETURNS_SYM 511
#define RETURN_SYM 512
#define REVOKE 513
#define RIGHT 514
#define ROLLBACK_SYM 515
#define ROLLUP_SYM 516
#define ROUTINE_SYM 517
#define ROWS_SYM 518
#define ROW_FORMAT_SYM 519
#define ROW_SYM 520
#define SAVEPOINT_SYM 521
#define SECOND_MICROSECOND_SYM 522
#define SECOND_SYM 523
#define SECURITY_SYM 524
#define SELECT_SYM 525
#define SENSITIVE_SYM 526
#define SEPARATOR_SYM 527
#define SERIALIZABLE_SYM 528
#define SERIAL_SYM 529
#define SERVER_SYM 530
#define SESSION_SYM 531
#define SET_SYM 532
#define SET_VAR 533
#define SHARE_SYM 534
#define SHOW 535
#define SIGNED_SYM 536
#define SIMPLE_SYM 537
#define SNAPSHOT_SYM 538
#define SPECIFIC_SYM 539
#define SQLEXCEPTION_SYM 540
#define SQLSTATE_SYM 541
#define SQLWARNING_SYM 542
#define SQL_BIG_RESULT 543
#define SQL_BUFFER_RESULT 544
#define SQL_CALC_FOUND_ROWS 545
#define SQL_SMALL_RESULT 546
#define SQL_SYM 547
#define STARTING 548
#define START_SYM 549
#define STATUS_SYM 550
#define STDDEV_SAMP_SYM 551
#define STD_SYM 552
#define STOP_SYM 553
#define STORED_SYM 554
#define STRAIGHT_JOIN 555
#define STRING_SYM 556
#define SUBDATE_SYM 557
#define SUBJECT_SYM 558
#define SUBSTRING 559
#define SUM_SYM 560
#define SUSPEND_SYM 561
#define SYSDATE 562
#define TABLES 563
#define TABLESPACE 564
#define TABLE_REF_PRIORITY 565
#define TABLE_SYM 566
#define TEMPORARY_SYM 567
#define TERMINATED 568
#define TEXT_STRING 569
#define TEXT_SYM 570
#define THEN_SYM 571
#define TIMESTAMP_ADD 572
#define TIMESTAMP_DIFF 573
#define TIMESTAMP_SYM 574
#define TIME_SYM 575
#define TO_SYM 576
#define TRAILING 577
#define TRANSACTION_SYM 578
#define TRIM 579
#define TRUE_SYM 580
#define TRUNCATE_SYM 581
#define TYPE_SYM 582
#define ULONGLONG_NUM 583
#define UNCOMMITTED_SYM 584
#define UNDOFILE_SYM 585
#define UNDO_SYM 586
#define UNION_SYM 587
#define UNIQUE_SYM 588
#define UNKNOWN_SYM 589
#define UNLOCK_SYM 590
#define UNSIGNED_SYM 591
#define UPDATE_SYM 592
#define USAGE 593
#define USER 594
#define USE_SYM 595
#define USING 596
#define UTC_DATE_SYM 597
#define UTC_TIMESTAMP_SYM 598
#define UTF8_SYM 599
#define UUID_SYM 600
#define VALUES 601
#define VALUE_SYM 602
#define VARBINARY 603
#define VARCHAR_SYM 604
#define VARIABLES 605
#define VARIANCE_SYM 606
#define VARYING 607
#define VAR_SAMP_SYM 608
#define WAIT_SYM 609
#define WARNINGS 610
#define WEEK_SYM 611
#define WHEN_SYM 612
#define WHERE 613
#define WITH 614
#define WITH_ROLLUP_SYM 615
#define WORK_SYM 616
#define WRITE_SYM 617
#define XOR 618
#define YEAR_MONTH_SYM 619
#define YEAR_SYM 620
#define ZEROFILL_SYM 621
#define LESS_THAN 622
#define GREATER_THAN 623
#define CONCAT 624
#define SHIFT_RIGHT 625
#define SHIFT_LEFT 626
#define UMINUS 627




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
/* Line 214 of yacc.c  */
#line 125 "drizzled/sql_yacc.yy"
ParserType
{

/* Line 214 of yacc.c  */
#line 125 "drizzled/sql_yacc.yy"

  bool boolean;
  int  num;
  unsigned long ulong_num;
  uint64_t ulonglong_number;
  int64_t longlong_number;
  drizzled::LEX_STRING lex_str;
  drizzled::LEX_STRING *lex_str_ptr;
  drizzled::LEX_SYMBOL symbol;
  drizzled::Table_ident *table;
  char *simple_string;
  drizzled::Item *item;
  drizzled::Item_num *item_num;
  drizzled::List<drizzled::Item> *item_list;
  drizzled::List<drizzled::String> *string_list;
  drizzled::String *string;
  drizzled::Key_part_spec *key_part;
  const drizzled::plugin::Function *udf;
  drizzled::TableList *table_list;
  drizzled::enum_field_types field_val;
  drizzled::sys_var_with_base variable;
  drizzled::sql_var_t var_type;
  drizzled::Key::Keytype key_type;
  drizzled::ha_key_alg key_alg;
  drizzled::ha_rkey_function ha_rkey_mode;
  drizzled::enum_tx_isolation tx_isolation;
  drizzled::Cast_target cast_type;
  const drizzled::charset_info_st *charset;
  drizzled::thr_lock_type lock_type;
  drizzled::interval_type interval, interval_time_st;
  drizzled::type::timestamp_t date_time_type;
  drizzled::Select_Lex *select_lex;
  drizzled::chooser_compare_func_creator boolfunc2creator;
  drizzled::LEX *lex;
  drizzled::index_hint_type index_hint;
  drizzled::enum_filetype filetype;
  drizzled::message::Table::ForeignKeyConstraint::ForeignKeyOption m_fk_option;
  drizzled::execute_string_t execute_string;



/* Line 214 of yacc.c  */
#line 1008 "drizzled/sql_yacc.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */

/* Line 264 of yacc.c  */
#line 165 "drizzled/sql_yacc.yy"

namespace drizzled
{
bool my_yyoverflow(short **a, union ParserType **b, unsigned long *yystacksize);
}


/* Line 264 of yacc.c  */
#line 1028 "drizzled/sql_yacc.cc"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  279
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   15183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  390
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  425
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1224
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2112

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   627

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   379,   372,     2,
     383,   384,   377,   376,   387,   375,   388,   378,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   367,     2,     2,   389,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   380,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   385,   371,   386,   381,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   368,   369,   370,   373,   374,   382
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    68,    69,    77,    78,    92,    93,   100,
     106,   107,   113,   118,   121,   124,   125,   126,   131,   132,
     139,   142,   144,   145,   146,   153,   154,   156,   159,   163,
     165,   167,   170,   174,   176,   180,   184,   187,   191,   195,
     199,   200,   202,   203,   207,   208,   210,   212,   215,   217,
     220,   224,   226,   230,   234,   238,   242,   246,   249,   253,
     257,   261,   265,   269,   271,   273,   276,   278,   280,   282,
     287,   292,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   316,   318,   322,   324,   326,   329,   332,   340,   349,
     358,   361,   364,   365,   367,   370,   371,   373,   376,   377,
     382,   385,   391,   394,   397,   400,   406,   409,   410,   417,
     423,   426,   429,   432,   435,   439,   443,   447,   450,   453,
     455,   458,   460,   462,   467,   472,   475,   478,   482,   483,
     487,   489,   495,   496,   500,   501,   503,   505,   506,   510,
     511,   513,   514,   518,   520,   522,   525,   528,   530,   533,
     534,   537,   541,   544,   545,   548,   552,   555,   556,   558,
     561,   563,   565,   568,   571,   573,   574,   576,   579,   581,
     583,   585,   589,   592,   594,   595,   597,   600,   602,   604,
     608,   611,   616,   618,   619,   622,   624,   626,   628,   629,
     631,   632,   634,   640,   641,   645,   649,   651,   652,   655,
     658,   661,   662,   666,   670,   677,   684,   686,   688,   691,
     694,   697,   699,   702,   705,   707,   709,   710,   712,   714,
     716,   718,   719,   721,   722,   724,   727,   728,   730,   732,
     735,   738,   740,   744,   747,   749,   751,   756,   759,   761,
     766,   767,   769,   770,   773,   775,   779,   780,   788,   789,
     795,   796,   799,   802,   804,   805,   807,   809,   811,   815,
     818,   822,   825,   830,   831,   838,   839,   840,   849,   853,
     858,   862,   866,   869,   872,   879,   885,   889,   893,   895,
     897,   899,   900,   902,   903,   905,   906,   909,   911,   912,
     914,   916,   920,   921,   925,   926,   931,   932,   937,   938,
     943,   945,   949,   953,   955,   958,   963,   966,   970,   973,
     977,   978,   982,   983,   984,   991,   994,   996,   998,  1001,
    1004,  1012,  1013,  1015,  1018,  1020,  1022,  1024,  1026,  1028,
    1030,  1032,  1034,  1036,  1038,  1039,  1042,  1047,  1051,  1053,
    1055,  1059,  1064,  1065,  1066,  1067,  1070,  1073,  1075,  1077,
    1078,  1081,  1085,  1089,  1093,  1096,  1100,  1105,  1109,  1114,
    1118,  1123,  1125,  1129,  1134,  1138,  1142,  1149,  1151,  1157,
    1164,  1170,  1178,  1185,  1194,  1200,  1207,  1212,  1218,  1222,
    1227,  1229,  1233,  1237,  1241,  1245,  1249,  1253,  1259,  1265,
    1269,  1273,  1277,  1281,  1285,  1289,  1291,  1293,  1295,  1297,
    1299,  1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,
    1321,  1323,  1325,  1327,  1331,  1334,  1337,  1340,  1344,  1348,
    1354,  1361,  1366,  1371,  1374,  1381,  1387,  1394,  1399,  1404,
    1410,  1415,  1418,  1423,  1428,  1433,  1444,  1451,  1460,  1467,
    1472,  1477,  1484,  1489,  1494,  1499,  1507,  1515,  1523,  1530,
    1537,  1544,  1551,  1555,  1560,  1567,  1576,  1579,  1588,  1597,
    1604,  1607,  1612,  1619,  1626,  1635,  1644,  1651,  1660,  1667,
    1670,  1675,  1684,  1693,  1696,  1699,  1704,  1709,  1713,  1717,
    1723,  1732,  1738,  1743,  1750,  1755,  1762,  1771,  1778,  1783,
    1787,  1794,  1795,  1801,  1802,  1804,  1806,  1810,  1815,  1820,
    1826,  1832,  1837,  1838,  1839,  1847,  1852,  1858,  1863,  1869,
    1874,  1879,  1884,  1889,  1894,  1900,  1901,  1910,  1911,  1915,
    1919,  1921,  1926,  1927,  1929,  1930,  1933,  1934,  1936,  1937,
    1941,  1944,  1946,  1948,  1951,  1953,  1955,  1958,  1961,  1963,
    1965,  1967,  1970,  1972,  1976,  1977,  1979,  1980,  1983,  1988,
    1994,  1996,  1998,  2000,  2002,  2007,  2009,  2013,  2017,  2021,
    2022,  2029,  2030,  2037,  2038,  2047,  2052,  2053,  2062,  2063,
    2074,  2081,  2082,  2091,  2092,  2103,  2110,  2112,  2115,  2118,
    2119,  2124,  2128,  2134,  2138,  2139,  2140,  2149,  2151,  2152,
    2153,  2160,  2161,  2165,  2166,  2167,  2173,  2174,  2176,  2177,
    2179,  2180,  2183,  2187,  2191,  2193,  2195,  2196,  2204,  2205,
    2213,  2215,  2218,  2219,  2220,  2223,  2224,  2227,  2228,  2230,
    2232,  2234,  2236,  2240,  2242,  2246,  2248,  2250,  2252,  2254,
    2256,  2258,  2260,  2262,  2264,  2266,  2268,  2270,  2272,  2274,
    2276,  2278,  2280,  2282,  2284,  2286,  2288,  2290,  2292,  2293,
    2295,  2296,  2299,  2300,  2302,  2303,  2304,  2308,  2309,  2310,
    2314,  2317,  2318,  2319,  2324,  2329,  2332,  2333,  2335,  2339,
    2343,  2345,  2348,  2349,  2351,  2352,  2357,  2362,  2365,  2366,
    2368,  2370,  2371,  2373,  2374,  2376,  2379,  2381,  2385,  2389,
    2391,  2393,  2395,  2396,  2399,  2401,  2403,  2405,  2407,  2409,
    2411,  2413,  2415,  2417,  2419,  2421,  2422,  2425,  2429,  2431,
    2434,  2435,  2439,  2440,  2446,  2449,  2451,  2455,  2461,  2462,
    2470,  2475,  2477,  2481,  2483,  2484,  2487,  2488,  2490,  2496,
    2498,  2501,  2502,  2506,  2507,  2509,  2510,  2512,  2513,  2514,
    2522,  2523,  2524,  2530,  2533,  2535,  2537,  2539,  2543,  2548,
    2549,  2553,  2557,  2559,  2562,  2565,  2566,  2570,  2571,  2577,
    2581,  2583,  2587,  2589,  2593,  2595,  2597,  2598,  2600,  2601,
    2606,  2607,  2609,  2613,  2615,  2617,  2619,  2620,  2621,  2628,
    2629,  2639,  2643,  2645,  2649,  2653,  2655,  2659,  2660,  2669,
    2670,  2672,  2676,  2677,  2679,  2680,  2684,  2687,  2691,  2695,
    2700,  2706,  2712,  2718,  2724,  2727,  2730,  2734,  2737,  2741,
    2743,  2747,  2752,  2753,  2756,  2758,  2760,  2761,  2764,  2767,
    2768,  2773,  2774,  2779,  2781,  2783,  2784,  2786,  2787,  2789,
    2791,  2792,  2796,  2800,  2802,  2803,  2807,  2812,  2814,  2816,
    2819,  2820,  2822,  2826,  2827,  2829,  2831,  2834,  2835,  2836,
    2837,  2838,  2857,  2859,  2860,  2862,  2863,  2865,  2867,  2868,
    2870,  2872,  2874,  2877,  2880,  2881,  2884,  2887,  2889,  2893,
    2898,  2902,  2906,  2907,  2910,  2913,  2915,  2919,  2923,  2924,
    2928,  2930,  2932,  2933,  2937,  2940,  2944,  2946,  2948,  2951,
    2952,  2955,  2957,  2960,  2962,  2964,  2966,  2968,  2971,  2974,
    2976,  2978,  2980,  2982,  2984,  2986,  2988,  2991,  2994,  2996,
    2998,  3000,  3002,  3004,  3007,  3010,  3012,  3014,  3016,  3018,
    3020,  3022,  3025,  3028,  3030,  3032,  3034,  3036,  3038,  3040,
    3042,  3046,  3052,  3054,  3056,  3058,  3062,  3067,  3073,  3075,
    3081,  3085,  3088,  3090,  3094,  3097,  3099,  3101,  3103,  3105,
    3107,  3109,  3111,  3113,  3115,  3117,  3119,  3121,  3123,  3125,
    3127,  3129,  3131,  3133,  3135,  3137,  3139,  3141,  3143,  3145,
    3147,  3149,  3151,  3153,  3155,  3157,  3159,  3161,  3163,  3165,
    3167,  3169,  3171,  3173,  3175,  3177,  3179,  3181,  3183,  3185,
    3187,  3189,  3191,  3193,  3195,  3197,  3199,  3201,  3203,  3205,
    3207,  3209,  3211,  3213,  3215,  3217,  3219,  3221,  3223,  3225,
    3227,  3229,  3231,  3233,  3235,  3237,  3239,  3241,  3243,  3245,
    3247,  3249,  3251,  3253,  3255,  3257,  3259,  3261,  3263,  3265,
    3267,  3269,  3271,  3273,  3275,  3277,  3279,  3281,  3283,  3285,
    3287,  3289,  3291,  3293,  3295,  3297,  3299,  3301,  3303,  3305,
    3307,  3309,  3311,  3313,  3315,  3317,  3319,  3321,  3323,  3325,
    3327,  3329,  3331,  3333,  3335,  3337,  3339,  3341,  3343,  3345,
    3347,  3349,  3351,  3353,  3355,  3357,  3359,  3361,  3363,  3365,
    3367,  3369,  3371,  3373,  3375,  3377,  3379,  3381,  3383,  3385,
    3387,  3389,  3391,  3393,  3395,  3397,  3399,  3401,  3403,  3405,
    3407,  3409,  3411,  3413,  3415,  3417,  3419,  3421,  3423,  3424,
    3429,  3430,  3432,  3434,  3438,  3439,  3442,  3444,  3446,  3448,
    3450,  3451,  3453,  3454,  3456,  3458,  3460,  3461,  3464,  3467,
    3470,  3472,  3475,  3480,  3486,  3491,  3498,  3500,  3502,  3504,
    3506,  3508,  3510,  3513,  3516,  3519,  3521,  3523,  3525,  3527,
    3529,  3531,  3533,  3535,  3536,  3540,  3541,  3545,  3546,  3548,
    3549,  3553,  3556,  3557,  3559,  3562,  3563,  3565,  3570,  3575,
    3581,  3584,  3588,  3590,  3591,  3593,  3594,  3599,  3600,  3602,
    3604,  3605,  3608,  3611,  3613,  3614,  3616,  3618,  3621,  3625,
    3627,  3628,  3634,  3638,  3639
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     391,     0,    -1,   108,    -1,   392,   108,    -1,   393,    -1,
     790,    -1,   490,    -1,   507,    -1,   509,    -1,   796,    -1,
     394,    -1,   695,    -1,   706,    -1,   652,    -1,   658,    -1,
     712,    -1,   663,    -1,   718,    -1,   721,    -1,   799,    -1,
     511,    -1,   666,    -1,   797,    -1,   798,    -1,   515,    -1,
     769,    -1,   700,    -1,   505,    -1,   698,    -1,   788,    -1,
     689,    -1,   720,    -1,    64,    38,   758,    -1,    -1,    64,
     411,   311,   412,   756,   395,   398,    -1,    -1,    64,   494,
     396,   477,   152,   763,   479,   218,   756,   383,   485,   384,
     480,    -1,    -1,    64,    70,   412,   757,   397,   408,    -1,
     383,   426,   384,   413,   400,    -1,    -1,   383,   404,   384,
     399,   804,    -1,   383,   403,   384,   413,    -1,   403,   413,
      -1,   413,   400,    -1,    -1,    -1,   729,   404,   401,   801,
      -1,    -1,   729,   383,   404,   384,   402,   804,    -1,   177,
     756,    -1,   405,    -1,    -1,    -1,   270,   406,   526,   532,
     407,   425,    -1,    -1,   422,    -1,   422,   409,    -1,   422,
     387,   409,    -1,   409,    -1,   410,    -1,   410,   409,    -1,
     410,   387,   409,    -1,   764,    -1,   253,   367,   325,    -1,
     253,   367,   120,    -1,    87,   760,    -1,    87,    68,   537,
      -1,   764,   367,   764,    -1,   764,   367,   643,    -1,    -1,
     312,    -1,    -1,   148,   210,   117,    -1,    -1,   415,    -1,
     416,    -1,   416,   414,    -1,   416,    -1,   416,   415,    -1,
     416,   387,   415,    -1,   417,    -1,   109,   367,   764,    -1,
      51,   681,   760,    -1,    18,   681,   643,    -1,   253,   367,
     325,    -1,   253,   367,   120,    -1,    87,   760,    -1,    87,
      68,   537,    -1,   264,   367,   424,    -1,   121,   367,   760,
      -1,   764,   367,   765,    -1,   764,   367,   643,    -1,   420,
      -1,   421,    -1,    42,   277,    -1,    41,    -1,   344,    -1,
      86,    -1,   464,   418,   681,   419,    -1,   464,    47,   681,
     463,    -1,   464,    47,   681,   463,    -1,    54,    -1,    55,
      -1,    86,    -1,   101,    -1,   123,    -1,   245,    -1,   423,
      -1,   637,    -1,   525,   531,    -1,   427,    -1,   426,   387,
     427,    -1,   428,    -1,   429,    -1,   434,   430,    -1,   434,
     466,    -1,   472,   487,   479,   383,   485,   384,   480,    -1,
     432,   473,   487,   479,   383,   485,   384,   480,    -1,   432,
     127,   169,   487,   383,   485,   384,   466,    -1,   433,   430,
      -1,   432,   431,    -1,    -1,   431,    -1,    44,   538,    -1,
      -1,   433,    -1,    60,   487,    -1,    -1,   755,   435,   436,
     461,    -1,   319,   458,    -1,   319,   383,   214,   384,   458,
      -1,    73,   458,    -1,   439,   455,    -1,    42,   452,    -1,
     438,   383,   214,   384,   452,    -1,   315,   452,    -1,    -1,
     110,   437,   383,   489,   384,   452,    -1,   348,   383,   214,
     384,   450,    -1,   440,   455,    -1,    76,   450,    -1,   320,
     450,    -1,    27,   450,    -1,    84,   441,   455,    -1,   215,
     441,   455,    -1,   123,   441,   455,    -1,   345,   450,    -1,
      28,   451,    -1,   274,    -1,    42,   352,    -1,    42,    -1,
     349,    -1,   160,   445,   444,   446,    -1,    23,   445,   444,
     446,    -1,   244,   447,    -1,    96,   447,    -1,    96,   233,
     447,    -1,    -1,   383,   214,   384,    -1,   442,    -1,   383,
     214,   387,   214,   384,    -1,    -1,   383,   214,   384,    -1,
      -1,   281,    -1,   336,    -1,    -1,   383,   214,   384,    -1,
      -1,   366,    -1,    -1,   383,   214,   384,    -1,   442,    -1,
     213,    -1,   210,   213,    -1,   465,   169,    -1,   333,    -1,
     333,   169,    -1,    -1,   450,   448,    -1,   450,    86,   744,
      -1,   450,   449,    -1,    -1,   451,   448,    -1,   451,    86,
     747,    -1,   451,   449,    -1,    -1,   453,    -1,   453,   454,
      -1,   454,    -1,   448,    -1,    86,   744,    -1,    47,   462,
      -1,   449,    -1,    -1,   456,    -1,   456,   457,    -1,   457,
      -1,   448,    -1,    18,    -1,   274,    86,   347,    -1,    86,
     746,    -1,   449,    -1,    -1,   459,    -1,   459,   460,    -1,
     460,    -1,   448,    -1,    86,   211,   537,    -1,    86,   748,
      -1,   218,   337,   211,   537,    -1,   449,    -1,    -1,    51,
     760,    -1,   764,    -1,   462,    -1,    86,    -1,    -1,    86,
      -1,    -1,   235,    -1,   246,   756,   467,   469,   470,    -1,
      -1,   383,   468,   384,    -1,   468,   387,   763,    -1,   763,
      -1,    -1,   187,   132,    -1,   187,   231,    -1,   187,   282,
      -1,    -1,   218,   337,   471,    -1,   218,    88,   471,    -1,
     218,   337,   471,   218,    88,   471,    -1,   218,    88,   471,
     218,   337,   471,    -1,   255,    -1,    34,    -1,   277,   213,
      -1,   212,     4,    -1,   277,    86,    -1,   474,    -1,   235,
     169,    -1,   333,   475,    -1,   169,    -1,   152,    -1,    -1,
     474,    -1,   167,    -1,   152,    -1,   151,    -1,    -1,   333,
      -1,    -1,   478,    -1,   478,   482,    -1,    -1,   481,    -1,
     483,    -1,   481,   483,    -1,   341,   484,    -1,   482,    -1,
     168,   681,   642,    -1,    51,   760,    -1,    31,    -1,   137,
      -1,   485,   387,   486,   635,    -1,   486,   635,    -1,   763,
      -1,   763,   383,   214,   384,    -1,    -1,   755,    -1,    -1,
     388,   763,    -1,   743,    -1,   489,   387,   743,    -1,    -1,
      10,   494,   502,   311,   756,   491,   493,    -1,    -1,    10,
      70,   757,   492,   422,    -1,    -1,    93,   309,    -1,   150,
     309,    -1,   495,    -1,    -1,   221,    -1,   216,    -1,   497,
      -1,   495,   387,   497,    -1,     6,   501,    -1,   496,   428,
     503,    -1,     6,   429,    -1,   496,   383,   426,   384,    -1,
      -1,    40,   501,   755,   498,   434,   503,    -1,    -1,    -1,
     199,   501,   755,   499,   436,   461,   500,   503,    -1,    98,
     501,   755,    -1,    98,   127,   169,   487,    -1,    98,   235,
     169,    -1,    98,   474,   755,    -1,    92,   167,    -1,   104,
     167,    -1,    10,   501,   755,   277,    86,   744,    -1,    10,
     501,   755,    98,    86,    -1,   249,   504,   756,    -1,    62,
     321,   463,    -1,   414,    -1,   126,    -1,   628,    -1,    -1,
      50,    -1,    -1,   149,    -1,    -1,     7,   763,    -1,   122,
      -1,    -1,   321,    -1,    14,    -1,   294,   323,   506,    -1,
      -1,   359,    59,   283,    -1,    -1,    11,   787,   508,   654,
      -1,    -1,    44,   787,   510,   654,    -1,    -1,   249,   787,
     512,   513,    -1,   514,    -1,   513,   387,   514,    -1,   756,
     321,   756,    -1,   516,    -1,   270,   519,    -1,   383,   517,
     384,   804,    -1,   270,   521,    -1,   383,   517,   384,    -1,
     270,   589,    -1,   383,   518,   384,    -1,    -1,   521,   520,
     801,    -1,    -1,    -1,   522,   526,   532,   523,   524,   531,
      -1,   631,   637,    -1,   648,    -1,   525,    -1,   648,   525,
      -1,   525,   648,    -1,   131,   571,   620,   625,   622,   631,
     637,    -1,    -1,   527,    -1,   527,   530,    -1,   530,    -1,
      94,    -1,     9,    -1,   291,    -1,   288,    -1,   300,    -1,
     289,    -1,   529,    -1,   528,    -1,   290,    -1,    -1,   128,
     337,    -1,   183,   162,   279,   197,    -1,   532,   387,   533,
      -1,   533,    -1,   377,    -1,   534,   751,   535,    -1,   534,
     538,   535,   536,    -1,    -1,    -1,    -1,    14,   763,    -1,
      14,   760,    -1,   763,    -1,   760,    -1,    -1,   383,   384,
      -1,   538,   227,   538,    -1,   538,   363,   538,    -1,   538,
      12,   538,    -1,   210,   538,    -1,   539,   163,   325,    -1,
     539,   163,   210,   325,    -1,   539,   163,   120,    -1,   539,
     163,   210,   120,    -1,   539,   163,   334,    -1,   539,   163,
     210,   334,    -1,   539,    -1,   539,   163,   213,    -1,   539,
     163,   210,   213,    -1,   539,   111,   540,    -1,   539,   542,
     540,    -1,   539,   542,   543,   383,   812,   384,    -1,   540,
      -1,   541,   162,   383,   812,   384,    -1,   541,   210,   162,
     383,   812,   384,    -1,   541,   162,   383,   538,   384,    -1,
     541,   162,   383,   538,   387,   566,   384,    -1,   541,   210,
     162,   383,   538,   384,    -1,   541,   210,   162,   383,   538,
     387,   566,   384,    -1,   541,    22,   541,    12,   540,    -1,
     541,   210,    22,   541,    12,   540,    -1,   541,   177,   544,
     624,    -1,   541,   210,   177,   544,   624,    -1,   541,   247,
     541,    -1,   541,   210,   247,   541,    -1,   541,    -1,   541,
     371,   541,    -1,   541,   372,   541,    -1,   541,   373,   541,
      -1,   541,   374,   541,    -1,   541,   376,   541,    -1,   541,
     375,   541,    -1,   541,   376,   158,   538,   614,    -1,   541,
     375,   158,   538,   614,    -1,   541,   377,   541,    -1,   541,
     378,   541,    -1,   541,   379,   541,    -1,   541,    95,   541,
      -1,   541,   200,   541,    -1,   541,   380,   541,    -1,   544,
      -1,   367,    -1,   133,    -1,   369,    -1,   172,    -1,   368,
      -1,   206,    -1,     9,    -1,    13,    -1,   753,    -1,   545,
      -1,   546,    -1,   548,    -1,   547,    -1,   544,    47,   764,
      -1,   745,    -1,   557,    -1,   553,    -1,   544,   370,   544,
      -1,   376,   544,    -1,   375,   544,    -1,   381,   544,    -1,
     383,   812,   384,    -1,   383,   538,   384,    -1,   383,   538,
     387,   566,   384,    -1,   265,   383,   538,   387,   566,   384,
      -1,   117,   383,   812,   384,    -1,   385,   763,   538,   386,
      -1,    24,   544,    -1,    37,   383,   538,    14,   565,   384,
      -1,    36,   567,   569,   568,   106,    -1,    62,   383,   538,
     387,   565,   384,    -1,    86,   383,   753,   384,    -1,   346,
     383,   753,   384,    -1,   158,   538,   614,   376,   538,    -1,
      42,   383,   566,   384,    -1,    68,   537,    -1,    76,   383,
     538,   384,    -1,    81,   383,   538,   384,    -1,   143,   383,
     538,   384,    -1,   157,   383,   538,   387,   538,   387,   538,
     387,   538,   384,    -1,   158,   383,   538,   387,   538,   384,
      -1,   158,   383,   538,   387,   538,   387,   566,   384,    -1,
     174,   383,   538,   387,   538,   384,    -1,   195,   383,   538,
     384,    -1,   201,   383,   538,   384,    -1,   259,   383,   538,
     387,   538,   384,    -1,   268,   383,   538,   384,    -1,   319,
     383,   538,   384,    -1,   324,   383,   538,   384,    -1,   324,
     383,   173,   538,   131,   538,   384,    -1,   324,   383,   322,
     538,   131,   538,   384,    -1,   324,   383,    30,   538,   131,
     538,   384,    -1,   324,   383,   173,   131,   538,   384,    -1,
     324,   383,   322,   131,   538,   384,    -1,   324,   383,    30,
     131,   538,   384,    -1,   324,   383,   538,   131,   538,   384,
      -1,   339,   383,   384,    -1,   365,   383,   538,   384,    -1,
       5,   383,   538,   387,   538,   384,    -1,     5,   383,   538,
     387,   158,   538,   614,   384,    -1,    67,   537,    -1,    74,
     383,   538,   387,   158,   538,   614,   384,    -1,    75,   383,
     538,   387,   158,   538,   614,   384,    -1,   119,   383,   614,
     131,   538,   384,    -1,   211,   537,    -1,   211,   383,   538,
     384,    -1,   232,   383,   541,   162,   538,   384,    -1,   302,
     383,   538,   387,   538,   384,    -1,   302,   383,   538,   387,
     158,   538,   614,   384,    -1,   304,   383,   538,   387,   538,
     387,   538,   384,    -1,   304,   383,   538,   387,   538,   384,
      -1,   304,   383,   538,   131,   538,   128,   538,   384,    -1,
     304,   383,   538,   131,   538,   384,    -1,   307,   537,    -1,
     307,   383,   538,   384,    -1,   317,   383,   615,   387,   538,
     387,   538,   384,    -1,   318,   383,   615,   387,   538,   387,
     538,   384,    -1,   342,   537,    -1,   343,   537,    -1,    46,
     383,   566,   384,    -1,    48,   383,   538,   384,    -1,    70,
     383,   384,    -1,    38,   383,   384,    -1,   116,   383,   538,
     384,   662,    -1,   148,   383,   538,   387,   538,   387,   538,
     384,    -1,   170,   719,   383,   538,   384,    -1,   192,   383,
     538,   384,    -1,   200,   383,   538,   387,   538,   384,    -1,
     238,   383,   538,   384,    -1,   251,   383,   538,   387,   538,
     384,    -1,   252,   383,   538,   387,   538,   387,   538,   384,
      -1,   326,   383,   538,   387,   538,   384,    -1,   354,   383,
     538,   384,    -1,   345,   383,   384,    -1,   354,   383,   538,
     387,   538,   384,    -1,    -1,   759,   383,   549,   550,   384,
      -1,    -1,   551,    -1,   552,    -1,   551,   387,   552,    -1,
     534,   538,   535,   536,    -1,    19,   383,   563,   384,    -1,
      19,   383,    94,   563,   384,    -1,    63,   383,   619,   377,
     384,    -1,    63,   383,   563,   384,    -1,    -1,    -1,    63,
     383,    94,   554,   566,   555,   384,    -1,   196,   383,   563,
     384,    -1,   196,   383,    94,   563,   384,    -1,   188,   383,
     563,   384,    -1,   188,   383,    94,   563,   384,    -1,   297,
     383,   563,   384,    -1,   351,   383,   563,   384,    -1,   296,
     383,   563,   384,    -1,   353,   383,   563,   384,    -1,   305,
     383,   563,   384,    -1,   305,   383,    94,   563,   384,    -1,
      -1,   135,   383,   560,   556,   566,   562,   561,   384,    -1,
      -1,   389,   558,   559,    -1,   782,   278,   538,    -1,   782,
      -1,   389,   778,   782,   488,    -1,    -1,    94,    -1,    -1,
     272,   743,    -1,    -1,   632,    -1,    -1,   619,   564,   538,
      -1,    24,   443,    -1,    28,    -1,   281,    -1,   281,   160,
      -1,   160,    -1,   336,    -1,   336,   160,    -1,    42,   443,
      -1,    76,    -1,   320,    -1,    73,    -1,    84,   441,    -1,
     538,    -1,   566,   387,   538,    -1,    -1,   538,    -1,    -1,
     103,   538,    -1,   357,   538,   316,   538,    -1,   569,   357,
     538,   316,   538,    -1,   583,    -1,   574,    -1,   573,    -1,
     570,    -1,   385,   763,   570,   386,    -1,   572,    -1,   573,
     387,   572,    -1,   570,   582,   570,    -1,   570,   300,   583,
      -1,    -1,   570,   582,   570,   218,   575,   538,    -1,    -1,
     570,   300,   583,   218,   576,   538,    -1,    -1,   570,   582,
     570,   341,   577,   383,   613,   384,    -1,   570,   205,   166,
     583,    -1,    -1,   570,   174,   599,   166,   570,   218,   578,
     538,    -1,    -1,   570,   174,   599,   166,   583,   579,   341,
     383,   613,   384,    -1,   570,   205,   174,   599,   166,   583,
      -1,    -1,   570,   259,   599,   166,   570,   218,   580,   538,
      -1,    -1,   570,   259,   599,   166,   583,   581,   341,   383,
     613,   384,    -1,   570,   205,   259,   599,   166,   583,    -1,
     166,    -1,   154,   166,    -1,    65,   166,    -1,    -1,   584,
     756,   618,   608,    -1,   598,   597,   594,    -1,   383,   597,
     585,   384,   618,    -1,   592,   631,   637,    -1,    -1,    -1,
     585,   332,   808,   586,   809,   587,   631,   637,    -1,   589,
      -1,    -1,    -1,   590,   526,   532,   591,   425,   531,    -1,
      -1,   597,   593,   573,    -1,    -1,    -1,   595,   526,   532,
     596,   425,    -1,    -1,   270,    -1,    -1,   228,    -1,    -1,
     128,   166,    -1,   128,   226,    32,    -1,   128,   136,    32,
      -1,   126,    -1,   149,    -1,    -1,   601,   474,   600,   603,
     383,   612,   384,    -1,    -1,   340,   474,   600,   604,   383,
     610,   384,    -1,   602,    -1,   605,   602,    -1,    -1,    -1,
     607,   605,    -1,    -1,   609,   606,    -1,    -1,   612,    -1,
     763,    -1,   235,    -1,   611,    -1,   612,   387,   611,    -1,
     763,    -1,   613,   387,   763,    -1,   616,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,   140,    -1,   141,    -1,
     142,    -1,   193,    -1,   194,    -1,   267,    -1,   364,    -1,
     616,    -1,   130,    -1,    81,    -1,   356,    -1,   143,    -1,
     195,    -1,   201,    -1,   238,    -1,   268,    -1,   192,    -1,
     365,    -1,    -1,    14,    -1,    -1,   617,   763,    -1,    -1,
       9,    -1,    -1,    -1,   358,   621,   538,    -1,    -1,    -1,
     138,   623,   538,    -1,   114,   544,    -1,    -1,    -1,   136,
      32,   626,   627,    -1,   626,   387,   752,   635,    -1,   752,
     635,    -1,    -1,   360,    -1,   226,    32,   629,    -1,   629,
     387,   630,    -1,   630,    -1,   753,   635,    -1,    -1,   632,
      -1,    -1,   226,    32,   633,   634,    -1,   634,   387,   752,
     635,    -1,   752,   635,    -1,    -1,    15,    -1,    89,    -1,
      -1,   638,    -1,    -1,   638,    -1,   178,   639,    -1,   640,
      -1,   640,   387,   640,    -1,   640,   217,   640,    -1,   328,
      -1,   185,    -1,   214,    -1,    -1,   178,   640,    -1,   214,
      -1,   139,    -1,   185,    -1,   328,    -1,    83,    -1,   124,
      -1,   214,    -1,   328,    -1,   185,    -1,    83,    -1,   124,
      -1,    -1,   645,   646,    -1,   646,   387,   647,    -1,   647,
      -1,   389,   782,    -1,    -1,   159,   649,   650,    -1,    -1,
     229,   762,   651,   730,   733,    -1,    99,   762,    -1,   644,
      -1,    98,    38,   758,    -1,    98,   657,   787,   656,   654,
      -1,    -1,    98,   494,   152,   763,   218,   756,   653,    -1,
      98,    70,   656,   757,    -1,   655,    -1,   654,   387,   655,
      -1,   756,    -1,    -1,   148,   117,    -1,    -1,   312,    -1,
     116,   659,   660,   661,   662,    -1,   782,    -1,   389,   782,
      -1,    -1,   359,   212,   257,    -1,    -1,    56,    -1,    -1,
     354,    -1,    -1,    -1,   157,   664,   502,   669,   665,   671,
     687,    -1,    -1,    -1,   252,   667,   669,   668,   671,    -1,
     159,   670,    -1,   670,    -1,   655,    -1,   674,    -1,   383,
     384,   674,    -1,   383,   673,   384,   674,    -1,    -1,   277,
     672,   678,    -1,   673,   387,   750,    -1,   750,    -1,   346,
     677,    -1,   347,   677,    -1,    -1,   405,   675,   801,    -1,
      -1,   383,   405,   384,   676,   804,    -1,   677,   387,   682,
      -1,   682,    -1,   678,   387,   679,    -1,   679,    -1,   753,
     680,   686,    -1,   367,    -1,   278,    -1,    -1,   367,    -1,
      -1,   383,   683,   684,   384,    -1,    -1,   685,    -1,   685,
     387,   686,    -1,   686,    -1,   538,    -1,    86,    -1,    -1,
      -1,   218,   100,   688,   169,   337,   693,    -1,    -1,   337,
     502,   756,   277,   691,   690,   620,   631,   641,    -1,   691,
     387,   692,    -1,   692,    -1,   753,   680,   686,    -1,   693,
     387,   694,    -1,   694,    -1,   753,   680,   686,    -1,    -1,
      88,   697,   131,   756,   696,   620,   631,   641,    -1,    -1,
     149,    -1,   326,   699,   655,    -1,    -1,   311,    -1,    -1,
     280,   701,   702,    -1,    71,   705,    -1,   308,   703,   705,
      -1,   312,   308,   705,    -1,   311,   295,   703,   705,    -1,
      49,   704,   756,   703,   705,    -1,   476,   704,   756,   703,
     620,    -1,    63,   383,   377,   384,   355,    -1,    63,   383,
     377,   384,   112,    -1,   355,   636,    -1,   112,   636,    -1,
     777,   295,   705,    -1,   765,   295,    -1,    64,   311,   756,
      -1,   237,    -1,   777,   350,   705,    -1,    64,    70,   412,
     763,    -1,    -1,   704,   763,    -1,   131,    -1,   162,    -1,
      -1,   177,   760,    -1,   358,   538,    -1,    -1,   709,   756,
     707,   711,    -1,    -1,   709,   710,   708,   515,    -1,    89,
      -1,    90,    -1,    -1,   118,    -1,    -1,   743,    -1,   763,
      -1,    -1,   125,   713,   714,    -1,   714,   387,   715,    -1,
     715,    -1,    -1,   787,   716,   717,    -1,   308,   359,   242,
     183,    -1,   184,    -1,   295,    -1,   134,   295,    -1,    -1,
     654,    -1,   170,   719,   538,    -1,    -1,    58,    -1,   239,
      -1,   340,   757,    -1,    -1,    -1,    -1,    -1,   180,   726,
     722,   727,   153,   762,   723,   728,   159,   724,   311,   756,
     725,   730,   733,   736,   738,   741,    -1,    72,    -1,    -1,
      56,    -1,    -1,   252,    -1,   149,    -1,    -1,    14,    -1,
     252,    -1,   149,    -1,   252,    14,    -1,   149,    14,    -1,
      -1,    49,   731,    -1,   731,   732,    -1,   732,    -1,   313,
      32,   743,    -1,   225,   105,    32,   743,    -1,   105,    32,
     743,    -1,   113,    32,   743,    -1,    -1,   179,   734,    -1,
     734,   735,    -1,   735,    -1,   313,    32,   743,    -1,   293,
      32,   743,    -1,    -1,   149,   214,   737,    -1,   179,    -1,
     263,    -1,    -1,   383,   739,   384,    -1,   383,   384,    -1,
     739,   387,   740,    -1,   740,    -1,   753,    -1,   389,   782,
      -1,    -1,   277,   693,    -1,   761,    -1,   742,   761,    -1,
     761,    -1,   139,    -1,    25,    -1,   745,    -1,   376,   749,
      -1,   375,   749,    -1,   742,    -1,   749,    -1,   213,    -1,
     120,    -1,   325,    -1,   139,    -1,    25,    -1,    76,   742,
      -1,   319,   742,    -1,   742,    -1,   139,    -1,    25,    -1,
     749,    -1,   213,    -1,   376,   749,    -1,   375,   749,    -1,
     213,    -1,   120,    -1,   325,    -1,   742,    -1,   213,    -1,
     749,    -1,    76,   742,    -1,   319,   742,    -1,   214,    -1,
     185,    -1,   328,    -1,    83,    -1,   124,    -1,   753,    -1,
     751,    -1,   763,   388,   377,    -1,   763,   388,   763,   388,
     377,    -1,   538,    -1,   763,    -1,   754,    -1,   763,   388,
     763,    -1,   388,   763,   388,   763,    -1,   763,   388,   763,
     388,   763,    -1,   763,    -1,   763,   388,   763,   388,   763,
      -1,   763,   388,   763,    -1,   388,   763,    -1,   763,    -1,
     757,   388,   763,    -1,   388,   763,    -1,   763,    -1,   763,
      -1,   144,    -1,   147,    -1,   314,    -1,   314,    -1,   314,
      -1,   759,    -1,   767,    -1,   759,    -1,   760,    -1,   759,
      -1,   760,    -1,   319,    -1,   289,    -1,   146,    -1,   768,
      -1,    21,    -1,    43,    -1,    45,    -1,    51,    -1,    53,
      -1,    61,    -1,    82,    -1,    97,    -1,   106,    -1,   125,
      -1,   212,    -1,   222,    -1,   260,    -1,   266,    -1,   269,
      -1,   275,    -1,   281,    -1,   294,    -1,   298,    -1,   326,
      -1,     4,    -1,     5,    -1,     7,    -1,     8,    -1,    13,
      -1,    17,    -1,    18,    -1,    19,    -1,    26,    -1,    29,
      -1,    28,    -1,    31,    -1,    35,    -1,    39,    -1,    46,
      -1,    48,    -1,    49,    -1,    52,    -1,    54,    -1,    55,
      -1,    56,    -1,    58,    -1,    59,    -1,    66,    -1,    72,
      -1,    71,    -1,    73,    -1,    76,    -1,    81,    -1,    92,
      -1,    93,    -1,    99,    -1,   100,    -1,   101,    -1,   107,
      -1,   110,    -1,   109,    -1,   112,    -1,   114,    -1,   115,
      -1,   118,    -1,   129,    -1,   104,    -1,   132,    -1,   121,
      -1,   122,    -1,   123,    -1,   130,    -1,   134,    -1,   137,
      -1,   143,    -1,   145,    -1,   150,    -1,   151,    -1,   164,
      -1,   168,    -1,   171,    -1,   175,    -1,   181,    -1,   182,
      -1,   184,    -1,   189,    -1,   190,    -1,   191,    -1,   192,
      -1,   195,    -1,   199,    -1,   197,    -1,   201,    -1,   203,
      -1,   202,    -1,   204,    -1,   208,    -1,   207,    -1,   209,
      -1,   216,    -1,   217,    -1,   219,    -1,   220,    -1,   221,
      -1,   231,    -1,   234,    -1,   236,    -1,   237,    -1,   238,
      -1,   239,    -1,   245,    -1,   250,    -1,   256,    -1,   261,
      -1,   262,    -1,   263,    -1,   264,    -1,   265,    -1,   268,
      -1,   274,    -1,   273,    -1,   276,    -1,   282,    -1,   279,
      -1,   283,    -1,   295,    -1,   301,    -1,   302,    -1,   303,
      -1,   306,    -1,   308,    -1,   309,    -1,   312,    -1,   315,
      -1,   323,    -1,   320,    -1,   317,    -1,   318,    -1,   327,
      -1,   329,    -1,   330,    -1,   334,    -1,   345,    -1,   339,
      -1,   350,    -1,   347,    -1,   355,    -1,   356,    -1,   361,
      -1,   365,    -1,    -1,   277,   771,   770,   772,    -1,    -1,
     224,    -1,   773,    -1,   772,   387,   773,    -1,    -1,   774,
     779,    -1,   776,    -1,   134,    -1,   181,    -1,   276,    -1,
      -1,   219,    -1,    -1,   134,    -1,   181,    -1,   276,    -1,
      -1,   134,   388,    -1,   181,   388,    -1,   276,   388,    -1,
     780,    -1,   776,   781,    -1,   775,   784,   680,   786,    -1,
     775,   323,   164,   175,   785,    -1,   389,   782,   680,   538,
      -1,   389,   389,   778,   784,   680,   786,    -1,   783,    -1,
     760,    -1,   176,    -1,   766,    -1,   759,    -1,   783,    -1,
     242,   329,    -1,   242,    52,    -1,   250,   242,    -1,   273,
      -1,   538,    -1,    86,    -1,   218,    -1,     9,    -1,    24,
      -1,   311,    -1,   308,    -1,    -1,   335,   789,   787,    -1,
      -1,    21,   791,   792,    -1,    -1,   361,    -1,    -1,    12,
     212,    39,    -1,    12,    39,    -1,    -1,   248,    -1,   212,
     248,    -1,    -1,   266,    -1,    53,   792,   793,   794,    -1,
     260,   792,   793,   794,    -1,   260,   792,   321,   795,   800,
      -1,   266,   800,    -1,   248,   266,   800,    -1,   759,    -1,
      -1,   802,    -1,    -1,   332,   808,   803,   516,    -1,    -1,
     802,    -1,   805,    -1,    -1,   806,   807,    -1,   632,   636,
      -1,   638,    -1,    -1,    94,    -1,     9,    -1,   270,   588,
      -1,   383,   518,   384,    -1,   809,    -1,    -1,   810,   332,
     808,   811,   809,    -1,   813,   810,   814,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   804,   804,   816,   820,   821,   826,   827,   828,   829,
     830,   831,   832,   833,   834,   835,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   857,   862,   861,   876,   875,   889,   888,   899,
     902,   901,   906,   908,   910,   915,   917,   916,   922,   921,
     929,   939,   949,   970,   948,   984,   985,   986,   987,   988,
     992,   993,   994,   998,  1003,  1007,  1011,  1015,  1019,  1023,
    1030,  1031,  1035,  1036,  1039,  1041,  1045,  1046,  1050,  1051,
    1052,  1055,  1058,  1062,  1066,  1070,  1074,  1078,  1083,  1087,
    1091,  1095,  1099,  1103,  1104,  1108,  1109,  1113,  1114,  1118,
    1123,  1133,  1140,  1141,  1142,  1143,  1144,  1145,  1149,  1157,
    1158,  1162,  1163,  1167,  1168,  1172,  1173,  1180,  1184,  1189,
    1193,  1197,  1203,  1205,  1209,  1213,  1214,  1218,  1223,  1222,
    1248,  1252,  1256,  1263,  1267,  1271,  1275,  1284,  1283,  1294,
    1298,  1303,  1310,  1317,  1321,  1325,  1329,  1333,  1337,  1341,
    1348,  1350,  1352,  1357,  1361,  1368,  1372,  1376,  1384,  1385,
    1387,  1392,  1400,  1401,  1405,  1406,  1407,  1411,  1412,  1416,
    1417,  1422,  1423,  1425,  1430,  1434,  1446,  1450,  1454,  1461,
    1462,  1464,  1471,  1476,  1477,  1479,  1486,  1491,  1492,  1496,
    1497,  1501,  1503,  1510,  1523,  1528,  1529,  1533,  1534,  1538,
    1540,  1544,  1548,  1555,  1560,  1561,  1565,  1566,  1570,  1572,
    1579,  1586,  1590,  1595,  1596,  1607,  1618,  1619,  1623,  1624,
    1627,  1629,  1633,  1641,  1642,  1646,  1648,  1657,  1658,  1660,
    1662,  1668,  1672,  1677,  1682,  1688,  1697,  1698,  1699,  1700,
    1701,  1705,  1709,  1710,  1714,  1715,  1719,  1720,  1724,  1725,
    1726,  1730,  1731,  1735,  1747,  1748,  1752,  1753,  1757,  1758,
    1762,  1766,  1767,  1769,  1774,  1775,  1779,  1780,  1784,  1785,
    1797,  1798,  1802,  1803,  1807,  1808,  1816,  1815,  1832,  1831,
    1843,  1845,  1851,  1857,  1862,  1865,  1869,  1876,  1877,  1881,
    1891,  1892,  1898,  1906,  1905,  1913,  1926,  1912,  1940,  1950,
    1954,  1958,  1962,  1972,  1981,  1988,  1995,  2021,  2031,  2037,
    2043,  2052,  2053,  2057,  2058,  2062,  2063,  2067,  2074,  2075,
    2076,  2080,  2087,  2088,  2096,  2095,  2105,  2104,  2114,  2113,
    2122,  2123,  2127,  2144,  2152,  2153,  2157,  2162,  2167,  2172,
    2177,  2176,  2195,  2202,  2195,  2209,  2210,  2211,  2212,  2213,
    2217,  2226,  2228,  2233,  2234,  2238,  2248,  2261,  2271,  2285,
    2286,  2292,  2294,  2296,  2304,  2306,  2310,  2318,  2319,  2320,
    2328,  2332,  2351,  2358,  2365,  2366,  2367,  2368,  2369,  2373,
    2374,  2379,  2428,  2433,  2474,  2476,  2480,  2484,  2488,  2492,
    2496,  2500,  2504,  2508,  2512,  2516,  2520,  2524,  2528,  2532,
    2537,  2541,  2547,  2551,  2559,  2563,  2569,  2573,  2577,  2587,
    2598,  2602,  2606,  2610,  2614,  2618,  2622,  2626,  2630,  2634,
    2638,  2642,  2646,  2650,  2654,  2658,  2662,  2663,  2664,  2665,
    2666,  2667,  2671,  2672,  2676,  2677,  2678,  2679,  2680,  2681,
    2688,  2689,  2690,  2694,  2698,  2699,  2703,  2707,  2711,  2712,
    2717,  2722,  2726,  2727,  2732,  2739,  2741,  2748,  2753,  2758,
    2770,  2772,  2780,  2782,  2784,  2786,  2788,  2796,  2803,  2805,
    2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,
    2827,  2829,  2831,  2839,  2855,  2860,  2862,  2867,  2869,  2871,
    2873,  2878,  2883,  2885,  2890,  2892,  2903,  2913,  2924,  2934,
    2939,  2944,  2946,  2948,  2953,  2966,  2968,  2970,  2978,  2986,
    3001,  3003,  3018,  3020,  3022,  3024,  3026,  3028,  3030,  3039,
    3047,  3069,  3068,  3116,  3117,  3121,  3126,  3134,  3154,  3156,
    3158,  3160,  3163,  3165,  3162,  3168,  3175,  3177,  3179,  3181,
    3183,  3185,  3187,  3189,  3191,  3194,  3193,  3209,  3208,  3217,
    3222,  3227,  3241,  3242,  3247,  3250,  3255,  3258,  3270,  3269,
    3285,  3287,  3289,  3291,  3293,  3295,  3297,  3299,  3301,  3303,
    3305,  3307,  3312,  3317,  3325,  3326,  3330,  3331,  3335,  3341,
    3352,  3353,  3361,  3372,  3373,  3379,  3380,  3400,  3405,  3411,
    3409,  3426,  3424,  3441,  3439,  3446,  3455,  3453,  3470,  3469,
    3479,  3490,  3488,  3505,  3504,  3514,  3524,  3525,  3526,  3542,
    3542,  3553,  3591,  3632,  3636,  3641,  3633,  3653,  3672,  3679,
    3672,  3688,  3687,  3708,  3722,  3708,  3729,  3733,  3751,  3752,
    3757,  3760,  3761,  3762,  3766,  3767,  3772,  3771,  3777,  3776,
    3784,  3785,  3788,  3790,  3790,  3794,  3794,  3799,  3800,  3804,
    3806,  3811,  3812,  3816,  3823,  3833,  3834,  3835,  3836,  3837,
    3838,  3839,  3840,  3841,  3842,  3843,  3844,  3848,  3849,  3867,
    3868,  3869,  3870,  3871,  3872,  3873,  3874,  3875,  3878,  3880,
    3884,  3885,  3891,  3893,  3897,  3899,  3898,  3912,  3915,  3914,
    3929,  3935,  3945,  3947,  3951,  3953,  3958,  3959,  3983,  3987,
    3988,  3992,  4003,  4005,  4010,  4009,  4018,  4022,  4029,  4030,
    4031,  4036,  4041,  4045,  4046,  4050,  4054,  4061,  4068,  4078,
    4079,  4080,  4085,  4088,  4097,  4098,  4099,  4100,  4101,  4102,
    4106,  4107,  4108,  4109,  4110,  4114,  4114,  4123,  4124,  4128,
    4147,  4146,  4153,  4152,  4159,  4168,  4177,  4181,  4188,  4188,
    4204,  4214,  4215,  4219,  4227,  4228,  4232,  4233,  4241,  4248,
    4252,  4258,  4259,  4263,  4264,  4268,  4269,  4278,  4286,  4277,
    4296,  4302,  4295,  4311,  4312,  4316,  4324,  4325,  4326,  4328,
    4327,  4336,  4337,  4341,  4342,  4344,  4343,  4349,  4348,  4356,
    4357,  4361,  4362,  4366,  4374,  4375,  4379,  4380,  4385,  4384,
    4395,  4396,  4400,  4404,  4411,  4412,  4415,  4417,  4417,  4425,
    4424,  4451,  4452,  4456,  4464,  4465,  4469,  4480,  4479,  4492,
    4493,  4497,  4505,  4507,  4514,  4513,  4525,  4531,  4537,  4543,
    4549,  4555,  4560,  4564,  4568,  4572,  4576,  4581,  4586,  4591,
    4596,  4601,  4608,  4609,  4613,  4614,  4617,  4619,  4623,  4634,
    4633,  4642,  4641,  4650,  4651,  4655,  4656,  4660,  4661,  4662,
    4675,  4674,  4683,  4684,  4689,  4688,  4694,  4699,  4704,  4709,
    4717,  4718,  4724,  4731,  4732,  4733,  4739,  4750,  4758,  4765,
    4770,  4749,  4785,  4788,  4789,  4796,  4797,  4798,  4802,  4803,
    4804,  4805,  4806,  4807,  4810,  4812,  4816,  4817,  4821,  4826,
    4832,  4837,  4844,  4846,  4850,  4851,  4855,  4860,  4867,  4869,
    4877,  4878,  4882,  4883,  4884,  4888,  4890,  4895,  4896,  4901,
    4902,  4908,  4912,  4919,  4925,  4936,  4949,  4950,  4951,  4959,
    4960,  4961,  4966,  4967,  4968,  4969,  4970,  4971,  4975,  4976,
    4977,  4978,  4979,  4984,  4985,  4993,  4998,  5002,  5009,  5010,
    5015,  5016,  5017,  5021,  5026,  5031,  5033,  5041,  5056,  5057,
    5061,  5065,  5072,  5076,  5080,  5084,  5088,  5092,  5099,  5103,
    5110,  5117,  5124,  5128,  5132,  5139,  5143,  5147,  5151,  5169,
    5176,  5183,  5190,  5191,  5199,  5200,  5204,  5205,  5209,  5210,
    5211,  5216,  5217,  5218,  5219,  5220,  5221,  5222,  5223,  5224,
    5225,  5226,  5227,  5228,  5229,  5230,  5231,  5232,  5233,  5234,
    5235,  5236,  5246,  5247,  5248,  5249,  5250,  5251,  5252,  5253,
    5254,  5255,  5256,  5257,  5258,  5259,  5260,  5261,  5262,  5263,
    5264,  5265,  5266,  5267,  5268,  5269,  5270,  5271,  5272,  5273,
    5274,  5275,  5276,  5277,  5278,  5279,  5280,  5281,  5282,  5283,
    5284,  5285,  5286,  5287,  5288,  5289,  5290,  5291,  5292,  5293,
    5294,  5295,  5296,  5297,  5298,  5299,  5300,  5301,  5302,  5303,
    5304,  5305,  5306,  5307,  5308,  5309,  5310,  5311,  5312,  5313,
    5314,  5315,  5316,  5317,  5318,  5319,  5320,  5321,  5322,  5323,
    5324,  5325,  5326,  5327,  5328,  5329,  5330,  5331,  5332,  5333,
    5334,  5335,  5336,  5337,  5338,  5339,  5340,  5341,  5342,  5343,
    5344,  5345,  5346,  5347,  5348,  5349,  5350,  5351,  5352,  5353,
    5354,  5355,  5356,  5357,  5358,  5359,  5360,  5361,  5362,  5363,
    5364,  5365,  5366,  5367,  5368,  5369,  5370,  5371,  5378,  5377,
    5386,  5387,  5391,  5392,  5396,  5396,  5402,  5403,  5404,  5405,
    5409,  5410,  5414,  5415,  5416,  5417,  5421,  5422,  5423,  5424,
    5428,  5429,  5433,  5444,  5456,  5460,  5467,  5468,  5469,  5473,
    5478,  5482,  5497,  5498,  5499,  5500,  5504,  5505,  5506,  5507,
    5508,  5512,  5513,  5518,  5517,  5527,  5526,  5534,  5535,  5540,
    5541,  5542,  5547,  5548,  5549,  5553,  5554,  5558,  5565,  5569,
    5576,  5583,  5590,  5599,  5600,  5605,  5604,  5620,  5621,  5622,
    5626,  5626,  5647,  5648,  5652,  5653,  5654,  5658,  5662,  5669,
    5672,  5670,  5685,  5692,  5711
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABORT_SYM", "ACTION", "ADDDATE_SYM",
  "ADD_SYM", "AFTER_SYM", "AGGREGATE_SYM", "ALL", "ALTER_SYM",
  "ANALYZE_SYM", "AND_SYM", "ANY_SYM", "AS", "ASC", "ASENSITIVE_SYM",
  "AT_SYM", "AUTO_INC", "AVG_SYM", "BEFORE_SYM", "BEGIN_SYM",
  "BETWEEN_SYM", "BIGINT_SYM", "BINARY", "BIN_NUM", "BIT_SYM", "BLOB_SYM",
  "BOOLEAN_SYM", "BOOL_SYM", "BOTH", "BTREE_SYM", "BY", "CALL_SYM",
  "CASCADE", "CASCADED", "CASE_SYM", "CAST_SYM", "CATALOG_SYM",
  "CHAIN_SYM", "CHANGE_SYM", "CHARSET", "CHAR_SYM", "CHECKSUM_SYM",
  "CHECK_SYM", "CLOSE_SYM", "COALESCE", "COLLATE_SYM", "COLLATION_SYM",
  "COLUMNS", "COLUMN_SYM", "COMMENT_SYM", "COMMITTED_SYM", "COMMIT_SYM",
  "COMPACT_SYM", "COMPRESSED_SYM", "CONCURRENT", "CONDITION_SYM",
  "CONNECTION_SYM", "CONSISTENT_SYM", "CONSTRAINT", "CONTAINS_SYM",
  "CONVERT_SYM", "COUNT_SYM", "CREATE", "CROSS", "CUBE_SYM", "CURDATE",
  "CURRENT_USER", "CURSOR_SYM", "DATABASE", "DATABASES", "DATA_SYM",
  "DATETIME_SYM", "DATE_ADD_INTERVAL", "DATE_SUB_INTERVAL", "DATE_SYM",
  "DAY_HOUR_SYM", "DAY_MICROSECOND_SYM", "DAY_MINUTE_SYM",
  "DAY_SECOND_SYM", "DAY_SYM", "DEALLOCATE_SYM", "DECIMAL_NUM",
  "DECIMAL_SYM", "DECLARE_SYM", "DEFAULT", "DEFINER", "DELETE_SYM", "DESC",
  "DESCRIBE", "DETERMINISTIC_SYM", "DISABLE_SYM", "DISCARD", "DISTINCT",
  "DIV_SYM", "DOUBLE_SYM", "DO_SYM", "DROP", "DUMPFILE", "DUPLICATE_SYM",
  "DYNAMIC_SYM", "EACH_SYM", "ELSE", "ENABLE_SYM", "ENCLOSED", "END",
  "ENDS_SYM", "END_OF_INPUT", "ENGINE_SYM", "ENUM_SYM", "EQUAL_SYM",
  "ERRORS", "ESCAPED", "ESCAPE_SYM", "EXCLUSIVE_SYM", "EXECUTE_SYM",
  "EXISTS", "EXTENDED_SYM", "EXTRACT_SYM", "FALSE_SYM", "FILE_SYM",
  "FIRST_SYM", "FIXED_SYM", "FLOAT_NUM", "FLUSH_SYM", "FORCE_SYM",
  "FOREIGN", "FOR_SYM", "FOUND_SYM", "FRAC_SECOND_SYM", "FROM", "FULL",
  "GE", "GLOBAL_SYM", "GROUP_CONCAT_SYM", "GROUP_SYM", "HASH_SYM",
  "HAVING", "HEX_NUM", "HOUR_MICROSECOND_SYM", "HOUR_MINUTE_SYM",
  "HOUR_SECOND_SYM", "HOUR_SYM", "IDENT", "IDENTIFIED_SYM", "IDENTITY_SYM",
  "IDENT_QUOTED", "IF", "IGNORE_SYM", "IMPORT", "INDEXES", "INDEX_SYM",
  "INFILE", "INNER_SYM", "INOUT_SYM", "INSENSITIVE_SYM", "INSERT",
  "INTERVAL_SYM", "INTO", "INT_SYM", "INVOKER", "IN_SYM", "IS",
  "ISOLATION", "ITERATE_SYM", "JOIN_SYM", "KEYS", "KEY_BLOCK_SIZE",
  "KEY_SYM", "KILL_SYM", "LAST_SYM", "LE", "LEADING", "LEFT", "LEVEL_SYM",
  "LEX_HOSTNAME", "LIKE", "LIMIT", "LINES", "LOAD", "LOCAL_SYM",
  "LOCKS_SYM", "LOCK_SYM", "LOGS_SYM", "LONG_NUM", "LONG_SYM", "MATCH",
  "MAX_SYM", "MAX_VALUE_SYM", "MEDIUM_SYM", "MERGE_SYM", "MICROSECOND_SYM",
  "MINUTE_MICROSECOND_SYM", "MINUTE_SECOND_SYM", "MINUTE_SYM", "MIN_SYM",
  "MODE_SYM", "MODIFIES_SYM", "MODIFY_SYM", "MOD_SYM", "MONTH_SYM",
  "NAMES_SYM", "NAME_SYM", "NATIONAL_SYM", "NATURAL", "NE", "NEW_SYM",
  "NEXT_SYM", "NONE_SYM", "NOT_SYM", "NOW_SYM", "NO_SYM", "NULL_SYM",
  "NUM", "NUMERIC_SYM", "OFFLINE_SYM", "OFFSET_SYM", "ON", "ONE_SHOT_SYM",
  "ONE_SYM", "ONLINE_SYM", "OPEN_SYM", "OPTIMIZE", "OPTION", "OPTIONALLY",
  "ORDER_SYM", "OR_SYM", "OUTER", "OUTFILE", "OUT_SYM", "PARTIAL",
  "POSITION_SYM", "PRECISION", "PREV_SYM", "PRIMARY_SYM", "PROCESS",
  "PROCESSLIST_SYM", "QUARTER_SYM", "QUERY_SYM", "RANGE_SYM", "READS_SYM",
  "READ_SYM", "READ_WRITE_SYM", "REAL", "REDUNDANT_SYM", "REFERENCES",
  "REGEXP_SYM", "RELEASE_SYM", "RENAME", "REPEATABLE_SYM", "REPEAT_SYM",
  "REPLACE", "REPLICATE", "REPLICATION", "RESTRICT", "RETURNS_SYM",
  "RETURN_SYM", "REVOKE", "RIGHT", "ROLLBACK_SYM", "ROLLUP_SYM",
  "ROUTINE_SYM", "ROWS_SYM", "ROW_FORMAT_SYM", "ROW_SYM", "SAVEPOINT_SYM",
  "SECOND_MICROSECOND_SYM", "SECOND_SYM", "SECURITY_SYM", "SELECT_SYM",
  "SENSITIVE_SYM", "SEPARATOR_SYM", "SERIALIZABLE_SYM", "SERIAL_SYM",
  "SERVER_SYM", "SESSION_SYM", "SET_SYM", "SET_VAR", "SHARE_SYM", "SHOW",
  "SIGNED_SYM", "SIMPLE_SYM", "SNAPSHOT_SYM", "SPECIFIC_SYM",
  "SQLEXCEPTION_SYM", "SQLSTATE_SYM", "SQLWARNING_SYM", "SQL_BIG_RESULT",
  "SQL_BUFFER_RESULT", "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT",
  "SQL_SYM", "STARTING", "START_SYM", "STATUS_SYM", "STDDEV_SAMP_SYM",
  "STD_SYM", "STOP_SYM", "STORED_SYM", "STRAIGHT_JOIN", "STRING_SYM",
  "SUBDATE_SYM", "SUBJECT_SYM", "SUBSTRING", "SUM_SYM", "SUSPEND_SYM",
  "SYSDATE", "TABLES", "TABLESPACE", "TABLE_REF_PRIORITY", "TABLE_SYM",
  "TEMPORARY_SYM", "TERMINATED", "TEXT_STRING", "TEXT_SYM", "THEN_SYM",
  "TIMESTAMP_ADD", "TIMESTAMP_DIFF", "TIMESTAMP_SYM", "TIME_SYM", "TO_SYM",
  "TRAILING", "TRANSACTION_SYM", "TRIM", "TRUE_SYM", "TRUNCATE_SYM",
  "TYPE_SYM", "ULONGLONG_NUM", "UNCOMMITTED_SYM", "UNDOFILE_SYM",
  "UNDO_SYM", "UNION_SYM", "UNIQUE_SYM", "UNKNOWN_SYM", "UNLOCK_SYM",
  "UNSIGNED_SYM", "UPDATE_SYM", "USAGE", "USER", "USE_SYM", "USING",
  "UTC_DATE_SYM", "UTC_TIMESTAMP_SYM", "UTF8_SYM", "UUID_SYM", "VALUES",
  "VALUE_SYM", "VARBINARY", "VARCHAR_SYM", "VARIABLES", "VARIANCE_SYM",
  "VARYING", "VAR_SAMP_SYM", "WAIT_SYM", "WARNINGS", "WEEK_SYM",
  "WHEN_SYM", "WHERE", "WITH", "WITH_ROLLUP_SYM", "WORK_SYM", "WRITE_SYM",
  "XOR", "YEAR_MONTH_SYM", "YEAR_SYM", "ZEROFILL_SYM", "'='", "LESS_THAN",
  "GREATER_THAN", "CONCAT", "'|'", "'&'", "SHIFT_RIGHT", "SHIFT_LEFT",
  "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "'~'", "UMINUS", "'('", "')'",
  "'{'", "'}'", "','", "'.'", "'@'", "$accept", "query", "verb_clause",
  "statement", "create", "$@1", "$@2", "$@3", "create_table_definition",
  "$@4", "create_select_as", "$@5", "$@6", "create_like", "create_select",
  "stored_select", "$@7", "$@8", "opt_create_database_options",
  "opt_database_custom_options", "custom_database_option",
  "opt_table_options", "opt_if_not_exists", "opt_create_table_options",
  "create_table_options_space_separated", "create_table_options",
  "create_table_option", "custom_engine_option", "charset",
  "charset_name_or_default", "default_charset", "default_collation",
  "default_collation_schema", "row_format", "row_format_or_text",
  "opt_select_from", "field_list", "field_list_item", "column_def",
  "key_def", "opt_check_constraint", "check_constraint", "opt_constraint",
  "constraint", "field_spec", "$@9", "field_def", "$@10", "varchar",
  "int_type", "real_type", "float_options", "precision", "opt_len",
  "opt_field_number_signed", "ignored_field_number_length", "opt_zerofill",
  "opt_precision", "opt_attribute_not_null", "opt_attribute_index",
  "opt_attribute", "opt_attribute_boolean", "opt_attribute_string",
  "opt_attribute_list_string", "attribute_string", "opt_attribute_number",
  "opt_attribute_list_integer", "attribute_integer",
  "opt_attribute_timestamp", "opt_attribute_list_timestamp",
  "attribute_timestamp", "opt_attribute_comment", "collation_name",
  "collation_name_or_default", "opt_default", "opt_primary", "references",
  "opt_ref_list", "ref_list", "opt_match_clause", "opt_on_update_delete",
  "delete_option", "key_type", "constraint_key_type", "key_or_index",
  "opt_key_or_index", "keys_or_index", "opt_unique", "init_key_options",
  "key_alg", "key_options", "key_opts", "key_using_alg", "key_opt",
  "btree_or_rtree", "key_list", "key_part", "opt_ident", "opt_component",
  "string_list", "alter", "$@11", "$@12", "alter_commands", "build_method",
  "alter_list", "add_column", "alter_list_item", "$@13", "$@14", "$@15",
  "opt_column", "opt_ignore", "opt_place", "opt_to", "start",
  "start_transaction_opts", "analyze", "$@16", "check", "$@17", "rename",
  "$@18", "table_to_table_list", "table_to_table", "select", "select_init",
  "select_paren", "select_paren_derived", "select_init2", "$@19",
  "select_part2", "$@20", "$@21", "select_into", "select_from",
  "select_options", "select_option_list", "select_option_distinct_or_all",
  "select_option_small_or_big", "select_option", "select_lock_type",
  "select_item_list", "select_item", "remember_name", "remember_end",
  "select_alias", "optional_braces", "expr", "bool_pri", "predicate",
  "bit_expr", "comp_op", "all_or_any", "simple_expr",
  "function_call_keyword", "function_call_nonkeyword",
  "function_call_conflict", "function_call_generic", "@22",
  "opt_udf_expr_list", "udf_expr_list", "udf_expr", "sum_expr", "$@23",
  "$@24", "$@25", "variable", "$@26", "variable_aux", "opt_distinct",
  "opt_gconcat_separator", "opt_gorder_clause", "in_sum_expr", "$@27",
  "cast_type", "expr_list", "opt_expr", "opt_else", "when_list",
  "table_ref", "join_table_list", "esc_table_ref", "derived_table_list",
  "join_table", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "normal_join", "table_factor", "$@35", "select_derived_union", "$@36",
  "$@37", "select_init2_derived", "select_part2_derived", "$@38", "$@39",
  "select_derived", "$@40", "select_derived2", "$@41", "$@42",
  "get_select_lex", "select_derived_init", "opt_outer",
  "index_hint_clause", "index_hint_type", "index_hint_definition", "$@43",
  "$@44", "index_hints_list", "opt_index_hints_list", "$@45",
  "opt_key_definition", "$@46", "opt_key_usage_list", "key_usage_element",
  "key_usage_list", "using_list", "interval", "interval_time_stamp",
  "interval_time_st", "table_alias", "opt_table_alias", "opt_all",
  "where_clause", "$@47", "having_clause", "$@48", "opt_escape",
  "group_clause", "group_list", "olap_opt", "alter_order_clause",
  "alter_order_list", "alter_order_item", "opt_order_clause",
  "order_clause", "$@49", "order_list", "order_dir",
  "opt_limit_clause_init", "opt_limit_clause", "limit_clause",
  "limit_options", "limit_option", "delete_limit_clause", "ulong_num",
  "ulonglong_num", "select_var_list_init", "$@50", "select_var_list",
  "select_var_ident", "into", "$@51", "into_destination", "$@52", "drop",
  "$@53", "table_list", "table_name", "if_exists", "opt_temporary",
  "execute", "execute_var_or_string", "opt_status", "opt_concurrent",
  "opt_wait", "insert", "$@54", "$@55", "replace", "$@56", "$@57",
  "insert2", "insert_table", "insert_field_spec", "$@58", "fields",
  "insert_values", "$@59", "$@60", "values_list", "ident_eq_list",
  "ident_eq_value", "equal", "opt_equal", "no_braces", "$@61",
  "opt_values", "values", "expr_or_default", "opt_insert_update", "$@62",
  "update", "$@63", "update_list", "update_elem", "insert_update_list",
  "insert_update_elem", "delete", "$@64", "opt_delete_option", "truncate",
  "opt_table_sym", "show", "$@65", "show_param", "opt_db", "from_or_in",
  "show_wild", "describe", "$@66", "$@67", "describe_command",
  "opt_extended_describe", "opt_describe_column", "flush", "$@68",
  "flush_options", "flush_option", "$@69", "opt_table_list", "kill",
  "kill_option", "use", "load", "$@70", "$@71", "$@72", "$@73",
  "data_file", "load_data_lock", "opt_duplicate", "opt_duplicate_as",
  "opt_field_term", "field_term_list", "field_term", "opt_line_term",
  "line_term_list", "line_term", "opt_ignore_lines", "lines_or_rows",
  "opt_field_or_var_spec", "fields_or_vars", "field_or_var",
  "opt_load_data_set_spec", "text_literal", "text_string",
  "signed_literal", "literal", "integer_literal", "boolean_literal",
  "date_literal", "NUM_literal", "insert_ident", "table_wild",
  "order_ident", "simple_ident", "simple_ident_q", "field_ident",
  "table_ident", "schema_name", "catalog_name", "IDENT_sys",
  "TEXT_STRING_sys", "TEXT_STRING_literal", "TEXT_STRING_filesystem",
  "ident", "ident_or_text", "engine_option_value",
  "keyword_exception_for_variable", "keyword", "keyword_sp", "set", "$@74",
  "opt_option", "option_value_list", "option_type_value", "$@75",
  "option_type", "option_type2", "opt_var_type", "opt_var_ident_type",
  "ext_option_value", "sys_option_value", "option_value",
  "user_variable_ident", "internal_variable_ident",
  "internal_variable_name", "isolation_types", "set_expr_or_default",
  "table_or_tables", "unlock", "$@76", "begin", "$@77", "opt_work",
  "opt_chain", "opt_release", "opt_savepoint", "commit", "rollback",
  "savepoint", "release", "savepoint_ident", "union_clause", "union_list",
  "$@78", "union_opt", "union_order_or_limit", "$@79", "order_or_limit",
  "union_option", "query_specification", "query_expression_body", "$@80",
  "subselect", "subselect_start", "subselect_end", 0
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,    61,   622,   623,
     624,   124,    38,   625,   626,    45,    43,    42,    47,    37,
      94,   126,   627,    40,    41,   123,   125,    44,    46,    64
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   390,   391,   391,   392,   392,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   394,   395,   394,   396,   394,   397,   394,   398,
     399,   398,   398,   398,   398,   400,   401,   400,   402,   400,
     403,   404,   406,   407,   405,   408,   408,   408,   408,   408,
     409,   409,   409,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   412,   412,   413,   413,   414,   414,   415,   415,
     415,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   418,   418,   419,   419,   420,
     421,   422,   423,   423,   423,   423,   423,   423,   424,   425,
     425,   426,   426,   427,   427,   428,   428,   429,   429,   429,
     429,   429,   430,   430,   431,   432,   432,   433,   435,   434,
     436,   436,   436,   436,   436,   436,   436,   437,   436,   436,
     436,   436,   436,   436,   436,   436,   436,   436,   436,   436,
     438,   438,   438,   439,   439,   440,   440,   440,   441,   441,
     441,   442,   443,   443,   444,   444,   444,   445,   445,   446,
     446,   447,   447,   447,   448,   448,   449,   449,   449,   450,
     450,   450,   450,   451,   451,   451,   451,   452,   452,   453,
     453,   454,   454,   454,   454,   455,   455,   456,   456,   457,
     457,   457,   457,   457,   458,   458,   459,   459,   460,   460,
     460,   460,   460,   461,   461,   462,   463,   463,   464,   464,
     465,   465,   466,   467,   467,   468,   468,   469,   469,   469,
     469,   470,   470,   470,   470,   470,   471,   471,   471,   471,
     471,   472,   473,   473,   474,   474,   475,   475,   476,   476,
     476,   477,   477,   478,   479,   479,   480,   480,   481,   481,
     482,   483,   483,   483,   484,   484,   485,   485,   486,   486,
     487,   487,   488,   488,   489,   489,   491,   490,   492,   490,
     493,   493,   493,   493,   494,   494,   494,   495,   495,   496,
     497,   497,   497,   498,   497,   499,   500,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   501,   501,   502,   502,   503,   503,   503,   504,   504,
     504,   505,   506,   506,   508,   507,   510,   509,   512,   511,
     513,   513,   514,   515,   516,   516,   517,   517,   518,   518,
     520,   519,   522,   523,   521,   524,   524,   524,   524,   524,
     525,   526,   526,   527,   527,   528,   528,   529,   529,   530,
     530,   530,   530,   530,   531,   531,   531,   532,   532,   532,
     533,   533,   534,   535,   536,   536,   536,   536,   536,   537,
     537,   538,   538,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   539,   539,   539,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   542,   542,   542,   542,
     542,   542,   543,   543,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   549,   548,   550,   550,   551,   551,   552,   553,   553,
     553,   553,   554,   555,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   556,   553,   558,   557,   559,
     559,   559,   560,   560,   561,   561,   562,   562,   564,   563,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,   565,   566,   566,   567,   567,   568,   568,   569,   569,
     570,   570,   571,   572,   572,   573,   573,   574,   574,   575,
     574,   576,   574,   577,   574,   574,   578,   574,   579,   574,
     574,   580,   574,   581,   574,   574,   582,   582,   582,   584,
     583,   583,   583,   585,   586,   587,   585,   588,   590,   591,
     589,   593,   592,   595,   596,   594,   597,   598,   599,   599,
     600,   600,   600,   600,   601,   601,   603,   602,   604,   602,
     605,   605,   606,   607,   606,   609,   608,   610,   610,   611,
     611,   612,   612,   613,   613,   614,   614,   614,   614,   614,
     614,   614,   614,   614,   614,   614,   614,   615,   615,   616,
     616,   616,   616,   616,   616,   616,   616,   616,   617,   617,
     618,   618,   619,   619,   620,   621,   620,   622,   623,   622,
     624,   624,   625,   625,   626,   626,   627,   627,   628,   629,
     629,   630,   631,   631,   633,   632,   634,   634,   635,   635,
     635,   636,   636,   637,   637,   638,   639,   639,   639,   640,
     640,   640,   641,   641,   642,   642,   642,   642,   642,   642,
     643,   643,   643,   643,   643,   645,   644,   646,   646,   647,
     649,   648,   651,   650,   650,   650,   652,   652,   653,   652,
     652,   654,   654,   655,   656,   656,   657,   657,   658,   659,
     659,   660,   660,   661,   661,   662,   662,   664,   665,   663,
     667,   668,   666,   669,   669,   670,   671,   671,   671,   672,
     671,   673,   673,   674,   674,   675,   674,   676,   674,   677,
     677,   678,   678,   679,   680,   680,   681,   681,   683,   682,
     684,   684,   685,   685,   686,   686,   687,   688,   687,   690,
     689,   691,   691,   692,   693,   693,   694,   696,   695,   697,
     697,   698,   699,   699,   701,   700,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   703,   703,   704,   704,   705,   705,   705,   707,
     706,   708,   706,   709,   709,   710,   710,   711,   711,   711,
     713,   712,   714,   714,   716,   715,   715,   715,   715,   715,
     717,   717,   718,   719,   719,   719,   720,   722,   723,   724,
     725,   721,   726,   727,   727,   728,   728,   728,   729,   729,
     729,   729,   729,   729,   730,   730,   731,   731,   732,   732,
     732,   732,   733,   733,   734,   734,   735,   735,   736,   736,
     737,   737,   738,   738,   738,   739,   739,   740,   740,   741,
     741,   742,   742,   743,   743,   743,   744,   744,   744,   745,
     745,   745,   745,   745,   745,   745,   745,   745,   746,   746,
     746,   746,   746,   746,   746,   747,   747,   747,   748,   748,
     748,   748,   748,   749,   749,   749,   749,   749,   750,   750,
     751,   751,   752,   753,   753,   754,   754,   754,   755,   755,
     755,   755,   756,   756,   756,   757,   758,   759,   759,   760,
     761,   762,   763,   763,   764,   764,   765,   765,   766,   766,
     766,   767,   767,   767,   767,   767,   767,   767,   767,   767,
     767,   767,   767,   767,   767,   767,   767,   767,   767,   767,
     767,   767,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   770,   769,
     771,   771,   772,   772,   774,   773,   775,   775,   775,   775,
     776,   776,   777,   777,   777,   777,   778,   778,   778,   778,
     779,   779,   780,   780,   781,   781,   782,   782,   782,   783,
     783,   784,   785,   785,   785,   785,   786,   786,   786,   786,
     786,   787,   787,   789,   788,   791,   790,   792,   792,   793,
     793,   793,   794,   794,   794,   795,   795,   796,   797,   797,
     798,   799,   800,   801,   801,   803,   802,   804,   804,   804,
     806,   805,   807,   807,   808,   808,   808,   809,   809,   810,
     811,   810,   812,   813,   814
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     7,     0,    13,     0,     6,     5,
       0,     5,     4,     2,     2,     0,     0,     4,     0,     6,
       2,     1,     0,     0,     6,     0,     1,     2,     3,     1,
       1,     2,     3,     1,     3,     3,     2,     3,     3,     3,
       0,     1,     0,     3,     0,     1,     1,     2,     1,     2,
       3,     1,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     1,     1,     2,     1,     1,     1,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     1,     1,     2,     2,     7,     8,     8,
       2,     2,     0,     1,     2,     0,     1,     2,     0,     4,
       2,     5,     2,     2,     2,     5,     2,     0,     6,     5,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     1,
       2,     1,     1,     4,     4,     2,     2,     3,     0,     3,
       1,     5,     0,     3,     0,     1,     1,     0,     3,     0,
       1,     0,     3,     1,     1,     2,     2,     1,     2,     0,
       2,     3,     2,     0,     2,     3,     2,     0,     1,     2,
       1,     1,     2,     2,     1,     0,     1,     2,     1,     1,
       1,     3,     2,     1,     0,     1,     2,     1,     1,     3,
       2,     4,     1,     0,     2,     1,     1,     1,     0,     1,
       0,     1,     5,     0,     3,     3,     1,     0,     2,     2,
       2,     0,     3,     3,     6,     6,     1,     1,     2,     2,
       2,     1,     2,     2,     1,     1,     0,     1,     1,     1,
       1,     0,     1,     0,     1,     2,     0,     1,     1,     2,
       2,     1,     3,     2,     1,     1,     4,     2,     1,     4,
       0,     1,     0,     2,     1,     3,     0,     7,     0,     5,
       0,     2,     2,     1,     0,     1,     1,     1,     3,     2,
       3,     2,     4,     0,     6,     0,     0,     8,     3,     4,
       3,     3,     2,     2,     6,     5,     3,     3,     1,     1,
       1,     0,     1,     0,     1,     0,     2,     1,     0,     1,
       1,     3,     0,     3,     0,     4,     0,     4,     0,     4,
       1,     3,     3,     1,     2,     4,     2,     3,     2,     3,
       0,     3,     0,     0,     6,     2,     1,     1,     2,     2,
       7,     0,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     4,     3,     1,     1,
       3,     4,     0,     0,     0,     2,     2,     1,     1,     0,
       2,     3,     3,     3,     2,     3,     4,     3,     4,     3,
       4,     1,     3,     4,     3,     3,     6,     1,     5,     6,
       5,     7,     6,     8,     5,     6,     4,     5,     3,     4,
       1,     3,     3,     3,     3,     3,     3,     5,     5,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     2,     2,     2,     3,     3,     5,
       6,     4,     4,     2,     6,     5,     6,     4,     4,     5,
       4,     2,     4,     4,     4,    10,     6,     8,     6,     4,
       4,     6,     4,     4,     4,     7,     7,     7,     6,     6,
       6,     6,     3,     4,     6,     8,     2,     8,     8,     6,
       2,     4,     6,     6,     8,     8,     6,     8,     6,     2,
       4,     8,     8,     2,     2,     4,     4,     3,     3,     5,
       8,     5,     4,     6,     4,     6,     8,     6,     4,     3,
       6,     0,     5,     0,     1,     1,     3,     4,     4,     5,
       5,     4,     0,     0,     7,     4,     5,     4,     5,     4,
       4,     4,     4,     4,     5,     0,     8,     0,     3,     3,
       1,     4,     0,     1,     0,     2,     0,     1,     0,     3,
       2,     1,     1,     2,     1,     1,     2,     2,     1,     1,
       1,     2,     1,     3,     0,     1,     0,     2,     4,     5,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     0,
       6,     0,     6,     0,     8,     4,     0,     8,     0,    10,
       6,     0,     8,     0,    10,     6,     1,     2,     2,     0,
       4,     3,     5,     3,     0,     0,     8,     1,     0,     0,
       6,     0,     3,     0,     0,     5,     0,     1,     0,     1,
       0,     2,     3,     3,     1,     1,     0,     7,     0,     7,
       1,     2,     0,     0,     2,     0,     2,     0,     1,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     2,     0,     1,     0,     0,     3,     0,     0,     3,
       2,     0,     0,     4,     4,     2,     0,     1,     3,     3,
       1,     2,     0,     1,     0,     4,     4,     2,     0,     1,
       1,     0,     1,     0,     1,     2,     1,     3,     3,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     3,     1,     2,
       0,     3,     0,     5,     2,     1,     3,     5,     0,     7,
       4,     1,     3,     1,     0,     2,     0,     1,     5,     1,
       2,     0,     3,     0,     1,     0,     1,     0,     0,     7,
       0,     0,     5,     2,     1,     1,     1,     3,     4,     0,
       3,     3,     1,     2,     2,     0,     3,     0,     5,     3,
       1,     3,     1,     3,     1,     1,     0,     1,     0,     4,
       0,     1,     3,     1,     1,     1,     0,     0,     6,     0,
       9,     3,     1,     3,     3,     1,     3,     0,     8,     0,
       1,     3,     0,     1,     0,     3,     2,     3,     3,     4,
       5,     5,     5,     5,     2,     2,     3,     2,     3,     1,
       3,     4,     0,     2,     1,     1,     0,     2,     2,     0,
       4,     0,     4,     1,     1,     0,     1,     0,     1,     1,
       0,     3,     3,     1,     0,     3,     4,     1,     1,     2,
       0,     1,     3,     0,     1,     1,     2,     0,     0,     0,
       0,    18,     1,     0,     1,     0,     1,     1,     0,     1,
       1,     1,     2,     2,     0,     2,     2,     1,     3,     4,
       3,     3,     0,     2,     2,     1,     3,     3,     0,     3,
       1,     1,     0,     3,     2,     3,     1,     1,     2,     0,
       2,     1,     2,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     1,     1,     1,     3,     4,     5,     1,     5,
       3,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     1,     1,     3,     0,     2,     1,     1,     1,     1,
       0,     1,     0,     1,     1,     1,     0,     2,     2,     2,
       1,     2,     4,     5,     4,     6,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     1,     0,
       3,     2,     0,     1,     2,     0,     1,     4,     4,     5,
       2,     3,     1,     0,     1,     0,     4,     0,     1,     1,
       0,     2,     2,     1,     0,     1,     1,     2,     3,     1,
       0,     5,     3,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   284,     0,  1185,     0,  1187,   284,   819,   853,   854,
     756,     2,     0,   860,   767,   873,     0,     0,     0,   770,
    1187,     0,   342,  1140,   824,     0,   822,  1183,   313,     0,
       0,     0,     0,     4,    10,     6,    27,     7,     8,    20,
      24,   333,    13,    14,    16,    21,    30,    11,    28,    26,
      12,   855,    15,    17,    31,    18,    25,    29,     5,     9,
      22,    23,    19,     0,   286,   285,   313,  1182,  1181,   324,
    1187,   326,  1188,  1189,     0,    72,    71,     0,    35,   820,
       0,     0,   754,   757,     0,     0,   977,   990,   978,  1168,
     989,   979,   988,     0,   761,  1170,  1167,  1169,   759,  1166,
       0,   313,   874,   875,     0,   882,   877,     0,   328,     0,
    1189,  1202,  1200,   334,   340,   351,  1141,  1138,  1152,   322,
     823,     0,     0,   314,     0,  1012,  1013,  1014,  1015,  1016,
    1017,  1018,  1019,   992,  1020,  1022,  1021,  1023,  1024,  1025,
     993,   994,  1026,  1027,  1028,   995,  1029,   996,  1030,  1031,
    1032,  1033,  1034,   997,  1035,  1037,  1036,  1038,  1039,  1040,
     998,  1041,  1042,   999,  1043,  1044,  1045,  1054,  1000,  1046,
    1048,  1047,  1049,  1050,  1051,  1052,  1056,  1057,  1058,  1001,
    1053,  1059,  1055,  1060,  1061,  1062,  1063,  1064,  1065,  1066,
    1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1079,  1078,  1080,  1082,  1081,  1083,  1085,  1084,  1086,
    1002,  1087,  1088,  1089,  1090,  1091,  1003,  1092,  1093,  1094,
    1095,  1096,  1097,  1098,  1099,  1100,  1004,  1101,  1102,  1103,
    1104,  1105,  1005,  1106,  1006,  1108,  1107,  1007,  1109,  1111,
    1008,  1110,  1112,  1009,  1113,  1010,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1124,  1125,  1123,  1122,  1011,  1126,
    1127,  1128,  1129,  1131,  1130,  1133,  1132,  1134,  1135,  1136,
    1137,   876,   982,   975,   983,   991,   342,     0,     0,     1,
       3,  1052,     0,   851,   849,     0,   972,   278,     0,     0,
    1186,     0,     0,  1192,    32,   976,     0,     0,    72,   251,
       0,   746,     0,     0,     0,   754,   760,     0,   763,     0,
     867,   868,  1182,   861,   863,   864,     0,  1013,  1019,     0,
     935,   574,     0,     0,     0,  1026,  1027,     0,     0,   379,
     379,     0,     0,     0,  1039,  1040,   956,     0,     0,     0,
       0,   932,   957,     0,   934,  1062,     0,     0,     0,   873,
       0,   954,     0,  1076,  1077,     0,     0,  1080,     0,   379,
     931,   953,     0,  1096,     0,     0,     0,  1105,  1106,     0,
       0,  1115,     0,     0,   379,   980,  1124,  1125,     0,     0,
     933,  1011,   955,  1131,   379,   379,  1130,     0,     0,     0,
       0,  1137,     0,     0,     0,  1223,     0,     0,   547,   872,
     391,   397,   410,   425,   435,   436,   438,   437,   442,   441,
     929,   440,   930,   434,   964,   982,   921,   963,   883,  1201,
       0,     0,   775,   771,   774,   753,  1195,  1192,  1203,   356,
     355,   358,   360,   363,   357,   359,   372,   352,   362,   361,
     354,  1144,     0,     0,     0,   846,   711,  1153,   250,   249,
     248,  1154,   839,  1155,   842,     0,     0,   711,     0,   825,
     986,   987,     0,     0,     0,   321,   821,  1184,     0,   336,
       0,  1207,   974,     0,   857,     0,   218,     0,   325,   751,
     327,  1191,     0,     0,  1193,  1197,     0,    37,     0,   252,
       0,   817,   755,   750,     0,     0,     0,   764,   765,   869,
       0,     0,   870,   768,     0,   682,   453,   575,     0,     0,
       0,     0,     0,     0,     0,   682,     0,   486,   461,     0,
       0,     0,     0,   936,     0,     0,     0,  1223,     0,   552,
       0,     0,     0,  1223,     0,     0,     0,   682,     0,     0,
     682,     0,     0,   384,     0,   490,     0,     0,     0,     0,
       0,     0,     0,   682,   682,     0,     0,   682,     0,   499,
       0,     0,     0,   937,     0,     0,     0,   503,   504,     0,
       0,   682,   682,     0,     0,   445,   444,   446,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   427,     0,
     429,   431,   426,   430,   428,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   922,   521,     0,   884,     0,
     329,   330,     0,   773,     0,  1196,     0,  1198,  1214,   341,
    1204,   369,   343,   368,     0,   353,  1139,  1142,  1150,   844,
     845,     0,     0,    72,     0,     0,     0,   826,     0,   835,
     712,   846,     0,   842,   846,   834,     0,   837,   846,   846,
       0,     0,   337,  1208,   335,  1209,     0,   852,   925,   924,
     850,   858,   923,   859,   973,   219,   279,     0,   276,     0,
    1190,  1194,    73,    55,    33,     0,   684,     0,   747,   762,
     766,   758,     0,   862,   871,   865,     0,     0,   683,   682,
       0,   558,     0,   576,     0,   508,   572,     0,     0,     0,
       0,   532,     0,   558,   380,   507,     0,     0,     0,     0,
       0,     0,     0,   656,   657,   658,   659,   669,   660,   661,
     662,   671,   676,   663,   664,   672,   673,   674,   665,   675,
     670,   666,   677,     0,   655,   553,   545,     0,     0,     0,
       0,     0,     0,     0,   682,     0,     0,     0,   682,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   682,     0,     0,   668,     0,   667,
       0,     0,     0,     0,     0,     0,     0,   482,   519,     0,
       0,     0,     0,     0,   448,     0,   447,   618,     0,  1219,
    1224,     0,     0,  1156,   548,   550,   383,   381,   382,   394,
     387,     0,   392,   385,   389,   432,  1016,   395,     0,     0,
     422,  1223,   691,   423,     0,     0,     0,     0,   408,   411,
     412,   413,   414,     0,   416,     0,   415,   419,   420,   421,
     424,   984,   985,   439,   443,   372,   965,     0,     0,     0,
      52,   779,     0,     0,     0,   785,   772,   776,  1199,  1216,
    1215,  1205,   372,   702,   373,   373,   963,  1144,  1147,  1148,
    1151,  1149,     0,  1146,  1145,  1160,   842,     0,     0,   838,
     847,   848,   720,   721,   719,   715,   716,   827,   843,   846,
     828,   842,   836,   840,   323,   809,   812,     0,     0,   711,
    1213,  1211,   796,   218,   752,     0,     0,    38,    59,    60,
      56,    63,    74,   253,   685,   702,   748,   866,   806,     0,
       0,   528,     0,     0,     0,     0,     0,     0,   460,     0,
     505,   506,     0,     0,   531,     0,     0,     0,   462,   463,
     457,   765,   451,     0,     0,   464,     0,     0,     0,     0,
       0,     0,     0,   537,   512,   469,     0,   535,     0,   470,
     491,     0,   514,     0,     0,     0,     0,   472,   541,   539,
       0,     0,     0,     0,   543,   500,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   474,     0,   458,   540,
     542,   518,     0,   483,     0,  1217,   617,   351,   618,     0,
       0,  1214,  1222,   452,   966,     0,     0,     0,     0,     0,
     388,   393,   386,   390,  1223,     0,     0,     0,     0,   406,
       0,  1223,   691,   409,     0,     0,     0,     0,   524,   525,
       0,   981,   878,   331,   332,   351,     0,   798,   783,   790,
     784,     0,     0,     0,   782,   959,   958,  1203,     0,   367,
     609,   740,   364,   347,   713,   703,   346,   374,   370,     0,
    1143,     0,  1171,     0,     0,  1161,   846,     0,   841,     0,
       0,   829,   684,     0,   684,   795,   794,     0,   704,  1212,
     797,     0,   311,   311,   796,   311,   796,     0,     0,     0,
       0,   311,     0,     0,     0,   309,     0,   311,     0,   318,
       0,     0,   308,   218,    81,    93,    94,     0,   277,   283,
       0,   287,   310,     0,   379,    66,     0,     0,    61,     0,
      57,     0,     0,   125,    34,   218,   888,    75,    78,   254,
       0,     0,   722,   749,     0,   769,     0,     0,   529,   559,
       0,   577,     0,   455,   162,   561,   162,   570,   568,   158,
     564,   562,   569,   565,     0,   573,     0,   533,   530,     0,
       0,   509,     0,   556,     0,     0,     0,   459,   511,     0,
     538,   536,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   544,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,   372,   338,     0,  1218,  1220,
    1157,  1158,  1159,   272,   549,     0,   404,   400,     0,   398,
     690,     0,     0,     0,   407,   418,   417,   373,   522,   372,
     967,   885,   372,   780,   792,     0,   800,     0,     0,   777,
     787,     0,     0,   786,  1206,   627,   626,     0,   583,   684,
     585,   582,   581,   580,     0,   626,   735,     0,     0,   344,
     349,   345,   714,   348,     0,   371,   378,   377,   960,   965,
       0,     0,  1156,     0,   830,   833,   832,   718,   717,   831,
     811,   702,   805,   804,   813,     0,   217,   216,   101,   215,
     312,   270,   245,   244,   291,     0,   122,   270,   241,   289,
       0,     0,     0,     0,     0,   379,    87,   302,   281,     0,
       0,     0,     0,   303,     0,     0,   282,     0,     0,   320,
     319,     0,     0,     0,    77,    96,     0,   796,   796,   218,
     125,     0,   315,   122,   128,   968,     0,    67,    65,    64,
      62,    58,   733,   734,   732,   730,   731,    69,    68,    50,
       0,     0,    51,     0,   111,   113,   114,    43,   889,   891,
     890,    44,     0,   218,    79,     0,   255,     0,   686,     0,
     818,   807,     0,   484,   578,     0,     0,   560,   567,     0,
     571,   160,   563,   566,   454,   456,     0,     0,     0,   489,
     554,   557,     0,     0,   466,     0,   468,   513,   492,   515,
       0,   471,   450,     0,   493,     0,   498,   496,     0,     0,
       0,   480,     0,   478,     0,   479,     0,   481,   517,   520,
     619,   339,     0,     0,   551,   396,     0,   405,   402,     0,
     399,   374,   526,   887,   886,     0,    53,     0,     0,     0,
     801,   803,   789,  1207,   778,   781,   626,   609,     0,     0,
     606,   628,     0,   628,   609,   609,   692,   609,   678,   623,
       0,     0,   745,     0,   741,   365,     0,   376,   375,     0,
       0,  1179,  1180,  1177,  1178,  1176,  1162,     0,     0,   722,
     962,   705,   708,   127,   271,     0,     0,     0,   246,   121,
     270,   120,   123,   253,     0,    84,   293,    83,   307,    88,
     270,   300,   301,   298,    82,    90,   295,   698,   700,   708,
     306,    86,    85,   102,   103,   104,   105,   106,   107,   108,
      89,    95,     0,     0,   288,     0,   971,     0,   317,   290,
       0,   115,   116,     0,     0,    92,    91,   218,    40,    74,
     125,   893,   892,     0,    46,    80,   264,   265,   260,     0,
     723,     0,     0,   579,     0,     0,   534,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     477,   475,   476,   713,  1221,   273,   401,     0,   527,   879,
     713,   791,   793,   799,     0,   788,     0,   702,   621,     0,
     608,   607,   629,     0,   609,   628,   628,     0,   588,   587,
       0,   687,   586,   679,     0,   645,   611,   351,   744,   742,
       0,   736,   738,     0,   961,     0,     0,  1175,  1163,     0,
    1164,   810,     0,   709,   710,   707,   124,   270,   242,   247,
     243,   253,     0,     0,     0,     0,   299,     0,     0,   701,
     100,    98,    97,    99,   292,   316,   223,   167,   179,   183,
     187,   204,   179,   158,   171,   137,   158,   167,   158,   171,
     149,   187,   204,   179,   179,     0,   152,   213,     0,   195,
     195,   970,    42,  1210,   888,   112,     0,  1203,     0,     0,
     485,   163,   159,     0,   487,   488,   555,   546,   510,     0,
     467,   516,   494,   497,   495,   501,   502,   364,   364,   109,
     403,     0,    54,   802,  1214,   678,   713,   609,   584,   609,
     595,     0,     0,   609,   591,   589,   593,     0,   688,   702,
     681,   610,   642,   372,   894,   739,     0,   366,  1173,  1172,
    1174,     0,   708,     0,     0,     0,   305,     0,   315,   213,
     699,     0,   227,     0,   164,   143,   148,     0,     0,     0,
     174,   221,   177,   150,   191,   194,   134,   188,   190,     0,
       0,     0,   208,   212,   132,   205,   207,   141,   195,   171,
       0,   173,   156,     0,   195,   164,   195,   155,   136,     0,
     130,   142,   147,     0,     0,   129,     0,   200,     0,     0,
     199,   203,   133,   196,   198,   140,     0,    41,    39,    48,
      47,     0,   708,   268,     0,     0,     0,   620,   110,     0,
     614,   612,   613,   622,     0,   580,   609,   609,     0,   580,
       0,     0,     0,   696,   708,     0,   713,   646,     0,   624,
       0,   902,   737,  1165,   706,     0,     0,     0,     0,     0,
       0,     0,   304,   926,   294,   296,     0,   226,     0,   231,
       0,   165,   166,   169,     0,   180,   182,     0,   184,   186,
     193,   192,   175,   178,   189,   176,     0,   379,   949,     0,
     948,   210,   950,     0,   206,   144,   157,     0,     0,   146,
     169,   145,     0,     0,   214,     0,   940,   939,   942,     0,
       0,   938,   202,   941,     0,   197,   969,  1210,   256,     0,
     267,     0,   808,   815,     0,   161,   465,   880,     0,   596,
       0,   600,   605,   601,     0,   592,   590,     0,   697,     0,
     693,   695,   689,   350,   634,   635,     0,     0,   640,   644,
     713,     0,     0,     0,     0,   895,   897,     0,   743,     0,
       0,   256,   928,   927,   315,   224,     0,   228,   229,   230,
       0,   222,   168,   170,   154,   181,   946,   945,   947,   185,
     951,   209,   952,   379,   172,     0,   274,   153,   204,   179,
     187,   944,   943,   201,    49,     0,   796,    36,   257,   261,
     258,   708,     0,     0,     0,   894,   615,     0,     0,     0,
       0,     0,   653,   708,   630,   630,   641,   625,     0,     0,
       0,     0,   896,     0,     0,   903,   905,     0,   256,   117,
     297,   225,     0,     0,   211,   187,     0,   131,   139,   135,
     263,     0,   259,   266,   269,   814,   816,   902,   702,   597,
       0,   602,     0,   594,     0,   694,     0,   638,   636,   900,
     901,     0,   898,     0,     0,   904,   119,   118,   237,     0,
     236,     0,   233,   232,   138,   275,   728,   729,   725,   726,
     724,   727,   262,   908,   713,     0,     0,   654,     0,   631,
       0,     0,     0,   899,   907,   906,   239,   240,   238,     0,
       0,     0,   912,   616,   599,   604,   633,   632,   647,     0,
       0,     0,     0,     0,   919,   650,     0,   651,   648,   649,
       0,   235,   234,   910,   911,   909,   914,     0,     0,   916,
     917,     0,   881,   639,     0,   637,   918,   913,     0,   920,
     652,   915
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,    34,   912,   299,   683,  1124,  1663,
    1351,  1667,  1887,  1125,  1341,   855,  1035,  1570,   907,   908,
     909,    77,   297,  1126,  1102,  1127,  1128,  1104,  1318,  1633,
    1105,  1106,   676,  1509,  1510,  1687,  1343,  1344,  1345,  1346,
    1481,  1482,  1285,  1286,  1323,  1523,  1657,  1763,  1658,  1659,
    1660,  1370,  1371,  1367,  1843,  1734,  1944,  1762,  1780,  1781,
    1735,  1736,  1746,  1747,  1748,  1782,  1783,  1784,  1754,  1755,
    1756,  1775,  1277,  1278,  1107,  1749,  1522,  1732,  1836,  1839,
    1941,  2042,  1287,  1480,  1288,  1620,   458,   490,  1129,  1130,
    1967,  1968,  1969,  1970,  1538,  1791,  1792,  1473,  1414,  1955,
      35,   903,   476,  1108,    66,  1109,  1110,  1111,  1625,  1627,
    1934,  1289,   124,  1519,  1311,    36,   465,    37,   289,    38,
     291,    39,   420,   620,   621,    40,    41,   278,  1000,   113,
     428,   114,   115,   863,  1052,  1688,   436,   437,   438,   439,
     440,  1249,   632,   633,   634,  1057,  1255,   517,   706,   400,
     401,   402,   595,   818,   403,   404,   405,   406,   407,   845,
    1027,  1028,  1029,   408,   933,  1376,   944,   409,   583,   804,
     746,  1550,  1380,   700,   922,  1154,   994,   508,   926,   703,
    1238,  1239,  1240,  1241,  1242,  1811,  1810,  1812,  1977,  1900,
    1979,  1904,  1445,  1243,  1244,  1576,  1898,  2018,   995,   996,
     997,  1563,  1577,  1697,  1596,  1597,  1920,  1436,  1245,  1583,
    2027,  1917,  1918,  2062,  2061,  1919,  1817,  1818,  1711,  1712,
    2086,  2087,  2088,  1981,   743,   778,   744,  1594,  1595,   701,
     915,  1131,  1709,  1815,  1019,  1591,  1813,  1910,  1112,  1497,
    1498,  1054,  1055,  1275,  1471,  1615,   649,  1689,  1252,   885,
     886,  1360,  2052,  1337,  1452,  1453,  1601,  1602,  1056,  1246,
    1454,  1714,    42,  1133,   478,   479,   303,    85,    43,    94,
     308,   498,   691,    44,   101,   696,    45,   109,   624,   423,
     424,   856,  1036,  1043,   857,  1047,  1433,  1038,  1223,  1224,
    1077,  1081,  1039,  1226,  1429,  1430,  1274,  1135,  1541,    46,
    1074,   895,   896,  1892,  1893,    47,   686,    80,    48,   121,
      49,   118,   459,   651,   652,   647,    50,   474,   473,    51,
     283,   670,    52,   100,   313,   314,   502,   695,    53,   104,
      54,    55,   418,  1221,  1691,  1975,   106,   619,  1425,  1352,
    1821,  1925,  1926,  1928,  1995,  1996,  2072,  2095,  2084,  2098,
    2099,  2102,   410,   671,  1832,   411,  1882,  1949,  1861,   412,
    1044,  1045,  1472,   413,   414,  1324,   425,   285,   294,   415,
     842,   416,  1032,   417,  1113,   462,    97,   274,   275,    56,
     441,   117,   636,   637,   638,   872,   873,   463,  1008,   874,
     875,  1065,    98,    99,  1063,  1608,  1466,   315,    57,   122,
      58,    70,    73,   293,   485,   626,    59,    60,    61,    62,
     112,   629,   663,  1048,   664,   665,   666,   901,   861,   799,
     800,  1412,   579,   580,  1002
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1778
static const yytype_int16 yypact[] =
{
     788,   653,   735, -1778,   735,  -154,   855,   112, -1778, -1778,
     609, -1778,  1187, -1778, -1778,    76,   538,   -41,   735, -1778,
    -154,   620, -1778,   411, -1778,   333,   375, -1778,   571, 14818,
    -138,   731,   629, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, 11268, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, 14818, -1778, -1778,   571, -1778, -1778, -1778,
    -154, -1778, -1778,   771, 14818,   640, -1778,   496, -1778, -1778,
     686, 14818,   709, -1778,   712,   735, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  1797,   535, -1778, -1778, -1778, -1778, -1778,
     895,   571, -1778, -1778,  5647, -1778, -1778,   620, -1778, 10550,
      60, -1778, -1778, -1778, -1778,   659, -1778, -1778,  1906,   565,
   -1778, 11623,   735, -1778, 11623, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778,  -138,   545, -1778,
   -1778,  -126, 14818, -1778, -1778,   546,   569, -1778,   642, 11623,
   -1778, 11623,    94,   -11, -1778, -1778,   768, 14818,   640,   649,
   11623, -1778,   884, 14818, 14818,   709, -1778,   800,   924,   719,
   -1778, -1778,   680,   632, -1778, -1778, 10550,   666,   670,  7963,
   -1778,  5647,   674,   681,   687,   692,   705,   707,   714,   741,
     741,   762,   777,   782,  -108,   787, -1778,   789,   792,   812,
     814, -1778, -1778,   816, -1778,   821,   827,   830,  6033,    76,
     839, -1778,   845,   856,   868,   870,   885,   890,  5647,   905,
   -1778, -1778,   911,   919,   923,   939,   945,   955,   961,   983,
    1007,  1008,  1017,  1019,  1023, -1778,  1025,  1039,   351,  1040,
   -1778,  1045, -1778,  1048,   741,   741,  1049,  1051,  1052,  1065,
    1066,  1073,  7963,  7963,  7963,  5647, 14818, 14818, -1778,   577,
    1730, -1778,  1321,    29, -1778, -1778, -1778, -1778, -1778, -1778,
     727, -1778, -1778, -1778, -1778,  1074, -1778,   751,  1024, -1778,
   11623, 11623, -1778, -1778, -1778, -1778,   943,   -11,   897, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778,   840,   659, -1778, -1778,
   -1778, -1778,   568,  1075,    31,   -40,  1015, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778,   568,   972,   929,  1015,   568, -1778,
   -1778, -1778,  1079,  -109,  1325, -1778, -1778, -1778,  1111, -1778,
    1060,   -42, -1778,   394, 13398, 14818,  1373, 11623,  1077, -1778,
    1077, -1778,  1421,  1213, -1778, -1778,  1345, -1778, 11623, -1778,
    1315, -1778, -1778, -1778,  1252, 11623,  1220, -1778,  1126, -1778,
    1245,   895, 11623, -1778,  5647,   582, -1778,   577,  1131,  5647,
    1110,  5647,  5647,  5647,  5647,   591,  1112, -1778, -1778,  1113,
    5647,  5647,  5647,   727,  5647, 11978,  5647, -1778,  2250,  1405,
    5647,  5647,  5647,  5647,  1679,  1124,  5647,   654,  5647,  5647,
     852,  5647,  5647, -1778,  4103, -1778,  7963,  5647,  5647,  5647,
    5647,  5647,  5647,  1501,  1501,  5647,  5647,   858,  4103, -1778,
    1062,  1062,  5647,   727,  3331,  5647,  1127, -1778, -1778,  1129,
   11978,  1501,  1501,  5647,  5647, -1778, -1778, -1778,    32,  1130,
     430,  5647,  1128,  1821,  5647,  5647,  5647,  7963, -1778,  1001,
   -1778, -1778, -1778, -1778, -1778,  6419,  7963,  7963,  1136,  7963,
    7963,   756,  7963,  7963,  7963,  7963,  7963,  8349,  8735,  7963,
    7963,  7963,  7963,    -6,  7963, -1778, -1778, 14818, -1778,  1367,
    1137, -1778,  1202, -1778,   938, -1778,   620, -1778,   881, -1778,
   -1778, -1778,  1140, -1778,  5647, -1778,  1142, -1778,   774, -1778,
   -1778, 11623,  1155,   640, 11623,  1234,  5647, -1778,   -21, -1778,
   -1778,   -40, 14818,   568,   -40, -1778, 11623, -1778,   -40,   -40,
    1251, 11978, -1778, -1778, -1778, -1778,    20, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778,  1499, -1778, 11623,
   -1778, -1778, -1778,   948, -1778, 14818,  1191, 11623,  1077, -1778,
   -1778, -1778,  1376, -1778,  1077, -1778,   938,    90, -1778,  1501,
    1166, -1778,  5647,   -10,   137, -1778,   577,   523,   578,   163,
      98, -1778,  1178,  1186, -1778, -1778,   101,   117,   212,   215,
    1185,   268,  1188, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  1439, -1778, -1778, -1778,   270,   118,   123,
      41,  1197,  5647,   136,  1501,  1193,   271,   285,  1501,  1194,
     145,   288,   307,  2100,   317,   153,   162,   170,   178,   319,
    1196,  1200,   179,    47,  1501,  1203,   321, -1778,  1208, -1778,
    1209,   325,  4489,  4875,  5261,   103,   180, -1778, -1778,  1206,
    1216,  1219,    49,   341, -1778,  5647, -1778, -1778,   441, -1778,
    1243,    35, 14818,     8, -1778,  1303, -1778,    52,  1585, -1778,
   -1778,   660, -1778, -1778, -1778, -1778,  1223, -1778,  1228,  1164,
    1235,  5647,    26,  1235,  7963,  1231,  7963,  7963,  1555,  1704,
    1993,  1509,  1509,  6033,   643,  6033,   643,  1235,  1235,  1235,
    1237, -1778, -1778, -1778,  1571,  1236,  1238,  1309, 11623, 11623,
   -1778, -1778,  1246,  1246, 10186, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,    40,   577, -1778,  1240, -1778, -1778, -1778,
   -1778, -1778,  1004,  1249, -1778, -1778,   568,  1248, 14818, -1778,
   -1778,   577, -1778, -1778, -1778, -1778,   -71, -1778, -1778,   -40,
   -1778,   568, -1778, -1778, -1778,  1257, -1778,  -119,  1603,  1015,
   -1778, -1778,  1279,  2151, -1778,    51,  1280, -1778, -1778,   -27,
     775,  1282,  1601, -1778, -1778,  1429, -1778, -1778,  1449,  6805,
    1285, -1778,  5647,   466,  5647,  5647,  1564,  1644, -1778,  5647,
   -1778, -1778,  1644,  5647, -1778,  1287,  1515,  1517, -1778, -1778,
   -1778,  1126, -1778,  5647,  5647, -1778,  5647,  5647,  5647,  5647,
     343,  5647,  1295, -1778, -1778, -1778,  1296, -1778,  5647, -1778,
   -1778,  5647, -1778,  5647,  5647,  5647,  5647, -1778, -1778, -1778,
    7191,  5647,  5647,  1297, -1778, -1778,  5647,  5647, -1778,  5647,
     140,  5647,   645,  5647,   648,  5647, -1778,  5647, -1778, -1778,
   -1778, -1778,  5647, -1778,   745, -1778, -1778,   659, -1778,   441,
    1298,   881, -1778, -1778, -1778,  1301,  1302,  1314,  1797,  5647,
   -1778, -1778, -1778, -1778, -1778,  7963,    59,  1299,  7963, -1778,
    1286,  5647,    26,  1555,  1679,  1679,  5647,  1300,  1316, -1778,
   14818, -1778, -1778, -1778, -1778,   659, 11978, -1778,  1318, -1778,
    1318,   817,  1322,   746, -1778, -1778, -1778,   897,   394, -1778,
     408, -1778,   553,  1526,  1015, -1778,  1576, 13753, -1778, 12688,
   -1778,  1544, -1778,  -119,  2075, -1778,   -40,   -29, -1778,   -21,
     -21, -1778,  1191, 11978,  1191, -1778, -1778,  7577, -1778, -1778,
   -1778,   551,  1260,  1661,  1279,  1661,  1279,  1391,   100,  1549,
    1409,   861,  1557,  1360,  1362, -1778,  1422,  1661,  1700,    65,
    1369,  1370, -1778,  1033, -1778, -1778, -1778,  1061, -1778,  1351,
   10905, -1778, -1778,  1372,   741, -1778,    23,   987, -1778,   987,
   -1778,  2140, 11623,  9476, -1778,  1747,   647, -1778,   991,  1401,
    1525,  5647,  1568, -1778,  1647, -1778,  6033,   358, -1778,   577,
    5647,   577,   519, -1778,  1368, -1778,  1368, -1778, -1778,  1378,
   -1778,  1590, -1778,  1592,  1382,   577,  1383,  1366, -1778,  5647,
    5647, -1778,   363,   -98,   190,   193,    68, -1778, -1778,   365,
   -1778, -1778,   366,   370,   376,   196,   381,   799,  6033,   418,
     210,    72, -1778,   197,   199,   426,  5647,   456,  5647,   460,
    5647,   463,   495,   505, -1778,   840, -1778,  1384, -1778, -1778,
   -1778, -1778, -1778,  1387,   577,  1386, -1778, -1778,  5647, -1778,
      29,  7963,    87,  1393, -1778, -1778, -1778,   577, -1778, -1778,
   -1778,   425,   840,  1394, -1778,  -119,  7577,  1246,  1514, -1778,
   -1778,   817, 11978, -1778, -1778, -1778, -1778, 14818,  2150,  1191,
   -1778,  1398, -1778, -1778, 11623, -1778,   483,  1451,  1624, -1778,
   -1778, -1778, -1778, -1778, 14108, -1778, -1778, -1778, -1778,  1404,
    1614,  3717,     8,  -119, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778,  1429,   789,   577, -1778,  5647, -1778, -1778, -1778, -1778,
   -1778, 12333, -1778, -1778, -1778,    46,    67, 12333, -1778, -1778,
   12333,   932, 12333,  1234,   551,   741, -1778, -1778, -1778,  1625,
    1626, 12333, 12333, -1778,    -6,  1234, -1778, 12333, 11978, -1778,
   -1778, 11623,   181,  1313, -1778, -1778,  1516,  1279,  1279,  2188,
    9831, 14818,   156,    81, -1778,  1408,  2140, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
    1413,  1417, -1778,   801, -1778, -1778, -1778, -1778, -1778,  1788,
    1792, -1778,   465,  2149, -1778,   608, -1778, 11623,   577,   -21,
   -1778, -1778,  1679, -1778,   577,  5647,  1593, -1778, -1778,  1597,
   -1778, -1778, -1778, -1778, -1778, -1778,  1432,  1679,  1679, -1778,
    1546, -1778,  5647,  5647, -1778,  5647, -1778, -1778, -1778, -1778,
    5647, -1778, -1778,  1679, -1778,  5647, -1778, -1778,  5647,  5647,
    5647, -1778,   525, -1778,   543, -1778,   557, -1778, -1778, -1778,
    1140, -1778,   430, 14818, -1778, -1778,   834, -1778, -1778,  5647,
   -1778, 13753, -1778, -1778, -1778,  1665,  1140, 11978,  7577,  1441,
    1440, -1778, -1778,   -42, -1778, -1778, -1778,   473,  1660,  1669,
   -1778,  1608,   826,  1608,   473,   473,  1702,   408,  1053, -1778,
    1309,  1309, -1778,  1450, -1778, -1778,  1563, -1778, -1778, 13043,
     701, -1778,  7963,   789, -1778,   577, -1778,   612,  5647,  1568,
     577,  1458,   155, -1778, -1778,  5647,  1684,  1688,   599, -1778,
   12333, -1778, -1778, -1778,   447, -1778, -1778, -1778, -1778, -1778,
   12333, -1778, -1778, -1778, -1778, -1778, -1778,  1461, -1778,   155,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778,   551,    -8, -1778,   846, -1778, 14818, -1778, -1778,
   11623, -1778, -1778,  1707, 14818, -1778, -1778,  1747, -1778,  1722,
    9831, -1778, -1778,  1514, -1778, -1778, -1778, -1778, -1778,  1475,
   -1778,  1690,  -180,   577,  1476,   854, -1778,  1477,  1478,   195,
    1480,   560,   200,   862,   576,  -166,   600,   606,   607,   618,
   -1778, -1778, -1778,    85, -1778, -1778, -1778,   863, -1778, -1778,
      85, -1778, -1778, -1778,  7577, -1778,  -151,  1429, -1778,   697,
   -1778, -1778, -1778,  1709,   473,  1608,  1608,  1710,  1652,   587,
    1846,  1741, -1778, -1778, 14818, -1778, -1778,   659, -1778, -1778,
    1797,  1503, -1778,  1695, -1778,    30,  1654, -1778, -1778,  -119,
     577, -1778,  5647, -1778, -1778, -1778,   577, 12333, -1778, -1778,
   -1778, -1778,  1518,  1811,  1812, 12333, -1778,  1707, 11978, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778,  1520,  1522, -1778, -1778,
     891,    18, -1778,  1378,   389, -1778,  1378,  1522,  1378,  1524,
   -1778,  1269,  1256, -1778, -1778,  1527, -1778,  1848,  1528,  1013,
    1013,  1512, -1778,    14,   647, -1778,  1529,   897, 14818,  1572,
   -1778, -1778, -1778,  1694, -1778, -1778, -1778, -1778, -1778,  5647,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778,   553,   553, -1778,
   -1778,  1605, -1778, -1778,   881,  1267,  1015,   408, -1778,   473,
   -1778,  1746,  1752,   473, -1778, -1778, -1778,  5647, -1778,  1429,
   -1778, -1778,   -18,   840,  1871, -1778,  1450, -1778, -1778, -1778,
   -1778,  3717,   155,  1540,  1556, 14818, -1778,   859,   156,  1848,
   -1778, 14818,  1751,  1726,   421,    19,  1312,    -6,   859,  1729,
   -1778, -1778,  1780, -1778, -1778, -1778, -1778,  1269, -1778,  1781,
    1638,  1616, -1778, -1778, -1778,    18, -1778,    19,  1013,  1524,
    1740, -1778, -1778,  1573,  1013,   421,  1013, -1778, -1778,  1745,
   -1778,    19,    19,  1748,  1234, -1778,  1757, -1778,   942,  1874,
   -1778, -1778, -1778,  1013, -1778, -1778, 14818, -1778, -1778, -1778,
   -1778,   877,   155,  1589, 11978,  1594,   626, -1778, -1778, 11623,
   -1778, -1778, -1778,  1398,  2058,  1635,   473,   473,  2282,  1641,
    5647,  5647,  1596,  -147,   155,  5647,  1015, -1778,   540,  1140,
     658,  1804, -1778, -1778, -1778, 14818, 14818,   952,   727,   727,
    1591,  1591, -1778, -1778, -1778, -1778,   953, -1778,    21,  1767,
    1606, -1778, -1778,  1621,   859, -1778, -1778,   506, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778, -1778,   727,   741, -1778,   727,
     727, -1778, -1778,  1778, -1778, -1778, -1778,   964,   195, -1778,
    1621, -1778,  1607,  1609, -1778,  1610, -1778, -1778, -1778,  1591,
    1591,   727, -1778, -1778,  1645, -1778, -1778,    14,    15, 14818,
   -1778,  1782,  1611, -1778,  -119, -1778, -1778, -1778,   430, -1778,
    1658, -1778, -1778, -1778,  1662,   577,   577, 14818, -1778,  5647,
   -1778, -1778,   577, -1778, -1778, -1778,   599,   599, -1778,   540,
      85,  1969,  1970,  1899,  1973,   658, -1778,   -96, -1778,   965,
     970,    15, -1778, -1778,   156, -1778, 14818, -1778, -1778, -1778,
       6, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
     727, -1778,   727,   741, -1778,   978, -1778, -1778,    18, -1778,
    1269, -1778, -1778, -1778, -1778,  1234,  1279, -1778,    15, -1778,
   -1778,   155,  1623, 11978,  7577,  1871, -1778,  5647,  1630,  5647,
    1631,   989, -1778,   155,  1881,  1881, -1778, -1778,   195,   195,
    1983,   195, -1778,  1984,  1985,   -96, -1778,  1773,    15, -1778,
   -1778, -1778,   561,   561, -1778,  1269,   195, -1778,    19, -1778,
   -1778,  1232, -1778, -1778, -1778, -1778, -1778,  1804,  1429,   577,
   14818,   577, 14818, -1778, 14818, -1778,   927, -1778, -1778, -1778,
   -1778,   195, -1778,   195,   195, -1778, -1778, -1778, -1778,  2016,
   -1778,    83,  1803,  1805, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  1875,  1015,   999,  1005, -1778,  1996, -1778,
    1998,  1642,  1648, -1778, -1778, -1778, -1778, -1778, -1778,  1697,
    1944,  1823,  1655, -1778, -1778, -1778, -1778, -1778, 14463, 14463,
     561,   561,    -7,  2915,  1762, -1778,  1657, -1778,  1659, -1778,
    1020, -1778, -1778, -1778, -1778, -1778, -1778,  1797,  1026, -1778,
   -1778, 11978, -1778, -1778, 14463, -1778, -1778, -1778,  9121,  1611,
   -1778, -1778
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
     383, -1778, -1778,   925, -1176,  -825, -1778, -1778, -1778,    77,
   -1778, -1778,  -195, -1082,   951, -1030,  -861, -1778, -1778, -1778,
   -1778, -1778,  1377, -1778, -1778, -1502,   739,   532,   954,   981,
     742,   783, -1778, -1778,   444, -1778,   443, -1778, -1778, -1778,
   -1778,  -499, -1449,   926,   309,   446,   220, -1045,  -375,  -282,
   -1492, -1778, -1384, -1778,   344, -1515, -1778,   311, -1567, -1778,
     345,   372,   368, -1138,  -362, -1778,   105, -1778, -1778, -1778,
   -1778,  -944, -1778, -1778, -1067, -1778, -1778, -1778, -1778, -1328,
   -1777, -1778,   974,   139, -1778,  -809,   219, -1230, -1778, -1778,
   -1778, -1778, -1778, -1778,   875, -1778, -1778,   793, -1778, -1778,
   -1778,   228,   113, -1610, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778,  1270,  1656,  1067,  1840,  1135, -1778,
   -1778,  1849, -1778, -1778, -1778,  -736,  -970, -1778, -1778, -1778,
    1691,  -913, -1159,  1265,  -787,  -815,   716,  -329,  1600, -1778,
    -561,  1901, -1778, -1778,  -305, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778,   934, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  1275, -1778,  1222,  -493, -1778, -1778, -1778,
   -1345, -1778,   721,   462, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1337, -1778, -1778, -1778, -1778, -1778,  1165,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1060, -1778,  -785,
     185, -1778,   247, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
   -1778,    71,    92, -1108,  -523,  1615,   598, -1778,   477,  1663,
    -380, -1778, -1778, -1778,  1157, -1778, -1778, -1778, -1778, -1778,
     549,  -903,  -634, -1778, -1778, -1453,  -420, -1050,  -408, -1778,
    -946,   711, -1778,  -685, -1778, -1778, -1778,   467,  1134, -1778,
   -1778, -1778, -1778, -1778,   316,   -81,  1884, -1778, -1778, -1778,
   -1778, -1778,  1255, -1778, -1778, -1778, -1778, -1778, -1778,  1876,
    1769,  1505, -1778, -1778,  -920, -1778, -1778,  1344, -1778,   772,
   -1048, -1079,   976, -1778, -1778, -1778, -1205, -1778, -1778, -1778,
   -1778, -1778,  1132,   106,   231, -1778, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  -312,  -239,  -584, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778, -1778, -1778,  1715, -1778, -1778, -1778,  1859,
   -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778, -1778,
     236, -1778,   300,   209, -1778,   234, -1778, -1778, -1778, -1778,
     122, -1778,  -326, -1495, -1571, -1580, -1778, -1778, -1778,   410,
    1010,  1599, -1452,  -522, -1778,   264,   -28,   633,  2164,   -12,
      -2,  -397,  -424,   320,  -597,   921, -1778, -1778, -1778, -1778,
   -1778, -1778, -1778,  1364, -1778, -1778, -1778, -1778,   986, -1778,
   -1778, -1778,   -91,  -852,   785, -1778,   533,   810, -1778, -1778,
   -1778, -1778,   160,  2143,  1830, -1778, -1778, -1778, -1778, -1778,
     -76, -1025,  -422, -1778, -1398, -1778, -1778, -1778,  -976, -1379,
   -1778, -1778,  -486, -1778, -1778
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1211
static const yytype_int16 yytable[] =
{
      95,   518,   306,   720,  1251,  1291,   630,  1293,   523,   111,
      96,   751,  1132,   615,   506,  1261,   843,   272,   707,   708,
    1062,  1431,  1233,   284,  1301,  1199,   809,  1195,   422,  1042,
     545,   419,   899,  1564,   817,  1575,  1410,   655,   650,   272,
     466,   722,  1103,  1347,   584,   559,  1629,   584,   789,   650,
    1058,   272,   563,   584,  1676,   567,   568,  1483,  1026,   584,
     905,   584,   272,  1426,   584,  1222,  1965,   887,  1692,   272,
     890,   584,   292,   613,   892,   893,   613,   672,  1631,  1309,
     584,    95,  1718,  1265,   584,  1770,   911,   575,   576,   577,
    1475,    96,  1579,   924,  2002,   111,   468,   272,  1354,   584,
    1589,   643,   584,   488,  1750,  1844,   460,  1588,  -643,   272,
     584,  1475,   272,   584,   677,   584,   461,    86,  1834,  1114,
      88,  1229, -1207,  1267,  1268,  1475,   615,  1053,   898,   584,
     584,  -643,   276,   481,   102,   584, -1210,   645,    86,   897,
    1018,    88,  1005,  1328,  -856,  1785,  1069,  1833,   584,   584,
    1757,   927,   584,  1937,  1999,  1622,  1488,   584,  1833,  1075,
    1722,  1771,  1772,  1517,   882,   584,   615,  1851,  1295,  2067,
    1613,  1050,  2093,  1476,   584,   584,  1534,  1428,   971,   288,
     110,  1694,   584,  1966, -1210,  1449,   658,  -220,  -220,  1006,
     584,   584,   584,   883,  -126,  1761,   949,  1993,   648,  1051,
    1761,   483,   584,   641,  1670,   584,   375,    72,   584,   584,
     949,   584,   584,  1908,   316,  1468,  1050,  1994,  1682,   656,
     668,  2037,   584,  1572,   584,   107,   906,   584,  1739,  1739,
     290,  1740,  1740,  1695,   985,   422,  1751,   484,  1512,  1513,
    1909,   659,  1103,  1865,  1614,   277,   898,  1700,  1076,  1869,
    1621,  1871,  1938,  1741,  1741,  1814,  2094,  -856,   900,   585,
    1626,    79,   585,   648,  1833,  1787,   898,  1768,   585,  1824,
     272,  1186,   491,  1945,   585,   522,   585,   272,  1518,   272,
     584,  1477,   584,   584,  1007,   272,   585,    91,   272,   929,
     628,   272,   272,  1724,   822,   585,  2068,   584,  1342,   585,
     584,  1501,  -126,  1939,   272,  1071,   482,   884,    91,   844,
    1761,  1434,   911,   911,   585,   103,  1070,   585,   646,   584,
    1253,   677,  -643,  1535,  2000,   585,  1266,  1520,   585,   584,
     585,   584,  1046,   584,   669,  1017,  1632,   584,  1395,  1890,
     422,   889,   644,  2003,   585,   585,   628,   925,  1329,   273,
     585,  1742,  1742,   584,  1804,   584,  1355,  1666,  1808,  1719,
    1117,  1911,  1805,   585,   585,    91,  1809,   585,  1469,  1693,
     584,   286,   585,  1956,  1630,   584,  1578,   584,   584,  1478,
     585,   426,   584,   273,   272,   272,  1310,  1723,   584,   585,
     585,  2007,   622,   584,   295,   586,   614,   585,   586,   614,
    -126,   295,  1421,  1042,   586,   585,   585,   585,   272,   272,
     586,  1619,   586,  1540,    91,   586,   794,   585,  1987,   795,
     585,  1003,   586,   585,   585,   794,   585,   585,   948,   286,
     584,   586,  1026,   991,   972,   586,   992,   585,   584,   585,
    1157,   286,   585,  1207,   286,  1662,  1208,  1664,   878,   678,
     586,  1163,  1384,   586,  1206,  1385,  1397,  1983,  1103,  1398,
     684,   586,   272,   272,   586,   272,   586,  2008,   584,  1901,
    1902,  1418,   584,  1177,  1419,   584,   272,   919,   584,  1079,
     586,   586,  1264,   272,  1279,   932,   586,   986,   936,  1964,
     272,   650,   805,  2029,  2030,   585,  2032,   585,   585,   586,
     586,  1215,  1216,   586,   937,   946,  1502,   584,   586,   375,
     947,  2045,   585,   272,  1225,   585,   586,   584,  2013,  1976,
     911,  1022,   911,   951,  1338,   586,   586,  1342,  1205,  1381,
    2025,   584,   958,   586,   585,  1213,  2063,   584,  2064,  2065,
     963,   586,   586,   586,   585,  1623,   585,   931,   585,   964,
     858,   897,   585,   586,  1819,   584,   586,   965,   272,   586,
     586,  1721,   586,   586,  1066,   966,   970,   987,   585,   584,
     585,    95,   584,   586,  1423,   586,  2009,  1382,   586,  1072,
    1383,    96,  1450,  1390,  1399,   585,  1400,  1679,   584,   584,
     585,   698,   585,   585,  1396,  2038,   938,   585,   904,   939,
     698,   841,   472,   585,  1767,   272,  1485,   480,   585,   286,
     105,   286,   584,   876,   111,  1062,   879,   273,   584,   584,
     286,  2044,  1759,   273,   494,   630,  1946,  1713,   891,   272,
     584,   586,   272,   586,   586,   116,   286,  1276,   584,  1536,
     272,  1525,  1790,   880,   272,   585,  1802,    81,   586,   272,
    1417,   586,   941,   585,   945,   954,   119,   584,  1587,   916,
     584,  1348,   271,   698,    22,   375,  1914,   272,   429,   955,
     586,   841,   959,   272,  1696,   272,   699,  1424,  1235,    82,
     586,  1247,   586,   585,   586,   711,   120,   585,   586,  1915,
     585,   960,  1269,   585,  1271,    86,   287,  1279,    88,   639,
     797,   962,  1841,   967,   586,   975,   586,  1494,  1342,   978,
    1046,   998,  1451,  1210,  1866,  1416,   581,   582,  1800,  1947,
     123,   586,   585,    63,  1624,   993,   586,  1168,   586,   586,
     640,   279,   585,   586,   562,   850,  1248,   280,   597,   586,
     286,   286,  1363,  1235,   586,  1537,   585,  1379,   754,  1386,
    1387,  1282,   585,   430,  1388,   -45,    86,  1842,    87,    88,
    1389,  -284,  1438,  1921,    86,  1391,  1913,    88,  1283,  2016,
     585,  1922,  1760,  2039,  1797,  1798,  1188,    30,   824,  1190,
    1010,   586,  1140,   292,   585,  1327,  1499,   585,   296,   586,
     272,  1236,  1442,  1237,   673,   674,  1349,   286,     1,     2,
    1701,  1702,  1394,   585,   585,  1705,  1816,   298,   286,     3,
    1401,   688,    69,   798,    71,   286,  2040,   300,   694,   586,
     622,  1034,   286,   586,   999,    64,   586,   585,   108,   586,
      65,  1948,     4,   585,   585,  1365,   272,   272,  2041,  1542,
    1403,     5,   272,   600,  1405,   585,  1974,  1407,  1533,  1984,
    1985,  1439,     6,   585,  1547,  1548,  1236,   302,   586,  1446,
      95,   698,   905,  1440,   304,    91,   272,   698,   586,    64,
    1555,  1441,   585,  1011,    65,   585,     7,     8,     9,  1408,
    1916,    78,   586,  1923,   320,    84,    10,  2011,   586,  1409,
     859,   841,  1553,    74,   307,   305,    11,   841,   841,  1350,
     841,    90,  1442,  1115,    12,  1225,   586,   928,   868,  1560,
     929,  1280,  2055,    13,  2056,  1279,  1827,  1203,   825,    86,
     586,    83,    88,   586,   464,    75,  1567,  1561,  1706,   471,
     487,    92,   467,   826,   475,  1828,   493,   846,  1737,   586,
     586,  1562,   336,  1605,  1678,    14,   758,   431,   432,   433,
     434,  1606,   774,   477,   866,   869,  1443,  -975,    15,   435,
    1681,   286,   930,   586,   286,   929,  1489,  1876,    16,   586,
     586,  1924,   888,  1263,  1607,   860,   286,  1738,   486,   341,
     497,   586,   489,   342,  1683,  1012,  1118,  1120,  1299,   586,
    1684,  1685,  1584,   870,  1013,  -218,    95,  1444,   344,   286,
    1585,   492,  1686,   827,  2073,   913,    96,   286,   586,  1084,
    1896,   586,   496,  1282,   499,  1332,  1929,  1930,   272,   501,
     609,   610,   611,   612,   272,   336,  1598,  1599,   906,   309,
    1283,  1777,  -218,  -218,   675,   905,    17,    18,  -218,   500,
      19,   375,  1086,    67,   351,   272,    68,   272,    20,   504,
     871,  1084,    95,   505,    21,  1256,  1333,   509,    22,  2043,
    -220,   272,    96,  2058,   510,    23,   342,  1593,    24,   841,
     511,    64,   360,   361,   905,   512,    65,   675,  1088,   310,
     618,  1877,    25,  1698,  1086,  1586,  1296,   850,   513,    91,
     514,   841,    86,  2059,  1339,    88,  1300,   515,   272,  1778,
    1093,  1739,  1315,  1316,  1740,   841,  1499,   841,  1317,   841,
     272,   272,  1094,   841,    26,  2054,   841,  1334,  -680,   675,
    1088,   810,  1004,    27,   516,    28,  1741,   351,    29,  1194,
    1231,    86,   929,  1232,    88,    86,  2091,  2092,    88,   617,
    1279,   -76,  1093,   727,  1758,   519,  1335,  1764,    86,  1766,
      87,    88,   672,  2060,  1094,  1878,   361,   506,   779,   779,
     520,  -680,  1119,   852,   853,   521,   -70,    76,   286,   286,
     524,    30,   525,   375,   866,   526,  1015,    86,  1829,  -680,
      88,  -680,  -220,  1392,   380,  1529,   929,   382,  1530,  -680,
     311,  -680,   777,   648,  1330,   527,  1331,   528,  1068,   529,
    1228,   906,  -680,   312,   530,   731,    68,  -680,   850,   625,
     531,   811,  -680,   532,   812,   851,  1448,   631,  1566,  -680,
     272,   929,   536,  1739,  1742,   272,  1740,  -680,   537,   628,
    1634,  -680,   272,  1530,  1830,  1831,  -680,   654,  1672,   538,
     906,  1673,   272,  1743,  1100,   630,  1680,  1690,  1741,   929,
     929,   539,  1457,   540,   732,  1101,   375,   735,  -680,   597,
    1336,  1888,    91,   736,  1889,  1744,  1752,   653,   541,   272,
     382,  -680,  1894,   542,  -151,   272,  1744,  1752,   272,  -680,
     272,  1593,   841,  1500,   852,   853,  1100,  1779,   544,   272,
     272,  1487,   841,    90,   546,   272,   272,  1101,  1211,   272,
     737,    91,   547,  1495,  -125,    91,   548,   841,   272,   272,
    1280,  1290,  -680,  1292,   460,  2046,  1737,  1879,  1880,  1302,
    1281,   854,   549,    92,   461,  1307,   813,  1061,   550,  1539,
     739,    86,  -680,    87,    88,   814,  1931,  1935,   551,  1889,
    1936,   841,  1750,   596,   552,   272,  1742,    91,  1954,  1997,
    1220,  1673,  1889,  -680,  1998,  1738,  2047,  1889,  1745,  1753,
    1845,  1848,  2005,    89,   600,  2006,   553,  1503,  1504,  1745,
    1753,  2048,  1744,  2023,   657,  -680,  2024,  1257,  1353,  1259,
    1752,   597,  1845,  2074,   660,  -680,  2024,  -125,   661,  2075,
     554,   555,  2024,  -680,  -680,  -680,  1845,  1845,  1847,  1505,
     556,   272,   557,  -680,  2105,  -680,   558,  2104,   560,   272,
    2107,  -680,  1282,  2108,  1506,   272,   597,  2049,   740,  1256,
     -76,  -680,   561,   564,  1860,  -220,  -680,   742,   565,  1283,
    1325,   566,   569,  -680,   570,   571,  1507,  -680,  -220,  -680,
    -680,  -680,   286,  1325,   662,  -680,  2050,   272,   572,   573,
    -680,  1894,  1881,  1846,  1849,    95,   574,   616,   642,   675,
     680,   681,   682,   615,   679,  1745,  1739,   685,   272,  1740,
     687,   672,  -680,  1753,  1751,  1846,    90,   689,   272,  1739,
     690,  -220,  1740,   598,   615,  -680,   600,   692,   702,  1846,
    1846,  1741,  1636,  -680,   705,  -125,   714,   715,   599,   745,
     841,    91,   523,   563,  1741,   272,    92,   752,   272,  1715,
     698,   787,   272,   788,   796,   841,   802,   841,   272,   821,
     847,   600,  1739,   849,   848,  1740,  -680,   862,  1951,   867,
    1950,   601,   877,  1952,   894,   603,   604,   605,   606,   607,
     608,   609,   610,   611,   612,  1474,   902,  1741,    91,   914,
     921,  1474,   866,   615,  1484,   615,  1486,  1437,  1508,   917,
    2051,  2100,   934,   935,   286,  1492,  1493,  -680,   602,   940,
     943,  1496,   942,   949,  1458,  1001,    93,   953,   957,  1894,
     968,  1009,   272,  1752,   969,  1744,  2100,   974,    95,  1742,
     988,   672,   672,  -125,   672,   976,   977,   584,    96,  -680,
     989,  1325,  1742,   990,   597,   272,  -433,  1325,  -680,   672,
    1325,  1014,  1325,   272,  1021,   612,   272, -1211,   613,  1084,
    -523,  1325,  1325,  1031,  2004,  -680,  1030,  1325,  1059,  1037,
    1744,   286,  1067,  1845,   672,  1078,   672,   672,  1064,  1769,
    1325,  1516,  -218,  -218,  1073,  1742,  1080,  1116,  -218,  1121,
     597,  -680,  1086,  -680,  -680,   898,   272,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,  1134,  1144,  1138,
    1143,  1158,  1145,  1159,   336,  1160,  1753,   286,  1745,  1170,
    1171,  1182,  1198,  1209,  1218,  1051,  1146,   675,  1088,  1200,
    1201,   584,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,  1202,  1219,   399,  1227,  1230,  1050,  1260,   600,
    1093,  1280,  1294,   272,  1856,   342,  1297,  1147,  1298,   272,
    1148,   336,  1094,  1745,  1303,   841,  1846,  1304,  1149,  1305,
    1637,  1306,  1308,  1565,  1638,  1639,  1312,  1313,  1319,  1326,
    1084,  1257,  1355,  1357,  1474,    86,  1359,  1361,    88,  1640,
    1372,  1366,  1373,   929,  1474,   600,   723,   724,   725,   726,
     727,  1369,   342,  -218,  -218,  1084,  1374,  1375,  1411,  -218,
    1415,  1897,  1874,  1086,   272,  1413,   351,  1420,  1122,  1220,
    1641,  1427,   272,  1642,   850,  1447,  1456,   272,  1455,  1460,
     712,  1643,  1459,  1511,  1490,  1491,  1524,  1527,  1086,   597,
    1325,  1528,  1531,  1644,  1150,   361,  1532,  1544,   675,  1088,
    1325,  1545,   755,   272,   272,   759,  1546,  1645,  1549,   728,
     729,   730,   731,   351,  1569,  1573,  1580,  1574,   770,   771,
    1646,  1093,   775,   675,  1088,  1581,  1582,  1635,  1590,  1600,
     286,   587,  1603,  1094,  1661,  1612,   790,   791,  1628,  1857,
    1325,  1858,   361,  1617,  1100,   -74,  1093,  1618,  1668,  1669,
    1671,  1674,  1675,   588,  1677,  1101,    86,  1647,  1094,    88,
    1704,   732,   733,   734,   735,  1699,  1703,   272,  1707,  1708,
     736,  1474, -1211, -1211,   607,   608,   609,   610,   611,   612,
    1716,    86,  1717,   589,    88,   272,  1720,  1726,  1727,  1774,
    1786,  1725,   590,  1731,   600,  1733,   585,  1760,  1795,  1794,
    1773,  1776,  1806,  1789,  1710,    91,  1799,   737,  1807,   382,
    1820,   507,  1648,  1825,   272,  1151,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   591,  1325,  1838,  1826,
    1840,    86,  1852,    87,    88,  1325,   738,   739,   534,  1853,
    1855,  1649,   375,  1863,  1867,   442,  1868,  1859,   543,  1872,
    1884,   272,  1873,  2010,  1152,    86,   382,    87,    88,   443,
     444,  1875,  1891,    89,   920,  1100,  -598,   445,  1895,  1907,
    1153,  1650,  -603,  1927,  1123,  1940,  1101,  1943,  1793,  1953,
    1942,  1958,  1963,  1959,  1960,   578,  1972,    89,  1973,  1978,
    1100,  1988,  1989,  1980,  1990,  1991,  2106,  2014,   272,  2026,
     272,  1101,   272,  2020,  2022,  2031,  2033,  2034,   446,  1520,
    2066,  2069,  1651,  2070,  2071,  2078,  1652,  1653,  2076,   952,
    2077,  2079,  2081,   956,  2080,   740,    91,  2082,  2083,  2101,
     447,  2103,   586,   741,   742,  1793,  2104,  1788,  1340,   973,
      86,  1837,  1654,    88,  1314,  1655,  1656,   448,   449,  1515,
     910,    91,  1665,  1284,  1322,  1521,   272,   272,  1479,  1728,
    1729,   272,  1368,   450,  1870, -1211,   604,   605,   606,   607,
     608,   609,   610,   611,   612,    95,    90,   451,   597,   272,
    1957,  1854,   272,  1765,  1885,    96,   272,   592,   593,   594,
    1864,  1835,  2036,  1356,   697,  1850,  1886,  2012,  1971,   704,
      90,    91,  1514,   709,   710,  1234,    92,   470,  1033,   286,
     716,   717,   718,  1438,   719,   469,   721,  1049,   635,   667,
     747,   748,   749,   750,  1197,    91,   753,  1568,   756,   757,
      92,   760,   761,   452,   762,  1793,  1793,   764,   765,   766,
     767,   768,   769,  1422,  1156,   772,   773,  1082,   776,  1803,
    1862,  1083,   781,  1196,   785,   786,  1986,  1084,  1592,  1084,
    2028,  2090,  1801,   792,   793,  2110,   780,  1730,   713,  1214,
    1611,   801,   453,  1822,   806,   807,   808,  1250,  1883,   495,
     623,  1085,   503,   600,  1082,   597,  1161,  1040,  1083,  1571,
    1086,   918,  1086,  1432,  2015,  1270,  1084,  2109,   535,  1793,
     803,  2017,  1439,  1087,   454,  1438,   693,   455,   456,    86,
      91,    87,    88,  1332,  1440,  1992,  2053,  1982,  1085,  2035,
    2111,  1060,  1441,   865,   864,   675,  1088,   675,  1088,  1086,
    1932,  1933,  1435,  1089,  1090,   301,   881,  1526,  1467,  1091,
    1087,    89,  1609,   427,  1823,  1092,  2001,   627,  1093,  -280,
    1093,   457,   961,  1442,  1333,     0,     0,     0,     0,     0,
    1094,     0,  1094,     0,   675,  1088,  1899,  1095,     0,     0,
    1089,     0,     0,     0,    86,     0,  1091,    88,     0,  1961,
    1962,     0,  1092,    86,     0,    86,    88,  1093,    88,     0,
     600,  1096,   923,     0,  1439,     0,     0,     0,     0,  1094,
       0,     0,     0,     0,  1095,     0,  1440,  1443,     0,     0,
       0,     0,     0,     0,  1441,  1334,     0,   723,   724,   725,
     726,   727,    86,     0,     0,    88,     0,     0,     0,     0,
    1982,     0,  1982,     0,  2057,     0,     0,  1438,     0,     0,
    1097,     0,   950,     0,  1335,  1442,     0,     0,  1444,     0,
       0,     0,     0,     0,    90, -1211,   605,   606,   607,   608,
     609,   610,   611,   612,     0,     0,     0,  1098,     0,     0,
       0,     0,   980,   982,   984,     0,     0,  1097,     0,    91,
     728,   729,   730,   731,    92,     0,     0,     0,  2089,  2089,
    1099,     0,  1100,     0,  1100,     0,     0,     0,     0,  1443,
       0,     0,     0,  1101,  1098,  1101,     0,     0,     0,     0,
       0,  1016,     0,     0,  2089,     0,     0,     0,     0,     0,
       0,     0,     0,  1024,     0,  1025,  1439,  1099,     0,     0,
       0,  1100,   732,   733,   734,   735,     0,   763,  1440,     0,
    1444,   736,  1101,     0,    91,     0,  1441,     0,     0,     0,
       0,     0,     0,    91,  1262,    91,     0,     0,  1336,     0,
       0,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,     0,     0,     0,     0,     0,     0,  1442,   737,     0,
       0,     0,     0,     0,     0,     0,     0,   819,   820,     0,
    1903,   823,    91,   828,   829,   830,   831,   832,   834,   836,
     837,   838,   839,   840,     0,     0,     0,   738,   739,  1137,
       0,     0,  1139,     0,  1141,  1142,     0,     0,     0,  1155,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1443,     0,  1162,     0,     0,  1164,  1165,  1166,  1167,
       0,  1169,     0,     0,     0,     0,     0,     0,  1172,     0,
       0,  1173,     0,  1174,  1175,  1176,     0,     0,     0,     0,
    1179,  1180,  1181,     0,     0,     0,  1183,  1184,     0,  1185,
       0,  1187,  1444,  1189,     0,  1191,     0,  1192,     0,     0,
       0,     0,  1193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   740,     0,     0,  1204,
       0,     0,     0,     0,   741,   742,     0,     0,     0,     0,
       0,  1212,     0,     0,     0,     0,  1217,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1273,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1020,     0,     0,  1023,     0,
       0,  1358,     0,     0,     0,     0,  1362,     0,     0,     0,
    1364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1377,
    1378,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1393,     0,
       0,     0,     0,     0,     0,     0,  1402,     0,  1404,     0,
    1406,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1470,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
     126,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   132,     0,   133,     0,     0,     0,
       0,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,   143,   144,  1543,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,     0,     0,     0,
       0,   154,  1551,  1552,     0,     0,   155,   156,   157,     0,
    1554,   158,     0,     0,     0,  1556,   159,   160,  1557,  1558,
    1559,     0,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,  1273,   173,
     174,     0,     0,   175,     0,     0,   176,   177,   178,     0,
     179,     0,     0,     0,   180,   181,     0,   182,     0,   183,
       0,     0,   184,     0,     0,     0,     0,     0,   185,    86,
     186,     0,    88,     0,     0,   187,   188,     0,  1610,     0,
       0,     0,     0,     0,     0,  1616,     0,     0,     0,   189,
       0,     0,     0,   190,     0,     0,   191,     0,     0,     0,
     192,     0,     0,     0,     0,     0,   193,   194,     0,   195,
       0,     0,     0,     0,   196,   197,   198,   199,     0,     0,
     200,     0,   201,     0,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,     0,     0,   210,     0,     0,
       0,   211,   212,     0,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,   225,     0,     0,  1273,   226,   227,   228,   229,   230,
     231,   232,     0,   233,   234,     0,     0,     0,   235,   236,
     237,   238,     0,     0,   239,     0,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     244,     0,  1470,   245,     0,     0,   246,   247,   248,     0,
       0,   249,     0,   250,   251,     0,     0,   252,     0,     0,
     253,     0,   254,   255,     0,   256,     0,     0,   257,     0,
       0,   258,   259,     0,   260,   261,     0,     0,     0,   262,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     264,     0,   265,     0,     0,   266,     0,     0,     0,     0,
     267,   268,     0,     0,     0,     0,   269,     0,     0,  1796,
     270,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2096,
       0,     0,     0,   397,  2097,     0,     0,  1470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1465,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,   317,     0,   127,   128,
       0,     0,     0,     0,   129,     0,     0,     0,   130,   131,
     318,     0,   133,     0,     0,   319,   320,   134,     0,   135,
     136,   782,   137,     0,     0,     0,   138,   321,   322,   323,
     139,     0,     0,   324,   140,     0,   141,   325,     0,   326,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,   327,   328,     0,     0,   154,   329,   330,
       0,   331,   155,   156,   157,   332,   333,   334,     0,     0,
    1905,  1906,   335,   160,   336,  1912,     0,   337,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,   338,   339,   175,
     340,   341,   176,   177,   178,   342,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,   343,     0,   184,     0,
     344,     0,     0,     0,   345,    86,   186,     0,    88,   346,
       0,   187,   188,     0,     0,     0,     0,     0,   347,   348,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
       0,   349,   191,     0,   783,   350,   192,     0,     0,  1470,
       0,     0,   193,   194,     0,   195,   351,     0,     0,   352,
     196,   197,   198,   353,     0,     0,   354,   355,   201,     0,
     202,   356,   357,   204,   205,   206,     0,     0,   207,   208,
     209,   358,   359,   210,   360,   361,     0,   211,   212,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   362,     0,   218,     0,   219,   220,   363,
     222,     0,     0,     0,  1273,     0,   223,  2019,     0,  2021,
       0,   224,   364,   365,     0,     0,     0,   225,     0,     0,
     366,   226,   227,   228,   229,   230,   367,   232,     0,   368,
     234,     0,     0,     0,   235,   236,   237,   238,     0,     0,
     239,     0,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,   369,   370,   245,
       0,     0,   246,   371,   248,   372,   373,   249,   374,   250,
     251,     0,     0,   252,     0,   375,   253,     0,   376,   377,
     378,   256,     0,   784,   257,   379,   380,   381,   259,   382,
     260,   261,     0,     0,     0,   262,     0,     0,     0,     0,
     383,     0,     0,   384,   385,     0,   386,   387,   265,     0,
       0,   266,   388,     0,   389,   390,   267,   268,     0,     0,
       0,     0,   269,     0,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,     0,     0,
       0,     0,   394,     0,   395,     0,   396,     0,     0,   397,
     398,   125,   317,     0,   127,   128,  1461,     0,     0,     0,
     129,     0,     0,     0,   130,   131,   318,     0,   133,     0,
       0,  1462,   320,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,   321,   322,   323,   139,     0,     0,   324,
     140,     0,   141,   325,     0,   326,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,   327,
     328,     0,     0,   154,   329,   330,     0,   331,   155,   156,
     157,   332,   333,   334,     0,     0,     0,     0,   335,   160,
     336,     0,     0,  1463,     0,     0,     0,     0,     0,   161,
     162,     0,     0,     0,   163,     0,   164,   165,   166,     0,
       0,   167,     0,   168,   169,     0,   170,   171,     0,   172,
       0,   173,   174,   338,   339,   175,   340,   341,   176,   177,
     178,   342,   179,     0,     0,     0,   180,   181,     0,   182,
       0,   183,   343,     0,   184,     0,   344,     0,     0,     0,
     345,    86,   186,     0,    88,   346,     0,   187,   188,     0,
       0,     0,     0,     0,   347,   348,     0,     0,     0,     0,
       0,   189,     0,     0,     0,   190,     0,   349,   191,     0,
       0,   350,   192,     0,     0,     0,     0,     0,   193,   194,
       0,   195,   351,     0,     0,   352,   196,   197,   198,   353,
       0,     0,   354,   355,   201,     0,   202,   356,   357,   204,
     205,   206,     0,     0,   207,   208,   209,   358,   359,   210,
     360,   361,     0,   211,   212,  1464,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   362,
       0,   218,     0,   219,   220,   363,   222,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,   224,   364,   365,
       0,     0,     0,   225,     0,     0,   366,   226,   227,   228,
     229,   230,   367,   232,     0,   368,   234,     0,     0,     0,
     235,   236,   237,   238,     0,     0,   239,     0,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   244,   369,   370,   245,     0,     0,   246,   371,
     248,   372,   373,   249,   374,   250,   251,     0,     0,   252,
       0,   375,   253,     0,   376,   377,   378,   256,     0,     0,
     257,   379,   380,   381,   259,   382,   260,   261,     0,     0,
       0,   262,     0,     0,     0,     0,   383,     0,     0,   384,
     385,     0,   386,   387,   265,     0,     0,   266,   388,     0,
     389,   390,   267,   268,     0,     0,     0,     0,   269,     0,
       0,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,     0,     0,     0,     0,   394,     0,
     395,     0,   396,     0,     0,   397,   398,   125,   317,     0,
     127,   128,     0,     0,     0,     0,   129,     0,     0,     0,
     130,   131,   318,     0,   133,     0,     0,   319,   320,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,   321,
     322,   323,   139,     0,     0,   324,   140,     0,   141,   325,
       0,   326,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,   327,   328,     0,     0,   154,
     329,   330,     0,   331,   155,   156,   157,   332,   333,   334,
       0,     0,     0,     0,   335,   160,   336,     0,     0,   337,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,   338,
     339,   175,   340,   341,   176,   177,   178,   342,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,   343,     0,
     184,     0,   344,     0,     0,     0,   345,    86,   186,     0,
      88,   346,     0,   187,   188,     0,     0,     0,     0,     0,
     347,   348,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,   349,   191,     0,     0,   350,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,   351,     0,
       0,   352,   196,   197,   198,   353,     0,     0,   354,   355,
     201,     0,   202,   356,   357,   204,   205,   206,     0,     0,
     207,   208,   209,   358,   359,   210,   360,   361,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   362,     0,   218,     0,   219,
     220,   363,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,   364,   365,     0,     0,     0,   225,
       0,     0,   366,   226,   227,   228,   229,   230,   367,   232,
       0,   368,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,   369,
     370,   245,     0,     0,   246,   371,   248,   372,   373,   249,
     374,   250,   251,     0,     0,   252,     0,   375,   253,     0,
     376,   377,   378,   256,     0,     0,   257,   379,   380,   381,
     259,   382,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   383,     0,     0,   384,   385,     0,   386,   387,
     265,     0,     0,   266,   388,     0,   389,   390,   267,   268,
       0,     0,     0,     0,   269,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
       0,     0,     0,     0,   394,     0,   395,   714,   396,     0,
       0,   397,   398,   125,   317,     0,   127,   128,     0,     0,
       0,     0,   129,     0,     0,     0,   130,   131,   318,     0,
     133,     0,     0,   319,   320,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,   321,   322,   323,   139,     0,
       0,   324,   140,     0,   141,   325,     0,   326,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,   327,   328,     0,     0,   154,   329,   330,     0,   331,
     155,   156,   157,   332,   333,   334,     0,     0,     0,     0,
     335,   160,   336,     0,     0,   337,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,   338,   339,   175,   340,   341,
     176,   177,   178,   342,   179,     0,     0,     0,   180,   181,
     979,   182,     0,   183,   343,     0,   184,     0,   344,     0,
       0,     0,   345,    86,   186,     0,    88,   346,     0,   187,
     188,     0,     0,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   190,     0,   349,
     191,     0,     0,   350,   192,     0,     0,     0,     0,     0,
     193,   194,     0,   195,   351,     0,     0,   352,   196,   197,
     198,   353,     0,     0,   354,   355,   201,     0,   202,   356,
     357,   204,   205,   206,     0,     0,   207,   208,   209,   358,
     359,   210,   360,   361,     0,   211,   212,     0,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   362,     0,   218,     0,   219,   220,   363,   222,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
     364,   365,     0,     0,     0,   225,     0,     0,   366,   226,
     227,   228,   229,   230,   367,   232,     0,   368,   234,     0,
       0,     0,   235,   236,   237,   238,     0,     0,   239,     0,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   369,   370,   245,     0,     0,
     246,   371,   248,   372,   373,   249,   374,   250,   251,     0,
       0,   252,     0,   375,   253,     0,   376,   377,   378,   256,
       0,     0,   257,   379,   380,   381,   259,   382,   260,   261,
       0,     0,     0,   262,     0,     0,     0,     0,   383,     0,
       0,   384,   385,     0,   386,   387,   265,     0,     0,   266,
     388,     0,   389,   390,   267,   268,     0,     0,     0,     0,
     269,     0,     0,     0,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,     0,     0,     0,     0,
     394,     0,   395,     0,   396,     0,     0,   397,   398,   125,
     317,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   318,     0,   133,     0,     0,   319,
     320,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,   321,   322,   323,   139,     0,     0,   324,   140,     0,
     141,   325,     0,   326,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,   327,   328,     0,
       0,   154,   329,   330,     0,   331,   155,   156,   157,   332,
     333,   334,     0,     0,     0,     0,   335,   160,   336,     0,
       0,   337,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,   338,   339,   175,   340,   341,   176,   177,   178,   342,
     179,     0,     0,     0,   180,   181,   981,   182,     0,   183,
     343,     0,   184,     0,   344,     0,     0,     0,   345,    86,
     186,     0,    88,   346,     0,   187,   188,     0,     0,     0,
       0,     0,   347,   348,     0,     0,     0,     0,     0,   189,
       0,     0,     0,   190,     0,   349,   191,     0,     0,   350,
     192,     0,     0,     0,     0,     0,   193,   194,     0,   195,
     351,     0,     0,   352,   196,   197,   198,   353,     0,     0,
     354,   355,   201,     0,   202,   356,   357,   204,   205,   206,
       0,     0,   207,   208,   209,   358,   359,   210,   360,   361,
       0,   211,   212,     0,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   362,     0,   218,
       0,   219,   220,   363,   222,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,   364,   365,     0,     0,
       0,   225,     0,     0,   366,   226,   227,   228,   229,   230,
     367,   232,     0,   368,   234,     0,     0,     0,   235,   236,
     237,   238,     0,     0,   239,     0,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     244,   369,   370,   245,     0,     0,   246,   371,   248,   372,
     373,   249,   374,   250,   251,     0,     0,   252,     0,   375,
     253,     0,   376,   377,   378,   256,     0,     0,   257,   379,
     380,   381,   259,   382,   260,   261,     0,     0,     0,   262,
       0,     0,     0,     0,   383,     0,     0,   384,   385,     0,
     386,   387,   265,     0,     0,   266,   388,     0,   389,   390,
     267,   268,     0,     0,     0,     0,   269,     0,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,     0,     0,     0,     0,   394,     0,   395,     0,
     396,     0,     0,   397,   398,   125,   317,     0,   127,   128,
       0,     0,     0,     0,   129,     0,     0,     0,   130,   131,
     318,     0,   133,     0,     0,   319,   320,   134,     0,   135,
     136,     0,   137,     0,     0,     0,   138,   321,   322,   323,
     139,     0,     0,   324,   140,     0,   141,   325,     0,   326,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,   327,   328,     0,     0,   154,   329,   330,
       0,   331,   155,   156,   157,   332,   333,   334,     0,     0,
       0,     0,   335,   160,   336,     0,     0,   337,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,   338,   339,   175,
     340,   341,   176,   177,   178,   342,   179,     0,     0,     0,
     180,   181,   983,   182,     0,   183,   343,     0,   184,     0,
     344,     0,     0,     0,   345,    86,   186,     0,    88,   346,
       0,   187,   188,     0,     0,     0,     0,     0,   347,   348,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
       0,   349,   191,     0,     0,   350,   192,     0,     0,     0,
       0,     0,   193,   194,     0,   195,   351,     0,     0,   352,
     196,   197,   198,   353,     0,     0,   354,   355,   201,     0,
     202,   356,   357,   204,   205,   206,     0,     0,   207,   208,
     209,   358,   359,   210,   360,   361,     0,   211,   212,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   362,     0,   218,     0,   219,   220,   363,
     222,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,   364,   365,     0,     0,     0,   225,     0,     0,
     366,   226,   227,   228,   229,   230,   367,   232,     0,   368,
     234,     0,     0,     0,   235,   236,   237,   238,     0,     0,
     239,     0,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,   369,   370,   245,
       0,     0,   246,   371,   248,   372,   373,   249,   374,   250,
     251,     0,     0,   252,     0,   375,   253,     0,   376,   377,
     378,   256,     0,     0,   257,   379,   380,   381,   259,   382,
     260,   261,     0,     0,     0,   262,     0,     0,     0,     0,
     383,     0,     0,   384,   385,     0,   386,   387,   265,     0,
       0,   266,   388,     0,   389,   390,   267,   268,     0,     0,
       0,     0,   269,     0,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,     0,     0,
       0,     0,   394,     0,   395,     0,   396,     0,     0,   397,
     398,   125,   317,     0,   127,   128,     0,     0,     0,     0,
     129,     0,     0,     0,   130,   131,   318,     0,   133,     0,
       0,   319,   320,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,   321,   322,   323,   139,     0,     0,   324,
     140,     0,   141,   325,     0,   326,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,   327,
     328,     0,     0,   154,   329,   330,     0,   331,   155,   156,
     157,   332,   333,   334,     0,     0,     0,     0,   335,   160,
     336,     0,     0,   337,     0,     0,     0,     0,     0,   161,
     162,     0,     0,     0,   163,     0,   164,   165,   166,     0,
       0,   167,     0,   168,   169,     0,   170,   171,     0,   172,
       0,   173,   174,   338,   339,   175,   340,   341,   176,   177,
     178,   342,   179,     0,     0,     0,   180,   181,     0,   182,
       0,   183,   343,     0,   184,     0,   344,     0,     0,     0,
     345,    86,   186,     0,    88,   346,     0,   187,   188,     0,
       0,     0,     0,     0,   347,   348,     0,     0,     0,     0,
       0,   189,     0,     0,     0,   190,     0,   349,   191,     0,
       0,   350,   192,     0,     0,     0,     0,     0,   193,   194,
       0,   195,   351,     0,     0,   352,   196,   197,   198,   353,
       0,     0,   354,   355,   201,     0,   202,   356,   357,   204,
     205,   206,     0,     0,   207,   208,   209,   358,   359,   210,
     360,   361,     0,   211,   212,     0,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   362,
       0,   218,     0,   219,   220,   363,   222,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,   224,   364,   365,
       0,     0,     0,   225,     0,     0,   366,   226,   227,   228,
     229,   230,   367,   232,     0,   368,   234,     0,     0,     0,
     235,   236,   237,   238,     0,     0,   239,     0,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   244,   369,   370,   245,     0,     0,   246,   371,
     248,   372,   373,   249,   374,   250,   251,     0,     0,   252,
       0,   375,   253,     0,   376,   377,   378,   256,     0,     0,
     257,   379,   380,   381,   259,   382,   260,   261,     0,     0,
       0,   262,     0,     0,     0,     0,   383,     0,     0,   384,
     385,     0,   386,   387,   265,     0,     0,   266,   388,     0,
     389,   390,   267,   268,     0,     0,     0,     0,   269,     0,
       0,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,     0,     0,     0,     0,   394,     0,
     395,     0,   396,     0,     0,   397,   398,   125,   317,     0,
     127,   128,     0,     0,     0,     0,   129,     0,     0,     0,
     130,   131,   318,     0,   133,     0,     0,   319,   320,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,   321,
     322,   323,   139,     0,     0,   324,   140,     0,   141,   325,
       0,   326,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,   327,   328,     0,     0,   154,
     329,   330,     0,   331,   155,   156,   157,   332,   333,   334,
       0,     0,     0,     0,   335,   160,   336,     0,     0,   337,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,   338,
     339,   175,   340,   341,   176,   177,   178,   342,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,   343,     0,
     184,     0,   344,     0,     0,     0,   345,    86,   186,     0,
      88,   346,     0,   187,   188,     0,     0,     0,     0,     0,
     347,   348,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,   349,   191,     0,     0,   350,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,   351,     0,
       0,   352,   196,   197,   198,   353,     0,     0,   354,   355,
     201,     0,   202,   356,   357,   204,   205,   206,     0,     0,
     207,   208,   209,   358,   359,   210,   360,   361,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   362,     0,   218,     0,   219,
     220,   363,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,   364,   365,     0,     0,     0,   225,
       0,     0,   366,   226,   227,   228,   229,   230,   367,   232,
       0,   368,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,   369,
     370,   245,     0,     0,   246,   371,   248,   372,   373,   249,
     374,   250,   251,     0,     0,   252,     0,   375,   253,     0,
     376,   377,   378,   256,     0,     0,   257,   379,   380,   381,
     259,   382,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   383,     0,     0,   384,   385,     0,   386,   387,
     265,     0,     0,   266,   388,     0,   389,   390,   267,   268,
       0,     0,     0,     0,   269,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
       0,     0,     0,     0,   394,     0,   533,     0,   396,     0,
       0,   397,   398,   125,   317,     0,   127,   128,   815,     0,
       0,     0,   816,     0,     0,     0,   130,   131,   318,     0,
     133,     0,     0,   319,   320,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,   321,   322,   323,   139,     0,
       0,   324,   140,     0,   141,   325,     0,   326,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,   327,   328,     0,     0,   154,   329,   330,     0,   331,
     155,   156,   157,   332,   333,   334,     0,     0,     0,     0,
     335,   160,   336,     0,     0,   337,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,   338,   339,   175,   340,   341,
     176,   177,   178,   342,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,   343,     0,   184,     0,   344,     0,
       0,     0,   345,    86,   186,     0,    88,   346,     0,   187,
     188,     0,     0,     0,     0,     0,   347,   348,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   190,     0,   349,
     191,     0,     0,   350,   192,     0,     0,     0,     0,     0,
     193,   194,     0,   195,   351,     0,     0,   352,   196,   197,
     198,   353,     0,     0,   354,   355,   201,     0,   202,   356,
     357,   204,   205,   206,     0,     0,   207,   208,   209,     0,
     359,   210,   360,   361,     0,   211,   212,     0,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   362,     0,   218,     0,   219,   220,   363,   222,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
     364,   365,     0,     0,     0,   225,     0,     0,   366,   226,
     227,   228,   229,   230,   367,   232,     0,   368,   234,     0,
       0,     0,   235,   236,   237,   238,     0,     0,   239,     0,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   369,   370,   245,     0,     0,
     246,   371,   248,   372,   373,   249,   374,   250,   251,     0,
       0,   252,     0,   375,   253,     0,   376,   377,   378,   256,
       0,     0,   257,   379,   380,   381,   259,   382,   260,   261,
       0,     0,     0,   262,     0,     0,     0,     0,   383,     0,
       0,   384,   385,     0,   386,   387,   265,     0,     0,   266,
     388,     0,   389,   390,   267,   268,     0,     0,     0,     0,
     269,     0,     0,     0,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,     0,     0,     0,     0,
     394,     0,   395,     0,   396,     0,     0,   397,   398,   125,
     317,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   318,     0,   133,     0,     0,   319,
     320,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,   321,   322,   323,   139,     0,     0,   324,   140,     0,
     141,   325,     0,   326,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,   327,   328,     0,
       0,   154,   329,   330,     0,   331,   155,   156,   157,   332,
     333,   334,     0,     0,     0,     0,   335,   160,   336,     0,
       0,   337,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,   338,   339,   175,   340,   341,   176,   177,   178,   342,
     179,     0,     0,     0,   180,   181,     0,   182,     0,   183,
     343,     0,   184,     0,   344,     0,     0,     0,   345,    86,
     186,     0,    88,   346,     0,   187,   188,     0,     0,     0,
       0,     0,   347,  1136,     0,     0,     0,     0,     0,   189,
       0,     0,     0,   190,     0,   349,   191,     0,     0,   350,
     192,     0,     0,     0,     0,     0,   193,   194,     0,   195,
     351,     0,     0,   352,   196,   197,   198,   353,     0,     0,
     354,   355,   201,     0,   202,   356,   357,   204,   205,   206,
       0,     0,   207,   208,   209,   358,   359,   210,   360,   361,
       0,   211,   212,     0,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   362,     0,   218,
       0,   219,   220,   363,   222,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,   364,   365,     0,     0,
       0,   225,     0,     0,   366,   226,   227,   228,   229,   230,
     367,   232,     0,   368,   234,     0,     0,     0,   235,   236,
     237,   238,     0,     0,   239,     0,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     244,   369,   370,   245,     0,     0,   246,   371,   248,   372,
     373,   249,   374,   250,   251,     0,     0,   252,     0,   375,
     253,     0,   376,   377,   378,   256,     0,     0,   257,   379,
     380,   381,   259,   382,   260,   261,     0,     0,     0,   262,
       0,     0,     0,     0,   383,     0,     0,   384,   385,     0,
     386,   387,   265,     0,     0,   266,   388,     0,   389,   390,
     267,   268,     0,     0,     0,     0,   269,     0,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,     0,     0,     0,     0,   394,     0,   395,     0,
     396,     0,     0,   397,   398,   125,   317,     0,   127,   128,
       0,     0,     0,     0,   129,     0,     0,     0,   130,   131,
     318,     0,   133,     0,     0,   319,   320,   134,     0,   135,
     136,     0,   137,     0,     0,     0,   138,   321,   322,   323,
     139,     0,     0,   324,   140,     0,   141,   325,     0,   326,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,   327,   328,     0,     0,   154,   329,   330,
       0,   331,   155,   156,   157,   332,   333,   334,     0,     0,
       0,     0,   335,   160,   336,     0,     0,   337,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,   338,   339,   175,
     340,   341,   176,   177,   178,   342,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,   343,     0,   184,     0,
     344,     0,     0,     0,   345,    86,   186,     0,    88,   346,
       0,   187,   188,     0,     0,     0,     0,     0,   347,  1178,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
       0,   349,   191,     0,     0,   350,   192,     0,     0,     0,
       0,     0,   193,   194,     0,   195,   351,     0,     0,   352,
     196,   197,   198,   353,     0,     0,   354,   355,   201,     0,
     202,   356,   357,   204,   205,   206,     0,     0,   207,   208,
     209,   358,   359,   210,   360,   361,     0,   211,   212,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   217,   362,     0,   218,     0,   219,   220,   363,
     222,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,   364,   365,     0,     0,     0,   225,     0,     0,
     366,   226,   227,   228,   229,   230,   367,   232,     0,   368,
     234,     0,     0,     0,   235,   236,   237,   238,     0,     0,
     239,     0,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,   369,   370,   245,
       0,     0,   246,   371,   248,   372,   373,   249,   374,   250,
     251,     0,     0,   252,     0,   375,   253,     0,   376,   377,
     378,   256,     0,     0,   257,   379,   380,   381,   259,   382,
     260,   261,     0,     0,     0,   262,     0,     0,     0,     0,
     383,     0,     0,   384,   385,     0,   386,   387,   265,     0,
       0,   266,   388,     0,   389,   390,   267,   268,     0,     0,
       0,     0,   269,     0,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   392,   393,     0,     0,
       0,     0,   394,     0,   395,     0,   396,     0,     0,   397,
     398,   125,   317,     0,   127,   128,     0,     0,     0,     0,
     129,     0,     0,     0,   130,   131,   318,     0,   133,     0,
       0,   319,   320,   134,     0,   135,   136,     0,   137,     0,
       0,     0,   138,   321,   322,   323,   139,     0,     0,   324,
     140,     0,   141,   325,     0,   326,   144,     0,   145,   146,
     147,   148,   149,   150,     0,   151,   152,     0,   153,   327,
     328,     0,     0,   154,   329,   330,     0,   331,   155,   156,
     157,   332,   333,   334,     0,     0,     0,     0,   335,   160,
     336,     0,     0,  1272,     0,     0,     0,     0,     0,   161,
     162,     0,     0,     0,   163,     0,   164,   165,   166,     0,
       0,   167,     0,   168,   169,     0,   170,   171,     0,   172,
       0,   173,   174,   338,   339,   175,   340,   341,   176,   177,
     178,   342,   179,     0,     0,     0,   180,   181,     0,   182,
       0,   183,   343,     0,   184,     0,   344,     0,     0,     0,
     345,    86,   186,     0,    88,   346,     0,   187,   188,     0,
       0,     0,     0,     0,   347,   348,     0,     0,     0,     0,
       0,   189,     0,     0,     0,   190,     0,   349,   191,     0,
       0,   350,   192,     0,     0,     0,     0,     0,   193,   194,
       0,   195,   351,     0,     0,   352,   196,   197,   198,   353,
       0,     0,   354,   355,   201,     0,   202,   356,   357,   204,
     205,   206,     0,     0,   207,   208,   209,   358,   359,   210,
     360,   361,     0,   211,   212,     0,   213,   214,   215,   216,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   362,
       0,   218,     0,   219,   220,   363,   222,     0,     0,     0,
       0,     0,   223,     0,     0,     0,     0,   224,   364,   365,
       0,     0,     0,   225,     0,     0,   366,   226,   227,   228,
     229,   230,   367,   232,     0,   368,   234,     0,     0,     0,
     235,   236,   237,   238,     0,     0,   239,     0,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   243,   244,   369,   370,   245,     0,     0,   246,   371,
     248,   372,   373,   249,   374,   250,   251,     0,     0,   252,
       0,   375,   253,     0,   376,   377,   378,   256,     0,     0,
     257,   379,   380,   381,   259,   382,   260,   261,     0,     0,
       0,   262,     0,     0,     0,     0,   383,     0,     0,   384,
     385,     0,   386,   387,   265,     0,     0,   266,   388,     0,
     389,   390,   267,   268,     0,     0,     0,     0,   269,     0,
       0,     0,   391,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   392,   393,     0,     0,     0,     0,   394,     0,
     395,     0,   396,     0,     0,   397,   398,   125,   317,     0,
     127,   128,     0,     0,     0,     0,   129,     0,     0,     0,
     130,   131,   318,     0,   133,     0,     0,   319,   320,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,   321,
     322,   323,   139,     0,     0,   324,   140,     0,   141,   325,
       0,   326,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,   327,   328,     0,     0,   154,
     329,   330,     0,   331,   155,   156,   157,   332,   333,   334,
       0,     0,     0,     0,   335,   160,   336,     0,     0,   337,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,   338,
     339,   175,   340,   341,   176,   177,   178,   342,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,   343,     0,
     184,     0,   344,     0,     0,     0,   345,    86,   186,     0,
      88,   346,     0,   187,   188,     0,     0,     0,     0,     0,
     347,   348,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,   349,   191,     0,     0,   350,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,   351,     0,
       0,   352,   196,   197,   198,   353,     0,     0,   354,   355,
     201,     0,   202,   356,   357,   204,   205,   206,     0,     0,
     207,   208,   209,     0,   359,   210,   360,   361,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,   362,     0,   218,     0,   219,
     220,   363,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,   364,   365,     0,     0,     0,   225,
       0,     0,   366,   226,   227,   228,   229,   230,   367,   232,
       0,   368,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,   369,
     370,   245,     0,     0,   246,   371,   248,   372,   373,   249,
     374,   250,   251,     0,     0,   252,     0,   375,   253,     0,
     376,   377,   378,   256,     0,     0,   257,   379,   380,   381,
     259,   382,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   383,     0,     0,   384,   385,     0,   386,   387,
     265,     0,     0,   266,   388,     0,   389,   390,   267,   268,
       0,     0,     0,     0,   269,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   392,   393,
       0,     0,     0,     0,   394,     0,   395,     0,   396,     0,
       0,   397,   398,   125,   317,     0,   127,   128,     0,     0,
       0,     0,   129,     0,     0,     0,   130,   131,   318,     0,
     133,     0,     0,   319,   320,   134,     0,   135,   136,     0,
     137,     0,     0,     0,   138,   321,   322,   323,   139,     0,
       0,   324,   140,     0,   141,   325,     0,   326,   144,     0,
     145,   146,   147,   148,   149,   150,     0,   151,   152,     0,
     153,   327,   328,     0,     0,   154,   329,   330,     0,   331,
     155,   156,   157,   332,   333,   334,     0,     0,     0,     0,
     335,   160,   336,     0,     0,   337,     0,     0,     0,     0,
       0,   161,   162,     0,     0,     0,   163,     0,   164,   165,
     166,     0,     0,   167,     0,   168,   169,     0,   170,   171,
       0,   172,     0,   173,   174,   338,   339,   175,   340,   341,
     176,   177,   178,   342,   179,     0,     0,     0,   180,   181,
       0,   182,     0,   183,   343,     0,   184,     0,   344,     0,
       0,     0,   345,    86,   186,     0,    88,   346,     0,   187,
     188,     0,     0,     0,     0,     0,   347,   833,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   190,     0,   349,
     191,     0,     0,   350,   192,     0,     0,     0,     0,     0,
     193,   194,     0,   195,   351,     0,     0,   352,   196,   197,
     198,   353,     0,     0,   354,   355,   201,     0,   202,   356,
     357,   204,   205,   206,     0,     0,   207,   208,   209,     0,
     359,   210,   360,   361,     0,   211,   212,     0,   213,   214,
     215,   216,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   362,     0,   218,     0,   219,   220,   363,   222,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,   224,
     364,   365,     0,     0,     0,   225,     0,     0,   366,   226,
     227,   228,   229,   230,   367,   232,     0,   368,   234,     0,
       0,     0,   235,   236,   237,   238,     0,     0,   239,     0,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,   244,   369,   370,   245,     0,     0,
     246,   371,   248,   372,   373,   249,   374,   250,   251,     0,
       0,   252,     0,   375,   253,     0,   376,   377,   378,   256,
       0,     0,   257,   379,   380,   381,   259,   382,   260,   261,
       0,     0,     0,   262,     0,     0,     0,     0,   383,     0,
       0,   384,   385,     0,   386,   387,   265,     0,     0,   266,
     388,     0,   389,   390,   267,   268,     0,     0,     0,     0,
     269,     0,     0,     0,   391,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   392,   393,     0,     0,     0,     0,
     394,     0,   395,     0,   396,     0,     0,   397,   398,   125,
     317,     0,   127,   128,     0,     0,     0,     0,   129,     0,
       0,     0,   130,   131,   318,     0,   133,     0,     0,   319,
     320,   134,     0,   135,   136,     0,   137,     0,     0,     0,
     138,   321,   322,   323,   139,     0,     0,   324,   140,     0,
     141,   325,     0,   326,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,   327,   328,     0,
       0,   154,   329,   330,     0,   331,   155,   156,   157,   332,
     333,   334,     0,     0,     0,     0,   335,   160,   336,     0,
       0,   337,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,   338,   339,   175,   340,   341,   176,   177,   178,   342,
     179,     0,     0,     0,   180,   181,     0,   182,     0,   183,
     343,     0,   184,     0,   344,     0,     0,     0,   345,    86,
     186,     0,    88,   346,     0,   187,   188,     0,     0,     0,
       0,     0,   347,   835,     0,     0,     0,     0,     0,   189,
       0,     0,     0,   190,     0,   349,   191,     0,     0,   350,
     192,     0,     0,     0,     0,     0,   193,   194,     0,   195,
     351,     0,     0,   352,   196,   197,   198,   353,     0,     0,
     354,   355,   201,     0,   202,   356,   357,   204,   205,   206,
       0,     0,   207,   208,   209,     0,   359,   210,   360,   361,
       0,   211,   212,     0,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,   217,   362,     0,   218,
       0,   219,   220,   363,   222,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,   364,   365,     0,     0,
       0,   225,     0,     0,   366,   226,   227,   228,   229,   230,
     367,   232,     0,   368,   234,     0,     0,     0,   235,   236,
     237,   238,     0,     0,   239,     0,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     244,   369,   370,   245,     0,     0,   246,   371,   248,   372,
     373,   249,   374,   250,   251,     0,     0,   252,     0,   375,
     253,     0,   376,   377,   378,   256,     0,     0,   257,   379,
     380,   381,   259,   382,   260,   261,     0,     0,     0,   262,
       0,     0,     0,     0,   383,     0,     0,   384,   385,     0,
     386,   387,   265,     0,     0,   266,   388,     0,   389,   390,
     267,   268,     0,     0,     0,     0,   269,     0,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     392,   393,     0,     0,     0,     0,   394,     0,   395,     0,
     396,     0,     0,   397,   398,   125,   126,     0,   127,   128,
       0,     0,     0,     0,   129,     0,     0,     0,   130,   131,
     132,     0,   133,     0,     0,     0,     0,   134,     0,   135,
     136,     0,   137,     0,     0,     0,   138,     0,     0,     0,
     139,     0,     0,     0,   140,     0,   141,   142,     0,   143,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,     0,   153,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   155,   156,   157,     0,     0,   158,     0,     0,
       0,     0,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,     0,     0,   175,
       0,     0,   176,   177,   178,     0,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,     0,     0,   184,     0,
       0,     0,     0,     0,   185,    86,   186,     0,    88,     0,
       0,   187,   188,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
       0,     0,   191,     0,     0,     0,   192,     0,     0,     0,
       0,     0,   193,   194,     0,   195,     0,     0,     0,     0,
     196,   197,   198,   199,     0,     0,   200,     0,   201,     0,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,     0,     0,   210,     0,     0,     0,   211,   212,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,   219,   220,   221,
     222,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,   225,     0,     0,
       0,   226,   227,   228,   229,   230,   231,   232,     0,   233,
     234,     0,     0,     0,   235,   236,   237,   238,     0,     0,
     239,     0,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,     0,     0,   245,
       0,     0,   246,   247,   248,     0,     0,   249,     0,   250,
     251,     0,     0,   252,     0,     0,   253,     0,   254,   255,
       0,   256,     0,     0,   257,     0,     0,   258,   259,     0,
     260,   261,     0,     0,     0,   262,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,   264,     0,   265,     0,
       0,   266,     0,     0,     0,     0,   267,   268,     0,     0,
     125,   126,   269,   127,   128,     0,   270,     0,     0,   129,
       0,     0,     0,   130,   131,   132,     0,   133,     0,     0,
       0,     0,   134,     0,   135,   136,     0,   137,     0,   397,
    2097,   138,     0,     0,     0,   139,     0,     0,     0,   140,
       0,   141,   142,     0,   143,   144,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,  1281,   153,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   155,   156,   157,
       0,     0,   158,     0,     0,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,     0,     0,   175,     0,     0,   176,   177,   178,
       0,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,     0,     0,   184,     0,     0,     0,     0,     0,   185,
      86,   186,     0,    88,     0,     0,   187,   188,  1282,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,   190,  1283,     0,   191,     0,     0,
       0,   192,     0,  1122,     0,     0,     0,   193,   194,     0,
     195,     0,     0,     0,     0,   196,   197,   198,   199,     0,
       0,   200,     0,   201,     0,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,     0,     0,   210,     0,
       0,     0,   211,   212,     0,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,   217,     0,     0,
     218,     0,   219,   220,   221,   222,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   226,   227,   228,   229,
     230,   231,   232,     0,   233,   234,   850,     0,     0,   235,
     236,   237,   238,     0,     0,   239,     0,   240,   241,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   244,     0,     0,   245,     0,     0,   246,   247,   248,
       0,     0,   249,     0,   250,   251,     0,     0,   252,     0,
       0,   253,     0,   254,   255,     0,   256,     0,     0,   257,
       0,     0,   258,   259,     0,   260,   261,     0,     0,     0,
     262,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,   264,     0,   265,     0,     0,   266,     0,     0,     0,
       0,   267,   268,     0,     0,   125,   126,   269,   127,   128,
       0,   270,     0,     0,   129,     0,     0,     0,   130,   131,
     132,     0,   133,     0,     0,     0,     0,   134,     0,   135,
     136,     0,   137,     0,  1321,     0,   138,     0,     0,     0,
     139,     0,     0,     0,   140,     0,   141,   142,     0,   143,
     144,     0,   145,   146,   147,   148,   149,   150,     0,   151,
     152,  1281,   153,     0,     0,     0,     0,   154,     0,     0,
       0,     0,   155,   156,   157,     0,     0,   158,     0,     0,
       0,     0,   159,   160,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,     0,     0,     0,   163,     0,
     164,   165,   166,     0,     0,   167,     0,   168,   169,     0,
     170,   171,     0,   172,     0,   173,   174,     0,     0,   175,
       0,     0,   176,   177,   178,     0,   179,     0,     0,     0,
     180,   181,     0,   182,     0,   183,     0,     0,   184,     0,
       0,     0,     0,     0,   185,    86,   186,     0,    88,     0,
       0,   187,   188,  1282,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   189,     0,     0,     0,   190,
    1283,     0,   191,     0,     0,     0,   192,     0,     0,     0,
       0,     0,   193,   194,     0,   195,     0,     0,     0,     0,
     196,   197,   198,   199,     0,     0,   200,     0,   201,     0,
     202,     0,   203,   204,   205,   206,     0,     0,   207,   208,
     209,     0,     0,   210,     0,     0,     0,   211,   212,     0,
     213,   214,   215,   216,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   218,     0,   219,   220,   221,
     222,     0,     0,     0,     0,     0,   223,     0,     0,     0,
       0,   224,     0,     0,     0,     0,     0,   225,     0,     0,
       0,   226,   227,   228,   229,   230,   231,   232,     0,   233,
     234,     0,     0,     0,   235,   236,   237,   238,     0,     0,
     239,     0,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   244,     0,     0,   245,
       0,     0,   246,   247,   248,     0,     0,   249,     0,   250,
     251,     0,     0,   252,     0,     0,   253,     0,   254,   255,
       0,   256,     0,     0,   257,     0,     0,   258,   259,     0,
     260,   261,     0,     0,     0,   262,     0,     0,     0,     0,
     263,     0,     0,     0,     0,     0,   264,     0,   265,     0,
       0,   266,     0,     0,     0,     0,   267,   268,     0,     0,
     125,   126,   269,   127,   128,     0,   270,     0,     0,   129,
       0,     0,     0,   130,   131,   132,     0,   133,     0,     0,
       0,     0,   134,     0,   135,   136,     0,   137,     0,  1321,
       0,   138,     0,     0,     0,   139,     0,     0,     0,   140,
       0,   141,   142,     0,   143,   144,     0,   145,   146,   147,
     148,   149,   150,     0,   151,   152,     0,   153,     0,     0,
       0,     0,   154,     0,     0,     0,     0,   155,   156,   157,
       0,     0,   158,     0,     0,     0,     0,   159,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
       0,     0,     0,   163,     0,   164,   165,   166,     0,     0,
     167,     0,   168,   169,     0,   170,   171,     0,   172,     0,
     173,   174,     0,     0,   175,     0,     0,   176,   177,   178,
       0,   179,     0,     0,     0,   180,   181,     0,   182,     0,
     183,     0,     0,   184,     0,     0,     0,     0,     0,   185,
      86,   186,     0,    88,     0,     0,   187,   188,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     189,     0,     0,     0,   190,     0,     0,   191,     0,     0,
       0,   192,     0,     0,     0,     0,     0,   193,   194,     0,
     195,     0,     0,     0,     0,   196,   197,   198,   199,     0,
       0,   200,     0,   201,     0,   202,     0,   203,   204,   205,
     206,     0,     0,   207,   208,   209,     0,     0,   210,     0,
       0,     0,   211,   212,     0,   213,   214,   215,   216,     0,
       0,     0,     0,     0,     0,     0,     0,   217,     0,     0,
     218,     0,   219,   220,   221,   222,     0,     0,     0,     0,
       0,   223,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,   225,     0,     0,     0,   226,   227,   228,   229,
     230,   231,   232,     0,   233,   234,   850,     0,     0,   235,
     236,   237,   238,     0,     0,   239,     0,   240,   241,   242,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,   244,     0,     0,   245,     0,     0,   246,   247,   248,
       0,     0,   249,     0,   250,   251,     0,     0,   252,     0,
       0,   253,     0,   254,   255,     0,   256,     0,     0,   257,
       0,     0,   258,   259,     0,   260,   261,     0,     0,     0,
     262,     0,     0,     0,     0,   263,     0,     0,     0,     0,
       0,   264,     0,   265,     0,     0,   266,     0,     0,     0,
       0,   267,   268,     0,     0,     0,     0,   269,     0,     0,
       0,   270,     0,     0,   125,   126,     0,   127,   128,     0,
       0,     0,     0,   129,     0,     0,     0,   130,   131,   132,
    1041,   133,     0,     0,   397,     0,   134,     0,   135,   136,
       0,   137,     0,     0,     0,   138,     0,     0,     0,   139,
       0,     0,     0,   140,     0,   141,   142,     0,   143,   144,
       0,   145,   146,   147,   148,   149,   150,     0,   151,   152,
       0,   153,     0,     0,     0,     0,   154,     0,     0,     0,
       0,   155,   156,   157,     0,     0,   158,     0,     0,     0,
       0,   159,   160,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,     0,     0,     0,   163,     0,   164,
     165,   166,     0,     0,   167,     0,   168,   169,     0,   170,
     171,     0,   172,     0,   173,   174,     0,     0,   175,     0,
       0,   176,   177,   178,     0,   179,     0,     0,     0,   180,
     181,     0,   182,     0,   183,     0,     0,   184,     0,     0,
       0,     0,     0,   185,    86,   186,     0,    88,     0,     0,
     187,   188,     0,     0,     0,     0,     0,     0,     0,   421,
       0,     0,     0,     0,   189,     0,     0,     0,   190,     0,
       0,   191,     0,     0,     0,   192,     0,     0,     0,     0,
       0,   193,   194,     0,   195,     0,     0,     0,     0,   196,
     197,   198,   199,     0,     0,   200,     0,   201,     0,   202,
       0,   203,   204,   205,   206,     0,     0,   207,   208,   209,
       0,     0,   210,     0,     0,     0,   211,   212,     0,   213,
     214,   215,   216,     0,     0,     0,     0,     0,     0,     0,
       0,   217,     0,     0,   218,     0,   219,   220,   221,   222,
       0,     0,     0,     0,     0,   223,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,   225,     0,     0,     0,
     226,   227,   228,   229,   230,   231,   232,     0,   233,   234,
       0,     0,     0,   235,   236,   237,   238,     0,     0,   239,
       0,   240,   241,   242,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,   244,     0,     0,   245,     0,
       0,   246,   247,   248,     0,     0,   249,     0,   250,   251,
       0,     0,   252,     0,     0,   253,     0,   254,   255,     0,
     256,     0,     0,   257,     0,     0,   258,   259,     0,   260,
     261,     0,     0,     0,   262,     0,     0,     0,     0,   263,
       0,     0,     0,     0,     0,   264,     0,   265,     0,     0,
     266,     0,     0,     0,     0,   267,   268,     0,     0,   125,
     126,   269,   127,   128,     0,   270,     0,     0,   129,     0,
       0,     0,   130,   131,   132,     0,   133,     0,     0,     0,
       0,   134,     0,   135,   136,     0,   137,     0,   282,     0,
     138,     0,     0,     0,   139,     0,     0,     0,   140,     0,
     141,   142,     0,   143,   144,     0,   145,   146,   147,   148,
     149,   150,     0,   151,   152,     0,   153,     0,     0,     0,
       0,   154,     0,     0,     0,     0,   155,   156,   157,     0,
       0,   158,     0,     0,     0,     0,   159,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,   162,     0,
       0,     0,   163,     0,   164,   165,   166,     0,     0,   167,
       0,   168,   169,     0,   170,   171,     0,   172,     0,   173,
     174,     0,     0,   175,     0,     0,   176,   177,   178,     0,
     179,     0,     0,     0,   180,   181,     0,   182,     0,   183,
       0,     0,   184,     0,     0,     0,     0,     0,   185,    86,
     186,     0,    88,     0,     0,   187,   188,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   189,
       0,     0,     0,   190,     0,     0,   191,     0,     0,     0,
     192,     0,     0,     0,     0,     0,   193,   194,     0,   195,
       0,     0,     0,     0,   196,   197,   198,   199,     0,     0,
     200,     0,   201,     0,   202,     0,   203,   204,   205,   206,
       0,     0,   207,   208,   209,     0,     0,   210,     0,     0,
       0,   211,   212,     0,   213,   214,   215,   216,     0,     0,
       0,     0,     0,     0,     0,     0,   217,     0,     0,   218,
       0,   219,   220,   221,   222,     0,     0,     0,     0,     0,
     223,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,   225,     0,     0,     0,   226,   227,   228,   229,   230,
     231,   232,     0,   233,   234,     0,     0,     0,   235,   236,
     237,   238,     0,     0,   239,     0,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   243,
     244,     0,     0,   245,     0,     0,   246,   247,   248,     0,
       0,   249,     0,   250,   251,     0,     0,   252,     0,     0,
     253,     0,   254,   255,     0,   256,     0,     0,   257,     0,
       0,   258,   259,     0,   260,   261,     0,     0,     0,   262,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
     264,     0,   265,     0,     0,   266,     0,     0,     0,     0,
     267,   268,     0,     0,     0,     0,   269,     0,     0,     0,
     270,     0,   125,   126,     0,   127,   128,     0,     0,     0,
       0,   129,     0,     0,     0,   130,   131,   132,  1320,   133,
       0,     0,     0,  1321,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   281,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,     0,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,   125,   126,   269,
     127,   128,     0,   270,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,   282,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   200,     0,
     201,     0,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,     0,     0,   210,     0,     0,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,   245,     0,     0,   246,   247,   248,     0,     0,   249,
       0,   250,   251,     0,     0,   252,     0,     0,   253,     0,
     254,   255,     0,   256,     0,     0,   257,     0,     0,   258,
     259,     0,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
     265,     0,     0,   266,     0,     0,     0,     0,   267,   268,
       0,     0,   125,   126,   269,   127,   128,     0,   270,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,   282,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,     0,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,   125,   126,   269,
     127,   128,     0,   270,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,   397,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   200,     0,
     201,     0,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,     0,     0,   210,     0,     0,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,   245,     0,     0,   246,   247,   248,     0,     0,   249,
       0,   250,   251,     0,     0,   252,     0,     0,   253,     0,
     254,   255,     0,   256,     0,     0,   257,     0,     0,   258,
     259,     0,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
     265,     0,     0,   266,     0,     0,     0,     0,   267,   268,
       0,     0,   125,   126,   269,   127,   128,     0,   270,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,  1321,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,     0,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,   125,   126,   269,
     127,   128,     0,   270,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,  1258,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   200,     0,
     201,     0,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,     0,     0,   210,     0,     0,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,   245,     0,     0,   246,   247,   248,     0,     0,   249,
       0,   250,   251,     0,     0,   252,     0,     0,   253,     0,
     254,   255,     0,   256,     0,     0,   257,     0,     0,   258,
     259,     0,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
     265,     0,     0,   266,     0,     0,     0,     0,   267,   268,
       0,     0,   125,   126,   269,   127,   128,     0,   270,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
    1604,     0,     0,   668,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,   669,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,   375,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,   125,   126,   269,
     127,   128,     0,   270,     0,     0,   129,  1254,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   200,     0,
     201,     0,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,     0,     0,   210,     0,     0,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,     0,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,   245,     0,     0,   246,   247,   248,     0,     0,   249,
       0,   250,   251,     0,     0,   252,     0,    91,   253,     0,
     254,   255,     0,   256,     0,     0,   257,     0,     0,   258,
     259,     0,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
     265,     0,     0,   266,     0,     0,     0,     0,   267,   268,
       0,     0,   125,   126,   269,   127,   128,     0,   270,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,    91,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,   125,   126,   269,
     127,   128,     0,   270,     0,     0,   129,     0,     0,     0,
     130,   131,   132,     0,   133,     0,     0,     0,     0,   134,
       0,   135,   136,     0,   137,     0,     0,     0,   138,     0,
       0,     0,   139,     0,     0,     0,   140,     0,   141,   142,
       0,   143,   144,     0,   145,   146,   147,   148,   149,   150,
       0,   151,   152,     0,   153,     0,     0,     0,     0,   154,
       0,     0,     0,     0,   155,   156,   157,     0,     0,   158,
       0,     0,     0,     0,   159,   160,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,   162,     0,     0,     0,
     163,     0,   164,   165,   166,     0,     0,   167,     0,   168,
     169,     0,   170,   171,     0,   172,     0,   173,   174,     0,
       0,   175,     0,     0,   176,   177,   178,     0,   179,     0,
       0,     0,   180,   181,     0,   182,     0,   183,     0,     0,
     184,     0,     0,     0,     0,     0,   185,    86,   186,     0,
      88,     0,     0,   187,   188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   189,     0,     0,
       0,   190,     0,     0,   191,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,   194,     0,   195,     0,     0,
       0,     0,   196,   197,   198,   199,     0,     0,   200,     0,
     201,     0,   202,     0,   203,   204,   205,   206,     0,     0,
     207,   208,   209,     0,     0,   210,     0,     0,     0,   211,
     212,     0,   213,   214,   215,   216,     0,     0,     0,     0,
       0,     0,     0,     0,   217,     0,     0,   218,  2085,   219,
     220,   221,   222,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,   225,
       0,     0,     0,   226,   227,   228,   229,   230,   231,   232,
       0,   233,   234,     0,     0,     0,   235,   236,   237,   238,
       0,     0,   239,     0,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   243,   244,     0,
       0,   245,     0,     0,   246,   247,   248,     0,     0,   249,
       0,   250,   251,     0,     0,   252,     0,     0,   253,     0,
     254,   255,     0,   256,     0,     0,   257,     0,     0,   258,
     259,     0,   260,   261,     0,     0,     0,   262,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
     265,     0,     0,   266,     0,     0,     0,     0,   267,   268,
       0,     0,   125,   126,   269,   127,   128,     0,   270,     0,
       0,   129,     0,     0,     0,   130,   131,   132,     0,   133,
       0,     0,     0,     0,   134,     0,   135,   136,     0,   137,
       0,     0,     0,   138,     0,     0,     0,   139,     0,     0,
       0,   140,     0,   141,   142,     0,   143,   144,     0,   145,
     146,   147,   148,   149,   150,     0,   151,   152,     0,   153,
       0,     0,     0,     0,   154,     0,     0,     0,     0,   155,
     156,   157,     0,     0,   158,     0,     0,     0,     0,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     161,   162,     0,     0,     0,   163,     0,   164,   165,   166,
       0,     0,   167,     0,   168,   169,     0,   170,   171,     0,
     172,     0,   173,   174,     0,     0,   175,     0,     0,   176,
     177,   178,     0,   179,     0,     0,     0,   180,   181,     0,
     182,     0,   183,     0,     0,   184,     0,     0,     0,     0,
       0,   185,    86,   186,     0,    88,     0,     0,   187,   188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   189,     0,     0,     0,   190,     0,     0,   191,
       0,     0,     0,   192,     0,     0,     0,     0,     0,   193,
     194,     0,   195,     0,     0,     0,     0,   196,   197,   198,
     199,     0,     0,   200,     0,   201,     0,   202,     0,   203,
     204,   205,   206,     0,     0,   207,   208,   209,     0,     0,
     210,     0,     0,     0,   211,   212,     0,   213,   214,   215,
     216,     0,     0,     0,     0,     0,     0,     0,     0,   217,
       0,     0,   218,     0,   219,   220,   221,   222,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,   225,     0,     0,     0,   226,   227,
     228,   229,   230,   231,   232,     0,   233,   234,     0,     0,
       0,   235,   236,   237,   238,     0,     0,   239,     0,   240,
     241,   242,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,   244,     0,     0,   245,     0,     0,   246,
     247,   248,     0,     0,   249,     0,   250,   251,     0,     0,
     252,     0,     0,   253,     0,   254,   255,     0,   256,     0,
       0,   257,     0,     0,   258,   259,     0,   260,   261,     0,
       0,     0,   262,     0,     0,     0,     0,   263,     0,     0,
       0,     0,     0,   264,     0,   265,     0,     0,   266,     0,
       0,     0,     0,   267,   268,     0,     0,     0,     0,   269,
       0,     0,     0,   270
};

static const yytype_int16 yycheck[] =
{
      12,   330,    93,   525,  1054,  1084,   428,  1086,   334,    21,
      12,   534,   915,   410,   319,  1063,   613,    29,   511,   512,
     872,  1226,  1047,    51,  1091,  1001,   587,   997,   109,   854,
     359,   107,   666,  1412,   595,  1433,  1195,   457,   446,    51,
     121,   527,   903,  1125,    12,   374,  1499,    12,   570,   457,
     865,    63,   378,    12,  1549,   384,   385,  1287,   845,    12,
      87,    12,    74,  1222,    12,  1035,    51,   651,  1570,    81,
     654,    12,    12,    47,   658,   659,    47,   474,    86,    14,
      12,    93,    52,   112,    12,  1652,   683,   392,   393,   394,
      44,    93,  1437,   103,    88,   107,   124,   109,  1128,    12,
    1445,    70,    12,   298,    86,    86,   118,  1444,   126,   121,
      12,    44,   124,    12,   476,    12,   118,   144,  1728,    68,
     147,  1041,   108,  1069,  1070,    44,   523,   863,   226,    12,
      12,   149,   270,    39,    58,    12,   178,   177,   144,   661,
     114,   147,   134,   120,   270,  1660,   217,  1727,    12,    12,
    1642,    14,    12,   132,  1931,  1483,  1294,    12,  1738,   278,
    1612,  1653,  1654,     7,   185,    12,   563,  1738,    68,    86,
      15,   131,   179,   127,    12,    12,  1352,  1225,   131,    66,
      20,   332,    12,   168,   226,  1245,   295,   169,   169,   181,
      12,    12,    12,   214,   127,  1644,   376,   293,   178,   159,
    1649,   212,    12,   442,   384,    12,   314,   361,    12,    12,
     376,    12,    12,   360,   101,  1263,   131,   313,   384,   458,
      25,  1998,    12,  1428,    12,   266,   253,    12,   210,   210,
      70,   213,   213,   384,   131,   316,   218,   248,  1317,  1318,
     387,   350,  1103,  1758,    89,   383,   226,  1584,   367,  1764,
    1480,  1766,   231,   235,   235,  1707,   263,   383,   666,   227,
    1490,   149,   227,   178,  1844,  1663,   226,  1651,   227,  1722,
     282,   131,   300,  1844,   227,   383,   227,   289,   122,   291,
      12,   235,    12,    12,   276,   297,   227,   314,   300,   387,
     332,   303,   304,  1621,   599,   227,   213,    12,  1123,   227,
      12,   120,   235,   282,   316,   889,   212,   328,   314,   614,
    1759,  1231,   909,   910,   227,   239,   387,   227,   358,    12,
    1056,   683,   340,  1353,  1934,   227,   355,   246,   227,    12,
     227,    12,   854,    12,   139,   821,   344,    12,   128,  1792,
     421,   653,   311,   337,   227,   227,   332,   357,   325,    29,
     227,   333,   333,    12,  1699,    12,   341,  1533,  1703,   329,
     387,  1814,  1699,   227,   227,   314,  1703,   227,  1271,  1574,
      12,    51,   227,  1868,  1512,    12,  1436,    12,    12,   333,
     227,   321,    12,    63,   396,   397,   321,  1617,    12,   227,
     227,  1958,   420,    12,    74,   363,   370,   227,   363,   370,
     333,    81,  1217,  1228,   363,   227,   227,   227,   420,   421,
     363,  1478,   363,  1359,   314,   363,   384,   227,  1920,   387,
     227,   386,   363,   227,   227,   384,   227,   227,   387,   109,
      12,   363,  1219,   384,   387,   363,   387,   227,    12,   227,
     933,   121,   227,   384,   124,  1527,   387,  1529,   643,   477,
     363,   944,   384,   363,  1015,   387,   384,  1909,  1319,   387,
     488,   363,   474,   475,   363,   477,   363,  1959,    12,  1806,
    1807,   384,    12,   966,   387,    12,   488,   387,    12,   899,
     363,   363,  1066,   495,  1081,   387,   363,   384,   387,  1887,
     502,   899,   583,  1988,  1989,   227,  1991,   227,   227,   363,
     363,  1024,  1025,   363,   387,   387,   325,    12,   363,   314,
     387,  2006,   227,   525,  1036,   227,   363,    12,  1971,  1898,
    1117,   826,  1119,   387,  1121,   363,   363,  1352,  1014,  1163,
    1983,    12,   387,   363,   227,  1021,  2031,    12,  2033,  2034,
     387,   363,   363,   363,   227,    98,   227,   384,   227,   387,
     626,  1073,   227,   363,  1713,    12,   363,   387,   570,   363,
     363,  1609,   363,   363,   876,   387,   387,   387,   227,    12,
     227,   583,    12,   363,   149,   363,  1960,   387,   363,   891,
     387,   583,    99,   387,   387,   227,   387,   387,    12,    12,
     227,     9,   227,   227,   384,    34,   384,   227,   679,   384,
       9,   613,   282,   227,  1649,   617,  1291,   291,   227,   289,
      72,   291,    12,   641,   626,  1467,   644,   297,    12,    12,
     300,  2005,   233,   303,   304,  1047,   120,  1597,   656,   641,
      12,   363,   644,   363,   363,   224,   316,    86,    12,    31,
     652,  1326,  1667,   645,   656,   227,  1696,    38,   363,   661,
    1211,   363,   384,   227,   384,   384,   323,    12,  1443,   687,
      12,    14,    29,     9,   270,   314,   126,   679,     9,   384,
     363,   683,   384,   685,  1577,   687,    94,   252,   270,    70,
     363,   128,   363,   227,   363,    94,   311,   227,   363,   149,
     227,   384,  1072,   227,  1074,   144,    63,  1294,   147,   131,
     270,   384,   281,   384,   363,   384,   363,  1304,  1533,   384,
    1232,   270,   229,  1018,  1759,  1208,   396,   397,  1694,   213,
     149,   363,   227,    70,   277,   384,   363,   384,   363,   363,
     162,     0,   227,   363,   383,   270,   183,   108,    95,   363,
     420,   421,   384,   270,   363,   137,   227,   384,    94,   384,
     384,   152,   227,    94,   384,   108,   144,   336,   146,   147,
     384,   152,    65,   105,   144,   384,  1816,   147,   169,  1974,
     227,   113,   383,   212,  1687,  1688,   131,   383,    22,   131,
     120,   363,   316,    12,   227,  1114,  1308,   227,   148,   363,
     802,   383,   205,   385,   474,   475,   149,   477,    10,    11,
    1585,  1586,   384,   227,   227,   218,  1709,   311,   488,    21,
     384,   495,     2,   383,     4,   495,   255,   131,   502,   363,
     848,   849,   502,   363,   383,   216,   363,   227,    18,   363,
     221,   325,    44,   227,   227,   316,   848,   849,   277,  1362,
     384,    53,   854,   200,   384,   227,  1894,   384,   383,  1916,
    1917,   154,    64,   227,  1377,  1378,   383,   148,   363,  1239,
     872,     9,    87,   166,   152,   314,   878,     9,   363,   216,
    1393,   174,   227,   213,   221,   227,    88,    89,    90,   384,
     340,     6,   363,   225,    25,    10,    98,  1966,   363,   384,
       9,   903,  1385,    38,   359,    85,   108,   909,   910,   252,
     912,   289,   205,   905,   116,  1427,   363,   384,   134,   384,
     387,    50,  2020,   125,  2022,  1512,  1725,  1008,   162,   144,
     363,   312,   147,   363,   359,    70,  1419,   384,   341,   384,
     297,   319,   122,   177,   388,    76,   303,   617,    47,   363,
     363,   384,    83,   242,   384,   157,    94,   288,   289,   290,
     291,   250,    94,   311,   634,   181,   259,   388,   170,   300,
     384,   641,   384,   363,   644,   387,  1295,    25,   180,   363,
     363,   313,   652,  1064,   273,    94,   656,    86,   210,   120,
      56,   363,   333,   124,   384,   325,   909,   910,   127,   363,
     384,   384,   166,   219,   334,    47,  1008,   300,   139,   679,
     174,   117,   384,   247,  2054,   685,  1008,   687,   363,    18,
     384,   363,   212,   152,   295,    83,  1825,  1826,  1030,   387,
     377,   378,   379,   380,  1036,    83,  1450,  1451,   253,   134,
     169,    18,    41,    42,    86,    87,   248,   249,    47,   359,
     252,   314,    51,   308,   185,  1057,   311,  1059,   260,   383,
     276,    18,  1064,   383,   266,  1057,   124,   383,   270,  2003,
     169,  1073,  1064,   136,   383,   277,   124,    14,   280,  1081,
     383,   216,   213,   214,    87,   383,   221,    86,    87,   184,
      56,   139,   294,   386,    51,   259,  1088,   270,   383,   314,
     383,  1103,   144,   166,  1122,   147,   235,   383,  1110,    86,
     109,   210,    41,    42,   213,  1117,  1628,  1119,    47,  1121,
    1122,  1123,   121,  1125,   326,  2018,  1128,   185,    65,    86,
      87,   120,   802,   335,   383,   337,   235,   185,   340,   384,
     384,   144,   387,   387,   147,   144,  2080,  2081,   147,   388,
    1737,   108,   109,    81,  1643,   383,   214,  1646,   144,  1648,
     146,   147,  1549,   226,   121,   213,   214,  1462,   560,   561,
     383,   108,   387,   346,   347,   383,   311,   312,   848,   849,
     383,   383,   383,   314,   854,   383,    12,   144,   319,   126,
     147,   128,   169,   384,   325,   384,   387,   328,   387,   136,
     295,   138,   130,   178,  1117,   383,  1119,   383,   878,   383,
     383,   253,   149,   308,   383,   143,   311,   154,   270,   266,
     383,   210,   159,   383,   213,   277,  1244,   377,   384,   166,
    1232,   387,   383,   210,   333,  1237,   213,   174,   383,   332,
     384,   178,  1244,   387,   375,   376,   183,   308,   384,   383,
     253,   387,  1254,   352,   253,  1667,   384,   384,   235,   387,
     387,   383,  1254,   383,   192,   264,   314,   195,   205,    95,
     328,   384,   314,   201,   387,  1640,  1641,   295,   383,  1281,
     328,   218,  1794,   383,   383,  1287,  1651,  1652,  1290,   226,
    1292,    14,  1294,  1311,   346,   347,   253,   274,   383,  1301,
    1302,  1293,  1304,   289,   383,  1307,  1308,   264,    12,  1311,
     238,   314,   383,  1305,    44,   314,   383,  1319,  1320,  1321,
      50,  1083,   259,  1085,  1326,    83,    47,   375,   376,  1091,
      60,   383,   383,   319,  1326,  1097,   325,   323,   383,  1357,
     268,   144,    65,   146,   147,   334,   384,   384,   383,   387,
     387,  1353,    86,    22,   383,  1357,   333,   314,   384,   384,
    1030,   387,   387,   300,   384,    86,   124,   387,  1640,  1641,
    1735,  1736,   384,   176,   200,   387,   383,    54,    55,  1651,
    1652,   139,  1747,   384,   295,   108,   387,  1057,   387,  1059,
    1755,    95,  1757,   384,    59,   332,   387,   127,   277,   384,
     383,   383,   387,   340,   341,   128,  1771,  1772,    86,    86,
     383,  1413,   383,   136,   384,   138,   383,   387,   383,  1421,
     384,   358,   152,   387,   101,  1427,    95,   185,   356,  1421,
     387,   154,   383,   383,  1750,   169,   159,   365,   383,   169,
    1110,   383,   383,   166,   383,   383,   123,   384,   169,   386,
     387,   174,  1122,  1123,   384,   178,   214,  1459,   383,   383,
     183,  1973,  1778,  1735,  1736,  1467,   383,   383,   383,    86,
      39,   248,   117,  1860,   387,  1747,   210,   152,  1480,   213,
     218,  1868,   205,  1755,   218,  1757,   289,   257,  1490,   210,
     354,   169,   213,   162,  1881,   218,   200,   242,   357,  1771,
    1772,   235,  1520,   226,   384,   235,   384,   384,   177,    94,
    1512,   314,  1828,  1829,   235,  1517,   319,   383,  1520,  1600,
       9,   384,  1524,   384,   384,  1527,   388,  1529,  1530,   383,
     153,   200,   210,   321,   387,   213,   259,   387,  1857,   387,
    1856,   210,   377,  1859,   283,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,  1281,    47,   235,   314,   358,
     384,  1287,  1232,  1950,  1290,  1952,  1292,  1237,   245,   183,
     328,  2083,   384,   377,  1244,  1301,  1302,   300,   247,   384,
     131,  1307,   384,   376,  1254,   332,   389,   384,   384,  2101,
     384,   278,  1594,  1958,   384,  1960,  2108,   384,  1600,   333,
     384,  1988,  1989,   333,  1991,   387,   387,    12,  1600,   332,
     384,  1281,   333,   384,    95,  1617,   383,  1287,   341,  2006,
    1290,   383,  1292,  1625,   383,   380,  1628,   380,    47,    18,
     384,  1301,  1302,   314,  1953,   358,   388,  1307,   388,   383,
    2005,  1311,   384,  2008,  2031,    32,  2033,  2034,   389,   383,
    1320,  1321,    41,    42,   387,   333,   367,   367,    47,   367,
      95,   384,    51,   386,   387,   226,  1668,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   218,    24,   384,
     106,   384,    28,   158,    83,   158,  1958,  1357,  1960,   384,
     384,   384,   384,   384,   384,   159,    42,    86,    87,   388,
     388,    12,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   388,   387,   104,   387,   384,   131,   164,   200,
     109,    50,   321,  1725,    76,   124,   167,    73,   309,  1731,
      76,    83,   121,  2005,   167,  1737,  2008,   367,    84,   367,
      23,   309,    32,  1413,    27,    28,   367,   367,   387,   367,
      18,  1421,   341,   218,  1480,   144,   178,   100,   147,    42,
     160,   383,   160,   387,  1490,   200,    77,    78,    79,    80,
      81,   383,   124,    41,    42,    18,   384,   384,   384,    47,
     384,  1799,  1774,    51,  1786,   388,   185,   384,   177,  1459,
      73,   387,  1794,    76,   270,   387,   162,  1799,   337,   175,
     515,    84,   388,   277,   169,   169,   388,   384,    51,    95,
    1480,   384,    14,    96,   160,   214,    14,   214,    86,    87,
    1490,   214,   537,  1825,  1826,   540,   384,   110,   272,   140,
     141,   142,   143,   185,   159,   384,   166,   387,   553,   554,
     123,   109,   557,    86,    87,   166,   228,  1517,   136,   389,
    1520,   111,   279,   121,  1524,   387,   571,   572,   387,   211,
    1530,   213,   214,   169,   253,   108,   109,   169,   383,   169,
     384,   384,   384,   133,   384,   264,   144,   160,   121,   147,
     218,   192,   193,   194,   195,   166,   166,  1889,    32,   138,
     201,  1617,   373,   374,   375,   376,   377,   378,   379,   380,
     387,   144,   197,   163,   147,  1907,   242,    86,    86,    51,
     388,   383,   172,   383,   200,   383,   227,   383,   214,   337,
     383,   383,   166,   384,  1594,   314,   311,   238,   166,   328,
      49,   321,   215,   383,  1936,   281,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   206,  1617,   187,   383,
     214,   144,   213,   146,   147,  1625,   267,   268,   348,   169,
     169,   244,   314,   337,   214,    49,   383,   319,   358,   214,
      86,  1973,   214,  1965,   320,   144,   328,   146,   147,    63,
      64,   214,   383,   176,   699,   253,   341,    71,   384,   383,
     336,   274,   341,   179,   383,   218,   264,   366,  1668,   211,
     384,   384,   347,   384,   384,   395,   214,   176,   387,   341,
     253,    32,    32,   341,   105,    32,  2097,   384,  2020,   128,
    2022,   264,  2024,   383,   383,    32,    32,    32,   112,   246,
       4,   218,   315,   218,   149,   383,   319,   320,    32,   754,
      32,   383,    88,   758,   337,   356,   314,   214,   383,   277,
     134,   384,   363,   364,   365,  1725,   387,  1664,  1123,   774,
     144,  1731,   345,   147,  1103,   348,   349,   151,   152,  1320,
     683,   314,  1530,  1082,  1110,  1323,  2078,  2079,  1285,  1625,
    1627,  2083,  1146,   167,  1765,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,  2097,   289,   181,    95,  2101,
    1870,  1747,  2104,  1647,  1783,  2097,  2108,   367,   368,   369,
    1755,  1729,  1997,  1129,   504,  1737,  1786,  1968,  1889,   509,
     289,   314,  1319,   513,   514,  1048,   319,   277,   848,  1799,
     520,   521,   522,    65,   524,   276,   526,   862,   437,   473,
     530,   531,   532,   533,   999,   314,   536,  1421,   538,   539,
     319,   541,   542,   237,   544,  1825,  1826,   547,   548,   549,
     550,   551,   552,  1219,   932,   555,   556,     6,   558,  1697,
    1750,    10,   562,   998,   564,   565,  1919,    18,  1447,    18,
    1985,  2079,  1695,   573,   574,  2104,   561,  1628,   515,  1022,
    1469,   581,   276,  1716,   584,   585,   586,  1053,  1778,   305,
     421,    40,   316,   200,     6,    95,   941,   853,    10,  1427,
      51,   696,    51,  1227,  1973,  1073,    18,  2101,   349,  1889,
     389,  1975,   154,    62,   308,    65,   501,   311,   312,   144,
     314,   146,   147,    83,   166,  1925,  2017,  1907,    40,  1995,
    2108,   867,   174,   634,   634,    86,    87,    86,    87,    51,
    1830,  1831,  1232,    92,    93,    81,   646,  1326,  1262,    98,
      62,   176,  1467,   110,  1721,   104,  1936,   427,   109,   108,
     109,   355,   162,   205,   124,    -1,    -1,    -1,    -1,    -1,
     121,    -1,   121,    -1,    86,    87,   218,   126,    -1,    -1,
      92,    -1,    -1,    -1,   144,    -1,    98,   147,    -1,  1879,
    1880,    -1,   104,   144,    -1,   144,   147,   109,   147,    -1,
     200,   150,   702,    -1,   154,    -1,    -1,    -1,    -1,   121,
      -1,    -1,    -1,    -1,   126,    -1,   166,   259,    -1,    -1,
      -1,    -1,    -1,    -1,   174,   185,    -1,    77,    78,    79,
      80,    81,   144,    -1,    -1,   147,    -1,    -1,    -1,    -1,
    2020,    -1,  2022,    -1,  2024,    -1,    -1,    65,    -1,    -1,
     199,    -1,   752,    -1,   214,   205,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,   289,   372,   373,   374,   375,   376,
     377,   378,   379,   380,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,   782,   783,   784,    -1,    -1,   199,    -1,   314,
     140,   141,   142,   143,   319,    -1,    -1,    -1,  2078,  2079,
     249,    -1,   253,    -1,   253,    -1,    -1,    -1,    -1,   259,
      -1,    -1,    -1,   264,   226,   264,    -1,    -1,    -1,    -1,
      -1,   821,    -1,    -1,  2104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   833,    -1,   835,   154,   249,    -1,    -1,
      -1,   253,   192,   193,   194,   195,    -1,   546,   166,    -1,
     300,   201,   264,    -1,   314,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   389,   314,    -1,    -1,   328,    -1,
      -1,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,    -1,    -1,    -1,    -1,    -1,    -1,   205,   238,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   596,   597,    -1,
     218,   600,   314,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,    -1,    -1,    -1,   267,   268,   919,
      -1,    -1,   922,    -1,   924,   925,    -1,    -1,    -1,   929,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   259,    -1,   943,    -1,    -1,   946,   947,   948,   949,
      -1,   951,    -1,    -1,    -1,    -1,    -1,    -1,   958,    -1,
      -1,   961,    -1,   963,   964,   965,    -1,    -1,    -1,    -1,
     970,   971,   972,    -1,    -1,    -1,   976,   977,    -1,   979,
      -1,   981,   300,   983,    -1,   985,    -1,   987,    -1,    -1,
      -1,    -1,   992,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   356,    -1,    -1,  1009,
      -1,    -1,    -1,    -1,   364,   365,    -1,    -1,    -1,    -1,
      -1,  1021,    -1,    -1,    -1,    -1,  1026,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1077,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   824,    -1,    -1,   827,    -1,
      -1,  1131,    -1,    -1,    -1,    -1,  1136,    -1,    -1,    -1,
    1140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1159,
    1160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1178,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1186,    -1,  1188,    -1,
    1190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1226,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1275,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    48,    49,  1365,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,  1382,  1383,    -1,    -1,    71,    72,    73,    -1,
    1390,    76,    -1,    -1,    -1,  1395,    81,    82,  1398,  1399,
    1400,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,    -1,   109,   110,    -1,   112,  1428,   114,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,   134,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,    -1,    -1,   150,   151,    -1,  1468,    -1,
      -1,    -1,    -1,    -1,    -1,  1475,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,   184,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,    -1,    -1,
     195,    -1,   197,    -1,   199,    -1,   201,   202,   203,   204,
      -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,    -1,
      -1,   216,   217,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,   234,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,  1574,   260,   261,   262,   263,   264,
     265,   266,    -1,   268,   269,    -1,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
     295,    -1,  1612,   298,    -1,    -1,   301,   302,   303,    -1,
      -1,   306,    -1,   308,   309,    -1,    -1,   312,    -1,    -1,
     315,    -1,   317,   318,    -1,   320,    -1,    -1,   323,    -1,
      -1,   326,   327,    -1,   329,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,
     345,    -1,   347,    -1,    -1,   350,    -1,    -1,    -1,    -1,
     355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,  1679,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,   388,   389,    -1,    -1,  1707,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1721,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
    1810,  1811,    81,    82,    83,  1815,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,    -1,    -1,
     129,   130,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,    -1,   143,   144,   145,    -1,   147,   148,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,   158,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      -1,   170,   171,    -1,   173,   174,   175,    -1,    -1,  1909,
      -1,    -1,   181,   182,    -1,   184,   185,    -1,    -1,   188,
     189,   190,   191,   192,    -1,    -1,   195,   196,   197,    -1,
     199,   200,   201,   202,   203,   204,    -1,    -1,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,  1974,    -1,   245,  1977,    -1,  1979,
      -1,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,   296,   297,   298,
      -1,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,    -1,    -1,   312,    -1,   314,   315,    -1,   317,   318,
     319,   320,    -1,   322,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
     339,    -1,    -1,   342,   343,    -1,   345,   346,   347,    -1,
      -1,   350,   351,    -1,   353,   354,   355,   356,    -1,    -1,
      -1,    -1,   361,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   375,   376,    -1,    -1,
      -1,    -1,   381,    -1,   383,    -1,   385,    -1,    -1,   388,
     389,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,   129,   130,    -1,   132,
      -1,   134,   135,    -1,   137,    -1,   139,    -1,    -1,    -1,
     143,   144,   145,    -1,   147,   148,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,   168,    -1,   170,   171,    -1,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   182,
      -1,   184,   185,    -1,    -1,   188,   189,   190,   191,   192,
      -1,    -1,   195,   196,   197,    -1,   199,   200,   201,   202,
     203,   204,    -1,    -1,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,   218,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,    -1,   268,   269,    -1,    -1,    -1,
     273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,   296,   297,   298,    -1,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
      -1,   314,   315,    -1,   317,   318,   319,   320,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,   342,
     343,    -1,   345,   346,   347,    -1,    -1,   350,   351,    -1,
     353,   354,   355,   356,    -1,    -1,    -1,    -1,   361,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   375,   376,    -1,    -1,    -1,    -1,   381,    -1,
     383,    -1,   385,    -1,    -1,   388,   389,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,   170,   171,    -1,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,   185,    -1,
      -1,   188,   189,   190,   191,   192,    -1,    -1,   195,   196,
     197,    -1,   199,   200,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,   296,
     297,   298,    -1,    -1,   301,   302,   303,   304,   305,   306,
     307,   308,   309,    -1,    -1,   312,    -1,   314,   315,    -1,
     317,   318,   319,   320,    -1,    -1,   323,   324,   325,   326,
     327,   328,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,   342,   343,    -1,   345,   346,
     347,    -1,    -1,   350,   351,    -1,   353,   354,   355,   356,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,   365,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   376,
      -1,    -1,    -1,    -1,   381,    -1,   383,   384,   385,    -1,
      -1,   388,   389,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,
      -1,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,   129,   130,
     131,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,    -1,   147,   148,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,   158,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,   168,    -1,   170,
     171,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   182,    -1,   184,   185,    -1,    -1,   188,   189,   190,
     191,   192,    -1,    -1,   195,   196,   197,    -1,   199,   200,
     201,   202,   203,   204,    -1,    -1,   207,   208,   209,   210,
     211,   212,   213,   214,    -1,   216,   217,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,   234,    -1,   236,   237,   238,   239,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,    -1,   268,   269,    -1,
      -1,    -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,
     281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,   295,   296,   297,   298,    -1,    -1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,    -1,
      -1,   312,    -1,   314,   315,    -1,   317,   318,   319,   320,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,
      -1,   342,   343,    -1,   345,   346,   347,    -1,    -1,   350,
     351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
     361,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   375,   376,    -1,    -1,    -1,    -1,
     381,    -1,   383,    -1,   385,    -1,    -1,   388,   389,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,   129,   130,   131,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,   148,    -1,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,   158,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   168,    -1,   170,   171,    -1,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,   184,
     185,    -1,    -1,   188,   189,   190,   191,   192,    -1,    -1,
     195,   196,   197,    -1,   199,   200,   201,   202,   203,   204,
      -1,    -1,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,   216,   217,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,   234,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,    -1,   268,   269,    -1,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
     295,   296,   297,   298,    -1,    -1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,    -1,   314,
     315,    -1,   317,   318,   319,   320,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   339,    -1,    -1,   342,   343,    -1,
     345,   346,   347,    -1,    -1,   350,   351,    -1,   353,   354,
     355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,   376,    -1,    -1,    -1,    -1,   381,    -1,   383,    -1,
     385,    -1,    -1,   388,   389,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,    -1,    -1,
     129,   130,   131,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,    -1,   143,   144,   145,    -1,   147,   148,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,   158,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      -1,   170,   171,    -1,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   182,    -1,   184,   185,    -1,    -1,   188,
     189,   190,   191,   192,    -1,    -1,   195,   196,   197,    -1,
     199,   200,   201,   202,   203,   204,    -1,    -1,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,   296,   297,   298,
      -1,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,    -1,    -1,   312,    -1,   314,   315,    -1,   317,   318,
     319,   320,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
     339,    -1,    -1,   342,   343,    -1,   345,   346,   347,    -1,
      -1,   350,   351,    -1,   353,   354,   355,   356,    -1,    -1,
      -1,    -1,   361,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   375,   376,    -1,    -1,
      -1,    -1,   381,    -1,   383,    -1,   385,    -1,    -1,   388,
     389,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,   129,   130,    -1,   132,
      -1,   134,   135,    -1,   137,    -1,   139,    -1,    -1,    -1,
     143,   144,   145,    -1,   147,   148,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,   168,    -1,   170,   171,    -1,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   182,
      -1,   184,   185,    -1,    -1,   188,   189,   190,   191,   192,
      -1,    -1,   195,   196,   197,    -1,   199,   200,   201,   202,
     203,   204,    -1,    -1,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,    -1,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,    -1,   268,   269,    -1,    -1,    -1,
     273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,   296,   297,   298,    -1,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
      -1,   314,   315,    -1,   317,   318,   319,   320,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,   342,
     343,    -1,   345,   346,   347,    -1,    -1,   350,   351,    -1,
     353,   354,   355,   356,    -1,    -1,    -1,    -1,   361,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   375,   376,    -1,    -1,    -1,    -1,   381,    -1,
     383,    -1,   385,    -1,    -1,   388,   389,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,   170,   171,    -1,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,   185,    -1,
      -1,   188,   189,   190,   191,   192,    -1,    -1,   195,   196,
     197,    -1,   199,   200,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,   210,   211,   212,   213,   214,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,   296,
     297,   298,    -1,    -1,   301,   302,   303,   304,   305,   306,
     307,   308,   309,    -1,    -1,   312,    -1,   314,   315,    -1,
     317,   318,   319,   320,    -1,    -1,   323,   324,   325,   326,
     327,   328,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,   342,   343,    -1,   345,   346,
     347,    -1,    -1,   350,   351,    -1,   353,   354,   355,   356,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,   365,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   376,
      -1,    -1,    -1,    -1,   381,    -1,   383,    -1,   385,    -1,
      -1,   388,   389,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,
      -1,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,   129,   130,
      -1,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,    -1,   147,   148,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,   158,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,   168,    -1,   170,
     171,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   182,    -1,   184,   185,    -1,    -1,   188,   189,   190,
     191,   192,    -1,    -1,   195,   196,   197,    -1,   199,   200,
     201,   202,   203,   204,    -1,    -1,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,   234,    -1,   236,   237,   238,   239,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,    -1,   268,   269,    -1,
      -1,    -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,
     281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,   295,   296,   297,   298,    -1,    -1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,    -1,
      -1,   312,    -1,   314,   315,    -1,   317,   318,   319,   320,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,
      -1,   342,   343,    -1,   345,   346,   347,    -1,    -1,   350,
     351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
     361,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   375,   376,    -1,    -1,    -1,    -1,
     381,    -1,   383,    -1,   385,    -1,    -1,   388,   389,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,   148,    -1,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,   158,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   168,    -1,   170,   171,    -1,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,   184,
     185,    -1,    -1,   188,   189,   190,   191,   192,    -1,    -1,
     195,   196,   197,    -1,   199,   200,   201,   202,   203,   204,
      -1,    -1,   207,   208,   209,   210,   211,   212,   213,   214,
      -1,   216,   217,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,   234,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,    -1,   268,   269,    -1,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
     295,   296,   297,   298,    -1,    -1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,    -1,   314,
     315,    -1,   317,   318,   319,   320,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   339,    -1,    -1,   342,   343,    -1,
     345,   346,   347,    -1,    -1,   350,   351,    -1,   353,   354,
     355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,   376,    -1,    -1,    -1,    -1,   381,    -1,   383,    -1,
     385,    -1,    -1,   388,   389,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    -1,    -1,    42,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    62,    63,    -1,    -1,    66,    67,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,    -1,    -1,    -1,
     129,   130,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
     139,    -1,    -1,    -1,   143,   144,   145,    -1,   147,   148,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,   157,   158,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      -1,   170,   171,    -1,    -1,   174,   175,    -1,    -1,    -1,
      -1,    -1,   181,   182,    -1,   184,   185,    -1,    -1,   188,
     189,   190,   191,   192,    -1,    -1,   195,   196,   197,    -1,
     199,   200,   201,   202,   203,   204,    -1,    -1,   207,   208,
     209,   210,   211,   212,   213,   214,    -1,   216,   217,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,   232,    -1,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,   250,   251,   252,    -1,    -1,    -1,   256,    -1,    -1,
     259,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,   296,   297,   298,
      -1,    -1,   301,   302,   303,   304,   305,   306,   307,   308,
     309,    -1,    -1,   312,    -1,   314,   315,    -1,   317,   318,
     319,   320,    -1,    -1,   323,   324,   325,   326,   327,   328,
     329,   330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
     339,    -1,    -1,   342,   343,    -1,   345,   346,   347,    -1,
      -1,   350,   351,    -1,   353,   354,   355,   356,    -1,    -1,
      -1,    -1,   361,    -1,    -1,    -1,   365,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   375,   376,    -1,    -1,
      -1,    -1,   381,    -1,   383,    -1,   385,    -1,    -1,   388,
     389,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    -1,    -1,    42,
      43,    -1,    45,    46,    -1,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    61,    62,
      63,    -1,    -1,    66,    67,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,
      83,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,    -1,
      -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,    -1,    -1,    -1,   129,   130,    -1,   132,
      -1,   134,   135,    -1,   137,    -1,   139,    -1,    -1,    -1,
     143,   144,   145,    -1,   147,   148,    -1,   150,   151,    -1,
      -1,    -1,    -1,    -1,   157,   158,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,   168,    -1,   170,   171,    -1,
      -1,   174,   175,    -1,    -1,    -1,    -1,    -1,   181,   182,
      -1,   184,   185,    -1,    -1,   188,   189,   190,   191,   192,
      -1,    -1,   195,   196,   197,    -1,   199,   200,   201,   202,
     203,   204,    -1,    -1,   207,   208,   209,   210,   211,   212,
     213,   214,    -1,   216,   217,    -1,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
      -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
      -1,    -1,    -1,   256,    -1,    -1,   259,   260,   261,   262,
     263,   264,   265,   266,    -1,   268,   269,    -1,    -1,    -1,
     273,   274,   275,   276,    -1,    -1,   279,    -1,   281,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,   295,   296,   297,   298,    -1,    -1,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    -1,    -1,   312,
      -1,   314,   315,    -1,   317,   318,   319,   320,    -1,    -1,
     323,   324,   325,   326,   327,   328,   329,   330,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,   342,
     343,    -1,   345,   346,   347,    -1,    -1,   350,   351,    -1,
     353,   354,   355,   356,    -1,    -1,    -1,    -1,   361,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   375,   376,    -1,    -1,    -1,    -1,   381,    -1,
     383,    -1,   385,    -1,    -1,   388,   389,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    39,    -1,    -1,    42,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    62,    63,    -1,    -1,    66,
      67,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    83,    -1,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,   135,    -1,
     137,    -1,   139,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,   148,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
     157,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,   170,   171,    -1,    -1,   174,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,   185,    -1,
      -1,   188,   189,   190,   191,   192,    -1,    -1,   195,   196,
     197,    -1,   199,   200,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,   211,   212,   213,   214,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,   232,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,   251,   252,    -1,    -1,    -1,   256,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,   296,
     297,   298,    -1,    -1,   301,   302,   303,   304,   305,   306,
     307,   308,   309,    -1,    -1,   312,    -1,   314,   315,    -1,
     317,   318,   319,   320,    -1,    -1,   323,   324,   325,   326,
     327,   328,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,   342,   343,    -1,   345,   346,
     347,    -1,    -1,   350,   351,    -1,   353,   354,   355,   356,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,   365,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   375,   376,
      -1,    -1,    -1,    -1,   381,    -1,   383,    -1,   385,    -1,
      -1,   388,   389,     4,     5,    -1,     7,     8,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,
      21,    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,
      31,    -1,    -1,    -1,    35,    36,    37,    38,    39,    -1,
      -1,    42,    43,    -1,    45,    46,    -1,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    -1,    58,    59,    -1,
      61,    62,    63,    -1,    -1,    66,    67,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,
     101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,
      -1,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,    -1,    -1,    -1,   129,   130,
      -1,   132,    -1,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,    -1,   143,   144,   145,    -1,   147,   148,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,   158,    -1,    -1,
      -1,    -1,    -1,   164,    -1,    -1,    -1,   168,    -1,   170,
     171,    -1,    -1,   174,   175,    -1,    -1,    -1,    -1,    -1,
     181,   182,    -1,   184,   185,    -1,    -1,   188,   189,   190,
     191,   192,    -1,    -1,   195,   196,   197,    -1,   199,   200,
     201,   202,   203,   204,    -1,    -1,   207,   208,   209,    -1,
     211,   212,   213,   214,    -1,   216,   217,    -1,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,   232,    -1,   234,    -1,   236,   237,   238,   239,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,
     251,   252,    -1,    -1,    -1,   256,    -1,    -1,   259,   260,
     261,   262,   263,   264,   265,   266,    -1,   268,   269,    -1,
      -1,    -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,
     281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   294,   295,   296,   297,   298,    -1,    -1,
     301,   302,   303,   304,   305,   306,   307,   308,   309,    -1,
      -1,   312,    -1,   314,   315,    -1,   317,   318,   319,   320,
      -1,    -1,   323,   324,   325,   326,   327,   328,   329,   330,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,
      -1,   342,   343,    -1,   345,   346,   347,    -1,    -1,   350,
     351,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
     361,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   375,   376,    -1,    -1,    -1,    -1,
     381,    -1,   383,    -1,   385,    -1,    -1,   388,   389,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    -1,    -1,    42,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    62,    63,    -1,
      -1,    66,    67,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    82,    83,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,   148,    -1,   150,   151,    -1,    -1,    -1,
      -1,    -1,   157,   158,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   168,    -1,   170,   171,    -1,    -1,   174,
     175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,   184,
     185,    -1,    -1,   188,   189,   190,   191,   192,    -1,    -1,
     195,   196,   197,    -1,   199,   200,   201,   202,   203,   204,
      -1,    -1,   207,   208,   209,    -1,   211,   212,   213,   214,
      -1,   216,   217,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,   232,    -1,   234,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   250,   251,   252,    -1,    -1,
      -1,   256,    -1,    -1,   259,   260,   261,   262,   263,   264,
     265,   266,    -1,   268,   269,    -1,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
     295,   296,   297,   298,    -1,    -1,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    -1,    -1,   312,    -1,   314,
     315,    -1,   317,   318,   319,   320,    -1,    -1,   323,   324,
     325,   326,   327,   328,   329,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   339,    -1,    -1,   342,   343,    -1,
     345,   346,   347,    -1,    -1,   350,   351,    -1,   353,   354,
     355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,   376,    -1,    -1,    -1,    -1,   381,    -1,   383,    -1,
     385,    -1,    -1,   388,   389,     4,     5,    -1,     7,     8,
      -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,    -1,    -1,    -1,
     129,   130,    -1,   132,    -1,   134,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,    -1,   147,    -1,
      -1,   150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,   181,   182,    -1,   184,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,    -1,    -1,   195,    -1,   197,    -1,
     199,    -1,   201,   202,   203,   204,    -1,    -1,   207,   208,
     209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,   306,    -1,   308,
     309,    -1,    -1,   312,    -1,    -1,   315,    -1,   317,   318,
      -1,   320,    -1,    -1,   323,    -1,    -1,   326,   327,    -1,
     329,   330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,   345,    -1,   347,    -1,
      -1,   350,    -1,    -1,    -1,    -1,   355,   356,    -1,    -1,
       4,     5,   361,     7,     8,    -1,   365,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    31,    -1,   388,
     389,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    60,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,    -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,
     134,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,   147,    -1,    -1,   150,   151,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,   168,   169,    -1,   171,    -1,    -1,
      -1,   175,    -1,   177,    -1,    -1,    -1,   181,   182,    -1,
     184,    -1,    -1,    -1,    -1,   189,   190,   191,   192,    -1,
      -1,   195,    -1,   197,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
     234,    -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,   261,   262,   263,
     264,   265,   266,    -1,   268,   269,   270,    -1,    -1,   273,
     274,   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,   295,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,   306,    -1,   308,   309,    -1,    -1,   312,    -1,
      -1,   315,    -1,   317,   318,    -1,   320,    -1,    -1,   323,
      -1,    -1,   326,   327,    -1,   329,   330,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,
      -1,   345,    -1,   347,    -1,    -1,   350,    -1,    -1,    -1,
      -1,   355,   356,    -1,    -1,     4,     5,   361,     7,     8,
      -1,   365,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,    28,
      29,    -1,    31,    -1,   388,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,
      99,   100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,    -1,   125,    -1,    -1,    -1,
     129,   130,    -1,   132,    -1,   134,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,    -1,   147,    -1,
      -1,   150,   151,   152,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,
     169,    -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,
      -1,    -1,   181,   182,    -1,   184,    -1,    -1,    -1,    -1,
     189,   190,   191,   192,    -1,    -1,   195,    -1,   197,    -1,
     199,    -1,   201,   202,   203,   204,    -1,    -1,   207,   208,
     209,    -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,   234,    -1,   236,   237,   238,
     239,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,
      -1,   260,   261,   262,   263,   264,   265,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,
     279,    -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,   298,
      -1,    -1,   301,   302,   303,    -1,    -1,   306,    -1,   308,
     309,    -1,    -1,   312,    -1,    -1,   315,    -1,   317,   318,
      -1,   320,    -1,    -1,   323,    -1,    -1,   326,   327,    -1,
     329,   330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,   345,    -1,   347,    -1,
      -1,   350,    -1,    -1,    -1,    -1,   355,   356,    -1,    -1,
       4,     5,   361,     7,     8,    -1,   365,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    31,    -1,   388,
      -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      -1,    45,    46,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,
     104,    -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
      -1,   125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,
     134,    -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,   147,    -1,    -1,   150,   151,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,
      -1,   175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,
     184,    -1,    -1,    -1,    -1,   189,   190,   191,   192,    -1,
      -1,   195,    -1,   197,    -1,   199,    -1,   201,   202,   203,
     204,    -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,
      -1,    -1,   216,   217,    -1,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
     234,    -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,
      -1,    -1,   256,    -1,    -1,    -1,   260,   261,   262,   263,
     264,   265,   266,    -1,   268,   269,   270,    -1,    -1,   273,
     274,   275,   276,    -1,    -1,   279,    -1,   281,   282,   283,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,   295,    -1,    -1,   298,    -1,    -1,   301,   302,   303,
      -1,    -1,   306,    -1,   308,   309,    -1,    -1,   312,    -1,
      -1,   315,    -1,   317,   318,    -1,   320,    -1,    -1,   323,
      -1,    -1,   326,   327,    -1,   329,   330,    -1,    -1,    -1,
     334,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,
      -1,   345,    -1,   347,    -1,    -1,   350,    -1,    -1,    -1,
      -1,   355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,
      -1,   365,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,    19,
     384,    21,    -1,    -1,   388,    -1,    26,    -1,    28,    29,
      -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    -1,    45,    46,    -1,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,    -1,    97,    -1,    99,
     100,   101,    -1,    -1,   104,    -1,   106,   107,    -1,   109,
     110,    -1,   112,    -1,   114,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,    -1,   125,    -1,    -1,    -1,   129,
     130,    -1,   132,    -1,   134,    -1,    -1,   137,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,    -1,   147,    -1,    -1,
     150,   151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   159,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,   168,    -1,
      -1,   171,    -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,
      -1,   181,   182,    -1,   184,    -1,    -1,    -1,    -1,   189,
     190,   191,   192,    -1,    -1,   195,    -1,   197,    -1,   199,
      -1,   201,   202,   203,   204,    -1,    -1,   207,   208,   209,
      -1,    -1,   212,    -1,    -1,    -1,   216,   217,    -1,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    -1,   234,    -1,   236,   237,   238,   239,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
     250,    -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,
     260,   261,   262,   263,   264,   265,   266,    -1,   268,   269,
      -1,    -1,    -1,   273,   274,   275,   276,    -1,    -1,   279,
      -1,   281,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   294,   295,    -1,    -1,   298,    -1,
      -1,   301,   302,   303,    -1,    -1,   306,    -1,   308,   309,
      -1,    -1,   312,    -1,    -1,   315,    -1,   317,   318,    -1,
     320,    -1,    -1,   323,    -1,    -1,   326,   327,    -1,   329,
     330,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   339,
      -1,    -1,    -1,    -1,    -1,   345,    -1,   347,    -1,    -1,
     350,    -1,    -1,    -1,    -1,   355,   356,    -1,    -1,     4,
       5,   361,     7,     8,    -1,   365,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    29,    -1,    31,    -1,   388,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    -1,
      45,    46,    -1,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    -1,    97,    -1,    99,   100,   101,    -1,    -1,   104,
      -1,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,    -1,
     125,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,   134,
      -1,    -1,   137,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,    -1,    -1,   150,   151,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,
      -1,    -1,    -1,   168,    -1,    -1,   171,    -1,    -1,    -1,
     175,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,   184,
      -1,    -1,    -1,    -1,   189,   190,   191,   192,    -1,    -1,
     195,    -1,   197,    -1,   199,    -1,   201,   202,   203,   204,
      -1,    -1,   207,   208,   209,    -1,    -1,   212,    -1,    -1,
      -1,   216,   217,    -1,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,   234,
      -1,   236,   237,   238,   239,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,   256,    -1,    -1,    -1,   260,   261,   262,   263,   264,
     265,   266,    -1,   268,   269,    -1,    -1,    -1,   273,   274,
     275,   276,    -1,    -1,   279,    -1,   281,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
     295,    -1,    -1,   298,    -1,    -1,   301,   302,   303,    -1,
      -1,   306,    -1,   308,   309,    -1,    -1,   312,    -1,    -1,
     315,    -1,   317,   318,    -1,   320,    -1,    -1,   323,    -1,
      -1,   326,   327,    -1,   329,   330,    -1,    -1,    -1,   334,
      -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,
     345,    -1,   347,    -1,    -1,   350,    -1,    -1,    -1,    -1,
     355,   356,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
     365,    -1,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,   383,    21,
      -1,    -1,    -1,   388,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,    -1,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,     4,     5,   361,
       7,     8,    -1,   365,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,   388,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
     197,    -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   298,    -1,    -1,   301,   302,   303,    -1,    -1,   306,
      -1,   308,   309,    -1,    -1,   312,    -1,    -1,   315,    -1,
     317,   318,    -1,   320,    -1,    -1,   323,    -1,    -1,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     347,    -1,    -1,   350,    -1,    -1,    -1,    -1,   355,   356,
      -1,    -1,     4,     5,   361,     7,     8,    -1,   365,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,   388,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,    -1,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,     4,     5,   361,
       7,     8,    -1,   365,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,   388,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
     197,    -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   298,    -1,    -1,   301,   302,   303,    -1,    -1,   306,
      -1,   308,   309,    -1,    -1,   312,    -1,    -1,   315,    -1,
     317,   318,    -1,   320,    -1,    -1,   323,    -1,    -1,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     347,    -1,    -1,   350,    -1,    -1,    -1,    -1,   355,   356,
      -1,    -1,     4,     5,   361,     7,     8,    -1,   365,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,   388,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,    -1,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,     4,     5,   361,
       7,     8,    -1,   365,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,   377,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
     197,    -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   298,    -1,    -1,   301,   302,   303,    -1,    -1,   306,
      -1,   308,   309,    -1,    -1,   312,    -1,    -1,   315,    -1,
     317,   318,    -1,   320,    -1,    -1,   323,    -1,    -1,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     347,    -1,    -1,   350,    -1,    -1,    -1,    -1,   355,   356,
      -1,    -1,     4,     5,   361,     7,     8,    -1,   365,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
     377,    -1,    -1,    25,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,   139,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,   314,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,     4,     5,   361,
       7,     8,    -1,   365,    -1,    -1,    13,    14,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
     197,    -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,   234,    -1,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   298,    -1,    -1,   301,   302,   303,    -1,    -1,   306,
      -1,   308,   309,    -1,    -1,   312,    -1,   314,   315,    -1,
     317,   318,    -1,   320,    -1,    -1,   323,    -1,    -1,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     347,    -1,    -1,   350,    -1,    -1,    -1,    -1,   355,   356,
      -1,    -1,     4,     5,   361,     7,     8,    -1,   365,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,   314,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,     4,     5,   361,
       7,     8,    -1,   365,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    28,    29,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    -1,    45,    46,
      -1,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,   104,    -1,   106,
     107,    -1,   109,   110,    -1,   112,    -1,   114,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,    -1,   125,    -1,
      -1,    -1,   129,   130,    -1,   132,    -1,   134,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,    -1,    -1,   150,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,
      -1,   168,    -1,    -1,   171,    -1,    -1,    -1,   175,    -1,
      -1,    -1,    -1,    -1,   181,   182,    -1,   184,    -1,    -1,
      -1,    -1,   189,   190,   191,   192,    -1,    -1,   195,    -1,
     197,    -1,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,   208,   209,    -1,    -1,   212,    -1,    -1,    -1,   216,
     217,    -1,   219,   220,   221,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,   234,   235,   236,
     237,   238,   239,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,    -1,   256,
      -1,    -1,    -1,   260,   261,   262,   263,   264,   265,   266,
      -1,   268,   269,    -1,    -1,    -1,   273,   274,   275,   276,
      -1,    -1,   279,    -1,   281,   282,   283,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,   295,    -1,
      -1,   298,    -1,    -1,   301,   302,   303,    -1,    -1,   306,
      -1,   308,   309,    -1,    -1,   312,    -1,    -1,   315,    -1,
     317,   318,    -1,   320,    -1,    -1,   323,    -1,    -1,   326,
     327,    -1,   329,   330,    -1,    -1,    -1,   334,    -1,    -1,
      -1,    -1,   339,    -1,    -1,    -1,    -1,    -1,   345,    -1,
     347,    -1,    -1,   350,    -1,    -1,    -1,    -1,   355,   356,
      -1,    -1,     4,     5,   361,     7,     8,    -1,   365,    -1,
      -1,    13,    -1,    -1,    -1,    17,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    31,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    -1,    -1,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,   104,    -1,   106,   107,    -1,   109,   110,    -1,
     112,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,    -1,   125,    -1,    -1,    -1,   129,   130,    -1,
     132,    -1,   134,    -1,    -1,   137,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,    -1,    -1,   150,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   164,    -1,    -1,    -1,   168,    -1,    -1,   171,
      -1,    -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,   189,   190,   191,
     192,    -1,    -1,   195,    -1,   197,    -1,   199,    -1,   201,
     202,   203,   204,    -1,    -1,   207,   208,   209,    -1,    -1,
     212,    -1,    -1,    -1,   216,   217,    -1,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,
      -1,    -1,   234,    -1,   236,   237,   238,   239,    -1,    -1,
      -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,   250,    -1,
      -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,   260,   261,
     262,   263,   264,   265,   266,    -1,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,    -1,    -1,   279,    -1,   281,
     282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,   298,    -1,    -1,   301,
     302,   303,    -1,    -1,   306,    -1,   308,   309,    -1,    -1,
     312,    -1,    -1,   315,    -1,   317,   318,    -1,   320,    -1,
      -1,   323,    -1,    -1,   326,   327,    -1,   329,   330,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   339,    -1,    -1,
      -1,    -1,    -1,   345,    -1,   347,    -1,    -1,   350,    -1,
      -1,    -1,    -1,   355,   356,    -1,    -1,    -1,    -1,   361,
      -1,    -1,    -1,   365
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    10,    11,    21,    44,    53,    64,    88,    89,    90,
      98,   108,   116,   125,   157,   170,   180,   248,   249,   252,
     260,   266,   270,   277,   280,   294,   326,   335,   337,   340,
     383,   391,   392,   393,   394,   490,   505,   507,   509,   511,
     515,   516,   652,   658,   663,   666,   689,   695,   698,   700,
     706,   709,   712,   718,   720,   721,   769,   788,   790,   796,
     797,   798,   799,    70,   216,   221,   494,   308,   311,   787,
     791,   787,   361,   792,    38,    70,   312,   411,   494,   149,
     697,    38,    70,   312,   494,   657,   144,   146,   147,   176,
     289,   314,   319,   389,   659,   759,   760,   766,   782,   783,
     713,   664,    58,   239,   719,    72,   726,   266,   787,   667,
     792,   759,   800,   519,   521,   522,   224,   771,   701,   323,
     311,   699,   789,   149,   502,     4,     5,     7,     8,    13,
      17,    18,    19,    21,    26,    28,    29,    31,    35,    39,
      43,    45,    46,    48,    49,    51,    52,    53,    54,    55,
      56,    58,    59,    61,    66,    71,    72,    73,    76,    81,
      82,    92,    93,    97,    99,   100,   101,   104,   106,   107,
     109,   110,   112,   114,   115,   118,   121,   122,   123,   125,
     129,   130,   132,   134,   137,   143,   145,   150,   151,   164,
     168,   171,   175,   181,   182,   184,   189,   190,   191,   192,
     195,   197,   199,   201,   202,   203,   204,   207,   208,   209,
     212,   216,   217,   219,   220,   221,   222,   231,   234,   236,
     237,   238,   239,   245,   250,   256,   260,   261,   262,   263,
     264,   265,   266,   268,   269,   273,   274,   275,   276,   279,
     281,   282,   283,   294,   295,   298,   301,   302,   303,   306,
     308,   309,   312,   315,   317,   318,   320,   323,   326,   327,
     329,   330,   334,   339,   345,   347,   350,   355,   356,   361,
     365,   757,   759,   763,   767,   768,   270,   383,   517,     0,
     108,   118,   388,   710,   756,   757,   763,   757,   502,   508,
     792,   510,    12,   793,   758,   763,   148,   412,   311,   396,
     131,   758,   148,   656,   152,   787,   782,   359,   660,   134,
     184,   295,   308,   714,   715,   787,   502,     5,    19,    24,
      25,    36,    37,    38,    42,    46,    48,    62,    63,    67,
      68,    70,    74,    75,    76,    81,    83,    86,   116,   117,
     119,   120,   124,   135,   139,   143,   148,   157,   158,   170,
     174,   185,   188,   192,   195,   196,   200,   201,   210,   211,
     213,   214,   232,   238,   251,   252,   259,   265,   268,   296,
     297,   302,   304,   305,   307,   314,   317,   318,   319,   324,
     325,   326,   328,   339,   342,   343,   345,   346,   351,   353,
     354,   365,   375,   376,   381,   383,   385,   388,   389,   538,
     539,   540,   541,   544,   545,   546,   547,   548,   553,   557,
     742,   745,   749,   753,   754,   759,   761,   763,   722,   800,
     512,   159,   655,   669,   670,   756,   321,   793,   520,     9,
      94,   288,   289,   290,   291,   300,   526,   527,   528,   529,
     530,   770,    49,    63,    64,    71,   112,   134,   151,   152,
     167,   181,   237,   276,   308,   311,   312,   355,   476,   702,
     759,   760,   765,   777,   359,   506,   655,   787,   756,   521,
     517,   384,   763,   708,   707,   388,   492,   311,   654,   655,
     654,    39,   212,   212,   248,   794,   210,   757,   412,   333,
     477,   756,   117,   757,   763,   656,   212,    56,   661,   295,
     359,   387,   716,   669,   383,   383,   544,   538,   567,   383,
     383,   383,   383,   383,   383,   383,   383,   537,   537,   383,
     383,   383,   383,   742,   383,   383,   383,   383,   383,   383,
     383,   383,   383,   383,   538,   719,   383,   383,   383,   383,
     383,   383,   383,   538,   383,   537,   383,   383,   383,   383,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   537,
     383,   383,   383,   742,   383,   383,   383,   537,   537,   383,
     383,   383,   383,   383,   383,   544,   544,   544,   538,   812,
     813,   763,   763,   558,    12,   227,   363,   111,   133,   163,
     172,   206,   367,   368,   369,   542,    22,    95,   162,   177,
     200,   210,   247,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,    47,   370,   761,   383,   388,    56,   727,
     513,   514,   756,   670,   668,   266,   795,   794,   332,   801,
     802,   377,   532,   533,   534,   530,   772,   773,   774,   131,
     162,   704,   383,    70,   311,   177,   358,   705,   178,   636,
     638,   703,   704,   295,   308,   636,   704,   295,   295,   350,
      59,   277,   384,   802,   804,   805,   806,   515,    25,   139,
     711,   743,   761,   763,   763,    86,   422,   464,   756,   387,
      39,   248,   117,   397,   756,   152,   696,   218,   654,   257,
     354,   662,   242,   715,   654,   717,   665,   538,     9,    94,
     563,   619,   357,   569,   538,   384,   538,   566,   566,   538,
     538,    94,   563,   619,   384,   384,   538,   538,   538,   538,
     753,   538,   812,    77,    78,    79,    80,    81,   140,   141,
     142,   143,   192,   193,   194,   195,   201,   238,   267,   268,
     356,   364,   365,   614,   616,    94,   560,   538,   538,   538,
     538,   614,   383,   538,    94,   563,   538,   538,    94,   563,
     538,   538,   538,   541,   538,   538,   538,   538,   538,   538,
     563,   563,   538,   538,    94,   563,   538,   130,   615,   616,
     615,   538,    30,   173,   322,   538,   538,   384,   384,   753,
     563,   563,   538,   538,   384,   387,   384,   270,   383,   809,
     810,   538,   388,   389,   559,   782,   538,   538,   538,   540,
     120,   210,   213,   325,   334,     9,    13,   540,   543,   541,
     541,   383,   544,   541,    22,   162,   177,   247,   541,   541,
     541,   541,   541,   158,   541,   158,   541,   541,   541,   541,
     541,   759,   760,   764,   544,   549,   763,   153,   387,   321,
     270,   277,   346,   347,   383,   405,   671,   674,   800,     9,
      94,   808,   387,   523,   538,   751,   763,   387,   134,   181,
     219,   276,   775,   776,   779,   780,   756,   377,   412,   756,
     760,   538,   185,   214,   328,   639,   640,   705,   763,   703,
     705,   756,   705,   705,   283,   691,   692,   753,   226,   632,
     638,   807,    47,   491,   655,    87,   253,   408,   409,   410,
     422,   764,   395,   763,   358,   620,   756,   183,   671,   387,
     563,   384,   564,   538,   103,   357,   568,    14,   384,   387,
     384,   384,   387,   554,   384,   377,   387,   387,   384,   384,
     384,   384,   384,   131,   556,   384,   387,   387,   387,   376,
     538,   387,   563,   384,   384,   384,   563,   384,   387,   384,
     384,   162,   384,   387,   387,   387,   387,   384,   384,   384,
     387,   131,   387,   563,   384,   384,   387,   387,   384,   131,
     538,   131,   538,   131,   538,   131,   384,   387,   384,   384,
     384,   384,   387,   384,   566,   588,   589,   590,   270,   383,
     518,   332,   814,   386,   763,   134,   181,   276,   778,   278,
     120,   213,   325,   334,   383,    12,   538,   812,   114,   624,
     541,   383,   544,   541,   538,   538,   534,   550,   551,   552,
     388,   314,   762,   514,   756,   406,   672,   383,   677,   682,
     677,   384,   405,   673,   750,   751,   753,   675,   803,   533,
     131,   159,   524,   525,   631,   632,   648,   535,   535,   388,
     773,   323,   783,   784,   389,   781,   703,   384,   763,   217,
     387,   705,   703,   387,   690,   278,   367,   680,    32,   636,
     367,   681,     6,    10,    18,    40,    51,    62,    87,    92,
      93,    98,   104,   109,   121,   126,   150,   199,   226,   249,
     253,   264,   414,   416,   417,   420,   421,   464,   493,   495,
     496,   497,   628,   764,    68,   760,   367,   387,   409,   387,
     409,   367,   177,   383,   398,   403,   413,   415,   416,   478,
     479,   621,   631,   653,   218,   687,   158,   538,   384,   538,
     316,   538,   538,   106,    24,    28,    42,    73,    76,    84,
     160,   281,   320,   336,   565,   538,   565,   566,   384,   158,
     158,   662,   538,   566,   538,   538,   538,   538,   384,   538,
     384,   384,   538,   538,   538,   538,   538,   566,   158,   538,
     538,   538,   384,   538,   538,   538,   131,   538,   131,   538,
     131,   538,   538,   538,   384,   526,   589,   518,   384,   808,
     388,   388,   388,   782,   538,   812,   540,   384,   387,   384,
     544,    12,   538,   812,   624,   614,   614,   538,   384,   387,
     763,   723,   526,   678,   679,   753,   683,   387,   383,   674,
     384,   384,   387,   801,   516,   270,   383,   385,   570,   571,
     572,   573,   574,   583,   584,   598,   649,   128,   183,   531,
     648,   637,   638,   525,    14,   536,   760,   763,   377,   763,
     164,   680,   389,   782,   705,   112,   355,   640,   640,   620,
     692,   620,    86,   538,   686,   633,    86,   462,   463,   764,
      50,    60,   152,   169,   429,   432,   433,   472,   474,   501,
     501,   681,   501,   681,   321,    68,   760,   167,   309,   127,
     235,   474,   501,   167,   367,   367,   309,   501,    32,    14,
     321,   504,   367,   367,   414,    41,    42,    47,   418,   387,
     383,   388,   428,   434,   755,   763,   367,   537,   120,   325,
     409,   409,    83,   124,   185,   214,   328,   643,   764,   756,
     403,   404,   405,   426,   427,   428,   429,   413,    14,   149,
     252,   400,   729,   387,   415,   341,   482,   218,   538,   178,
     641,   100,   538,   384,   538,   316,   383,   443,   443,   383,
     441,   442,   160,   160,   384,   384,   555,   538,   538,   384,
     562,   632,   387,   387,   384,   387,   384,   384,   384,   384,
     387,   384,   384,   538,   384,   128,   384,   384,   387,   387,
     387,   384,   538,   384,   538,   384,   538,   384,   384,   384,
     532,   384,   811,   388,   488,   384,   566,   540,   384,   387,
     384,   535,   552,   149,   252,   728,   532,   387,   680,   684,
     685,   686,   682,   676,   674,   750,   597,   763,    65,   154,
     166,   174,   205,   259,   300,   582,   620,   387,   756,   597,
      99,   229,   644,   645,   650,   337,   162,   760,   763,   388,
     175,     9,    24,    86,   218,   538,   786,   778,   680,   631,
     538,   634,   752,   487,   755,    44,   127,   235,   333,   431,
     473,   430,   431,   487,   755,   643,   755,   760,   463,   537,
     169,   169,   755,   755,   764,   760,   755,   629,   630,   753,
     756,   120,   325,    54,    55,    86,   101,   123,   245,   423,
     424,   277,   681,   681,   497,   426,   763,     7,   122,   503,
     246,   430,   466,   435,   388,   643,   765,   384,   384,   384,
     387,    14,    14,   383,   404,   415,    31,   137,   484,   756,
     640,   688,   614,   538,   214,   214,   384,   614,   614,   272,
     561,   538,   538,   566,   538,   614,   538,   538,   538,   538,
     384,   384,   384,   591,   809,   763,   384,   566,   536,   159,
     407,   679,   686,   384,   387,   804,   585,   592,   597,   570,
     166,   166,   228,   599,   166,   174,   259,   599,   583,   570,
     136,   625,   572,    14,   617,   618,   594,   595,   762,   762,
     389,   646,   647,   279,   377,   242,   250,   273,   785,   784,
     538,   641,   387,    15,    89,   635,   538,   169,   169,   474,
     475,   487,   479,    98,   277,   498,   487,   499,   387,   635,
     463,    86,   344,   419,   384,   763,   756,    23,    27,    28,
      42,    73,    76,    84,    96,   110,   123,   160,   215,   244,
     274,   315,   319,   320,   345,   348,   349,   436,   438,   439,
     440,   763,   413,   399,   413,   427,   404,   401,   383,   169,
     384,   384,   384,   387,   384,   384,   743,   384,   384,   387,
     384,   384,   384,   384,   384,   384,   384,   425,   525,   637,
     384,   724,   425,   686,   332,   384,   631,   593,   386,   166,
     583,   599,   599,   166,   218,   218,   341,    32,   138,   622,
     763,   608,   609,   526,   651,   782,   387,   197,    52,   329,
     242,   680,   752,   487,   479,   383,    86,    86,   434,   436,
     630,   383,   467,   383,   445,   450,   451,    47,    86,   210,
     213,   235,   333,   352,   448,   449,   452,   453,   454,   465,
      86,   218,   448,   449,   458,   459,   460,   450,   441,   233,
     383,   442,   447,   437,   441,   445,   441,   447,   452,   383,
     458,   450,   450,   383,    51,   461,   383,    18,    86,   274,
     448,   449,   455,   456,   457,   455,   388,   804,   400,   384,
     801,   485,   486,   763,   337,   214,   538,   531,   531,   311,
     808,   618,   637,   573,   570,   583,   166,   166,   570,   583,
     576,   575,   577,   626,   752,   623,   631,   606,   607,   532,
      49,   730,   647,   786,   635,   383,   383,   485,    76,   319,
     375,   376,   744,   745,   503,   461,   468,   763,   187,   469,
     214,   281,   336,   444,    86,   448,   449,    86,   448,   449,
     462,   744,   213,   169,   454,   169,    76,   211,   213,   319,
     742,   748,   749,   337,   460,   455,   447,   214,   383,   455,
     444,   455,   214,   214,   760,   214,    25,   139,   213,   375,
     376,   742,   746,   749,    86,   457,   763,   402,   384,   387,
     635,   383,   693,   694,   753,   384,   384,   756,   586,   218,
     579,   583,   583,   218,   581,   538,   538,   383,   360,   387,
     627,   635,   538,   637,   126,   149,   340,   601,   602,   605,
     596,   105,   113,   225,   313,   731,   732,   179,   733,   485,
     485,   384,   749,   749,   500,   384,   387,   132,   231,   282,
     218,   470,   384,   366,   446,   744,   120,   213,   325,   747,
     742,   537,   742,   211,   384,   489,   743,   446,   384,   384,
     384,   749,   749,   347,   804,    51,   168,   480,   481,   482,
     483,   486,   214,   387,   680,   725,   809,   578,   341,   580,
     341,   613,   763,   752,   474,   474,   602,   425,    32,    32,
     105,    32,   732,   293,   313,   734,   735,   384,   384,   480,
     503,   763,    88,   337,   537,   384,   387,   458,   450,   452,
     760,   681,   483,   635,   384,   694,   686,   730,   587,   538,
     383,   538,   383,   384,   387,   635,   128,   600,   600,   743,
     743,    32,   743,    32,    32,   735,   466,   480,    34,   212,
     255,   277,   471,   471,   452,   743,    83,   124,   139,   185,
     214,   328,   642,   733,   631,   613,   613,   763,   136,   166,
     226,   604,   603,   743,   743,   743,     4,    86,   213,   218,
     218,   149,   736,   637,   384,   384,    32,    32,   383,   383,
     337,    88,   214,   383,   738,   235,   610,   611,   612,   763,
     612,   471,   471,   179,   263,   737,   384,   389,   739,   740,
     753,   277,   741,   384,   387,   384,   782,   384,   387,   693,
     611,   740
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (session, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, session)
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
		  Type, Value, session); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, drizzled::Session *session)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, session)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    drizzled::Session *session;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (session);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, drizzled::Session *session)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, session)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    drizzled::Session *session;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, session);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, drizzled::Session *session)
#else
static void
yy_reduce_print (yyvsp, yyrule, session)
    YYSTYPE *yyvsp;
    int yyrule;
    drizzled::Session *session;
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
		       		       , session);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, session); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, drizzled::Session *session)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, session)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    drizzled::Session *session;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (session);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (drizzled::Session *session);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
yyparse (drizzled::Session *session)
#else
int
yyparse (session)
    drizzled::Session *session;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
        case 2:

/* Line 1455 of yacc.c  */
#line 805 "drizzled/sql_yacc.yy"
    {
            if (!(YYSession->lex().select_lex.options & OPTION_FOUND_COMMENT))
            {
              my_message(ER_EMPTY_QUERY, ER(ER_EMPTY_QUERY), MYF(0));
              DRIZZLE_YYABORT;
            }
            else
            {
              YYSession->lex().statement= new statement::EmptyQuery(YYSession);
            }
          }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 816 "drizzled/sql_yacc.yy"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 858 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::catalog::Create(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 862 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateTable(YYSession, (yyvsp[(5) - (5)].table), (yyvsp[(2) - (5)].num));

            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(5) - (5)].table), NULL,
                                                     TL_OPTION_UPDATING,
                                                     TL_WRITE))
              DRIZZLE_YYABORT;
            Lex.col_list.clear();
          }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 872 "drizzled/sql_yacc.yy"
    {
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 876 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateIndex(YYSession);
          }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 880 "drizzled/sql_yacc.yy"
    {
            if (not Lex.current_select->add_table_to_list(Lex.session, (yyvsp[(9) - (13)].table),
                                                            NULL,
                                                            TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;

            parser::buildKey(&Lex, (yyvsp[(4) - (13)].key_type), (yyvsp[(6) - (13)].lex_str));
          }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 889 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::CreateSchema(YYSession);
          }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 893 "drizzled/sql_yacc.yy"
    {
            Lex.name= (yyvsp[(4) - (6)].lex_str);
          }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 900 "drizzled/sql_yacc.yy"
    { }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 902 "drizzled/sql_yacc.yy"
    {
             Lex.current_select->set_braces(1);
           }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 905 "drizzled/sql_yacc.yy"
    {}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 907 "drizzled/sql_yacc.yy"
    { }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 909 "drizzled/sql_yacc.yy"
    { }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 911 "drizzled/sql_yacc.yy"
    { }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 915 "drizzled/sql_yacc.yy"
    {}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 917 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(0);
          }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 920 "drizzled/sql_yacc.yy"
    {}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 922 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(1);
          }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 925 "drizzled/sql_yacc.yy"
    {}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 930 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)(YYSession->lex().statement))->is_create_table_like= true;

            if (not YYSession->lex().select_lex.add_table_to_list(YYSession, (yyvsp[(2) - (2)].table), NULL, 0, TL_READ))
              DRIZZLE_YYABORT;
          }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 940 "drizzled/sql_yacc.yy"
    {
          }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 949 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= TL_READ;
            if (Lex.sql_command == SQLCOM_INSERT)
            {
              delete Lex.statement;
              Lex.statement= new statement::InsertSelect(YYSession);
            }
            else if (Lex.sql_command == SQLCOM_REPLACE)
            {
              delete Lex.statement;
              Lex.statement= new statement::ReplaceSelect(YYSession);
            }
            /*
              The following work only with the local list, the global list
              is created correctly in this case
            */
            Lex.current_select->table_list.save_and_clear(&Lex.save_list);
            init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 970 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 974 "drizzled/sql_yacc.yy"
    {
            /*
              The following work only with the local list, the global list
              is created correctly in this case
            */
            Lex.current_select->table_list.push_front(&Lex.save_list);
          }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 984 "drizzled/sql_yacc.yy"
    {}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 999 "drizzled/sql_yacc.yy"
    {
            statement::CreateSchema *statement= (statement::CreateSchema *)Lex.statement;
            statement->schema_message.mutable_engine()->add_options()->set_name((yyvsp[(1) - (1)].lex_str).str);
          }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1004 "drizzled/sql_yacc.yy"
    {
            parser::buildReplicationOption(&Lex, true);
          }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1008 "drizzled/sql_yacc.yy"
    {
            parser::buildReplicationOption(&Lex, false);
          }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1012 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaDefiner(&Lex, (yyvsp[(2) - (2)].lex_str));
          }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1016 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaDefiner(&Lex, *session->user());
          }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1020 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaOption(&Lex, (yyvsp[(1) - (3)].lex_str).str, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1024 "drizzled/sql_yacc.yy"
    {
            parser::buildSchemaOption(&Lex, (yyvsp[(1) - (3)].lex_str).str, (yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1030 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1031 "drizzled/sql_yacc.yy"
    { (yyval.num)= true; }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1035 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1036 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; YYSession->lex().setExists(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1059 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_engine()->set_name((yyvsp[(3) - (3)].lex_str).str);
          }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1063 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_options()->set_comment((yyvsp[(3) - (3)].lex_str).str);
          }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1067 "drizzled/sql_yacc.yy"
    {
            Lex.table()->mutable_options()->set_auto_increment_value((yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1071 "drizzled/sql_yacc.yy"
    {
	    message::set_is_replicated(*Lex.table(), true);
          }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1075 "drizzled/sql_yacc.yy"
    {
	    message::set_is_replicated(*Lex.table(), false);
          }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1079 "drizzled/sql_yacc.yy"
    {
	    drizzled::identifier::User user((yyvsp[(2) - (2)].lex_str).str);
            message::set_definer(*Lex.table(), user);
          }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1084 "drizzled/sql_yacc.yy"
    {
            message::set_definer(*Lex.table(), *session->user());
          }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1088 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, "ROW_FORMAT", (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1092 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, "FILE", (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1096 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, (yyvsp[(1) - (3)].lex_str).str, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1100 "drizzled/sql_yacc.yy"
    {
            parser::buildEngineOption(&Lex, (yyvsp[(1) - (3)].lex_str).str, (yyvsp[(3) - (3)].ulonglong_number));
          }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1108 "drizzled/sql_yacc.yy"
    {}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1109 "drizzled/sql_yacc.yy"
    {}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1113 "drizzled/sql_yacc.yy"
    { }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1114 "drizzled/sql_yacc.yy"
    { }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1119 "drizzled/sql_yacc.yy"
    {
        }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1124 "drizzled/sql_yacc.yy"
    {
            if (not parser::buildCollation(&Lex, (yyvsp[(4) - (4)].charset)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1134 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateSchema *)Lex.statement)->schema_message.set_collation((yyvsp[(4) - (4)].charset)->name);
          }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1140 "drizzled/sql_yacc.yy"
    {}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1141 "drizzled/sql_yacc.yy"
    {}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1142 "drizzled/sql_yacc.yy"
    {}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1143 "drizzled/sql_yacc.yy"
    {}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1144 "drizzled/sql_yacc.yy"
    {}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1145 "drizzled/sql_yacc.yy"
    {}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1150 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).str= YYSession->mem.strmake((yyvsp[(1) - (1)].symbol).str, (yyvsp[(1) - (1)].symbol).length);
            (yyval.lex_str).length= (yyvsp[(1) - (1)].symbol).length;
          }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1157 "drizzled/sql_yacc.yy"
    {}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1174 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1181 "drizzled/sql_yacc.yy"
    {
            parser::buildKey(&Lex, (yyvsp[(1) - (7)].key_type), (yyvsp[(2) - (7)].lex_str));
          }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1186 "drizzled/sql_yacc.yy"
    {
            parser::buildKey(&Lex, (yyvsp[(2) - (8)].key_type), (yyvsp[(3) - (8)].lex_str).str ? (yyvsp[(3) - (8)].lex_str) : (yyvsp[(1) - (8)].lex_str));
          }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1190 "drizzled/sql_yacc.yy"
    {
            parser::buildForeignKey(&Lex, (yyvsp[(1) - (8)].lex_str).str ? (yyvsp[(1) - (8)].lex_str) : (yyvsp[(4) - (8)].lex_str), (yyvsp[(8) - (8)].table));
          }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1194 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1198 "drizzled/sql_yacc.yy"
    {
            Lex.col_list.clear(); /* Alloced by memory::sql_alloc */
          }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1213 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_str; }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1214 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1218 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1223 "drizzled/sql_yacc.yy"
    {
            parser::buildCreateFieldIdent(&Lex);
          }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1227 "drizzled/sql_yacc.yy"
    {
            statement::CreateTable *statement= (statement::CreateTable *)Lex.statement;

            if (Lex.field())
            {
              Lex.field()->set_name((yyvsp[(1) - (4)].lex_str).str);
            }

            if (add_field_to_list(Lex.session, &(yyvsp[(1) - (4)].lex_str), (enum enum_field_types) (yyvsp[(3) - (4)].field_val),
                                  Lex.length, Lex.dec, Lex.type,
                                  statement->column_format,
                                  statement->default_value, statement->on_update_value,
                                  &statement->comment,
                                  statement->change, &Lex.interval_list, Lex.charset))
              DRIZZLE_YYABORT;

            Lex.setField(NULL);
          }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1249 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=parser::buildTimestampColumn(&Lex, NULL);
          }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1253 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=parser::buildTimestampColumn(&Lex, (yyvsp[(3) - (5)].lex_str).str);
          }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1257 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_DATETIME;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::DATETIME);
          }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1264 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= (yyvsp[(1) - (2)].field_val);
          }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1268 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarcharColumn(&Lex, "1");
          }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1272 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarcharColumn(&Lex, (yyvsp[(3) - (5)].lex_str).str);
          }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1276 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_BLOB;
            Lex.length=(char*) 0; /* use default length */

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::BLOB);
          }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1284 "drizzled/sql_yacc.yy"
    {
            Lex.interval_list.clear();
          }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1288 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_ENUM;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::ENUM);
          }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1295 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildVarbinaryColumn(&Lex, (yyvsp[(3) - (5)].lex_str).str);
          }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1299 "drizzled/sql_yacc.yy"
    {
            assert ((yyvsp[(1) - (2)].field_val) == DRIZZLE_TYPE_DOUBLE);
            (yyval.field_val)= parser::buildDoubleColumn(&Lex);
          }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1304 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_DATE;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::DATE);
          }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1311 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)=DRIZZLE_TYPE_TIME;

            if (Lex.field())
              Lex.field()->set_type(message::Table::Field::TIME);
          }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1318 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildBlobColumn(&Lex);
          }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1322 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1326 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1330 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildDecimalColumn(&Lex);
          }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1334 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildUuidColumn(&Lex);
          }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1338 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildBooleanColumn(&Lex);
          }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1342 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildSerialColumn(&Lex);
          }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1349 "drizzled/sql_yacc.yy"
    { }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1351 "drizzled/sql_yacc.yy"
    { }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1353 "drizzled/sql_yacc.yy"
    { }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1358 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildIntegerColumn(&Lex, DRIZZLE_TYPE_LONG, ((yyvsp[(3) - (4)].boolean) or (yyvsp[(4) - (4)].boolean)));
          }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1362 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= parser::buildIntegerColumn(&Lex, DRIZZLE_TYPE_LONGLONG, ((yyvsp[(3) - (4)].boolean) or (yyvsp[(4) - (4)].boolean)));
          }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1369 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1373 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1377 "drizzled/sql_yacc.yy"
    {
            (yyval.field_val)= DRIZZLE_TYPE_DOUBLE;
          }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1384 "drizzled/sql_yacc.yy"
    { Lex.dec=Lex.length= (char*)0; }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1386 "drizzled/sql_yacc.yy"
    { Lex.length=(yyvsp[(2) - (3)].lex_str).str; Lex.dec= (char*)0; }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1388 "drizzled/sql_yacc.yy"
    {}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1393 "drizzled/sql_yacc.yy"
    {
            Lex.length= (yyvsp[(2) - (5)].lex_str).str;
            Lex.dec= (yyvsp[(4) - (5)].lex_str).str;
          }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1400 "drizzled/sql_yacc.yy"
    { Lex.length=(char*) 0; /* use default length */ }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1401 "drizzled/sql_yacc.yy"
    { Lex.length= (yyvsp[(2) - (3)].lex_str).str; }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1405 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1406 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1407 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; Lex.type|= UNSIGNED_FLAG; }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1411 "drizzled/sql_yacc.yy"
    { }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1412 "drizzled/sql_yacc.yy"
    { }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1416 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1417 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; Lex.type|= UNSIGNED_FLAG; }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1422 "drizzled/sql_yacc.yy"
    { Lex.dec=Lex.length= (char*)0; }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1424 "drizzled/sql_yacc.yy"
    { Lex.length=Lex.dec= (char*)0; }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1426 "drizzled/sql_yacc.yy"
    {}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1431 "drizzled/sql_yacc.yy"
    {
            Lex.type&= ~ NOT_NULL_FLAG;
          }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1435 "drizzled/sql_yacc.yy"
    {
            Lex.type|= NOT_NULL_FLAG;

            if (Lex.field())
            {
              Lex.field()->mutable_constraints()->set_is_notnull(true);
            }
          }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1447 "drizzled/sql_yacc.yy"
    {
            parser::buildPrimaryOnColumn(&Lex);
          }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1451 "drizzled/sql_yacc.yy"
    {
            parser::buildKeyOnColumn(&Lex);
          }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1455 "drizzled/sql_yacc.yy"
    {
            parser::buildKeyOnColumn(&Lex);
          }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1461 "drizzled/sql_yacc.yy"
    {}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1463 "drizzled/sql_yacc.yy"
    { }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1465 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value= (yyvsp[(3) - (3)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1472 "drizzled/sql_yacc.yy"
    { }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1476 "drizzled/sql_yacc.yy"
    { }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1478 "drizzled/sql_yacc.yy"
    { }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1480 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value= (yyvsp[(3) - (3)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1487 "drizzled/sql_yacc.yy"
    { }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1491 "drizzled/sql_yacc.yy"
    {}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1492 "drizzled/sql_yacc.yy"
    {}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1496 "drizzled/sql_yacc.yy"
    {}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1502 "drizzled/sql_yacc.yy"
    { }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1504 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1511 "drizzled/sql_yacc.yy"
    {
            if (Lex.charset && !my_charset_same(Lex.charset,(yyvsp[(2) - (2)].charset)))
            {
              my_error(ER_COLLATION_CHARSET_MISMATCH, MYF(0),
                       (yyvsp[(2) - (2)].charset)->name,Lex.charset->csname);
              DRIZZLE_YYABORT;
            }
            else
            {
              Lex.charset=(yyvsp[(2) - (2)].charset);
            }
          }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1524 "drizzled/sql_yacc.yy"
    { }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1528 "drizzled/sql_yacc.yy"
    {}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1529 "drizzled/sql_yacc.yy"
    {}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1533 "drizzled/sql_yacc.yy"
    {}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1539 "drizzled/sql_yacc.yy"
    { }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1541 "drizzled/sql_yacc.yy"
    {
            parser::buildAutoOnColumn(&Lex);
          }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1545 "drizzled/sql_yacc.yy"
    {
            (void)parser::buildSerialColumn(&Lex);
          }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1549 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1556 "drizzled/sql_yacc.yy"
    { }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1560 "drizzled/sql_yacc.yy"
    {}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1561 "drizzled/sql_yacc.yy"
    {}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1565 "drizzled/sql_yacc.yy"
    {}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1571 "drizzled/sql_yacc.yy"
    { }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1573 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value= new Item_func_now_local();
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1580 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->default_value=(yyvsp[(2) - (2)].item);
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1587 "drizzled/sql_yacc.yy"
    {
            ((statement::AlterTable *)Lex.statement)->on_update_value= new Item_func_now_local();
          }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1591 "drizzled/sql_yacc.yy"
    { }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1595 "drizzled/sql_yacc.yy"
    { }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1597 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            statement->comment= (yyvsp[(2) - (2)].lex_str);

            if (Lex.field())
              Lex.field()->set_comment((yyvsp[(2) - (2)].lex_str).str);
          }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1608 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.charset)=get_charset_by_name((yyvsp[(1) - (1)].lex_str).str)))
            {
              my_error(ER_UNKNOWN_COLLATION, MYF(0), (yyvsp[(1) - (1)].lex_str).str);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1618 "drizzled/sql_yacc.yy"
    { (yyval.charset)=(yyvsp[(1) - (1)].charset); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1619 "drizzled/sql_yacc.yy"
    { (yyval.charset)=NULL; }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1623 "drizzled/sql_yacc.yy"
    {}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1624 "drizzled/sql_yacc.yy"
    {}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1634 "drizzled/sql_yacc.yy"
    {
            (yyval.table)=(yyvsp[(2) - (5)].table);
          }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1641 "drizzled/sql_yacc.yy"
    { Lex.ref_list.clear(); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1647 "drizzled/sql_yacc.yy"
    { Lex.ref_list.push_back(new Key_part_spec((yyvsp[(3) - (3)].lex_str), 0)); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1649 "drizzled/sql_yacc.yy"
    {
            Lex.ref_list.clear();
            Lex.ref_list.push_back(new Key_part_spec((yyvsp[(1) - (1)].lex_str), 0));
          }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1657 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_UNDEFINED; }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1659 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_FULL; }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1661 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_PARTIAL; }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1663 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->fk_match_option= drizzled::message::Table::ForeignKeyConstraint::MATCH_SIMPLE; }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1668 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
          }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1673 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= (yyvsp[(3) - (3)].m_fk_option);
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
          }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1678 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= drizzled::message::Table::ForeignKeyConstraint::OPTION_UNDEF;
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= (yyvsp[(3) - (3)].m_fk_option);
          }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1684 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= (yyvsp[(3) - (6)].m_fk_option);
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= (yyvsp[(6) - (6)].m_fk_option);
          }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1690 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->fk_update_opt= (yyvsp[(6) - (6)].m_fk_option);
            ((statement::CreateTable *)Lex.statement)->fk_delete_opt= (yyvsp[(3) - (6)].m_fk_option);
          }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1697 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_RESTRICT; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1698 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_CASCADE; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1699 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_SET_NULL; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1700 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_NO_ACTION; }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1701 "drizzled/sql_yacc.yy"
    { (yyval.m_fk_option)= drizzled::message::Table::ForeignKeyConstraint::OPTION_SET_DEFAULT;  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1705 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::MULTIPLE; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1709 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::PRIMARY; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1710 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::UNIQUE; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1714 "drizzled/sql_yacc.yy"
    {}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1715 "drizzled/sql_yacc.yy"
    {}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1719 "drizzled/sql_yacc.yy"
    {}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1724 "drizzled/sql_yacc.yy"
    {}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1725 "drizzled/sql_yacc.yy"
    {}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1726 "drizzled/sql_yacc.yy"
    {}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1730 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::MULTIPLE; }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1731 "drizzled/sql_yacc.yy"
    { (yyval.key_type)= Key::UNIQUE; }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1735 "drizzled/sql_yacc.yy"
    {
            ((statement::CreateTable *)Lex.statement)->key_create_info= default_key_create_info;
          }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1752 "drizzled/sql_yacc.yy"
    {}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1762 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.algorithm= (yyvsp[(2) - (2)].key_alg); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1768 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.block_size= (yyvsp[(3) - (3)].ulong_num); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1770 "drizzled/sql_yacc.yy"
    { ((statement::CreateTable *)Lex.statement)->key_create_info.comment= (yyvsp[(2) - (2)].lex_str); }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1774 "drizzled/sql_yacc.yy"
    { (yyval.key_alg)= HA_KEY_ALG_BTREE; }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1775 "drizzled/sql_yacc.yy"
    { (yyval.key_alg)= HA_KEY_ALG_HASH; }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1779 "drizzled/sql_yacc.yy"
    { Lex.col_list.push_back((yyvsp[(3) - (4)].key_part)); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1780 "drizzled/sql_yacc.yy"
    { Lex.col_list.push_back((yyvsp[(1) - (2)].key_part)); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1784 "drizzled/sql_yacc.yy"
    { (yyval.key_part)=new Key_part_spec((yyvsp[(1) - (1)].lex_str), 0); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1786 "drizzled/sql_yacc.yy"
    {
            int key_part_len= atoi((yyvsp[(3) - (4)].lex_str).str);
            if (!key_part_len)
            {
              my_error(ER_KEY_PART_0, MYF(0), (yyvsp[(1) - (4)].lex_str).str);
            }
            (yyval.key_part)=new Key_part_spec((yyvsp[(1) - (4)].lex_str), (uint) key_part_len);
          }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1797 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_str; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1798 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1802 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= null_lex_str; }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1803 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)= (yyvsp[(2) - (2)].lex_str); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1807 "drizzled/sql_yacc.yy"
    { Lex.interval_list.push_back((yyvsp[(1) - (1)].string)); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1808 "drizzled/sql_yacc.yy"
    { Lex.interval_list.push_back((yyvsp[(3) - (3)].string)); }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1816 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= new statement::AlterTable(YYSession, (yyvsp[(5) - (5)].table));
            Lex.statement= statement;
            Lex.duplicates= DUP_ERROR;
            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(5) - (5)].table), NULL, TL_OPTION_UPDATING))
            {
              DRIZZLE_YYABORT;
            }

            Lex.col_list.clear();
            Lex.select_lex.init_order();
            Lex.select_lex.db= const_cast<char *>(((TableList*) Lex.select_lex.table_list.first)->getSchemaName());
          }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1830 "drizzled/sql_yacc.yy"
    {}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1832 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::AlterSchema(YYSession);
          }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1836 "drizzled/sql_yacc.yy"
    {
            Lex.name= (yyvsp[(3) - (5)].lex_str);
            if (Lex.name.str == NULL && Lex.copy_db_to(&Lex.name.str, &Lex.name.length))
              DRIZZLE_YYABORT;
          }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1846 "drizzled/sql_yacc.yy"
    {
            message::AlterTable::AlterTableOperation *alter_operation;
            alter_operation= Lex.alter_table()->add_operations();
            alter_operation->set_operation(message::AlterTable::AlterTableOperation::DISCARD_TABLESPACE);
          }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1852 "drizzled/sql_yacc.yy"
    {
            message::AlterTable::AlterTableOperation *alter_operation;
            alter_operation= Lex.alter_table()->add_operations();
            alter_operation->set_operation(message::AlterTable::AlterTableOperation::IMPORT_TABLESPACE);
          }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1862 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_DEFAULT);
          }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1866 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_ONLINE);
          }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1870 "drizzled/sql_yacc.yy"
    {
            Lex.alter_table()->set_build_method(message::AlterTable::BUILD_OFFLINE);
          }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1882 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->change=0;
            statement->alter_info.flags.set(ALTER_ADD_COLUMN);
          }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1891 "drizzled/sql_yacc.yy"
    { }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1893 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ADD_INDEX);
          }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1899 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ADD_COLUMN);
            statement->alter_info.flags.set(ALTER_ADD_INDEX);
          }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1906 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            statement->change= (yyvsp[(3) - (3)].lex_str).str;
            statement->alter_info.flags.set(ALTER_CHANGE_COLUMN);
          }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1913 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            Lex.length= Lex.dec=0;
            Lex.type= 0;
            statement->default_value= statement->on_update_value= 0;
            statement->comment= null_lex_str;
            Lex.charset= NULL;
            statement->alter_info.flags.set(ALTER_CHANGE_COLUMN);
            statement->column_format= COLUMN_FORMAT_TYPE_DEFAULT;

            Lex.setField(NULL);
          }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1926 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            if (add_field_to_list(Lex.session,&(yyvsp[(3) - (6)].lex_str),
                                  (enum enum_field_types) (yyvsp[(5) - (6)].field_val),
                                  Lex.length, Lex.dec, Lex.type,
                                  statement->column_format,
                                  statement->default_value,
                                  statement->on_update_value,
                                  &statement->comment,
                                  (yyvsp[(3) - (6)].lex_str).str, &Lex.interval_list, Lex.charset))
              DRIZZLE_YYABORT;
          }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1941 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_DROP_COLUMN);
            message::AlterTable::AlterTableOperation *operation;
            operation= Lex.alter_table()->add_operations();
            operation->set_operation(message::AlterTable::AlterTableOperation::DROP_COLUMN);
            operation->set_drop_name((yyvsp[(3) - (3)].lex_str).str);
          }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1951 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, (yyvsp[(4) - (4)].lex_str).str, true);
          }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1955 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, "PRIMARY");
          }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1959 "drizzled/sql_yacc.yy"
    {
            parser::buildAddAlterDropIndex(&Lex, (yyvsp[(3) - (3)].lex_str).str);
          }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1963 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_KEYS_ONOFF);

            message::AlterTable::AlterKeysOnOff *alter_keys_operation;
            alter_keys_operation= Lex.alter_table()->mutable_alter_keys_onoff();
            alter_keys_operation->set_enable(false);
          }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1973 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_KEYS_ONOFF);
            message::AlterTable::AlterKeysOnOff *alter_keys_operation;
            alter_keys_operation= Lex.alter_table()->mutable_alter_keys_onoff();
            alter_keys_operation->set_enable(true);
          }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1982 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.alter_list.push_back(AlterColumn((yyvsp[(3) - (6)].lex_str).str,(yyvsp[(6) - (6)].item)));
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1989 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.alter_list.push_back(AlterColumn((yyvsp[(3) - (5)].lex_str).str, (Item*) 0));
            statement->alter_info.flags.set(ALTER_COLUMN_DEFAULT);
          }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1996 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;
            size_t dummy;

            Lex.select_lex.db=(yyvsp[(3) - (3)].table)->db.str;
            if (Lex.select_lex.db == NULL &&
                Lex.copy_db_to(&Lex.select_lex.db, &dummy))
            {
              DRIZZLE_YYABORT;
            }

            if (check_table_name((yyvsp[(3) - (3)].table)->table.str,(yyvsp[(3) - (3)].table)->table.length))
            {
              my_error(ER_WRONG_TABLE_NAME, MYF(0), (yyvsp[(3) - (3)].table)->table.str);
              DRIZZLE_YYABORT;
            }

            Lex.name= (yyvsp[(3) - (3)].table)->table;
            statement->alter_info.flags.set(ALTER_RENAME);

            message::AlterTable::RenameTable *rename_operation;
            rename_operation= Lex.alter_table()->mutable_rename();
            rename_operation->set_to_schema(Lex.select_lex.db);
            rename_operation->set_to_name(Lex.name.str);
          }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2022 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->create_info().table_charset=
            statement->create_info().default_table_charset= (yyvsp[(3) - (3)].charset);
            statement->create_info().used_fields|= (HA_CREATE_USED_CHARSET |
              HA_CREATE_USED_DEFAULT_CHARSET);
            statement->alter_info.flags.set(ALTER_CONVERT);
          }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2032 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_OPTIONS);
          }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2038 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_FORCE);
          }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2044 "drizzled/sql_yacc.yy"
    {
            statement::AlterTable *statement= (statement::AlterTable *)Lex.statement;

            statement->alter_info.flags.set(ALTER_ORDER);
          }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2052 "drizzled/sql_yacc.yy"
    {}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2053 "drizzled/sql_yacc.yy"
    {}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2057 "drizzled/sql_yacc.yy"
    { Lex.ignore= 0;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2058 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2062 "drizzled/sql_yacc.yy"
    {}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2064 "drizzled/sql_yacc.yy"
    {
            parser::storeAlterColumnPosition(&Lex, (yyvsp[(2) - (2)].lex_str).str);
          }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2068 "drizzled/sql_yacc.yy"
    {
            parser::storeAlterColumnPosition(&Lex, first_keyword);
          }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2074 "drizzled/sql_yacc.yy"
    {}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2075 "drizzled/sql_yacc.yy"
    {}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2076 "drizzled/sql_yacc.yy"
    {}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2081 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::StartTransaction(YYSession, (start_transaction_option_t)(yyvsp[(3) - (3)].num));
          }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 2087 "drizzled/sql_yacc.yy"
    { (yyval.num) = START_TRANS_NO_OPTIONS; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2089 "drizzled/sql_yacc.yy"
    {
            (yyval.num)= START_TRANS_OPT_WITH_CONS_SNAPSHOT;
          }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2096 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Analyze(YYSession);
          }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2100 "drizzled/sql_yacc.yy"
    {}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2105 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Check(YYSession);
          }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2109 "drizzled/sql_yacc.yy"
    {}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2114 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::RenameTable(YYSession);
          }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2118 "drizzled/sql_yacc.yy"
    {}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2128 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sl= Lex.current_select;
            if (!sl->add_table_to_list(Lex.session, (yyvsp[(1) - (3)].table),NULL,TL_OPTION_UPDATING,
                                       TL_IGNORE) ||
                !sl->add_table_to_list(Lex.session, (yyvsp[(3) - (3)].table),NULL,TL_OPTION_UPDATING,
                                       TL_IGNORE))
              DRIZZLE_YYABORT;
          }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2145 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Select(YYSession);
          }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2158 "drizzled/sql_yacc.yy"
    {
            if (parser::setup_select_in_parentheses(YYSession, &Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2168 "drizzled/sql_yacc.yy"
    {
            if (parser::setup_select_in_parentheses(YYSession, &Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2177 "drizzled/sql_yacc.yy"
    {
            Select_Lex * sel= Lex.current_select;
            if (Lex.current_select->set_braces(0))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (sel->linkage == UNION_TYPE &&
                sel->master_unit()->first_select()->braces)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2195 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if (sel->linkage != UNION_TYPE)
              init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2202 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2209 "drizzled/sql_yacc.yy"
    {}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2219 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->context.table_list=
              Lex.current_select->context.first_name_resolution_table=
                reinterpret_cast<TableList *>(Lex.current_select->table_list.first);
          }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2229 "drizzled/sql_yacc.yy"
    { }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 2239 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_DISTINCT;

            if (Lex.current_select->options & SELECT_DISTINCT && Lex.current_select->options & SELECT_ALL)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "ALL", "DISTINCT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 2249 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_ALL;

            if (Lex.current_select->options & SELECT_DISTINCT && Lex.current_select->options & SELECT_ALL)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "ALL", "DISTINCT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2262 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_SMALL_RESULT;

            if (Lex.current_select->options & SELECT_SMALL_RESULT && Lex.current_select->options & SELECT_BIG_RESULT)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "SELECT_SMALL_RESULT", "SELECT_SMALL_RESULT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2272 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->options|= SELECT_BIG_RESULT;

            if (Lex.current_select->options & SELECT_SMALL_RESULT && Lex.current_select->options & SELECT_BIG_RESULT)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "SELECT_SMALL_RESULT", "SELECT_SMALL_RESULT");
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2285 "drizzled/sql_yacc.yy"
    { Lex.current_select->options|= SELECT_STRAIGHT_JOIN; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2287 "drizzled/sql_yacc.yy"
    {
            if (check_simple_select(YYSession))
              DRIZZLE_YYABORT;
            Lex.current_select->options|= OPTION_BUFFER_RESULT;
          }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 2293 "drizzled/sql_yacc.yy"
    { }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2295 "drizzled/sql_yacc.yy"
    { }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 2297 "drizzled/sql_yacc.yy"
    {
            if (check_simple_select(YYSession))
              DRIZZLE_YYABORT;
            Lex.current_select->options|= OPTION_FOUND_ROWS;
          }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 2307 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE);
          }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 2311 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->
              set_lock_for_tables(TL_READ_WITH_SHARED_LOCKS);
          }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2321 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list( new Item_field(&YYSession->lex().current_select->context, NULL, NULL, "*"));
            YYSession->lex().current_select->with_wild++;
          }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2329 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list((yyvsp[(2) - (3)].item));
          }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2333 "drizzled/sql_yacc.yy"
    {
            assert((yyvsp[(1) - (4)].simple_string) < (yyvsp[(3) - (4)].simple_string));

            YYSession->add_item_to_list((yyvsp[(2) - (4)].item));

            if ((yyvsp[(4) - (4)].lex_str).str)
            {
              (yyvsp[(2) - (4)].item)->is_autogenerated_name= false;
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(4) - (4)].lex_str).str, (yyvsp[(4) - (4)].lex_str).length, system_charset_info);
            }
            else if (!(yyvsp[(2) - (4)].item)->name)
            {
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(1) - (4)].simple_string), (uint) ((yyvsp[(3) - (4)].simple_string) - (yyvsp[(1) - (4)].simple_string)), YYSession->charset());
            }
          }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2351 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            (yyval.simple_string)= (char*) lip->get_cpp_tok_start();
          }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 2358 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            (yyval.simple_string)= (char*) lip->get_cpp_tok_end();
          }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2365 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=null_lex_str;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 2366 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2367 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str); }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2368 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2369 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2373 "drizzled/sql_yacc.yy"
    {}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2374 "drizzled/sql_yacc.yy"
    {}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2380 "drizzled/sql_yacc.yy"
    {
            /*
              Design notes:
              Do not use a manually maintained stack like session->Lex.xxx_list,
              but use the internal bison stack ($$, $1 and $3) instead.
              Using the bison stack is:
              - more robust to changes in the grammar,
              - guaranteed to be in sync with the parser state,
              - better for performances (no memory allocation).
            */
            Item_cond_or *item1;
            Item_cond_or *item3;
            if (is_cond_or((yyvsp[(1) - (3)].item)))
            {
              item1= (Item_cond_or*) (yyvsp[(1) - (3)].item);
              if (is_cond_or((yyvsp[(3) - (3)].item)))
              {
                item3= (Item_cond_or*) (yyvsp[(3) - (3)].item);
                /*
                  (X1 OR X2) OR (Y1 OR Y2) ==> OR (X1, X2, Y1, Y2)
                */
                item3->add_at_head(item1->argument_list());
                (yyval.item) = (yyvsp[(3) - (3)].item);
              }
              else
              {
                /*
                  (X1 OR X2) OR Y ==> OR (X1, X2, Y)
                */
                item1->add((yyvsp[(3) - (3)].item));
                (yyval.item) = (yyvsp[(1) - (3)].item);
              }
            }
            else if (is_cond_or((yyvsp[(3) - (3)].item)))
            {
              item3= (Item_cond_or*) (yyvsp[(3) - (3)].item);
              /*
                X OR (Y1 OR Y2) ==> OR (X, Y1, Y2)
              */
              item3->add_at_head((yyvsp[(1) - (3)].item));
              (yyval.item) = (yyvsp[(3) - (3)].item);
            }
            else
            {
              /* X OR Y */
              (yyval.item) = new (YYSession->mem_root) Item_cond_or((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
            }
          }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2429 "drizzled/sql_yacc.yy"
    {
            /* XOR is a proprietary extension */
            (yyval.item) = new (YYSession->mem_root) Item_cond_xor((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2434 "drizzled/sql_yacc.yy"
    {
            /* See comments in rule expr: expr or expr */
            Item_cond_and *item1;
            Item_cond_and *item3;
            if (is_cond_and((yyvsp[(1) - (3)].item)))
            {
              item1= (Item_cond_and*) (yyvsp[(1) - (3)].item);
              if (is_cond_and((yyvsp[(3) - (3)].item)))
              {
                item3= (Item_cond_and*) (yyvsp[(3) - (3)].item);
                /*
                  (X1 AND X2) AND (Y1 AND Y2) ==> AND (X1, X2, Y1, Y2)
                */
                item3->add_at_head(item1->argument_list());
                (yyval.item) = (yyvsp[(3) - (3)].item);
              }
              else
              {
                /*
                  (X1 AND X2) AND Y ==> AND (X1, X2, Y)
                */
                item1->add((yyvsp[(3) - (3)].item));
                (yyval.item) = (yyvsp[(1) - (3)].item);
              }
            }
            else if (is_cond_and((yyvsp[(3) - (3)].item)))
            {
              item3= (Item_cond_and*) (yyvsp[(3) - (3)].item);
              /*
                X AND (Y1 AND Y2) ==> AND (X, Y1, Y2)
              */
              item3->add_at_head((yyvsp[(1) - (3)].item));
              (yyval.item) = (yyvsp[(3) - (3)].item);
            }
            else
            {
              /* X AND Y */
              (yyval.item) = new (YYSession->mem_root) Item_cond_and((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
            }
          }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2475 "drizzled/sql_yacc.yy"
    { (yyval.item)= negate_expression(YYSession, (yyvsp[(2) - (2)].item)); }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2477 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_istrue((yyvsp[(1) - (3)].item));
          }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2481 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isnottrue((yyvsp[(1) - (4)].item));
          }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2485 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isfalse((yyvsp[(1) - (3)].item));
          }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2489 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_isnotfalse((yyvsp[(1) - (4)].item));
          }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2493 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnull((yyvsp[(1) - (3)].item));
          }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2497 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnotnull((yyvsp[(1) - (4)].item));
          }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2505 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnull((yyvsp[(1) - (3)].item));
          }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2509 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_isnotnull((yyvsp[(1) - (4)].item));
          }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2513 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_equal((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2517 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= (*(yyvsp[(2) - (3)].boolfunc2creator))(0)->create((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2521 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= all_any_subquery_creator((yyvsp[(1) - (6)].item), (yyvsp[(2) - (6)].boolfunc2creator), (yyvsp[(3) - (6)].num), (yyvsp[(5) - (6)].select_lex));
          }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2529 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_in_subselect((yyvsp[(1) - (5)].item), (yyvsp[(4) - (5)].select_lex));
          }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2533 "drizzled/sql_yacc.yy"
    {
            Item *item= new (YYSession->mem_root) Item_in_subselect((yyvsp[(1) - (6)].item), (yyvsp[(5) - (6)].select_lex));
            (yyval.item)= negate_expression(YYSession, item);
          }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2538 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::handle_sql2003_note184_exception(YYSession, (yyvsp[(1) - (5)].item), true, (yyvsp[(4) - (5)].item));
          }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2542 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(6) - (7)].item_list)->push_front((yyvsp[(4) - (7)].item));
            (yyvsp[(6) - (7)].item_list)->push_front((yyvsp[(1) - (7)].item));
            (yyval.item)= new (YYSession->mem_root) Item_func_in(*(yyvsp[(6) - (7)].item_list));
          }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2548 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::handle_sql2003_note184_exception(YYSession, (yyvsp[(1) - (6)].item), false, (yyvsp[(5) - (6)].item));
          }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2552 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(5) - (8)].item));
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(1) - (8)].item));
            Item_func_in *item = new (YYSession->mem_root) Item_func_in(*(yyvsp[(7) - (8)].item_list));
            item->negate();
            (yyval.item)= item;
          }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2560 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_between((yyvsp[(1) - (5)].item),(yyvsp[(3) - (5)].item),(yyvsp[(5) - (5)].item));
          }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2564 "drizzled/sql_yacc.yy"
    {
            Item_func_between *item= new Item_func_between((yyvsp[(1) - (6)].item),(yyvsp[(4) - (6)].item),(yyvsp[(6) - (6)].item));
            item->negate();
            (yyval.item)= item;
          }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2570 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_like((yyvsp[(1) - (4)].item),(yyvsp[(3) - (4)].item),(yyvsp[(4) - (4)].item),Lex.escape_used);
          }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2574 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_not(new Item_func_like((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].item), Lex.escape_used));
          }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2578 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(1) - (3)].item));
            args->push_back((yyvsp[(3) - (3)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "regex", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2588 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(1) - (4)].item));
            args->push_back((yyvsp[(4) - (4)].item));
            args->push_back(new (YYSession->mem_root) Item_int(1));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "regex", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2603 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::Or((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2607 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::And((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2611 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::ShiftRight((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2615 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new function::bit::ShiftLeft((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 2619 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_plus((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2623 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_minus((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2627 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_date_add_interval((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].interval),0);
          }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2631 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_date_add_interval((yyvsp[(1) - (5)].item),(yyvsp[(4) - (5)].item),(yyvsp[(5) - (5)].interval),1);
          }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2635 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mul((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2639 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_div(YYSession,(yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2643 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mod((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2647 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_int_div((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2651 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_mod((yyvsp[(1) - (3)].item),(yyvsp[(3) - (3)].item));
          }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2655 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) function::bit::Xor((yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2662 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_eq_creator; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2663 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_ge_creator; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 2664 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_gt_creator; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2665 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_le_creator; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 2666 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_lt_creator; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2667 "drizzled/sql_yacc.yy"
    { (yyval.boolfunc2creator) = &comp_ne_creator; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 2671 "drizzled/sql_yacc.yy"
    { (yyval.num) = 1; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2672 "drizzled/sql_yacc.yy"
    { (yyval.num) = 0; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2682 "drizzled/sql_yacc.yy"
    {
            Item *i1= new (YYSession->mem_root) Item_string((yyvsp[(3) - (3)].lex_str).str,
                                                      (yyvsp[(3) - (3)].lex_str).length,
                                                      YYSession->charset());
            (yyval.item)= new (YYSession->mem_root) Item_func_set_collation((yyvsp[(1) - (3)].item), i1);
          }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2691 "drizzled/sql_yacc.yy"
    {
            Lex.setSumExprUsed();
          }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2695 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_concat(*YYSession, (yyvsp[(1) - (3)].item), (yyvsp[(3) - (3)].item));
          }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2698 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (2)].item); }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2700 "drizzled/sql_yacc.yy"
    {
	    (yyval.item)= new (YYSession->mem_root) Item_func_neg((yyvsp[(2) - (2)].item));
	  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2704 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) function::bit::Neg((yyvsp[(2) - (2)].item));
          }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2708 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_singlerow_subselect((yyvsp[(2) - (3)].select_lex));
          }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2711 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (3)].item); }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2713 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(4) - (5)].item_list)->push_front((yyvsp[(2) - (5)].item));
            (yyval.item)= new (YYSession->mem_root) Item_row(*(yyvsp[(4) - (5)].item_list));
          }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2718 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(5) - (6)].item_list)->push_front((yyvsp[(3) - (6)].item));
            (yyval.item)= new (YYSession->mem_root) Item_row(*(yyvsp[(5) - (6)].item_list));
          }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2723 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_exists_subselect((yyvsp[(3) - (4)].select_lex));
          }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2726 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(3) - (4)].item); }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2728 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(2) - (2)].item), ITEM_CAST_CHAR, NULL, NULL,
                                 &my_charset_bin);
          }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2733 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].cast_type), Lex.length, Lex.dec,
                                 Lex.charset);
            if (!(yyval.item))
              DRIZZLE_YYABORT;
          }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2740 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_case(* (yyvsp[(3) - (5)].item_list), (yyvsp[(2) - (5)].item), (yyvsp[(4) - (5)].item) ); }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2742 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= create_func_cast(YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].cast_type), Lex.length, Lex.dec,
                                 Lex.charset);
            if (!(yyval.item))
              DRIZZLE_YYABORT;
          }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2749 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_default_value(Lex.current_context(),
                                                         (yyvsp[(3) - (4)].item));
          }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2754 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_insert_value(Lex.current_context(),
                                                        (yyvsp[(3) - (4)].item));
          }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2760 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(5) - (5)].item),(yyvsp[(2) - (5)].item),(yyvsp[(3) - (5)].interval),0); }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2771 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_char(*(yyvsp[(3) - (4)].item_list)); }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2773 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "user", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2781 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_typecast((yyvsp[(3) - (4)].item)); }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2783 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_dayofmonth((yyvsp[(3) - (4)].item)); }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2785 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_hour((yyvsp[(3) - (4)].item)); }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2787 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_insert(*YYSession, (yyvsp[(3) - (10)].item), (yyvsp[(5) - (10)].item), (yyvsp[(7) - (10)].item), (yyvsp[(9) - (10)].item)); }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2789 "drizzled/sql_yacc.yy"
    {
            List<Item> *list= new (YYSession->mem_root) List<Item>;
            list->push_front((yyvsp[(5) - (6)].item));
            list->push_front((yyvsp[(3) - (6)].item));
            Item_row *item= new (YYSession->mem_root) Item_row(*list);
            (yyval.item)= new (YYSession->mem_root) Item_func_interval(item);
          }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2797 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(5) - (8)].item));
            (yyvsp[(7) - (8)].item_list)->push_front((yyvsp[(3) - (8)].item));
            Item_row *item= new (YYSession->mem_root) Item_row(*(yyvsp[(7) - (8)].item_list));
            (yyval.item)= new (YYSession->mem_root) Item_func_interval(item);
          }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2804 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_left((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item)); }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2806 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_minute((yyvsp[(3) - (4)].item)); }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2808 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_month((yyvsp[(3) - (4)].item)); }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2810 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_right((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item)); }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2812 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_second((yyvsp[(3) - (4)].item)); }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2814 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_datetime_typecast((yyvsp[(3) - (4)].item)); }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2816 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(3) - (4)].item)); }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2818 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_ltrim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2820 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_rtrim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2822 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(6) - (7)].item),(yyvsp[(4) - (7)].item)); }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2824 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_ltrim((yyvsp[(5) - (6)].item)); }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2826 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_rtrim((yyvsp[(5) - (6)].item)); }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2828 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(5) - (6)].item)); }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2830 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_trim((yyvsp[(5) - (6)].item),(yyvsp[(3) - (6)].item)); }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2832 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "user", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2840 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_year((yyvsp[(3) - (4)].item)); }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2856 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item),
                                                             INTERVAL_DAY, 0);
          }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2861 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item), (yyvsp[(6) - (8)].item), (yyvsp[(7) - (8)].interval), 0); }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2863 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curdate_local();
            Lex.setCacheable(false);
          }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2868 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item),(yyvsp[(6) - (8)].item),(yyvsp[(7) - (8)].interval),0); }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2870 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item),(yyvsp[(6) - (8)].item),(yyvsp[(7) - (8)].interval),1); }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2872 "drizzled/sql_yacc.yy"
    { (yyval.item)=new (YYSession->mem_root) Item_extract( (yyvsp[(3) - (6)].interval), (yyvsp[(5) - (6)].item)); }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2874 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_local();
            Lex.setCacheable(false);
          }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2879 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_local((yyvsp[(3) - (4)].item));
            Lex.setCacheable(false);
          }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2884 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_locate((yyvsp[(5) - (6)].item),(yyvsp[(3) - (6)].item)); }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2886 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item),
                                                             INTERVAL_DAY, 1);
          }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2891 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(3) - (8)].item), (yyvsp[(6) - (8)].item), (yyvsp[(7) - (8)].interval), 1); }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2893 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (8)].item));
            args->push_back((yyvsp[(5) - (8)].item));
            args->push_back((yyvsp[(7) - (8)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2904 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2914 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (8)].item));
            args->push_back((yyvsp[(5) - (8)].item));
            args->push_back((yyvsp[(7) - (8)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2925 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "substr", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2935 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_sysdate_local();
            Lex.setCacheable(false);
          }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2940 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_sysdate_local((yyvsp[(3) - (4)].item));
            Lex.setCacheable(false);
          }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 2945 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_date_add_interval((yyvsp[(7) - (8)].item),(yyvsp[(5) - (8)].item),(yyvsp[(3) - (8)].interval_time_st),0); }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 2947 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_timestamp_diff((yyvsp[(5) - (8)].item),(yyvsp[(7) - (8)].item),(yyvsp[(3) - (8)].interval_time_st)); }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 2949 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_curdate_utc();
            Lex.setCacheable(false);
          }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2954 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new (YYSession->mem_root) Item_func_now_utc();
            Lex.setCacheable(false);
          }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2967 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_coalesce(* (yyvsp[(3) - (4)].item_list)); }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2969 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_collation((yyvsp[(3) - (4)].item)); }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2971 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "database", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2979 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "catalog", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2987 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (5)].item));

            if ((yyvsp[(5) - (5)].boolean))
            {
              args->push_back(new (YYSession->mem_root) Item_int(1));
            }

            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "execute", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3002 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_if((yyvsp[(3) - (8)].item),(yyvsp[(5) - (8)].item),(yyvsp[(7) - (8)].item)); }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3004 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(4) - (5)].item));

            if ((yyvsp[(2) - (5)].num))
            {
              args->push_back(new (YYSession->mem_root) Item_uint(1));
            }

            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "kill", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 3019 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_microsecond((yyvsp[(3) - (4)].item)); }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 3021 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_mod( (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item)); }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3023 "drizzled/sql_yacc.yy"
    { (yyval.item) = new (YYSession->mem_root) Item_func_quarter((yyvsp[(3) - (4)].item)); }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 3025 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_repeat(*YYSession, (yyvsp[(3) - (6)].item), (yyvsp[(5) - (6)].item)); }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3027 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_replace(*YYSession, (yyvsp[(3) - (8)].item), (yyvsp[(5) - (8)].item), (yyvsp[(7) - (8)].item)); }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3029 "drizzled/sql_yacc.yy"
    { (yyval.item)= new (YYSession->mem_root) Item_func_round((yyvsp[(3) - (6)].item),(yyvsp[(5) - (6)].item),1); }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 3031 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (4)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "wait", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 3040 "drizzled/sql_yacc.yy"
    {
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "uuid", NULL)))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
	  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3048 "drizzled/sql_yacc.yy"
    {
            List<Item> *args= new (YYSession->mem_root) List<Item>;
            args->push_back((yyvsp[(3) - (6)].item));
            args->push_back((yyvsp[(5) - (6)].item));
            if (! ((yyval.item)= parser::reserved_keyword_function(YYSession, "wait", args)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3069 "drizzled/sql_yacc.yy"
    {
            const plugin::Function *udf= plugin::Function::get(std::string((yyvsp[(1) - (2)].lex_str).str, (yyvsp[(1) - (2)].lex_str).length));

            /* Temporary placing the result of getFunction in $3 */
            (yyval.udf)= udf;
          }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3076 "drizzled/sql_yacc.yy"
    {
            Create_func *builder;
            Item *item= NULL;

            /*
              Implementation note:
              names are resolved with the following order:
              - MySQL native functions,
              - User Defined Functions,
              - Stored Functions (assuming the current <use> database)

              This will be revised with WL#2128 (SQL PATH)
            */
            builder= find_native_function_builder((yyvsp[(1) - (5)].lex_str));
            if (builder)
            {
              item= builder->create(YYSession, (yyvsp[(1) - (5)].lex_str), (yyvsp[(4) - (5)].item_list));
            }
            else
            {
              /* Retrieving the result of service::Function::get */
              const plugin::Function *udf= (yyvsp[(3) - (5)].udf);
              if (udf)
              {
                item= Create_udf_func::s_singleton.create(YYSession, udf, (yyvsp[(4) - (5)].item_list));
              } else {
                /* fix for bug 250065, from Andrew Garner <muzazzi@gmail.com> */
                my_error(ER_SP_DOES_NOT_EXIST, MYF(0), "FUNCTION", (yyvsp[(1) - (5)].lex_str).str);
              }
            }

            if (! ((yyval.item)= item))
            {
              DRIZZLE_YYABORT;
            }
            Lex.setCacheable(false);
          }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 3116 "drizzled/sql_yacc.yy"
    { (yyval.item_list)= NULL; }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 3117 "drizzled/sql_yacc.yy"
    { (yyval.item_list)= (yyvsp[(1) - (1)].item_list); }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3122 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new (YYSession->mem_root) List<Item>;
            (yyval.item_list)->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3127 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].item_list)->push_back((yyvsp[(3) - (3)].item));
            (yyval.item_list)= (yyvsp[(1) - (3)].item_list);
          }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 3135 "drizzled/sql_yacc.yy"
    {
            /*
             Use Item::name as a storage for the attribute value of user
             defined function argument. It is safe to use Item::name
             because the syntax will not allow having an explicit name here.
             See WL#1017 re. udf attributes.
            */
            if ((yyvsp[(4) - (4)].lex_str).str)
            {
              (yyvsp[(2) - (4)].item)->is_autogenerated_name= false;
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(4) - (4)].lex_str).str, (yyvsp[(4) - (4)].lex_str).length, system_charset_info);
            }
            else
              (yyvsp[(2) - (4)].item)->set_name((yyvsp[(1) - (4)].simple_string), (uint) ((yyvsp[(3) - (4)].simple_string) - (yyvsp[(1) - (4)].simple_string)), YYSession->charset());
            (yyval.item)= (yyvsp[(2) - (4)].item);
          }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 3155 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_avg((yyvsp[(3) - (4)].item)); }
    break;

  case 529:

/* Line 1455 of yacc.c  */
#line 3157 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_avg_distinct((yyvsp[(4) - (5)].item)); }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 3159 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count(new Item_int((int32_t) 0L,1)); }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 3161 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count((yyvsp[(3) - (4)].item)); }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 3163 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr++; }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 3165 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr--; }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 3167 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_count_distinct(* (yyvsp[(5) - (7)].item_list)); }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 3169 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_min((yyvsp[(3) - (4)].item)); }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 3176 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_min((yyvsp[(4) - (5)].item)); }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 3178 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_max((yyvsp[(3) - (4)].item)); }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 3180 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_max((yyvsp[(4) - (5)].item)); }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 3182 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_std((yyvsp[(3) - (4)].item), 0); }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 3184 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_variance((yyvsp[(3) - (4)].item), 0); }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 3186 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_std((yyvsp[(3) - (4)].item), 1); }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 3188 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_variance((yyvsp[(3) - (4)].item), 1); }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 3190 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_sum((yyvsp[(3) - (4)].item)); }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 3192 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_sum_sum_distinct((yyvsp[(4) - (5)].item)); }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 3194 "drizzled/sql_yacc.yy"
    { Lex.current_select->in_sum_expr++; }
    break;

  case 546:

/* Line 1455 of yacc.c  */
#line 3198 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->in_sum_expr--;
            (yyval.item)=new Item_func_group_concat(Lex.current_context(), (yyvsp[(3) - (8)].num), (yyvsp[(5) - (8)].item_list),
                                          sel->gorder_list, (yyvsp[(7) - (8)].string));
            (yyvsp[(5) - (8)].item_list)->clear();
          }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 3209 "drizzled/sql_yacc.yy"
    { }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 3211 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= (yyvsp[(3) - (3)].item);
          }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 3218 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_set_user_var((yyvsp[(1) - (3)].lex_str), (yyvsp[(3) - (3)].item));
            Lex.setCacheable(false);
          }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 3223 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new Item_func_get_user_var(*YYSession, (yyvsp[(1) - (1)].lex_str));
            Lex.setCacheable(false);
          }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 3228 "drizzled/sql_yacc.yy"
    {
            /* disallow "SELECT @@global.global.variable" */
            if ((yyvsp[(3) - (4)].lex_str).str && (yyvsp[(4) - (4)].lex_str).str && parser::check_reserved_words(&(yyvsp[(3) - (4)].lex_str)))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (!((yyval.item)= get_system_var(YYSession, (yyvsp[(2) - (4)].var_type), (yyvsp[(3) - (4)].lex_str), (yyvsp[(4) - (4)].lex_str))))
              DRIZZLE_YYABORT;
          }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 3241 "drizzled/sql_yacc.yy"
    { (yyval.num) = false; }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 3242 "drizzled/sql_yacc.yy"
    { (yyval.num) = true; }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 3247 "drizzled/sql_yacc.yy"
    {
              (yyval.string)= new (YYSession->mem_root) String(",", 1, &my_charset_utf8_general_ci);
            }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 3250 "drizzled/sql_yacc.yy"
    { (yyval.string) = (yyvsp[(2) - (2)].string); }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 3255 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->gorder_list = NULL;
          }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 3259 "drizzled/sql_yacc.yy"
    {
            Select_Lex *select= Lex.current_select;
            select->gorder_list=
              (SQL_LIST*) memory::sql_memdup((char*) &select->order_list,
                                     sizeof(st_sql_list));
            select->order_list.clear();
          }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 3270 "drizzled/sql_yacc.yy"
    {
            if (Lex.current_select->inc_in_sum_expr())
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 3278 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->in_sum_expr--;
            (yyval.item)= (yyvsp[(3) - (3)].item);
          }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 3286 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_CHAR; Lex.charset= &my_charset_bin; Lex.dec= 0; }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 3288 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_BOOLEAN; Lex.charset= &my_charset_bin; Lex.dec= 0; }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 3290 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 3292 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 3294 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_SIGNED; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 3296 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_UNSIGNED; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 3298 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_UNSIGNED; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 3300 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_CHAR; Lex.dec= 0; }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 3302 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DATE; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 3304 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_TIME; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 3306 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DATETIME; Lex.charset= NULL; Lex.dec=Lex.length= (char*)0; }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 3308 "drizzled/sql_yacc.yy"
    { (yyval.cast_type)=ITEM_CAST_DECIMAL; Lex.charset= NULL; }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 3313 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new (YYSession->mem_root) List<Item>;
            (yyval.item_list)->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 3318 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].item_list)->push_back((yyvsp[(3) - (3)].item));
            (yyval.item_list)= (yyvsp[(1) - (3)].item_list);
          }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 3325 "drizzled/sql_yacc.yy"
    { (yyval.item)= NULL; }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 3326 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item); }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 3330 "drizzled/sql_yacc.yy"
    { (yyval.item)= NULL; }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 3331 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(2) - (2)].item); }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 3336 "drizzled/sql_yacc.yy"
    {
            (yyval.item_list)= new List<Item>;
            (yyval.item_list)->push_back((yyvsp[(2) - (4)].item));
            (yyval.item_list)->push_back((yyvsp[(4) - (4)].item));
          }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 3342 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (5)].item_list)->push_back((yyvsp[(3) - (5)].item));
            (yyvsp[(1) - (5)].item_list)->push_back((yyvsp[(5) - (5)].item));
            (yyval.item_list)= (yyvsp[(1) - (5)].item_list);
          }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 3352 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 3354 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->nest_last_join(Lex.session)))
              DRIZZLE_YYABORT;
          }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 3361 "drizzled/sql_yacc.yy"
    { DRIZZLE_YYABORT_UNLESS((yyval.table_list)=(yyvsp[(1) - (1)].table_list)); }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 3372 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 3373 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(3) - (4)].table_list); }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 3379 "drizzled/sql_yacc.yy"
    { (yyval.table_list)=(yyvsp[(1) - (1)].table_list); }
    break;

  case 586:

/* Line 1455 of yacc.c  */
#line 3381 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list)));
          }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 3401 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list)));
            Lex.is_cross= false;
          }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 3406 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (3)].table_list) && ((yyval.table_list)=(yyvsp[(3) - (3)].table_list))); (yyvsp[(3) - (3)].table_list)->straight=1;
          }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 3411 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
            DRIZZLE_YYABORT_UNLESS( not Lex.is_cross );
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (4)].table_list), *(yyvsp[(3) - (4)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 3419 "drizzled/sql_yacc.yy"
    {
            add_join_on((yyvsp[(3) - (6)].table_list),(yyvsp[(6) - (6)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 3426 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (4)].table_list), *(yyvsp[(3) - (4)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 3433 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(3) - (6)].table_list)->straight=1;
            add_join_on((yyvsp[(3) - (6)].table_list),(yyvsp[(6) - (6)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 3441 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && (yyvsp[(3) - (4)].table_list));
          }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 3445 "drizzled/sql_yacc.yy"
    { add_join_natural((yyvsp[(1) - (8)].table_list),(yyvsp[(3) - (8)].table_list),(yyvsp[(7) - (8)].string_list),Lex.current_select); (yyval.table_list)=(yyvsp[(3) - (8)].table_list); }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 3447 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (4)].table_list) && ((yyval.table_list)=(yyvsp[(4) - (4)].table_list)));
            add_join_natural((yyvsp[(1) - (4)].table_list),(yyvsp[(4) - (4)].table_list),NULL,Lex.current_select);
          }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 3455 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(5) - (6)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (6)].table_list), *(yyvsp[(5) - (6)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 3462 "drizzled/sql_yacc.yy"
    {
            add_join_on((yyvsp[(5) - (8)].table_list),(yyvsp[(8) - (8)].item));
            Lex.pop_context();
            (yyvsp[(5) - (8)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(5) - (8)].table_list);
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 3470 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (5)].table_list) && (yyvsp[(5) - (5)].table_list));
          }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 3474 "drizzled/sql_yacc.yy"
    {
            add_join_natural((yyvsp[(1) - (10)].table_list),(yyvsp[(5) - (10)].table_list),(yyvsp[(9) - (10)].string_list),Lex.current_select);
            (yyvsp[(5) - (10)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(5) - (10)].table_list);
          }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 3480 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(6) - (6)].table_list));
            add_join_natural((yyvsp[(1) - (6)].table_list),(yyvsp[(6) - (6)].table_list),NULL,Lex.current_select);
            (yyvsp[(6) - (6)].table_list)->outer_join|=JOIN_TYPE_LEFT;
            (yyval.table_list)=(yyvsp[(6) - (6)].table_list);
          }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 3490 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(5) - (6)].table_list));
            /* Change the current name resolution context to a local context. */
            push_new_name_resolution_context(*YYSession, *(yyvsp[(1) - (6)].table_list), *(yyvsp[(5) - (6)].table_list));
            Lex.current_select->parsing_place= IN_ON;
          }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 3497 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
            add_join_on((yyval.table_list), (yyvsp[(8) - (8)].item));
            Lex.pop_context();
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 3505 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (5)].table_list) && (yyvsp[(5) - (5)].table_list));
          }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 3509 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
            add_join_natural((yyval.table_list),(yyvsp[(5) - (10)].table_list),(yyvsp[(9) - (10)].string_list),Lex.current_select);
          }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 3515 "drizzled/sql_yacc.yy"
    {
            DRIZZLE_YYABORT_UNLESS((yyvsp[(1) - (6)].table_list) && (yyvsp[(6) - (6)].table_list));
            add_join_natural((yyvsp[(6) - (6)].table_list),(yyvsp[(1) - (6)].table_list),NULL,Lex.current_select);
            if (!((yyval.table_list)= Lex.current_select->convert_right_join()))
              DRIZZLE_YYABORT;
          }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 3524 "drizzled/sql_yacc.yy"
    {}
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 3525 "drizzled/sql_yacc.yy"
    {}
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 3527 "drizzled/sql_yacc.yy"
    {
            Lex.is_cross= true;
            Lex.current_select->is_cross= true;
          }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 3542 "drizzled/sql_yacc.yy"
    {
          }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 3545 "drizzled/sql_yacc.yy"
    {
            if (!((yyval.table_list)= Lex.current_select->add_table_to_list(YYSession, (yyvsp[(2) - (4)].table), (yyvsp[(3) - (4)].lex_str_ptr),
                             0,
                             Lex.lock_option,
                             Lex.current_select->pop_index_hints())))
              DRIZZLE_YYABORT;
            Lex.current_select->add_joined_table((yyval.table_list));
          }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 3554 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if ((yyvsp[(1) - (3)].num))
            {
              if (sel->set_braces(1))
              {
                parser::my_parse_error(YYSession->m_lip);
                DRIZZLE_YYABORT;
              }
              /* select in braces, can't contain global parameters */
              if (sel->master_unit()->fake_select_lex)
                sel->master_unit()->global_parameters=
                   sel->master_unit()->fake_select_lex;
            }
            (yyvsp[(2) - (3)].select_lex)->init_nested_join(*Lex.session);
            (yyval.table_list)= 0;
            /* incomplete derived tables return NULL, we must be
               nested in select_derived rule to be here. */
          }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 3592 "drizzled/sql_yacc.yy"
    {
            /* Use $2 instead of Lex.current_select as derived table will
               alter value of Lex.current_select. */
            if (!((yyvsp[(3) - (5)].table_list) || (yyvsp[(5) - (5)].lex_str_ptr)) && (yyvsp[(2) - (5)].select_lex)->embedding &&
                !(yyvsp[(2) - (5)].select_lex)->embedding->getNestedJoin()->join_list.size())
            {
              /* we have a derived table ($3 == NULL) but no alias,
                 Since we are nested in further parentheses so we
                 can pass NULL to the outer level parentheses
                 Permits parsing of "((((select ...))) as xyz)" */
              (yyval.table_list)= 0;
            }
            else if (!(yyvsp[(3) - (5)].table_list))
            {
              /* Handle case of derived table, alias may be NULL if there
                 are no outer parentheses, add_table_to_list() will throw
                 error in this case */
              Select_Lex *sel= Lex.current_select;
              Select_Lex_Unit *unit= sel->master_unit();
              Lex.current_select= sel= unit->outer_select();
              if (!((yyval.table_list)= sel->add_table_to_list(Lex.session,
                                               new Table_ident(unit), (yyvsp[(5) - (5)].lex_str_ptr), 0,
                                               TL_READ)))

                DRIZZLE_YYABORT;
              sel->add_joined_table((yyval.table_list));
              Lex.pop_context();
            }
            else if (((yyvsp[(3) - (5)].table_list)->select_lex && (yyvsp[(3) - (5)].table_list)->select_lex->master_unit()->is_union()) || (yyvsp[(5) - (5)].lex_str_ptr))
            {
              /* simple nested joins cannot have aliases or unions */
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            else
              (yyval.table_list)= (yyvsp[(3) - (5)].table_list);
          }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 3636 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(3) - (3)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 3641 "drizzled/sql_yacc.yy"
    {
            /*
              Remove from the name resolution context stack the context of the
              last select in the union.
             */
            Lex.pop_context();
          }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 3654 "drizzled/sql_yacc.yy"
    {
            Select_Lex * sel= Lex.current_select;
            if (Lex.current_select->set_braces(0))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (sel->linkage == UNION_TYPE &&
                sel->master_unit()->first_select()->braces)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 3672 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            if (sel->linkage != UNION_TYPE)
              init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 3679 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 3688 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (1)].select_lex)->init_nested_join(*Lex.session);
          }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 3692 "drizzled/sql_yacc.yy"
    {
            /* for normal joins, $3 != NULL and end_nested_join() != NULL,
               for derived tables, both must equal NULL */

            if (!((yyval.table_list)= (yyvsp[(1) - (3)].select_lex)->end_nested_join(Lex.session)) && (yyvsp[(3) - (3)].table_list))
              DRIZZLE_YYABORT;

            if (!(yyvsp[(3) - (3)].table_list) && (yyval.table_list))
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 3708 "drizzled/sql_yacc.yy"
    {
            Lex.derived_tables|= DERIVED_SUBQUERY;
            if (not Lex.expr_allows_subselect)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            if (Lex.current_select->linkage == GLOBAL_OPTIONS_TYPE || new_select(&Lex, 1))
              DRIZZLE_YYABORT;
            init_select(&Lex);
            Lex.current_select->linkage= DERIVED_TABLE_TYPE;
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 3722 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= NO_MATTER;
          }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 3729 "drizzled/sql_yacc.yy"
    { (yyval.select_lex)= Lex.current_select; }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 3734 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            TableList *embedding;
            if (!sel->embedding || sel->end_nested_join(Lex.session))
            {
              /* we are not in parentheses */
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            embedding= Lex.current_select->embedding;
            (yyval.num)= embedding &&
                !embedding->getNestedJoin()->join_list.size();
            /* return true if we are deeply nested */
          }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 3751 "drizzled/sql_yacc.yy"
    {}
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 3752 "drizzled/sql_yacc.yy"
    {}
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 3757 "drizzled/sql_yacc.yy"
    {
            (yyval.num)= INDEX_HINT_MASK_ALL;
          }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 3760 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_JOIN;  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 3761 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_ORDER; }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 3762 "drizzled/sql_yacc.yy"
    { (yyval.num)= INDEX_HINT_MASK_GROUP; }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 3766 "drizzled/sql_yacc.yy"
    { (yyval.index_hint)= INDEX_HINT_FORCE; }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 3767 "drizzled/sql_yacc.yy"
    { (yyval.index_hint)= INDEX_HINT_IGNORE; }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 3772 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_index_hint_type((yyvsp[(1) - (3)].index_hint), (yyvsp[(3) - (3)].num));
          }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 3777 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_index_hint_type(INDEX_HINT_USE, (yyvsp[(3) - (3)].num));
          }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 3790 "drizzled/sql_yacc.yy"
    { Lex.current_select->alloc_index_hints(YYSession); }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 3794 "drizzled/sql_yacc.yy"
    {  Lex.current_select->clear_index_hints(); }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 3799 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, NULL, 0); }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 3800 "drizzled/sql_yacc.yy"
    {}
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 3805 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, (yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 3807 "drizzled/sql_yacc.yy"
    { Lex.current_select->add_index_hint(YYSession, (char *)"PRIMARY", 7); }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 3817 "drizzled/sql_yacc.yy"
    {
            (yyval.string_list)= new List<String>;
            (yyval.string_list)->push_back(new (YYSession->mem_root)
                              String((const char *) (yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length,
                                      system_charset_info));
          }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 3824 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(1) - (3)].string_list)->push_back(new (YYSession->mem_root)
                              String((const char *) (yyvsp[(3) - (3)].lex_str).str, (yyvsp[(3) - (3)].lex_str).length,
                                      system_charset_info));
            (yyval.string_list)= (yyvsp[(1) - (3)].string_list);
          }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 3833 "drizzled/sql_yacc.yy"
    {}
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 3834 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_HOUR; }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 3835 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_MICROSECOND; }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 3836 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_MINUTE; }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 3837 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_DAY_SECOND; }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 3838 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_MICROSECOND; }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 3839 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_MINUTE; }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 3840 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_HOUR_SECOND; }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 3841 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_MINUTE_MICROSECOND; }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 3842 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_MINUTE_SECOND; }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 3843 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_SECOND_MICROSECOND; }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 3844 "drizzled/sql_yacc.yy"
    { (yyval.interval)=INTERVAL_YEAR_MONTH; }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 3848 "drizzled/sql_yacc.yy"
    {}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 3849 "drizzled/sql_yacc.yy"
    {
                                  (yyval.interval_time_st)=INTERVAL_MICROSECOND;
                                  /*
                                    FRAC_SECOND was mistakenly implemented with
                                    a wrong resolution. According to the ODBC
                                    standard it should be nanoseconds, not
                                    microseconds. Changing it to nanoseconds
                                    in MySQL would mean making TIMESTAMPDIFF
                                    and TIMESTAMPADD to return DECIMAL, since
                                    the return value would be too big for BIGINT
                                    Hence we just deprecate the incorrect
                                    implementation without changing its
                                    resolution.
                                  */
                                }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 3867 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_DAY; }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 3868 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_WEEK; }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 3869 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_HOUR; }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 3870 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MINUTE; }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 3871 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MONTH; }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 3872 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_QUARTER; }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 3873 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_SECOND; }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 3874 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_MICROSECOND; }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 3875 "drizzled/sql_yacc.yy"
    { (yyval.interval_time_st)=INTERVAL_YEAR; }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 3884 "drizzled/sql_yacc.yy"
    { (yyval.lex_str_ptr)=0; }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 3886 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str_ptr)= (drizzled::LEX_STRING*) memory::sql_memdup(&(yyvsp[(2) - (2)].lex_str),sizeof(drizzled::LEX_STRING));
          }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 3897 "drizzled/sql_yacc.yy"
    { Lex.current_select->where= 0; }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 3899 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= IN_WHERE;
          }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 3903 "drizzled/sql_yacc.yy"
    {
            Select_Lex *select= Lex.current_select;
            select->where= (yyvsp[(3) - (3)].item);
            select->parsing_place= NO_MATTER;
            if ((yyvsp[(3) - (3)].item))
              (yyvsp[(3) - (3)].item)->top_level_item();
          }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 3915 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->parsing_place= IN_HAVING;
          }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 3919 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->having= (yyvsp[(3) - (3)].item);
            sel->parsing_place= NO_MATTER;
            if ((yyvsp[(3) - (3)].item))
              (yyvsp[(3) - (3)].item)->top_level_item();
          }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 3930 "drizzled/sql_yacc.yy"
    {
            Lex.escape_used= true;
            (yyval.item)= (yyvsp[(2) - (2)].item);
          }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 3935 "drizzled/sql_yacc.yy"
    {
            Lex.escape_used= false;
            (yyval.item)= new Item_string("\\", 1, &my_charset_utf8_general_ci);
          }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 3952 "drizzled/sql_yacc.yy"
    { YYSession->add_group_to_list((yyvsp[(3) - (4)].item),(bool) (yyvsp[(4) - (4)].num)); }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 3954 "drizzled/sql_yacc.yy"
    { YYSession->add_group_to_list((yyvsp[(1) - (2)].item),(bool) (yyvsp[(2) - (2)].num)); }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 3958 "drizzled/sql_yacc.yy"
    {}
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 3960 "drizzled/sql_yacc.yy"
    {
            /*
              'WITH ROLLUP' is needed for backward compatibility,
              and cause LALR(2) conflicts.
              This syntax is not standard.
              MySQL syntax: GROUP BY col1, col2, col3 WITH ROLLUP
              SQL-2003: GROUP BY ... ROLLUP(col1, col2, col3)
            */
            if (Lex.current_select->linkage == GLOBAL_OPTIONS_TYPE)
            {
              my_error(ER_WRONG_USAGE, MYF(0), "WITH ROLLUP",
                       "global union parameters");
              DRIZZLE_YYABORT;
            }
            Lex.current_select->olap= ROLLUP_TYPE;
          }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 3993 "drizzled/sql_yacc.yy"
    {
            bool ascending= (yyvsp[(2) - (2)].num) == 1;
            YYSession->add_order_to_list((yyvsp[(1) - (2)].item), ascending);
          }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 4010 "drizzled/sql_yacc.yy"
    {
            if (not parser::buildOrderBy(&Lex))
              DRIZZLE_YYABORT;
          }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4019 "drizzled/sql_yacc.yy"
    {
            YYSession->add_order_to_list((yyvsp[(3) - (4)].item),(bool) (yyvsp[(4) - (4)].num));
          }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 4023 "drizzled/sql_yacc.yy"
    {
            YYSession->add_order_to_list((yyvsp[(1) - (2)].item),(bool) (yyvsp[(2) - (2)].num));
          }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 4029 "drizzled/sql_yacc.yy"
    { (yyval.num) =  1; }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 4030 "drizzled/sql_yacc.yy"
    { (yyval.num) =1; }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 4031 "drizzled/sql_yacc.yy"
    { (yyval.num) =0; }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 4036 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->offset_limit= 0;
            sel->select_limit= 0;
          }
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 4041 "drizzled/sql_yacc.yy"
    {}
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 4045 "drizzled/sql_yacc.yy"
    {}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 4046 "drizzled/sql_yacc.yy"
    {}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 4050 "drizzled/sql_yacc.yy"
    {}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 4055 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(1) - (1)].item);
            sel->offset_limit= 0;
            sel->explicit_limit= 1;
          }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 4062 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(3) - (3)].item);
            sel->offset_limit= (yyvsp[(1) - (3)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 4069 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(1) - (3)].item);
            sel->offset_limit= (yyvsp[(3) - (3)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 719:

/* Line 1455 of yacc.c  */
#line 4078 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 4079 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 4080 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_uint((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 4085 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->select_limit= 0;
          }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 4089 "drizzled/sql_yacc.yy"
    {
            Select_Lex *sel= Lex.current_select;
            sel->select_limit= (yyvsp[(2) - (2)].item);
            sel->explicit_limit= 1;
          }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 4097 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 4098 "drizzled/sql_yacc.yy"
    { (yyval.ulong_num)= (unsigned long) strtol((yyvsp[(1) - (1)].lex_str).str, (char**) 0, 16); }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 4099 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 4100 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 4101 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 4102 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulong_num)= (unsigned long) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 4106 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 4107 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 4108 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 4109 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 4110 "drizzled/sql_yacc.yy"
    { int error; (yyval.ulonglong_number)= (uint64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, (char**) 0, &error); }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 4114 "drizzled/sql_yacc.yy"
    {
            if (not Lex.describe)
			  Lex.result= new select_dumpvar;
          }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 4119 "drizzled/sql_yacc.yy"
    {}
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 4124 "drizzled/sql_yacc.yy"
    {}
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 4129 "drizzled/sql_yacc.yy"
    {
            if (Lex.result)
            {
              ((select_dumpvar *)Lex.result)->var_list.push_back( new var((yyvsp[(2) - (2)].lex_str),0,0,(enum_field_types)0));
            }
            else
            {
              /*
                The parser won't create select_result instance only
                if it's an EXPLAIN.
              */
              assert(Lex.describe);
            }
          }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 4147 "drizzled/sql_yacc.yy"
    { }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 4153 "drizzled/sql_yacc.yy"
    {
            Lex.setCacheable(false);
            Lex.exchange= new file_exchange((yyvsp[(2) - (2)].lex_str).str, 0);
            Lex.result= new select_export(Lex.exchange);
          }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 4160 "drizzled/sql_yacc.yy"
    {
            if (not Lex.describe)
            {
              Lex.setCacheable(false);
              Lex.exchange= new file_exchange((yyvsp[(2) - (2)].lex_str).str,1);
              Lex.result= new select_dump(Lex.exchange);
            }
          }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 4169 "drizzled/sql_yacc.yy"
    {Lex.setCacheable(false);}
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 4178 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::catalog::Drop(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 4182 "drizzled/sql_yacc.yy"
    {
            statement::DropTable *statement= new statement::DropTable(YYSession);
            Lex.statement= statement;
            statement->drop_temporary= (yyvsp[(2) - (5)].boolean);
            statement->drop_if_exists= (yyvsp[(4) - (5)].boolean);
          }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 4188 "drizzled/sql_yacc.yy"
    {}
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 4189 "drizzled/sql_yacc.yy"
    {
            statement::DropIndex *statement= new statement::DropIndex(YYSession);
            Lex.statement= statement;
            statement->alter_info.flags.set(ALTER_DROP_INDEX);

            if (not Lex.current_select->add_table_to_list(Lex.session, (yyvsp[(6) - (7)].table), NULL,
                                                          TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;

            message::AlterTable::AlterTableOperation *operation;
            operation= Lex.alter_table()->add_operations();
            operation->set_operation(message::AlterTable::AlterTableOperation::DROP_KEY);
            operation->set_drop_name((yyvsp[(4) - (7)].lex_str).str);

          }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 4205 "drizzled/sql_yacc.yy"
    {
            statement::DropSchema *statement= new statement::DropSchema(YYSession);
            Lex.statement= statement;
            statement->drop_if_exists=(yyvsp[(3) - (4)].boolean);
            Lex.name= (yyvsp[(4) - (4)].lex_str);
          }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 4220 "drizzled/sql_yacc.yy"
    {
            if (!Lex.current_select->add_table_to_list(YYSession, (yyvsp[(1) - (1)].table), NULL, TL_OPTION_UPDATING))
              DRIZZLE_YYABORT;
          }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 4227 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 4228 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 4232 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 4233 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 4242 "drizzled/sql_yacc.yy"
    {
          Lex.statement= new statement::Execute(YYSession, (yyvsp[(2) - (5)].execute_string), (yyvsp[(3) - (5)].boolean), (yyvsp[(4) - (5)].boolean), (yyvsp[(5) - (5)].boolean));
        }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 4249 "drizzled/sql_yacc.yy"
    {
            (yyval.execute_string).set((yyvsp[(1) - (1)].lex_str));
         }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 4253 "drizzled/sql_yacc.yy"
    {
            (yyval.execute_string).set((yyvsp[(2) - (2)].lex_str), true);
        }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 4258 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 4259 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 4263 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 4264 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 4268 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= false; }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 4269 "drizzled/sql_yacc.yy"
    { (yyval.boolean)= true; }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 4278 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Insert(YYSession);
            Lex.duplicates= DUP_ERROR;
            init_select(&Lex);
            /* for subselects */
            Lex.lock_option= TL_READ;
          }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 4286 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE_CONCURRENT_INSERT);
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 4291 "drizzled/sql_yacc.yy"
    {}
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 4296 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Replace(YYSession);
            Lex.duplicates= DUP_REPLACE;
            init_select(&Lex);
          }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 4302 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_lock_for_tables(TL_WRITE_DEFAULT);
            Lex.current_select= &Lex.select_lex;
          }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 4307 "drizzled/sql_yacc.yy"
    {}
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 4311 "drizzled/sql_yacc.yy"
    {}
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 4312 "drizzled/sql_yacc.yy"
    {}
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 4317 "drizzled/sql_yacc.yy"
    {
            Lex.field_list.clear();
            Lex.many_values.clear();
            Lex.insert_list=0;
          }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 4324 "drizzled/sql_yacc.yy"
    {}
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 4325 "drizzled/sql_yacc.yy"
    {}
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 4326 "drizzled/sql_yacc.yy"
    {}
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 4328 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list = new List_item;
            Lex.many_values.push_back(Lex.insert_list);
          }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 4336 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(3) - (3)].item)); }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 4337 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(1) - (1)].item)); }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 4341 "drizzled/sql_yacc.yy"
    {}
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 4342 "drizzled/sql_yacc.yy"
    {}
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 4344 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(0);
          }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 4347 "drizzled/sql_yacc.yy"
    {}
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 4349 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->set_braces(1);
          }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 4352 "drizzled/sql_yacc.yy"
    {}
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 4367 "drizzled/sql_yacc.yy"
    {
            Lex.field_list.push_back((yyvsp[(1) - (3)].item));
            Lex.insert_list->push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 4374 "drizzled/sql_yacc.yy"
    {}
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 4375 "drizzled/sql_yacc.yy"
    {}
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 4379 "drizzled/sql_yacc.yy"
    {}
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 4380 "drizzled/sql_yacc.yy"
    {}
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 4385 "drizzled/sql_yacc.yy"
    {
              Lex.insert_list = new List_item;
          }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 4389 "drizzled/sql_yacc.yy"
    {
            Lex.many_values.push_back(Lex.insert_list);
          }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 4395 "drizzled/sql_yacc.yy"
    {}
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 4401 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list->push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 4405 "drizzled/sql_yacc.yy"
    {
            Lex.insert_list->push_back((yyvsp[(1) - (1)].item));
          }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 4411 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item);}
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 4412 "drizzled/sql_yacc.yy"
    {(yyval.item)= new Item_default_value(Lex.current_context()); }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 4417 "drizzled/sql_yacc.yy"
    { Lex.duplicates= DUP_UPDATE; }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 4425 "drizzled/sql_yacc.yy"
    {
            init_select(&Lex);
            Lex.statement= new statement::Update(YYSession);
            Lex.lock_option= TL_UNLOCK; /* Will be set later */
            Lex.duplicates= DUP_ERROR;
            if (not Lex.select_lex.add_table_to_list(YYSession, (yyvsp[(3) - (5)].table), NULL,0))
              DRIZZLE_YYABORT;

            if (Lex.select_lex.get_table_list()->derived)
            {
              /* it is single table update and it is update of derived table */
              my_error(ER_NON_UPDATABLE_TABLE, MYF(0),
                       Lex.select_lex.get_table_list()->alias, "UPDATE");
              DRIZZLE_YYABORT;
            }
            /*
              In case of multi-update setting write lock for all tables may
              be too pessimistic. We will decrease lock level if possible in
              multi_update().
            */
            Lex.current_select->set_lock_for_tables(TL_WRITE_DEFAULT);
          }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 4447 "drizzled/sql_yacc.yy"
    {}
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 4457 "drizzled/sql_yacc.yy"
    {
            YYSession->add_item_to_list((yyvsp[(1) - (3)].item));
			YYSession->add_value_to_list((yyvsp[(3) - (3)].item));
          }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 4470 "drizzled/sql_yacc.yy"
    {
			Lex.update_list.push_back((yyvsp[(1) - (3)].item));
            Lex.value_list.push_back((yyvsp[(3) - (3)].item));
          }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 4480 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Delete(YYSession);
            init_select(&Lex);
            Lex.lock_option= TL_WRITE_DEFAULT;
            Lex.select_lex.init_order();
            Lex.current_select->add_table_to_list(YYSession, (yyvsp[(4) - (4)].table), NULL, TL_OPTION_UPDATING, Lex.lock_option);
          }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 4488 "drizzled/sql_yacc.yy"
    {}
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 4492 "drizzled/sql_yacc.yy"
    { Lex.ignore= 0; }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 4493 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1; }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 4498 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Truncate(YYSession);
            Lex.select_lex.options= 0;
            Lex.select_lex.init_order();
          }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 4514 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= TL_READ;
            init_select(&Lex);
            Lex.current_select->parsing_place= SELECT_LIST;
          }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 4520 "drizzled/sql_yacc.yy"
    {}
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 4526 "drizzled/sql_yacc.yy"
    {
             if (not show::buildSchemas(YYSession))
				DRIZZLE_YYABORT;
           }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 4532 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTables(YYSession, (yyvsp[(2) - (3)].simple_string)))
               DRIZZLE_YYABORT;
           }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 4538 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTemporaryTables(YYSession))
               DRIZZLE_YYABORT;
           }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 4544 "drizzled/sql_yacc.yy"
    {
             if (not show::buildTableStatus(YYSession, (yyvsp[(3) - (4)].simple_string)))
               DRIZZLE_YYABORT;
           }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 4550 "drizzled/sql_yacc.yy"
    {
             if (not show::buildColumns(YYSession, (yyvsp[(4) - (5)].simple_string), (yyvsp[(3) - (5)].table)))
               DRIZZLE_YYABORT;
           }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 4556 "drizzled/sql_yacc.yy"
    {
             if (not show::buildIndex(YYSession, (yyvsp[(4) - (5)].simple_string), (yyvsp[(3) - (5)].table)))
               DRIZZLE_YYABORT;
           }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 4561 "drizzled/sql_yacc.yy"
    {
            show::buildSelectWarning(YYSession);
          }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 4565 "drizzled/sql_yacc.yy"
    {
            show::buildSelectError(YYSession);
          }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 4569 "drizzled/sql_yacc.yy"
    {
            show::buildWarnings(YYSession);
          }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 4573 "drizzled/sql_yacc.yy"
    {
            show::buildErrors(YYSession);
          }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 4577 "drizzled/sql_yacc.yy"
    {
            if (not show::buildStatus(YYSession, (yyvsp[(1) - (3)].var_type)))
              DRIZZLE_YYABORT;
          }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 4582 "drizzled/sql_yacc.yy"
    {
            if (not show::buildEngineStatus(YYSession, (yyvsp[(1) - (2)].lex_str)))
              DRIZZLE_YYABORT;
          }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 4587 "drizzled/sql_yacc.yy"
    {
            if (not show::buildCreateTable(YYSession, (yyvsp[(3) - (3)].table)))
              DRIZZLE_YYABORT;
          }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 4592 "drizzled/sql_yacc.yy"
    {
            if (not show::buildProcesslist(YYSession))
              DRIZZLE_YYABORT;
          }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 4597 "drizzled/sql_yacc.yy"
    {
            if (not show::buildVariables(YYSession, (yyvsp[(1) - (3)].var_type)))
              DRIZZLE_YYABORT;
          }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 4602 "drizzled/sql_yacc.yy"
    {
            if (not show::buildCreateSchema(YYSession, (yyvsp[(4) - (4)].lex_str)))
              DRIZZLE_YYABORT;
          }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 4608 "drizzled/sql_yacc.yy"
    { (yyval.simple_string)= 0; }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 4609 "drizzled/sql_yacc.yy"
    { (yyval.simple_string)= (yyvsp[(2) - (2)].lex_str).str; }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 4620 "drizzled/sql_yacc.yy"
    {
            Lex.wild= new (YYSession->mem_root) String((yyvsp[(2) - (2)].lex_str).str, (yyvsp[(2) - (2)].lex_str).length, system_charset_info);
          }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 4624 "drizzled/sql_yacc.yy"
    {
            Lex.current_select->where= (yyvsp[(2) - (2)].item);
            if ((yyvsp[(2) - (2)].item))
              (yyvsp[(2) - (2)].item)->top_level_item();
          }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 4634 "drizzled/sql_yacc.yy"
    {
            if (not show::buildDescribe(YYSession, (yyvsp[(2) - (2)].table)))
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 4640 "drizzled/sql_yacc.yy"
    {}
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 4642 "drizzled/sql_yacc.yy"
    { Lex.describe|= DESCRIBE_NORMAL; }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 4644 "drizzled/sql_yacc.yy"
    {
            Lex.select_lex.options|= SELECT_DESCRIBE;
          }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 4655 "drizzled/sql_yacc.yy"
    {}
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 4656 "drizzled/sql_yacc.yy"
    { Lex.describe|= DESCRIBE_EXTENDED; }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 4660 "drizzled/sql_yacc.yy"
    {}
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 4661 "drizzled/sql_yacc.yy"
    { Lex.wild= (yyvsp[(1) - (1)].string); }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 4663 "drizzled/sql_yacc.yy"
    {
            Lex.wild= new (YYSession->mem_root) String((const char*) (yyvsp[(1) - (1)].lex_str).str,
                                                    (yyvsp[(1) - (1)].lex_str).length,
                                                    system_charset_info);
          }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 4675 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Flush(YYSession);
          }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 4679 "drizzled/sql_yacc.yy"
    {}
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 4689 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushTables(true);
          }
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 4693 "drizzled/sql_yacc.yy"
    {}
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 4695 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushTablesWithReadLock(true);
          }
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 4700 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushLog(true);
          }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 4705 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushStatus(true);
          }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 4710 "drizzled/sql_yacc.yy"
    {
            statement::Flush *statement= (statement::Flush*)Lex.statement;
            statement->setFlushGlobalStatus(true);
          }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 4717 "drizzled/sql_yacc.yy"
    {}
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 4718 "drizzled/sql_yacc.yy"
    {}
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 4725 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Kill(YYSession, (yyvsp[(3) - (3)].item), (yyvsp[(2) - (3)].num));
          }
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 4731 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 4732 "drizzled/sql_yacc.yy"
    { (yyval.num)= false; }
    break;

  case 875:

/* Line 1455 of yacc.c  */
#line 4733 "drizzled/sql_yacc.yy"
    { (yyval.num)= true; }
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 4740 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::ChangeSchema(YYSession);
            Lex.select_lex.db= (yyvsp[(2) - (2)].lex_str).str;
          }
    break;

  case 877:

/* Line 1455 of yacc.c  */
#line 4750 "drizzled/sql_yacc.yy"
    {
            statement::Load *statement= new statement::Load(YYSession);
            Lex.statement= statement;

            Lex_input_stream *lip= YYSession->m_lip;
            statement->fname_start= lip->get_ptr();
          }
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 4758 "drizzled/sql_yacc.yy"
    {
            Lex.lock_option= (yyvsp[(4) - (6)].lock_type);
            Lex.duplicates= DUP_ERROR;
            Lex.ignore= 0;
            Lex.exchange= new file_exchange((yyvsp[(6) - (6)].lex_str).str, 0, (yyvsp[(2) - (6)].filetype));
          }
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 4765 "drizzled/sql_yacc.yy"
    {
            Lex_input_stream *lip= YYSession->m_lip;
            ((statement::Load *)Lex.statement)->fname_end= lip->get_ptr();
          }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 4770 "drizzled/sql_yacc.yy"
    {
            if (!Lex.current_select->add_table_to_list(YYSession,
                    (yyvsp[(12) - (12)].table), NULL, TL_OPTION_UPDATING,
                    Lex.lock_option))
              DRIZZLE_YYABORT;
            Lex.field_list.clear();
            Lex.update_list.clear();
            Lex.value_list.clear();
          }
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 4781 "drizzled/sql_yacc.yy"
    {}
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 4785 "drizzled/sql_yacc.yy"
    { (yyval.filetype)= FILETYPE_CSV; }
    break;

  case 883:

/* Line 1455 of yacc.c  */
#line 4788 "drizzled/sql_yacc.yy"
    { (yyval.lock_type)= TL_WRITE_DEFAULT; }
    break;

  case 884:

/* Line 1455 of yacc.c  */
#line 4790 "drizzled/sql_yacc.yy"
    {
              (yyval.lock_type)= TL_WRITE_CONCURRENT_INSERT;
          }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 4796 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 886:

/* Line 1455 of yacc.c  */
#line 4797 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 4798 "drizzled/sql_yacc.yy"
    { Lex.ignore= 1; }
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 4802 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 889:

/* Line 1455 of yacc.c  */
#line 4803 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_ERROR; }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 4804 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 891:

/* Line 1455 of yacc.c  */
#line 4805 "drizzled/sql_yacc.yy"
    { Lex.ignore= true; }
    break;

  case 892:

/* Line 1455 of yacc.c  */
#line 4806 "drizzled/sql_yacc.yy"
    { Lex.duplicates=DUP_REPLACE; }
    break;

  case 893:

/* Line 1455 of yacc.c  */
#line 4807 "drizzled/sql_yacc.yy"
    { Lex.ignore= true; }
    break;

  case 898:

/* Line 1455 of yacc.c  */
#line 4822 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->field_term= (yyvsp[(3) - (3)].string);
          }
    break;

  case 899:

/* Line 1455 of yacc.c  */
#line 4827 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->enclosed= (yyvsp[(4) - (4)].string);
            Lex.exchange->opt_enclosed= 1;
          }
    break;

  case 900:

/* Line 1455 of yacc.c  */
#line 4833 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->enclosed= (yyvsp[(3) - (3)].string);
          }
    break;

  case 901:

/* Line 1455 of yacc.c  */
#line 4838 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->escaped= (yyvsp[(3) - (3)].string);
          }
    break;

  case 906:

/* Line 1455 of yacc.c  */
#line 4856 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->line_term= (yyvsp[(3) - (3)].string);
          }
    break;

  case 907:

/* Line 1455 of yacc.c  */
#line 4861 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->line_start= (yyvsp[(3) - (3)].string);
          }
    break;

  case 909:

/* Line 1455 of yacc.c  */
#line 4870 "drizzled/sql_yacc.yy"
    {
            assert(Lex.exchange != 0);
            Lex.exchange->skip_lines= atol((yyvsp[(2) - (3)].lex_str).str);
          }
    break;

  case 910:

/* Line 1455 of yacc.c  */
#line 4877 "drizzled/sql_yacc.yy"
    { }
    break;

  case 911:

/* Line 1455 of yacc.c  */
#line 4878 "drizzled/sql_yacc.yy"
    { }
    break;

  case 912:

/* Line 1455 of yacc.c  */
#line 4882 "drizzled/sql_yacc.yy"
    {}
    break;

  case 913:

/* Line 1455 of yacc.c  */
#line 4883 "drizzled/sql_yacc.yy"
    {}
    break;

  case 914:

/* Line 1455 of yacc.c  */
#line 4884 "drizzled/sql_yacc.yy"
    {}
    break;

  case 915:

/* Line 1455 of yacc.c  */
#line 4889 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(3) - (3)].item)); }
    break;

  case 916:

/* Line 1455 of yacc.c  */
#line 4891 "drizzled/sql_yacc.yy"
    { Lex.field_list.push_back((yyvsp[(1) - (1)].item)); }
    break;

  case 917:

/* Line 1455 of yacc.c  */
#line 4895 "drizzled/sql_yacc.yy"
    {(yyval.item)= (yyvsp[(1) - (1)].item);}
    break;

  case 918:

/* Line 1455 of yacc.c  */
#line 4897 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_user_var_as_out_param((yyvsp[(2) - (2)].lex_str)); }
    break;

  case 919:

/* Line 1455 of yacc.c  */
#line 4901 "drizzled/sql_yacc.yy"
    {}
    break;

  case 920:

/* Line 1455 of yacc.c  */
#line 4902 "drizzled/sql_yacc.yy"
    {}
    break;

  case 921:

/* Line 1455 of yacc.c  */
#line 4909 "drizzled/sql_yacc.yy"
    {
          (yyval.item) = new Item_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length, YYSession->variables.getCollation());
        }
    break;

  case 922:

/* Line 1455 of yacc.c  */
#line 4913 "drizzled/sql_yacc.yy"
    {
            ((Item_string*) (yyvsp[(1) - (2)].item))->append((yyvsp[(2) - (2)].lex_str).str, (yyvsp[(2) - (2)].lex_str).length);
          }
    break;

  case 923:

/* Line 1455 of yacc.c  */
#line 4920 "drizzled/sql_yacc.yy"
    {
            (yyval.string)= new (YYSession->mem_root) String((yyvsp[(1) - (1)].lex_str).str,
                                             (yyvsp[(1) - (1)].lex_str).length,
                                             YYSession->variables.getCollation());
          }
    break;

  case 924:

/* Line 1455 of yacc.c  */
#line 4926 "drizzled/sql_yacc.yy"
    {
            Item *tmp= new Item_hex_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length);
            /*
              it is OK only emulate fix_fields, because we need only
              value of constant
            */
            (yyval.string)= tmp ?
              tmp->quick_fix_field(), tmp->val_str((String*) 0) :
              (String*) 0;
          }
    break;

  case 925:

/* Line 1455 of yacc.c  */
#line 4937 "drizzled/sql_yacc.yy"
    {
            Item *tmp= new Item_bin_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length);
            /*
              it is OK only emulate fix_fields, because we need only
              value of constant
            */
            (yyval.string)= tmp ? tmp->quick_fix_field(), tmp->val_str((String*) 0) :
              (String*) 0;
          }
    break;

  case 926:

/* Line 1455 of yacc.c  */
#line 4949 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 927:

/* Line 1455 of yacc.c  */
#line 4950 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item_num); }
    break;

  case 928:

/* Line 1455 of yacc.c  */
#line 4952 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(2) - (2)].item_num)->max_length++;
            (yyval.item)= (yyvsp[(2) - (2)].item_num)->neg();
          }
    break;

  case 929:

/* Line 1455 of yacc.c  */
#line 4959 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 930:

/* Line 1455 of yacc.c  */
#line 4960 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 931:

/* Line 1455 of yacc.c  */
#line 4962 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 932:

/* Line 1455 of yacc.c  */
#line 4966 "drizzled/sql_yacc.yy"
    { (yyval.item)= new drizzled::item::False(); }
    break;

  case 933:

/* Line 1455 of yacc.c  */
#line 4967 "drizzled/sql_yacc.yy"
    { (yyval.item)= new drizzled::item::True(); }
    break;

  case 934:

/* Line 1455 of yacc.c  */
#line 4968 "drizzled/sql_yacc.yy"
    { (yyval.item) = new Item_hex_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length);}
    break;

  case 935:

/* Line 1455 of yacc.c  */
#line 4969 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_bin_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 936:

/* Line 1455 of yacc.c  */
#line 4970 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 937:

/* Line 1455 of yacc.c  */
#line 4971 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 938:

/* Line 1455 of yacc.c  */
#line 4975 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 939:

/* Line 1455 of yacc.c  */
#line 4976 "drizzled/sql_yacc.yy"
    { (yyval.item) = new Item_hex_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length);}
    break;

  case 940:

/* Line 1455 of yacc.c  */
#line 4977 "drizzled/sql_yacc.yy"
    { (yyval.item)= new Item_bin_string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 941:

/* Line 1455 of yacc.c  */
#line 4978 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 942:

/* Line 1455 of yacc.c  */
#line 4980 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 943:

/* Line 1455 of yacc.c  */
#line 4984 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item_num); }
    break;

  case 944:

/* Line 1455 of yacc.c  */
#line 4986 "drizzled/sql_yacc.yy"
    {
            (yyvsp[(2) - (2)].item_num)->max_length++;
            (yyval.item)= (yyvsp[(2) - (2)].item_num)->neg();
          }
    break;

  case 945:

/* Line 1455 of yacc.c  */
#line 4994 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 946:

/* Line 1455 of yacc.c  */
#line 4999 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new drizzled::item::False();
          }
    break;

  case 947:

/* Line 1455 of yacc.c  */
#line 5003 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= new drizzled::item::True();
          }
    break;

  case 948:

/* Line 1455 of yacc.c  */
#line 5009 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item); }
    break;

  case 949:

/* Line 1455 of yacc.c  */
#line 5011 "drizzled/sql_yacc.yy"
    {
            (yyval.item) = new Item_null();
            YYSession->m_lip->next_state=MY_LEX_OPERATOR_OR_IDENT;
          }
    break;

  case 950:

/* Line 1455 of yacc.c  */
#line 5015 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(1) - (1)].item_num); }
    break;

  case 951:

/* Line 1455 of yacc.c  */
#line 5016 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 952:

/* Line 1455 of yacc.c  */
#line 5017 "drizzled/sql_yacc.yy"
    { (yyval.item) = (yyvsp[(2) - (2)].item); }
    break;

  case 953:

/* Line 1455 of yacc.c  */
#line 5022 "drizzled/sql_yacc.yy"
    {
            int error;
            (yyval.item_num) = new Item_int((yyvsp[(1) - (1)].lex_str).str, (int64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, NULL, &error), (yyvsp[(1) - (1)].lex_str).length);
          }
    break;

  case 954:

/* Line 1455 of yacc.c  */
#line 5027 "drizzled/sql_yacc.yy"
    {
            int error;
            (yyval.item_num) = new Item_int((yyvsp[(1) - (1)].lex_str).str, (int64_t) internal::my_strtoll10((yyvsp[(1) - (1)].lex_str).str, NULL, &error), (yyvsp[(1) - (1)].lex_str).length);
          }
    break;

  case 955:

/* Line 1455 of yacc.c  */
#line 5032 "drizzled/sql_yacc.yy"
    { (yyval.item_num) = new Item_uint((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length); }
    break;

  case 956:

/* Line 1455 of yacc.c  */
#line 5034 "drizzled/sql_yacc.yy"
    {
            (yyval.item_num)= new Item_decimal((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length, YYSession->charset());
            if (YYSession->is_error())
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 957:

/* Line 1455 of yacc.c  */
#line 5042 "drizzled/sql_yacc.yy"
    {
            (yyval.item_num) = new Item_float((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length);
            if (YYSession->is_error())
            {
              DRIZZLE_YYABORT;
            }
          }
    break;

  case 958:

/* Line 1455 of yacc.c  */
#line 5056 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 959:

/* Line 1455 of yacc.c  */
#line 5057 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 960:

/* Line 1455 of yacc.c  */
#line 5062 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildTableWild(&Lex, NULL_LEX_STRING, (yyvsp[(1) - (3)].lex_str));
          }
    break;

  case 961:

/* Line 1455 of yacc.c  */
#line 5066 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildTableWild(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str));
          }
    break;

  case 962:

/* Line 1455 of yacc.c  */
#line 5072 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 963:

/* Line 1455 of yacc.c  */
#line 5077 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, NULL_LEX_STRING, NULL_LEX_STRING, (yyvsp[(1) - (1)].lex_str));
          }
    break;

  case 964:

/* Line 1455 of yacc.c  */
#line 5080 "drizzled/sql_yacc.yy"
    { (yyval.item)= (yyvsp[(1) - (1)].item); }
    break;

  case 965:

/* Line 1455 of yacc.c  */
#line 5085 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, NULL_LEX_STRING, (yyvsp[(1) - (3)].lex_str), (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 966:

/* Line 1455 of yacc.c  */
#line 5089 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, NULL_LEX_STRING, (yyvsp[(2) - (4)].lex_str), (yyvsp[(4) - (4)].lex_str));
          }
    break;

  case 967:

/* Line 1455 of yacc.c  */
#line 5093 "drizzled/sql_yacc.yy"
    {
            (yyval.item)= parser::buildIdent(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str), (yyvsp[(5) - (5)].lex_str));
          }
    break;

  case 968:

/* Line 1455 of yacc.c  */
#line 5100 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 969:

/* Line 1455 of yacc.c  */
#line 5104 "drizzled/sql_yacc.yy"
    {
            if (not parser::checkFieldIdent(&Lex, (yyvsp[(1) - (5)].lex_str), (yyvsp[(3) - (5)].lex_str)))
              DRIZZLE_YYABORT;

            (yyval.lex_str)=(yyvsp[(5) - (5)].lex_str);
          }
    break;

  case 970:

/* Line 1455 of yacc.c  */
#line 5111 "drizzled/sql_yacc.yy"
    {
            if (not parser::checkFieldIdent(&Lex, NULL_LEX_STRING, (yyvsp[(1) - (3)].lex_str)))
              DRIZZLE_YYABORT;

            (yyval.lex_str)=(yyvsp[(3) - (3)].lex_str);
          }
    break;

  case 971:

/* Line 1455 of yacc.c  */
#line 5118 "drizzled/sql_yacc.yy"
    { /* For Delphi */
            (yyval.lex_str)=(yyvsp[(2) - (2)].lex_str);
          }
    break;

  case 972:

/* Line 1455 of yacc.c  */
#line 5125 "drizzled/sql_yacc.yy"
    {
            (yyval.table)= new Table_ident((yyvsp[(1) - (1)].lex_str));
          }
    break;

  case 973:

/* Line 1455 of yacc.c  */
#line 5129 "drizzled/sql_yacc.yy"
    {
            (yyval.table)=new Table_ident((yyvsp[(1) - (3)].lex_str),(yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 974:

/* Line 1455 of yacc.c  */
#line 5133 "drizzled/sql_yacc.yy"
    { /* For Delphi */
          (yyval.table)= new Table_ident((yyvsp[(2) - (2)].lex_str));
        }
    break;

  case 977:

/* Line 1455 of yacc.c  */
#line 5148 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 978:

/* Line 1455 of yacc.c  */
#line 5152 "drizzled/sql_yacc.yy"
    {
            const charset_info_st * const cs= system_charset_info;
            int dummy_error;
            uint32_t wlen= cs->cset->well_formed_len(cs, (yyvsp[(1) - (1)].lex_str).str,
                                                 (yyvsp[(1) - (1)].lex_str).str+(yyvsp[(1) - (1)].lex_str).length,
                                                 (yyvsp[(1) - (1)].lex_str).length, &dummy_error);
            if (wlen < (yyvsp[(1) - (1)].lex_str).length)
            {
              my_error(ER_INVALID_CHARACTER_STRING, MYF(0),
                       cs->csname, (yyvsp[(1) - (1)].lex_str).str + wlen);
              DRIZZLE_YYABORT;
            }
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 979:

/* Line 1455 of yacc.c  */
#line 5170 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 980:

/* Line 1455 of yacc.c  */
#line 5177 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 981:

/* Line 1455 of yacc.c  */
#line 5184 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str)= (yyvsp[(1) - (1)].lex_str);
          }
    break;

  case 982:

/* Line 1455 of yacc.c  */
#line 5190 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 983:

/* Line 1455 of yacc.c  */
#line 5192 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).str= YYSession->mem.strmake((yyvsp[(1) - (1)].symbol).str, (yyvsp[(1) - (1)].symbol).length);
            (yyval.lex_str).length= (yyvsp[(1) - (1)].symbol).length;
          }
    break;

  case 984:

/* Line 1455 of yacc.c  */
#line 5199 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 985:

/* Line 1455 of yacc.c  */
#line 5200 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 986:

/* Line 1455 of yacc.c  */
#line 5204 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 987:

/* Line 1455 of yacc.c  */
#line 5205 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 988:

/* Line 1455 of yacc.c  */
#line 5209 "drizzled/sql_yacc.yy"
    {}
    break;

  case 989:

/* Line 1455 of yacc.c  */
#line 5210 "drizzled/sql_yacc.yy"
    {}
    break;

  case 990:

/* Line 1455 of yacc.c  */
#line 5211 "drizzled/sql_yacc.yy"
    {}
    break;

  case 991:

/* Line 1455 of yacc.c  */
#line 5216 "drizzled/sql_yacc.yy"
    {}
    break;

  case 992:

/* Line 1455 of yacc.c  */
#line 5217 "drizzled/sql_yacc.yy"
    {}
    break;

  case 993:

/* Line 1455 of yacc.c  */
#line 5218 "drizzled/sql_yacc.yy"
    {}
    break;

  case 994:

/* Line 1455 of yacc.c  */
#line 5219 "drizzled/sql_yacc.yy"
    {}
    break;

  case 995:

/* Line 1455 of yacc.c  */
#line 5220 "drizzled/sql_yacc.yy"
    {}
    break;

  case 996:

/* Line 1455 of yacc.c  */
#line 5221 "drizzled/sql_yacc.yy"
    {}
    break;

  case 997:

/* Line 1455 of yacc.c  */
#line 5222 "drizzled/sql_yacc.yy"
    {}
    break;

  case 998:

/* Line 1455 of yacc.c  */
#line 5223 "drizzled/sql_yacc.yy"
    {}
    break;

  case 999:

/* Line 1455 of yacc.c  */
#line 5224 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1000:

/* Line 1455 of yacc.c  */
#line 5225 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1001:

/* Line 1455 of yacc.c  */
#line 5226 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1002:

/* Line 1455 of yacc.c  */
#line 5227 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1003:

/* Line 1455 of yacc.c  */
#line 5228 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1004:

/* Line 1455 of yacc.c  */
#line 5229 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1005:

/* Line 1455 of yacc.c  */
#line 5230 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1006:

/* Line 1455 of yacc.c  */
#line 5231 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1007:

/* Line 1455 of yacc.c  */
#line 5232 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1008:

/* Line 1455 of yacc.c  */
#line 5233 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1009:

/* Line 1455 of yacc.c  */
#line 5234 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1010:

/* Line 1455 of yacc.c  */
#line 5235 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1011:

/* Line 1455 of yacc.c  */
#line 5236 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1012:

/* Line 1455 of yacc.c  */
#line 5246 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1013:

/* Line 1455 of yacc.c  */
#line 5247 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1014:

/* Line 1455 of yacc.c  */
#line 5248 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1015:

/* Line 1455 of yacc.c  */
#line 5249 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1016:

/* Line 1455 of yacc.c  */
#line 5250 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1017:

/* Line 1455 of yacc.c  */
#line 5251 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1018:

/* Line 1455 of yacc.c  */
#line 5252 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1019:

/* Line 1455 of yacc.c  */
#line 5253 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1020:

/* Line 1455 of yacc.c  */
#line 5254 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1021:

/* Line 1455 of yacc.c  */
#line 5255 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1022:

/* Line 1455 of yacc.c  */
#line 5256 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1023:

/* Line 1455 of yacc.c  */
#line 5257 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1024:

/* Line 1455 of yacc.c  */
#line 5258 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1025:

/* Line 1455 of yacc.c  */
#line 5259 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1026:

/* Line 1455 of yacc.c  */
#line 5260 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1027:

/* Line 1455 of yacc.c  */
#line 5261 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1028:

/* Line 1455 of yacc.c  */
#line 5262 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1029:

/* Line 1455 of yacc.c  */
#line 5263 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1030:

/* Line 1455 of yacc.c  */
#line 5264 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1031:

/* Line 1455 of yacc.c  */
#line 5265 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1032:

/* Line 1455 of yacc.c  */
#line 5266 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1033:

/* Line 1455 of yacc.c  */
#line 5267 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1034:

/* Line 1455 of yacc.c  */
#line 5268 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1035:

/* Line 1455 of yacc.c  */
#line 5269 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1036:

/* Line 1455 of yacc.c  */
#line 5270 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1037:

/* Line 1455 of yacc.c  */
#line 5271 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1038:

/* Line 1455 of yacc.c  */
#line 5272 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1039:

/* Line 1455 of yacc.c  */
#line 5273 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1040:

/* Line 1455 of yacc.c  */
#line 5274 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1041:

/* Line 1455 of yacc.c  */
#line 5275 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1042:

/* Line 1455 of yacc.c  */
#line 5276 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1043:

/* Line 1455 of yacc.c  */
#line 5277 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1044:

/* Line 1455 of yacc.c  */
#line 5278 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1045:

/* Line 1455 of yacc.c  */
#line 5279 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1046:

/* Line 1455 of yacc.c  */
#line 5280 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1047:

/* Line 1455 of yacc.c  */
#line 5281 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1048:

/* Line 1455 of yacc.c  */
#line 5282 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1049:

/* Line 1455 of yacc.c  */
#line 5283 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1050:

/* Line 1455 of yacc.c  */
#line 5284 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1051:

/* Line 1455 of yacc.c  */
#line 5285 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1052:

/* Line 1455 of yacc.c  */
#line 5286 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1053:

/* Line 1455 of yacc.c  */
#line 5287 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1054:

/* Line 1455 of yacc.c  */
#line 5288 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1055:

/* Line 1455 of yacc.c  */
#line 5289 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1056:

/* Line 1455 of yacc.c  */
#line 5290 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1057:

/* Line 1455 of yacc.c  */
#line 5291 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1058:

/* Line 1455 of yacc.c  */
#line 5292 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1059:

/* Line 1455 of yacc.c  */
#line 5293 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1060:

/* Line 1455 of yacc.c  */
#line 5294 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1061:

/* Line 1455 of yacc.c  */
#line 5295 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1062:

/* Line 1455 of yacc.c  */
#line 5296 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1063:

/* Line 1455 of yacc.c  */
#line 5297 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1064:

/* Line 1455 of yacc.c  */
#line 5298 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1065:

/* Line 1455 of yacc.c  */
#line 5299 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1066:

/* Line 1455 of yacc.c  */
#line 5300 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1067:

/* Line 1455 of yacc.c  */
#line 5301 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1068:

/* Line 1455 of yacc.c  */
#line 5302 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1069:

/* Line 1455 of yacc.c  */
#line 5303 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1070:

/* Line 1455 of yacc.c  */
#line 5304 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1071:

/* Line 1455 of yacc.c  */
#line 5305 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1072:

/* Line 1455 of yacc.c  */
#line 5306 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1073:

/* Line 1455 of yacc.c  */
#line 5307 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1074:

/* Line 1455 of yacc.c  */
#line 5308 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1075:

/* Line 1455 of yacc.c  */
#line 5309 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1076:

/* Line 1455 of yacc.c  */
#line 5310 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1077:

/* Line 1455 of yacc.c  */
#line 5311 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1078:

/* Line 1455 of yacc.c  */
#line 5312 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1079:

/* Line 1455 of yacc.c  */
#line 5313 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1080:

/* Line 1455 of yacc.c  */
#line 5314 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1081:

/* Line 1455 of yacc.c  */
#line 5315 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1082:

/* Line 1455 of yacc.c  */
#line 5316 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1083:

/* Line 1455 of yacc.c  */
#line 5317 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1084:

/* Line 1455 of yacc.c  */
#line 5318 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1085:

/* Line 1455 of yacc.c  */
#line 5319 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1086:

/* Line 1455 of yacc.c  */
#line 5320 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1087:

/* Line 1455 of yacc.c  */
#line 5321 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1088:

/* Line 1455 of yacc.c  */
#line 5322 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1089:

/* Line 1455 of yacc.c  */
#line 5323 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1090:

/* Line 1455 of yacc.c  */
#line 5324 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1091:

/* Line 1455 of yacc.c  */
#line 5325 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1092:

/* Line 1455 of yacc.c  */
#line 5326 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1093:

/* Line 1455 of yacc.c  */
#line 5327 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1094:

/* Line 1455 of yacc.c  */
#line 5328 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1095:

/* Line 1455 of yacc.c  */
#line 5329 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1096:

/* Line 1455 of yacc.c  */
#line 5330 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1097:

/* Line 1455 of yacc.c  */
#line 5331 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1098:

/* Line 1455 of yacc.c  */
#line 5332 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1099:

/* Line 1455 of yacc.c  */
#line 5333 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1100:

/* Line 1455 of yacc.c  */
#line 5334 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1101:

/* Line 1455 of yacc.c  */
#line 5335 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1102:

/* Line 1455 of yacc.c  */
#line 5336 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1103:

/* Line 1455 of yacc.c  */
#line 5337 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1104:

/* Line 1455 of yacc.c  */
#line 5338 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1105:

/* Line 1455 of yacc.c  */
#line 5339 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1106:

/* Line 1455 of yacc.c  */
#line 5340 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1107:

/* Line 1455 of yacc.c  */
#line 5341 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1108:

/* Line 1455 of yacc.c  */
#line 5342 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1109:

/* Line 1455 of yacc.c  */
#line 5343 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1110:

/* Line 1455 of yacc.c  */
#line 5344 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1111:

/* Line 1455 of yacc.c  */
#line 5345 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1112:

/* Line 1455 of yacc.c  */
#line 5346 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1113:

/* Line 1455 of yacc.c  */
#line 5347 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1114:

/* Line 1455 of yacc.c  */
#line 5348 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1115:

/* Line 1455 of yacc.c  */
#line 5349 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1116:

/* Line 1455 of yacc.c  */
#line 5350 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1117:

/* Line 1455 of yacc.c  */
#line 5351 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1118:

/* Line 1455 of yacc.c  */
#line 5352 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1119:

/* Line 1455 of yacc.c  */
#line 5353 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1120:

/* Line 1455 of yacc.c  */
#line 5354 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1121:

/* Line 1455 of yacc.c  */
#line 5355 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1122:

/* Line 1455 of yacc.c  */
#line 5356 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1123:

/* Line 1455 of yacc.c  */
#line 5357 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1124:

/* Line 1455 of yacc.c  */
#line 5358 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1125:

/* Line 1455 of yacc.c  */
#line 5359 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1126:

/* Line 1455 of yacc.c  */
#line 5360 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1127:

/* Line 1455 of yacc.c  */
#line 5361 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1128:

/* Line 1455 of yacc.c  */
#line 5362 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1129:

/* Line 1455 of yacc.c  */
#line 5363 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1130:

/* Line 1455 of yacc.c  */
#line 5364 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1131:

/* Line 1455 of yacc.c  */
#line 5365 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1132:

/* Line 1455 of yacc.c  */
#line 5366 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1133:

/* Line 1455 of yacc.c  */
#line 5367 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1134:

/* Line 1455 of yacc.c  */
#line 5368 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1135:

/* Line 1455 of yacc.c  */
#line 5369 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1136:

/* Line 1455 of yacc.c  */
#line 5370 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1137:

/* Line 1455 of yacc.c  */
#line 5371 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1138:

/* Line 1455 of yacc.c  */
#line 5378 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::SetOption(YYSession);
          }
    break;

  case 1139:

/* Line 1455 of yacc.c  */
#line 5382 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1140:

/* Line 1455 of yacc.c  */
#line 5386 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1141:

/* Line 1455 of yacc.c  */
#line 5387 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1144:

/* Line 1455 of yacc.c  */
#line 5396 "drizzled/sql_yacc.yy"
    { }
    break;

  case 1145:

/* Line 1455 of yacc.c  */
#line 5398 "drizzled/sql_yacc.yy"
    { }
    break;

  case 1146:

/* Line 1455 of yacc.c  */
#line 5402 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1147:

/* Line 1455 of yacc.c  */
#line 5403 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1148:

/* Line 1455 of yacc.c  */
#line 5404 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1149:

/* Line 1455 of yacc.c  */
#line 5405 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1150:

/* Line 1455 of yacc.c  */
#line 5409 "drizzled/sql_yacc.yy"
    { (yyval.num)= OPT_DEFAULT; }
    break;

  case 1151:

/* Line 1455 of yacc.c  */
#line 5410 "drizzled/sql_yacc.yy"
    { ((statement::SetOption *)Lex.statement)->one_shot_set= true; (yyval.num)= OPT_SESSION; }
    break;

  case 1152:

/* Line 1455 of yacc.c  */
#line 5414 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1153:

/* Line 1455 of yacc.c  */
#line 5415 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1154:

/* Line 1455 of yacc.c  */
#line 5416 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1155:

/* Line 1455 of yacc.c  */
#line 5417 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1156:

/* Line 1455 of yacc.c  */
#line 5421 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_DEFAULT; }
    break;

  case 1157:

/* Line 1455 of yacc.c  */
#line 5422 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_GLOBAL; }
    break;

  case 1158:

/* Line 1455 of yacc.c  */
#line 5423 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1159:

/* Line 1455 of yacc.c  */
#line 5424 "drizzled/sql_yacc.yy"
    { (yyval.var_type)=OPT_SESSION; }
    break;

  case 1162:

/* Line 1455 of yacc.c  */
#line 5434 "drizzled/sql_yacc.yy"
    {
            if ((yyvsp[(2) - (4)].variable).var)
            { /* System variable */
              if ((yyvsp[(1) - (4)].var_type))
              {
                Lex.option_type= (yyvsp[(1) - (4)].var_type);
              }
              Lex.var_list.push_back(SetVarPtr(new set_var(Lex.option_type, (yyvsp[(2) - (4)].variable).var, &(yyvsp[(2) - (4)].variable).base_name, (yyvsp[(4) - (4)].item))));
            }
          }
    break;

  case 1163:

/* Line 1455 of yacc.c  */
#line 5445 "drizzled/sql_yacc.yy"
    {
            Lex.option_type= (yyvsp[(1) - (5)].var_type);
            Lex.var_list.push_back(SetVarPtr(new set_var(Lex.option_type,
                                              find_sys_var("tx_isolation"),
                                              &null_lex_str,
                                              new Item_int((int32_t)
                                              (yyvsp[(5) - (5)].tx_isolation)))));
          }
    break;

  case 1164:

/* Line 1455 of yacc.c  */
#line 5457 "drizzled/sql_yacc.yy"
    {
            Lex.var_list.push_back(SetVarPtr(new set_var_user(new Item_func_set_user_var((yyvsp[(2) - (4)].lex_str),(yyvsp[(4) - (4)].item)))));
          }
    break;

  case 1165:

/* Line 1455 of yacc.c  */
#line 5461 "drizzled/sql_yacc.yy"
    {
            Lex.var_list.push_back(SetVarPtr(new set_var((yyvsp[(3) - (6)].var_type), (yyvsp[(4) - (6)].variable).var, &(yyvsp[(4) - (6)].variable).base_name, (yyvsp[(6) - (6)].item))));
          }
    break;

  case 1166:

/* Line 1455 of yacc.c  */
#line 5467 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1167:

/* Line 1455 of yacc.c  */
#line 5468 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1168:

/* Line 1455 of yacc.c  */
#line 5469 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str);}
    break;

  case 1169:

/* Line 1455 of yacc.c  */
#line 5474 "drizzled/sql_yacc.yy"
    {
            (yyval.lex_str).str= YYSession->mem.strmake((yyvsp[(1) - (1)].symbol).str, (yyvsp[(1) - (1)].symbol).length);
            (yyval.lex_str).length= (yyvsp[(1) - (1)].symbol).length;
          }
    break;

  case 1170:

/* Line 1455 of yacc.c  */
#line 5478 "drizzled/sql_yacc.yy"
    { (yyval.lex_str)=(yyvsp[(1) - (1)].lex_str); }
    break;

  case 1171:

/* Line 1455 of yacc.c  */
#line 5483 "drizzled/sql_yacc.yy"
    {
            /* We have to lookup here since local vars can shadow sysvars */
            {
              /* Not an SP local variable */
              sys_var *tmp= find_sys_var(std::string((yyvsp[(1) - (1)].lex_str).str, (yyvsp[(1) - (1)].lex_str).length));
              if (!tmp)
                DRIZZLE_YYABORT;
              (yyval.variable).var= tmp;
              (yyval.variable).base_name= null_lex_str;
            }
          }
    break;

  case 1172:

/* Line 1455 of yacc.c  */
#line 5497 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_READ_UNCOMMITTED; }
    break;

  case 1173:

/* Line 1455 of yacc.c  */
#line 5498 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_READ_COMMITTED; }
    break;

  case 1174:

/* Line 1455 of yacc.c  */
#line 5499 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_REPEATABLE_READ; }
    break;

  case 1175:

/* Line 1455 of yacc.c  */
#line 5500 "drizzled/sql_yacc.yy"
    { (yyval.tx_isolation)= ISO_SERIALIZABLE; }
    break;

  case 1176:

/* Line 1455 of yacc.c  */
#line 5504 "drizzled/sql_yacc.yy"
    { (yyval.item)=(yyvsp[(1) - (1)].item); }
    break;

  case 1177:

/* Line 1455 of yacc.c  */
#line 5505 "drizzled/sql_yacc.yy"
    { (yyval.item)=0; }
    break;

  case 1178:

/* Line 1455 of yacc.c  */
#line 5506 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string("ON",  2, system_charset_info); }
    break;

  case 1179:

/* Line 1455 of yacc.c  */
#line 5507 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string("ALL", 3, system_charset_info); }
    break;

  case 1180:

/* Line 1455 of yacc.c  */
#line 5508 "drizzled/sql_yacc.yy"
    { (yyval.item)=new Item_string("binary", 6, system_charset_info); }
    break;

  case 1183:

/* Line 1455 of yacc.c  */
#line 5518 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::UnlockTables(YYSession);
          }
    break;

  case 1184:

/* Line 1455 of yacc.c  */
#line 5522 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1185:

/* Line 1455 of yacc.c  */
#line 5527 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::StartTransaction(YYSession);
          }
    break;

  case 1186:

/* Line 1455 of yacc.c  */
#line 5530 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1187:

/* Line 1455 of yacc.c  */
#line 5534 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1188:

/* Line 1455 of yacc.c  */
#line 5535 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1189:

/* Line 1455 of yacc.c  */
#line 5540 "drizzled/sql_yacc.yy"
    { (yyval.num)= (YYSession->variables.completion_type == 1); }
    break;

  case 1190:

/* Line 1455 of yacc.c  */
#line 5541 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1191:

/* Line 1455 of yacc.c  */
#line 5542 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1192:

/* Line 1455 of yacc.c  */
#line 5547 "drizzled/sql_yacc.yy"
    { (yyval.num)= (YYSession->variables.completion_type == 2); }
    break;

  case 1193:

/* Line 1455 of yacc.c  */
#line 5548 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1194:

/* Line 1455 of yacc.c  */
#line 5549 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1195:

/* Line 1455 of yacc.c  */
#line 5553 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1196:

/* Line 1455 of yacc.c  */
#line 5554 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1197:

/* Line 1455 of yacc.c  */
#line 5559 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Commit(YYSession, (yyvsp[(3) - (4)].num), (yyvsp[(4) - (4)].num));
          }
    break;

  case 1198:

/* Line 1455 of yacc.c  */
#line 5566 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Rollback(YYSession, (yyvsp[(3) - (4)].num), (yyvsp[(4) - (4)].num));
          }
    break;

  case 1199:

/* Line 1455 of yacc.c  */
#line 5570 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::RollbackToSavepoint(YYSession, (yyvsp[(5) - (5)].lex_str));
          }
    break;

  case 1200:

/* Line 1455 of yacc.c  */
#line 5577 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::Savepoint(YYSession, (yyvsp[(2) - (2)].lex_str));
          }
    break;

  case 1201:

/* Line 1455 of yacc.c  */
#line 5584 "drizzled/sql_yacc.yy"
    {
            Lex.statement= new statement::ReleaseSavepoint(YYSession, (yyvsp[(3) - (3)].lex_str));
          }
    break;

  case 1203:

/* Line 1455 of yacc.c  */
#line 5599 "drizzled/sql_yacc.yy"
    {}
    break;

  case 1205:

/* Line 1455 of yacc.c  */
#line 5605 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(2) - (2)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 1206:

/* Line 1455 of yacc.c  */
#line 5610 "drizzled/sql_yacc.yy"
    {
            /*
              Remove from the name resolution context stack the context of the
              last select in the union.
            */
            Lex.pop_context();
          }
    break;

  case 1207:

/* Line 1455 of yacc.c  */
#line 5620 "drizzled/sql_yacc.yy"
    { (yyval.num)= 0; }
    break;

  case 1208:

/* Line 1455 of yacc.c  */
#line 5621 "drizzled/sql_yacc.yy"
    { (yyval.num)= 1; }
    break;

  case 1209:

/* Line 1455 of yacc.c  */
#line 5622 "drizzled/sql_yacc.yy"
    { (yyval.num)= 1; }
    break;

  case 1210:

/* Line 1455 of yacc.c  */
#line 5626 "drizzled/sql_yacc.yy"
    {
            assert(Lex.current_select->linkage != GLOBAL_OPTIONS_TYPE);
            Select_Lex *sel= Lex.current_select;
            Select_Lex_Unit *unit= sel->master_unit();
            Select_Lex *fake= unit->fake_select_lex;
            if (fake)
            {
              unit->global_parameters= fake;
              fake->no_table_names_allowed= 1;
              Lex.current_select= fake;
            }
            YYSession->setWhere("global ORDER clause");
          }
    break;

  case 1211:

/* Line 1455 of yacc.c  */
#line 5640 "drizzled/sql_yacc.yy"
    {
            YYSession->lex().current_select->no_table_names_allowed= 0;
            YYSession->setWhere("");
          }
    break;

  case 1214:

/* Line 1455 of yacc.c  */
#line 5652 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1215:

/* Line 1455 of yacc.c  */
#line 5653 "drizzled/sql_yacc.yy"
    { (yyval.num)=1; }
    break;

  case 1216:

/* Line 1455 of yacc.c  */
#line 5654 "drizzled/sql_yacc.yy"
    { (yyval.num)=0; }
    break;

  case 1217:

/* Line 1455 of yacc.c  */
#line 5659 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= Lex.current_select->master_unit()->first_select();
          }
    break;

  case 1218:

/* Line 1455 of yacc.c  */
#line 5663 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= Lex.current_select->master_unit()->first_select();
          }
    break;

  case 1220:

/* Line 1455 of yacc.c  */
#line 5672 "drizzled/sql_yacc.yy"
    {
            if (parser::add_select_to_union_list(YYSession, &Lex, (bool)(yyvsp[(3) - (3)].num)))
              DRIZZLE_YYABORT;
          }
    break;

  case 1221:

/* Line 1455 of yacc.c  */
#line 5677 "drizzled/sql_yacc.yy"
    {
            Lex.pop_context();
            (yyval.select_lex)= (yyvsp[(1) - (5)].select_lex);
          }
    break;

  case 1222:

/* Line 1455 of yacc.c  */
#line 5686 "drizzled/sql_yacc.yy"
    {
            (yyval.select_lex)= (yyvsp[(2) - (3)].select_lex);
          }
    break;

  case 1223:

/* Line 1455 of yacc.c  */
#line 5692 "drizzled/sql_yacc.yy"
    {
            if (not Lex.expr_allows_subselect)
            {
              parser::my_parse_error(YYSession->m_lip);
              DRIZZLE_YYABORT;
            }
            /*
              we are making a "derived table" for the parenthesis
              as we need to have a lex level to fit the union
              after the parenthesis, e.g.
              (SELECT .. ) UNION ...  becomes
              SELECT * FROM ((SELECT ...) UNION ...)
            */
            if (new_select(&Lex, 1))
              DRIZZLE_YYABORT;
          }
    break;

  case 1224:

/* Line 1455 of yacc.c  */
#line 5711 "drizzled/sql_yacc.yy"
    {
            Lex.pop_context();
            Select_Lex *child= Lex.current_select;
            Lex.current_select= Lex.current_select->return_after_parsing();
            Lex.nest_level--;
            Lex.current_select->n_child_sum_items += child->n_sum_items;
            /*
              A subselect can add fields to an outer select. Reserve space for
              them.
            */
            Lex.current_select->select_n_where_fields+=
            child->select_n_where_fields;
          }
    break;



/* Line 1455 of yacc.c  */
#line 16306 "drizzled/sql_yacc.cc"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (session, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (session, yymsg);
	  }
	else
	  {
	    yyerror (session, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
		      yytoken, &yylval, session);
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
      if (yyn != YYPACT_NINF)
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
		  yystos[yystate], yyvsp, session);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (session, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, session);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, session);
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





/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
/* Line 1676 of yacc.c  */
#line 125 "drizzled/sql_yacc.yy"
ParserType
{

/* Line 1676 of yacc.c  */
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



/* Line 1676 of yacc.c  */
#line 841 "drizzled/sql_yacc.hh"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif





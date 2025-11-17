/** version.h -- version and copyright information **/

/***********************************************************************
 * This code is part of INNER, a linear multiobjective problem solver.
 *
 * Copyright (C) 2016-2025 Laszlo Csirmaz, https://github.com/lcsirmaz/inner
 *
 * This program is free, open-source software. You may redistribute it
 * and/or modify under the terms of the GNU General Public License (GPL).
 *
 * There is ABSOLUTELY NO WARRANTY, use at your own risk.
 ***********************************************************************/

/* name of this program */
#ifndef PROG
  #ifdef USETHREADS
    #define PROG		innerth
  #else
    #define PROG		inner
  #endif
#endif
#define PROGNAME		mkstringof(PROG)

/* Version and copyright */
#define VERSION_MAJOR	3
#define VERSION_MINOR	2
#ifdef USETHREADS
#define VERSION_STRING	"threaded version " mkstringof(VERSION_MAJOR.VERSION_MINOR) "T"
#else
#define VERSION_STRING	"version " mkstringof(VERSION_MAJOR.VERSION_MINOR)
#endif

#define COPYRIGHT	\
"Copyright (C) 2016-2025 Laszlo Csirmaz, https://github.com/lcsirmaz/inner"

/* EOF */


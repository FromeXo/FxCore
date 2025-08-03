
PHP_ARG_ENABLE([fxcore],
  [whether to enable fxcore support],
  [AS_HELP_STRING([--enable-fxcore],
    [Enable fxcore support])],
  [no])

if test "$PHP_FXCORE" != "no"; then
  
  AC_DEFINE(HAVE_FXCORE, 1, [ Have fxcore support ])

  define([SOURCE_FILES], [fxcore.c m4_esyscmd([find src -name '*.c' | tr '\n' ' '])])

  PHP_NEW_EXTENSION(fxcore, SOURCE_FILES, $ext_shared)
fi

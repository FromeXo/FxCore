
PHP_ARG_ENABLE([fxcore],
  [whether to enable fxcore support],
  [AS_HELP_STRING([--enable-fxcore],
    [Enable fxcore support])],
  [no])

if test "$PHP_FXCORE" != "no"; then
  
  AC_DEFINE(HAVE_FXCORE, 1, [ Have fxcore support ])

  PHP_NEW_EXTENSION(fxcore, fxcore.c, $ext_shared)
fi

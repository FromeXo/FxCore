/* fxcore extension for PHP */

#ifndef PHP_FXCORE_H
# define PHP_FXCORE_H

extern zend_module_entry fxcore_module_entry;
# define phpext_fxcore_ptr &fxcore_module_entry

# define PHP_FXCORE_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_FXCORE)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_FXCORE_H */

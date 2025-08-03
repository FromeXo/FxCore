/* fxcore extension for PHP */

#ifdef HAVE_CONFIG_H
	# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_fxcore.h"
#include "fxcore_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
	#define ZEND_PARSE_PARAMETERS_NONE() \
		ZEND_PARSE_PARAMETERS_START(0, 0) \
		ZEND_PARSE_PARAMETERS_END()
#endif

/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(fxcore)
{
#if defined(ZTS) && defined(COMPILE_DL_FXCORE)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(fxcore)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "fxcore support", "enabled");
	php_info_print_table_end();
}
/* }}} */

/* {{{ fxcore_module_entry */
zend_module_entry fxcore_module_entry = {
	STANDARD_MODULE_HEADER,
	"fxcore",				/* Extension name */
	NULL,					/* zend_function_entry */
	NULL,					/* PHP_MINIT - Module initialization */
	NULL,					/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(fxcore),		/* PHP_RINIT - Request initialization */
	NULL,					/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(fxcore),		/* PHP_MINFO - Module info */
	PHP_FXCORE_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_FXCORE
	# ifdef ZTS
		ZEND_TSRMLS_CACHE_DEFINE()
	# endif
	ZEND_GET_MODULE(fxcore)
#endif

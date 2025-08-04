/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 2e510e7197770aea1fdfac2c0b9522dcecc5d307 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_FxCore_Http_Uri___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FxCore_Http_Uri_getScheme, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_FxCore_Http_Uri_getAuthority arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getUserInfo arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getHost arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getPort arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getPath arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getQuery arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_getFragment arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withScheme arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withUserInfo arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withHost arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withPort arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withPath arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withQuery arginfo_class_FxCore_Http_Uri_getScheme

#define arginfo_class_FxCore_Http_Uri_withFragment arginfo_class_FxCore_Http_Uri_getScheme

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_FxCore_Http_Uri___toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(FxCore_Http_Uri, __construct);
ZEND_METHOD(FxCore_Http_Uri, getScheme);
ZEND_METHOD(FxCore_Http_Uri, getAuthority);
ZEND_METHOD(FxCore_Http_Uri, getUserInfo);
ZEND_METHOD(FxCore_Http_Uri, getHost);
ZEND_METHOD(FxCore_Http_Uri, getPort);
ZEND_METHOD(FxCore_Http_Uri, getPath);
ZEND_METHOD(FxCore_Http_Uri, getQuery);
ZEND_METHOD(FxCore_Http_Uri, getFragment);
ZEND_METHOD(FxCore_Http_Uri, withScheme);
ZEND_METHOD(FxCore_Http_Uri, withUserInfo);
ZEND_METHOD(FxCore_Http_Uri, withHost);
ZEND_METHOD(FxCore_Http_Uri, withPort);
ZEND_METHOD(FxCore_Http_Uri, withPath);
ZEND_METHOD(FxCore_Http_Uri, withQuery);
ZEND_METHOD(FxCore_Http_Uri, withFragment);
ZEND_METHOD(FxCore_Http_Uri, __toString);


static const zend_function_entry class_FxCore_Http_Uri_methods[] = {
	ZEND_ME(FxCore_Http_Uri, __construct, arginfo_class_FxCore_Http_Uri___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getScheme, arginfo_class_FxCore_Http_Uri_getScheme, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getAuthority, arginfo_class_FxCore_Http_Uri_getAuthority, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getUserInfo, arginfo_class_FxCore_Http_Uri_getUserInfo, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getHost, arginfo_class_FxCore_Http_Uri_getHost, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getPort, arginfo_class_FxCore_Http_Uri_getPort, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getPath, arginfo_class_FxCore_Http_Uri_getPath, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getQuery, arginfo_class_FxCore_Http_Uri_getQuery, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, getFragment, arginfo_class_FxCore_Http_Uri_getFragment, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withScheme, arginfo_class_FxCore_Http_Uri_withScheme, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withUserInfo, arginfo_class_FxCore_Http_Uri_withUserInfo, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withHost, arginfo_class_FxCore_Http_Uri_withHost, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withPort, arginfo_class_FxCore_Http_Uri_withPort, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withPath, arginfo_class_FxCore_Http_Uri_withPath, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withQuery, arginfo_class_FxCore_Http_Uri_withQuery, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, withFragment, arginfo_class_FxCore_Http_Uri_withFragment, ZEND_ACC_PUBLIC)
	ZEND_ME(FxCore_Http_Uri, __toString, arginfo_class_FxCore_Http_Uri___toString, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_FxCore_Http_Uri(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "FxCore\\Http", "Uri", class_FxCore_Http_Uri_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);

	return class_entry;
}

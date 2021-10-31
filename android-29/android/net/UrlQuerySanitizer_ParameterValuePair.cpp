#include "./UrlQuerySanitizer.hpp"
#include "./UrlQuerySanitizer_ParameterValuePair.hpp"

namespace android::net
{
	// Fields
	jstring UrlQuerySanitizer_ParameterValuePair::mParameter()
	{
		return __thiz.getObjectField(
			"mParameter",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UrlQuerySanitizer_ParameterValuePair::mValue()
	{
		return __thiz.getObjectField(
			"mValue",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.UrlQuerySanitizer$ParameterValuePair",
			"(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace android::net


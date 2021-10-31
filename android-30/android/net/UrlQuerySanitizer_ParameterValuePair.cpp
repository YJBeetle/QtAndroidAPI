#include "./UrlQuerySanitizer.hpp"
#include "./UrlQuerySanitizer_ParameterValuePair.hpp"

namespace android::net
{
	// Fields
	jstring UrlQuerySanitizer_ParameterValuePair::mParameter()
	{
		return getObjectField(
			"mParameter",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UrlQuerySanitizer_ParameterValuePair::mValue()
	{
		return getObjectField(
			"mValue",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.net.UrlQuerySanitizer$ParameterValuePair",
			"(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::net


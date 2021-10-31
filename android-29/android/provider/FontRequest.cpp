#include "./FontRequest.hpp"

namespace android::provider
{
	// Fields
	
	FontRequest::FontRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject FontRequest::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	jstring FontRequest::getProviderAuthority()
	{
		return __thiz.callObjectMethod(
			"getProviderAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::getProviderPackage()
	{
		return __thiz.callObjectMethod(
			"getProviderPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::getQuery()
	{
		return __thiz.callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::provider


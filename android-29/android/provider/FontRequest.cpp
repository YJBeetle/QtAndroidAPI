#include "./FontRequest.hpp"

namespace android::provider
{
	// Fields
	
	// QAndroidJniObject forward
	FontRequest::FontRequest(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2)
		: __JniBaseClass(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
		: __JniBaseClass(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	QAndroidJniObject FontRequest::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	jstring FontRequest::getProviderAuthority()
	{
		return callObjectMethod(
			"getProviderAuthority",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::getProviderPackage()
	{
		return callObjectMethod(
			"getProviderPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::getQuery()
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FontRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::provider


#include "./FontRequest.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	FontRequest::FontRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	FontRequest::FontRequest(jstring arg0, jstring arg1, jstring arg2, JObject arg3)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	JObject FontRequest::getCertificates()
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


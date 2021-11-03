#include "../../JString.hpp"
#include "./FontRequest.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	FontRequest::FontRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FontRequest::FontRequest(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	FontRequest::FontRequest(JString arg0, JString arg1, JString arg2, JObject arg3)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	JObject FontRequest::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	JString FontRequest::getProviderAuthority() const
	{
		return callObjectMethod(
			"getProviderAuthority",
			"()Ljava/lang/String;"
		);
	}
	JString FontRequest::getProviderPackage() const
	{
		return callObjectMethod(
			"getProviderPackage",
			"()Ljava/lang/String;"
		);
	}
	JString FontRequest::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	JString FontRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::provider


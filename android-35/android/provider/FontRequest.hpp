#pragma once

#include "../../JString.hpp"
#include "./FontRequest.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline FontRequest::FontRequest(JString arg0, JString arg1, JString arg2)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	inline FontRequest::FontRequest(JString arg0, JString arg1, JString arg2, JObject arg3)
		: JObject(
			"android.provider.FontRequest",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline JObject FontRequest::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()Ljava/util/List;"
		);
	}
	inline JString FontRequest::getProviderAuthority() const
	{
		return callObjectMethod(
			"getProviderAuthority",
			"()Ljava/lang/String;"
		);
	}
	inline JString FontRequest::getProviderPackage() const
	{
		return callObjectMethod(
			"getProviderPackage",
			"()Ljava/lang/String;"
		);
	}
	inline JString FontRequest::getQuery() const
	{
		return callObjectMethod(
			"getQuery",
			"()Ljava/lang/String;"
		);
	}
	inline JString FontRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif

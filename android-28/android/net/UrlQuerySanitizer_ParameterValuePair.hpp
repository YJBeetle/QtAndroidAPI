#pragma once

#include "./UrlQuerySanitizer.def.hpp"
#include "../../JString.hpp"
#include "./UrlQuerySanitizer_ParameterValuePair.def.hpp"

namespace android::net
{
	// Fields
	inline JString UrlQuerySanitizer_ParameterValuePair::mParameter()
	{
		return getObjectField(
			"mParameter",
			"Ljava/lang/String;"
		);
	}
	inline JString UrlQuerySanitizer_ParameterValuePair::mValue()
	{
		return getObjectField(
			"mValue",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline UrlQuerySanitizer_ParameterValuePair::UrlQuerySanitizer_ParameterValuePair(android::net::UrlQuerySanitizer arg0, JString arg1, JString arg2)
		: JObject(
			"android.net.UrlQuerySanitizer$ParameterValuePair",
			"(Landroid/net/UrlQuerySanitizer;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace android::net

// Base class headers


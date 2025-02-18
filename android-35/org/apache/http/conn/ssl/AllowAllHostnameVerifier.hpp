#pragma once

#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "./AllowAllHostnameVerifier.def.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	inline AllowAllHostnameVerifier::AllowAllHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.AllowAllHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	inline JString AllowAllHostnameVerifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AllowAllHostnameVerifier::verify(JString arg0, JArray arg1, JArray arg2) const
	{
		callMethod<void>(
			"verify",
			"(Ljava/lang/String;[Ljava/lang/String;[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object<jarray>()
		);
	}
} // namespace org::apache::http::conn::ssl

// Base class headers
#include "./AbstractVerifier.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace org::apache::http::conn::ssl;
#endif

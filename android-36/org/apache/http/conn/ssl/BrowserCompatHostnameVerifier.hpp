#pragma once

#include "../../../../../JArray.hpp"
#include "../../../../../JString.hpp"
#include "./BrowserCompatHostnameVerifier.def.hpp"

namespace org::apache::http::conn::ssl
{
	// Fields
	
	// Constructors
	inline BrowserCompatHostnameVerifier::BrowserCompatHostnameVerifier()
		: org::apache::http::conn::ssl::AbstractVerifier(
			"org.apache.http.conn.ssl.BrowserCompatHostnameVerifier",
			"()V"
		) {}
	
	// Methods
	inline JString BrowserCompatHostnameVerifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BrowserCompatHostnameVerifier::verify(JString arg0, JArray arg1, JArray arg2) const
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

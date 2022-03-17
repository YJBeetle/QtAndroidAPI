#pragma once

#include "../../../JArray.hpp"
#include "./ExtendedSSLSession.def.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// Constructors
	inline ExtendedSSLSession::ExtendedSSLSession()
		: JObject(
			"javax.net.ssl.ExtendedSSLSession",
			"()V"
		) {}
	
	// Methods
	inline JArray ExtendedSSLSession::getLocalSupportedSignatureAlgorithms() const
	{
		return callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	inline JArray ExtendedSSLSession::getPeerSupportedSignatureAlgorithms() const
	{
		return callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	inline JObject ExtendedSSLSession::getRequestedServerNames() const
	{
		return callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;"
		);
	}
	inline JObject ExtendedSSLSession::getStatusResponses() const
	{
		return callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::net::ssl;
#endif

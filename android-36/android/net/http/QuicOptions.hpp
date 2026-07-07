#pragma once

#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./QuicOptions.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject QuicOptions::getAllowedQuicHosts() const
	{
		return callObjectMethod(
			"getAllowedQuicHosts",
			"()Ljava/util/Set;"
		);
	}
	inline JString QuicOptions::getHandshakeUserAgent() const
	{
		return callObjectMethod(
			"getHandshakeUserAgent",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Duration QuicOptions::getIdleConnectionTimeout() const
	{
		return callObjectMethod(
			"getIdleConnectionTimeout",
			"()Ljava/time/Duration;"
		);
	}
	inline jint QuicOptions::getInMemoryServerConfigsCacheSize() const
	{
		return callMethod<jint>(
			"getInMemoryServerConfigsCacheSize",
			"()I"
		);
	}
	inline jboolean QuicOptions::hasInMemoryServerConfigsCacheSize() const
	{
		return callMethod<jboolean>(
			"hasInMemoryServerConfigsCacheSize",
			"()Z"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif

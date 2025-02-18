#pragma once

#include "../../../java/time/Duration.def.hpp"
#include "./DnsOptions_StaleDnsOptions.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint DnsOptions_StaleDnsOptions::getAllowCrossNetworkUsage() const
	{
		return callMethod<jint>(
			"getAllowCrossNetworkUsage",
			"()I"
		);
	}
	inline java::time::Duration DnsOptions_StaleDnsOptions::getFreshLookupTimeout() const
	{
		return callObjectMethod(
			"getFreshLookupTimeout",
			"()Ljava/time/Duration;"
		);
	}
	inline java::time::Duration DnsOptions_StaleDnsOptions::getMaxExpiredDelay() const
	{
		return callObjectMethod(
			"getMaxExpiredDelay",
			"()Ljava/time/Duration;"
		);
	}
	inline jint DnsOptions_StaleDnsOptions::getUseStaleOnNameNotResolved() const
	{
		return callMethod<jint>(
			"getUseStaleOnNameNotResolved",
			"()I"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif

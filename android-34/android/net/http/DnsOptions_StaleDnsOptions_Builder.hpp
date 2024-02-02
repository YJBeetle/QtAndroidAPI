#pragma once

#include "./DnsOptions_StaleDnsOptions.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./DnsOptions_StaleDnsOptions_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline DnsOptions_StaleDnsOptions_Builder::DnsOptions_StaleDnsOptions_Builder()
		: JObject(
			"android.net.http.DnsOptions$StaleDnsOptions$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::DnsOptions_StaleDnsOptions DnsOptions_StaleDnsOptions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/DnsOptions$StaleDnsOptions;"
		);
	}
	inline android::net::http::DnsOptions_StaleDnsOptions_Builder DnsOptions_StaleDnsOptions_Builder::setAllowCrossNetworkUsage(jint arg0) const
	{
		return callObjectMethod(
			"setAllowCrossNetworkUsage",
			"(I)Landroid/net/http/DnsOptions$StaleDnsOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::DnsOptions_StaleDnsOptions_Builder DnsOptions_StaleDnsOptions_Builder::setFreshLookupTimeout(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setFreshLookupTimeout",
			"(Ljava/time/Duration;)Landroid/net/http/DnsOptions$StaleDnsOptions$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::DnsOptions_StaleDnsOptions_Builder DnsOptions_StaleDnsOptions_Builder::setMaxExpiredDelay(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setMaxExpiredDelay",
			"(Ljava/time/Duration;)Landroid/net/http/DnsOptions$StaleDnsOptions$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::DnsOptions_StaleDnsOptions_Builder DnsOptions_StaleDnsOptions_Builder::setUseStaleOnNameNotResolved(jint arg0) const
	{
		return callObjectMethod(
			"setUseStaleOnNameNotResolved",
			"(I)Landroid/net/http/DnsOptions$StaleDnsOptions$Builder;",
			arg0
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif

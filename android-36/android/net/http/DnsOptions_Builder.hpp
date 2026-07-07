#pragma once

#include "./DnsOptions.def.hpp"
#include "./DnsOptions_StaleDnsOptions.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./DnsOptions_Builder.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline DnsOptions_Builder::DnsOptions_Builder()
		: JObject(
			"android.net.http.DnsOptions$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::http::DnsOptions DnsOptions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/http/DnsOptions;"
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setPersistHostCache(jint arg0) const
	{
		return callObjectMethod(
			"setPersistHostCache",
			"(I)Landroid/net/http/DnsOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setPersistHostCachePeriod(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setPersistHostCachePeriod",
			"(Ljava/time/Duration;)Landroid/net/http/DnsOptions$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setPreestablishConnectionsToStaleDnsResults(jint arg0) const
	{
		return callObjectMethod(
			"setPreestablishConnectionsToStaleDnsResults",
			"(I)Landroid/net/http/DnsOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setStaleDns(jint arg0) const
	{
		return callObjectMethod(
			"setStaleDns",
			"(I)Landroid/net/http/DnsOptions$Builder;",
			arg0
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setStaleDnsOptions(android::net::http::DnsOptions_StaleDnsOptions arg0) const
	{
		return callObjectMethod(
			"setStaleDnsOptions",
			"(Landroid/net/http/DnsOptions$StaleDnsOptions;)Landroid/net/http/DnsOptions$Builder;",
			arg0.object()
		);
	}
	inline android::net::http::DnsOptions_Builder DnsOptions_Builder::setUseHttpStackDnsResolver(jint arg0) const
	{
		return callObjectMethod(
			"setUseHttpStackDnsResolver",
			"(I)Landroid/net/http/DnsOptions$Builder;",
			arg0
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif

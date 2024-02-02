#pragma once

#include "./DnsOptions_StaleDnsOptions.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./DnsOptions.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint DnsOptions::DNS_OPTION_DISABLED()
	{
		return getStaticField<jint>(
			"android.net.http.DnsOptions",
			"DNS_OPTION_DISABLED"
		);
	}
	inline jint DnsOptions::DNS_OPTION_ENABLED()
	{
		return getStaticField<jint>(
			"android.net.http.DnsOptions",
			"DNS_OPTION_ENABLED"
		);
	}
	inline jint DnsOptions::DNS_OPTION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.net.http.DnsOptions",
			"DNS_OPTION_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DnsOptions::getPersistHostCache() const
	{
		return callMethod<jint>(
			"getPersistHostCache",
			"()I"
		);
	}
	inline java::time::Duration DnsOptions::getPersistHostCachePeriod() const
	{
		return callObjectMethod(
			"getPersistHostCachePeriod",
			"()Ljava/time/Duration;"
		);
	}
	inline jint DnsOptions::getPreestablishConnectionsToStaleDnsResults() const
	{
		return callMethod<jint>(
			"getPreestablishConnectionsToStaleDnsResults",
			"()I"
		);
	}
	inline jint DnsOptions::getStaleDns() const
	{
		return callMethod<jint>(
			"getStaleDns",
			"()I"
		);
	}
	inline android::net::http::DnsOptions_StaleDnsOptions DnsOptions::getStaleDnsOptions() const
	{
		return callObjectMethod(
			"getStaleDnsOptions",
			"()Landroid/net/http/DnsOptions$StaleDnsOptions;"
		);
	}
	inline jint DnsOptions::getUseHttpStackDnsResolver() const
	{
		return callMethod<jint>(
			"getUseHttpStackDnsResolver",
			"()I"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif

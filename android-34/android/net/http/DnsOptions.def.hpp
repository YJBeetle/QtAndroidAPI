#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class DnsOptions_StaleDnsOptions;
}
namespace java::time
{
	class Duration;
}

namespace android::net::http
{
	class DnsOptions : public JObject
	{
	public:
		// Fields
		static jint DNS_OPTION_DISABLED();
		static jint DNS_OPTION_ENABLED();
		static jint DNS_OPTION_UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DnsOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getPersistHostCache() const;
		java::time::Duration getPersistHostCachePeriod() const;
		jint getPreestablishConnectionsToStaleDnsResults() const;
		jint getStaleDns() const;
		android::net::http::DnsOptions_StaleDnsOptions getStaleDnsOptions() const;
		jint getUseHttpStackDnsResolver() const;
	};
} // namespace android::net::http


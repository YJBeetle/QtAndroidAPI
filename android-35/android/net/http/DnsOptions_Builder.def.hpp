#pragma once

#include "../../../JObject.hpp"

namespace android::net::http
{
	class DnsOptions;
}
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
	class DnsOptions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsOptions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DnsOptions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DnsOptions_Builder();
		
		// Methods
		android::net::http::DnsOptions build() const;
		android::net::http::DnsOptions_Builder setPersistHostCache(jint arg0) const;
		android::net::http::DnsOptions_Builder setPersistHostCachePeriod(java::time::Duration arg0) const;
		android::net::http::DnsOptions_Builder setPreestablishConnectionsToStaleDnsResults(jint arg0) const;
		android::net::http::DnsOptions_Builder setStaleDns(jint arg0) const;
		android::net::http::DnsOptions_Builder setStaleDnsOptions(android::net::http::DnsOptions_StaleDnsOptions arg0) const;
		android::net::http::DnsOptions_Builder setUseHttpStackDnsResolver(jint arg0) const;
	};
} // namespace android::net::http


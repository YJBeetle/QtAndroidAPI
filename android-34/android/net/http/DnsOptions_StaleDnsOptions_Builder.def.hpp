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
	class DnsOptions_StaleDnsOptions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsOptions_StaleDnsOptions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DnsOptions_StaleDnsOptions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DnsOptions_StaleDnsOptions_Builder();
		
		// Methods
		android::net::http::DnsOptions_StaleDnsOptions build() const;
		android::net::http::DnsOptions_StaleDnsOptions_Builder setAllowCrossNetworkUsage(jint arg0) const;
		android::net::http::DnsOptions_StaleDnsOptions_Builder setFreshLookupTimeout(java::time::Duration arg0) const;
		android::net::http::DnsOptions_StaleDnsOptions_Builder setMaxExpiredDelay(java::time::Duration arg0) const;
		android::net::http::DnsOptions_StaleDnsOptions_Builder setUseStaleOnNameNotResolved(jint arg0) const;
	};
} // namespace android::net::http


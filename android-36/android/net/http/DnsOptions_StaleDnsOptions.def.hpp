#pragma once

#include "../../../JObject.hpp"

namespace java::time
{
	class Duration;
}

namespace android::net::http
{
	class DnsOptions_StaleDnsOptions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DnsOptions_StaleDnsOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DnsOptions_StaleDnsOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getAllowCrossNetworkUsage() const;
		java::time::Duration getFreshLookupTimeout() const;
		java::time::Duration getMaxExpiredDelay() const;
		jint getUseStaleOnNameNotResolved() const;
	};
} // namespace android::net::http


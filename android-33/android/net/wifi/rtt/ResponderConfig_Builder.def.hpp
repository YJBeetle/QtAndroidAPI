#pragma once

#include "../../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::net::wifi::rtt
{
	class ResponderConfig;
}

namespace android::net::wifi::rtt
{
	class ResponderConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ResponderConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResponderConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ResponderConfig_Builder();
		
		// Methods
		android::net::wifi::rtt::ResponderConfig build() const;
		android::net::wifi::rtt::ResponderConfig_Builder set80211mcSupported(jboolean arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setCenterFreq0Mhz(jint arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setCenterFreq1Mhz(jint arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setChannelWidth(jint arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setFrequencyMhz(jint arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setMacAddress(android::net::MacAddress arg0) const;
		android::net::wifi::rtt::ResponderConfig_Builder setPreamble(jint arg0) const;
	};
} // namespace android::net::wifi::rtt


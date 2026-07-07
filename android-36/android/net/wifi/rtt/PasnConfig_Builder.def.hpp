#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi
{
	class WifiSsid;
}
namespace android::net::wifi::rtt
{
	class PasnConfig;
}
class JString;

namespace android::net::wifi::rtt
{
	class PasnConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PasnConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasnConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PasnConfig_Builder(jint arg0, jint arg1);
		
		// Methods
		android::net::wifi::rtt::PasnConfig build() const;
		android::net::wifi::rtt::PasnConfig_Builder setPasnComebackCookie(JByteArray arg0) const;
		android::net::wifi::rtt::PasnConfig_Builder setPassword(JString arg0) const;
		android::net::wifi::rtt::PasnConfig_Builder setWifiSsid(android::net::wifi::WifiSsid arg0) const;
	};
} // namespace android::net::wifi::rtt


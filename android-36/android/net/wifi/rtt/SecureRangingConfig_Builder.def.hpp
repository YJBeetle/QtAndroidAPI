#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::rtt
{
	class PasnConfig;
}
namespace android::net::wifi::rtt
{
	class SecureRangingConfig;
}

namespace android::net::wifi::rtt
{
	class SecureRangingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureRangingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecureRangingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SecureRangingConfig_Builder(android::net::wifi::rtt::PasnConfig arg0);
		
		// Methods
		android::net::wifi::rtt::SecureRangingConfig build() const;
		android::net::wifi::rtt::SecureRangingConfig_Builder setRangingFrameProtectionEnabled(jboolean arg0) const;
		android::net::wifi::rtt::SecureRangingConfig_Builder setSecureHeLtfEnabled(jboolean arg0) const;
	};
} // namespace android::net::wifi::rtt


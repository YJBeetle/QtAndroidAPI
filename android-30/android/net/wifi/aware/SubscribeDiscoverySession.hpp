#pragma once

#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	class SubscribeConfig;
}

namespace android::net::wifi::aware
{
	class SubscribeDiscoverySession : public android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscribeDiscoverySession(const char *className, const char *sig, Ts...agv) : android::net::wifi::aware::DiscoverySession(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeDiscoverySession(QAndroidJniObject obj) : android::net::wifi::aware::DiscoverySession(obj) {}
		
		// Constructors
		
		// Methods
		void updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0) const;
	};
} // namespace android::net::wifi::aware


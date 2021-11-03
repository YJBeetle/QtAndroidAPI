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
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscribeDiscoverySession(const char *className, const char *sig, Ts...agv) : android::net::wifi::aware::DiscoverySession(className, sig, std::forward<Ts>(agv)...) {}
		SubscribeDiscoverySession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void updateSubscribe(android::net::wifi::aware::SubscribeConfig arg0);
	};
} // namespace android::net::wifi::aware


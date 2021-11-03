#pragma once

#include "../../../../JObject.hpp"
#include "./DiscoverySession.hpp"

namespace android::net::wifi::aware
{
	class PublishConfig;
}

namespace android::net::wifi::aware
{
	class PublishDiscoverySession : public android::net::wifi::aware::DiscoverySession
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PublishDiscoverySession(const char *className, const char *sig, Ts...agv) : android::net::wifi::aware::DiscoverySession(className, sig, std::forward<Ts>(agv)...) {}
		PublishDiscoverySession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void updatePublish(android::net::wifi::aware::PublishConfig arg0);
	};
} // namespace android::net::wifi::aware


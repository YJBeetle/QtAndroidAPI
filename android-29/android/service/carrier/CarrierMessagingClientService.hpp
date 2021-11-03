#pragma once

#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::service::carrier
{
	class CarrierMessagingClientService : public android::app::Service
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierMessagingClientService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierMessagingClientService(QJniObject obj);
		
		// Constructors
		CarrierMessagingClientService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
	};
} // namespace android::service::carrier


#pragma once

#include "../../app/Service.def.hpp"

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
		CarrierMessagingClientService(QJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		CarrierMessagingClientService();
		
		// Methods
		JObject onBind(android::content::Intent arg0) const;
	};
} // namespace android::service::carrier


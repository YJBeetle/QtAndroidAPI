#pragma once

#include "../../app/Service.hpp"

namespace android::content
{
	class Intent;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::service::carrier
{
	class CarrierIdentifier;
}
class JString;

namespace android::service::carrier
{
	class CarrierService : public android::app::Service
	{
	public:
		// Fields
		static JString CARRIER_SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CarrierService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierService(QJniObject obj);
		
		// Constructors
		CarrierService();
		
		// Methods
		void notifyCarrierNetworkChange(jboolean arg0);
		JObject onBind(android::content::Intent arg0);
		android::os::PersistableBundle onLoadConfig(android::service::carrier::CarrierIdentifier arg0);
	};
} // namespace android::service::carrier


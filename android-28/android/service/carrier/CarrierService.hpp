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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CarrierService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CarrierService(QAndroidJniObject obj);
		
		// Constructors
		CarrierService();
		
		// Methods
		void notifyCarrierNetworkChange(jboolean arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		android::os::PersistableBundle onLoadConfig(android::service::carrier::CarrierIdentifier arg0) const;
	};
} // namespace android::service::carrier


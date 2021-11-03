#pragma once

#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}
class JString;

namespace android::companion
{
	class CompanionDeviceService : public android::app::Service
	{
	public:
		// Fields
		static JString SERVICE_INTERFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CompanionDeviceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceService(QJniObject obj);
		
		// Constructors
		CompanionDeviceService();
		
		// Methods
		JObject onBind(android::content::Intent arg0);
		void onDeviceAppeared(JString arg0);
		void onDeviceDisappeared(JString arg0);
	};
} // namespace android::companion


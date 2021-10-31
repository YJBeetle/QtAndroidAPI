#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace android::content
{
	class Intent;
}

namespace android::companion
{
	class CompanionDeviceService : public android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CompanionDeviceService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		CompanionDeviceService(QAndroidJniObject obj);
		
		// Constructors
		CompanionDeviceService();
		
		// Methods
		__JniBaseClass onBind(android::content::Intent arg0);
		void onDeviceAppeared(jstring arg0);
		void onDeviceDisappeared(jstring arg0);
	};
} // namespace android::companion


#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::ims
{
	class RcsUceAdapter;
}
namespace android::telephony::ims
{
	class RegistrationManager_RegistrationCallback;
}

namespace android::telephony::ims
{
	class ImsRcsManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsRcsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImsRcsManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void getRegistrationState(__JniBaseClass arg0, __JniBaseClass arg1);
		void getRegistrationTransportType(__JniBaseClass arg0, __JniBaseClass arg1);
		android::telephony::ims::RcsUceAdapter getUceAdapter();
		void registerImsRegistrationCallback(__JniBaseClass arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1);
		void unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0);
	};
} // namespace android::telephony::ims


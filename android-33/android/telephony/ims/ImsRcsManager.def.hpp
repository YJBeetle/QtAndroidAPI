#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ImsStateCallback;
}
namespace android::telephony::ims
{
	class RcsUceAdapter;
}
namespace android::telephony::ims
{
	class RegistrationManager_RegistrationCallback;
}
class JString;

namespace android::telephony::ims
{
	class ImsRcsManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN();
		static jint CAPABILITY_TYPE_NONE();
		static jint CAPABILITY_TYPE_OPTIONS_UCE();
		static jint CAPABILITY_TYPE_PRESENCE_UCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsRcsManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsRcsManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void getRegistrationState(JObject arg0, JObject arg1) const;
		void getRegistrationTransportType(JObject arg0, JObject arg1) const;
		android::telephony::ims::RcsUceAdapter getUceAdapter() const;
		void registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1) const;
		void registerImsStateCallback(JObject arg0, android::telephony::ims::ImsStateCallback arg1) const;
		void unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0) const;
		void unregisterImsStateCallback(android::telephony::ims::ImsStateCallback arg0) const;
	};
} // namespace android::telephony::ims


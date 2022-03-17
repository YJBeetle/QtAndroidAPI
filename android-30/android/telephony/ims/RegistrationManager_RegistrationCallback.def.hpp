#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ImsReasonInfo;
}

namespace android::telephony::ims
{
	class RegistrationManager_RegistrationCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RegistrationManager_RegistrationCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RegistrationManager_RegistrationCallback(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RegistrationManager_RegistrationCallback();
		
		// Methods
		void onRegistered(jint arg0) const;
		void onRegistering(jint arg0) const;
		void onTechnologyChangeFailed(jint arg0, android::telephony::ims::ImsReasonInfo arg1) const;
		void onUnregistered(android::telephony::ims::ImsReasonInfo arg0) const;
	};
} // namespace android::telephony::ims


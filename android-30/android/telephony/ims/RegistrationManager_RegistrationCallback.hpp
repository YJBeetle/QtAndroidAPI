#pragma once

#include "./ImsReasonInfo.def.hpp"
#include "./RegistrationManager_RegistrationCallback.def.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	inline RegistrationManager_RegistrationCallback::RegistrationManager_RegistrationCallback()
		: JObject(
			"android.telephony.ims.RegistrationManager$RegistrationCallback",
			"()V"
		) {}
	
	// Methods
	inline void RegistrationManager_RegistrationCallback::onRegistered(jint arg0) const
	{
		callMethod<void>(
			"onRegistered",
			"(I)V",
			arg0
		);
	}
	inline void RegistrationManager_RegistrationCallback::onRegistering(jint arg0) const
	{
		callMethod<void>(
			"onRegistering",
			"(I)V",
			arg0
		);
	}
	inline void RegistrationManager_RegistrationCallback::onTechnologyChangeFailed(jint arg0, android::telephony::ims::ImsReasonInfo arg1) const
	{
		callMethod<void>(
			"onTechnologyChangeFailed",
			"(ILandroid/telephony/ims/ImsReasonInfo;)V",
			arg0,
			arg1.object()
		);
	}
	inline void RegistrationManager_RegistrationCallback::onUnregistered(android::telephony::ims::ImsReasonInfo arg0) const
	{
		callMethod<void>(
			"onUnregistered",
			"(Landroid/telephony/ims/ImsReasonInfo;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif

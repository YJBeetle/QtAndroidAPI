#pragma once

#include "./ImsReasonInfo.def.hpp"
#include "./ImsRegistrationAttributes.def.hpp"
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
	inline void RegistrationManager_RegistrationCallback::onRegistered(android::telephony::ims::ImsRegistrationAttributes arg0) const
	{
		callMethod<void>(
			"onRegistered",
			"(Landroid/telephony/ims/ImsRegistrationAttributes;)V",
			arg0.object()
		);
	}
	inline void RegistrationManager_RegistrationCallback::onRegistered(jint arg0) const
	{
		callMethod<void>(
			"onRegistered",
			"(I)V",
			arg0
		);
	}
	inline void RegistrationManager_RegistrationCallback::onRegistering(android::telephony::ims::ImsRegistrationAttributes arg0) const
	{
		callMethod<void>(
			"onRegistering",
			"(Landroid/telephony/ims/ImsRegistrationAttributes;)V",
			arg0.object()
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


#pragma once

#include "./RcsUceAdapter.def.hpp"
#include "./RegistrationManager_RegistrationCallback.def.hpp"
#include "../../../JString.hpp"
#include "./ImsRcsManager.def.hpp"

namespace android::telephony::ims
{
	// Fields
	inline JString ImsRcsManager::ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRcsManager",
			"ACTION_SHOW_CAPABILITY_DISCOVERY_OPT_IN",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void ImsRcsManager::getRegistrationState(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getRegistrationState",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ImsRcsManager::getRegistrationTransportType(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"getRegistrationTransportType",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::telephony::ims::RcsUceAdapter ImsRcsManager::getUceAdapter() const
	{
		return callObjectMethod(
			"getUceAdapter",
			"()Landroid/telephony/ims/RcsUceAdapter;"
		);
	}
	inline void ImsRcsManager::registerImsRegistrationCallback(JObject arg0, android::telephony::ims::RegistrationManager_RegistrationCallback arg1) const
	{
		callMethod<void>(
			"registerImsRegistrationCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ImsRcsManager::unregisterImsRegistrationCallback(android::telephony::ims::RegistrationManager_RegistrationCallback arg0) const
	{
		callMethod<void>(
			"unregisterImsRegistrationCallback",
			"(Landroid/telephony/ims/RegistrationManager$RegistrationCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers


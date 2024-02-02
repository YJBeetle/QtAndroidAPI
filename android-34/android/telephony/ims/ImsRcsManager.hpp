#pragma once

#include "./ImsStateCallback.def.hpp"
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
	inline jint ImsRcsManager::CAPABILITY_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsRcsManager",
			"CAPABILITY_TYPE_NONE"
		);
	}
	inline jint ImsRcsManager::CAPABILITY_TYPE_OPTIONS_UCE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsRcsManager",
			"CAPABILITY_TYPE_OPTIONS_UCE"
		);
	}
	inline jint ImsRcsManager::CAPABILITY_TYPE_PRESENCE_UCE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsRcsManager",
			"CAPABILITY_TYPE_PRESENCE_UCE"
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
	inline void ImsRcsManager::registerImsStateCallback(JObject arg0, android::telephony::ims::ImsStateCallback arg1) const
	{
		callMethod<void>(
			"registerImsStateCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/ImsStateCallback;)V",
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
	inline void ImsRcsManager::unregisterImsStateCallback(android::telephony::ims::ImsStateCallback arg0) const
	{
		callMethod<void>(
			"unregisterImsStateCallback",
			"(Landroid/telephony/ims/ImsStateCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif

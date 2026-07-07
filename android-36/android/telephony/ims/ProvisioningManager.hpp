#pragma once

#include "./ProvisioningManager_FeatureProvisioningCallback.def.hpp"
#include "./ProvisioningManager.def.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ProvisioningManager::getProvisioningStatusForCapability(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"getProvisioningStatusForCapability",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean ProvisioningManager::getRcsProvisioningStatusForCapability(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"getRcsProvisioningStatusForCapability",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean ProvisioningManager::isProvisioningRequiredForCapability(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isProvisioningRequiredForCapability",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean ProvisioningManager::isRcsProvisioningRequiredForCapability(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isRcsProvisioningRequiredForCapability",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void ProvisioningManager::registerFeatureProvisioningChangedCallback(JObject arg0, android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback arg1) const
	{
		callMethod<void>(
			"registerFeatureProvisioningChangedCallback",
			"(Ljava/util/concurrent/Executor;Landroid/telephony/ims/ProvisioningManager$FeatureProvisioningCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ProvisioningManager::setProvisioningStatusForCapability(jint arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setProvisioningStatusForCapability",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ProvisioningManager::setRcsProvisioningStatusForCapability(jint arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setRcsProvisioningStatusForCapability",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ProvisioningManager::unregisterFeatureProvisioningChangedCallback(android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback arg0) const
	{
		callMethod<void>(
			"unregisterFeatureProvisioningChangedCallback",
			"(Landroid/telephony/ims/ProvisioningManager$FeatureProvisioningCallback;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif

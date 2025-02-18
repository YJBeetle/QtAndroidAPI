#pragma once

#include "./ProvisioningManager_FeatureProvisioningCallback.def.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	inline ProvisioningManager_FeatureProvisioningCallback::ProvisioningManager_FeatureProvisioningCallback()
		: JObject(
			"android.telephony.ims.ProvisioningManager$FeatureProvisioningCallback",
			"()V"
		) {}
	
	// Methods
	inline void ProvisioningManager_FeatureProvisioningCallback::onFeatureProvisioningChanged(jint arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onFeatureProvisioningChanged",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ProvisioningManager_FeatureProvisioningCallback::onRcsFeatureProvisioningChanged(jint arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"onRcsFeatureProvisioningChanged",
			"(IIZ)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::telephony::ims

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::ims;
#endif

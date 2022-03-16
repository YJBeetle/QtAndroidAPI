#pragma once

#include "./feature/MmTelFeature_MmTelCapabilities.def.hpp"
#include "./ImsMmTelManager_CapabilityCallback.def.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// Constructors
	inline ImsMmTelManager_CapabilityCallback::ImsMmTelManager_CapabilityCallback()
		: JObject(
			"android.telephony.ims.ImsMmTelManager$CapabilityCallback",
			"()V"
		) {}
	
	// Methods
	inline void ImsMmTelManager_CapabilityCallback::onCapabilitiesStatusChanged(android::telephony::ims::feature::MmTelFeature_MmTelCapabilities arg0) const
	{
		callMethod<void>(
			"onCapabilitiesStatusChanged",
			"(Landroid/telephony/ims/feature/MmTelFeature$MmTelCapabilities;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims

// Base class headers


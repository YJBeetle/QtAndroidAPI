#include "./feature/MmTelFeature_MmTelCapabilities.hpp"
#include "./ImsMmTelManager_CapabilityCallback.hpp"

namespace android::telephony::ims
{
	// Fields
	
	// QAndroidJniObject forward
	ImsMmTelManager_CapabilityCallback::ImsMmTelManager_CapabilityCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ImsMmTelManager_CapabilityCallback::ImsMmTelManager_CapabilityCallback()
		: __JniBaseClass(
			"android.telephony.ims.ImsMmTelManager$CapabilityCallback",
			"()V"
		) {}
	
	// Methods
	void ImsMmTelManager_CapabilityCallback::onCapabilitiesStatusChanged(android::telephony::ims::feature::MmTelFeature_MmTelCapabilities arg0)
	{
		callMethod<void>(
			"onCapabilitiesStatusChanged",
			"(Landroid/telephony/ims/feature/MmTelFeature$MmTelCapabilities;)V",
			arg0.object()
		);
	}
} // namespace android::telephony::ims


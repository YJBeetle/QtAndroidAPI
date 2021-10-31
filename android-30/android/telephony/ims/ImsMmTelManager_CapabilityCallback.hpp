#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::telephony::ims::feature
{
	class MmTelFeature_MmTelCapabilities;
}

namespace android::telephony::ims
{
	class ImsMmTelManager_CapabilityCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImsMmTelManager_CapabilityCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ImsMmTelManager_CapabilityCallback(QAndroidJniObject obj);
		
		// Constructors
		ImsMmTelManager_CapabilityCallback();
		
		// Methods
		void onCapabilitiesStatusChanged(android::telephony::ims::feature::MmTelFeature_MmTelCapabilities arg0);
	};
} // namespace android::telephony::ims


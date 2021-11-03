#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims::feature
{
	class MmTelFeature_MmTelCapabilities;
}

namespace android::telephony::ims
{
	class ImsMmTelManager_CapabilityCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ImsMmTelManager_CapabilityCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImsMmTelManager_CapabilityCallback(QJniObject obj);
		
		// Constructors
		ImsMmTelManager_CapabilityCallback();
		
		// Methods
		void onCapabilitiesStatusChanged(android::telephony::ims::feature::MmTelFeature_MmTelCapabilities arg0) const;
	};
} // namespace android::telephony::ims


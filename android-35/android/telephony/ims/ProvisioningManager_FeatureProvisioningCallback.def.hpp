#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ProvisioningManager_FeatureProvisioningCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProvisioningManager_FeatureProvisioningCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProvisioningManager_FeatureProvisioningCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ProvisioningManager_FeatureProvisioningCallback();
		
		// Methods
		void onFeatureProvisioningChanged(jint arg0, jint arg1, jboolean arg2) const;
		void onRcsFeatureProvisioningChanged(jint arg0, jint arg1, jboolean arg2) const;
	};
} // namespace android::telephony::ims


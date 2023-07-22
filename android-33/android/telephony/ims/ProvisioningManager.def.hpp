#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class ProvisioningManager_FeatureProvisioningCallback;
}

namespace android::telephony::ims
{
	class ProvisioningManager : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProvisioningManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProvisioningManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean getProvisioningStatusForCapability(jint arg0, jint arg1) const;
		jboolean getRcsProvisioningStatusForCapability(jint arg0, jint arg1) const;
		jboolean isProvisioningRequiredForCapability(jint arg0, jint arg1) const;
		jboolean isRcsProvisioningRequiredForCapability(jint arg0, jint arg1) const;
		void registerFeatureProvisioningChangedCallback(JObject arg0, android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback arg1) const;
		void setProvisioningStatusForCapability(jint arg0, jint arg1, jboolean arg2) const;
		void setRcsProvisioningStatusForCapability(jint arg0, jint arg1, jboolean arg2) const;
		void unregisterFeatureProvisioningChangedCallback(android::telephony::ims::ProvisioningManager_FeatureProvisioningCallback arg0) const;
	};
} // namespace android::telephony::ims


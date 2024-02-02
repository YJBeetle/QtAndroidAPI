#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
class JString;

namespace android::app
{
	class BroadcastOptions : public JObject
	{
	public:
		// Fields
		static jint DEFERRAL_POLICY_DEFAULT();
		static jint DEFERRAL_POLICY_NONE();
		static jint DEFERRAL_POLICY_UNTIL_ACTIVE();
		static jint DELIVERY_GROUP_POLICY_ALL();
		static jint DELIVERY_GROUP_POLICY_MOST_RECENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit BroadcastOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::app::BroadcastOptions fromBundle(android::os::Bundle arg0);
		static android::app::BroadcastOptions makeBasic();
		void clearDeferralPolicy() const;
		void clearDeliveryGroupMatchingKey() const;
		void clearDeliveryGroupPolicy() const;
		jint getDeferralPolicy() const;
		JString getDeliveryGroupMatchingKey() const;
		jint getDeliveryGroupPolicy() const;
		jboolean isShareIdentityEnabled() const;
		android::app::BroadcastOptions setDeferralPolicy(jint arg0) const;
		android::app::BroadcastOptions setDeliveryGroupMatchingKey(JString arg0, JString arg1) const;
		android::app::BroadcastOptions setDeliveryGroupPolicy(jint arg0) const;
		android::app::BroadcastOptions setShareIdentityEnabled(jboolean arg0) const;
		android::os::Bundle toBundle() const;
	};
} // namespace android::app


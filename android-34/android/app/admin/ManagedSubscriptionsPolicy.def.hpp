#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app::admin
{
	class ManagedSubscriptionsPolicy : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_ALL_MANAGED_SUBSCRIPTIONS();
		static jint TYPE_ALL_PERSONAL_SUBSCRIPTIONS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ManagedSubscriptionsPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ManagedSubscriptionsPolicy(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ManagedSubscriptionsPolicy(jint arg0);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getPolicyType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin


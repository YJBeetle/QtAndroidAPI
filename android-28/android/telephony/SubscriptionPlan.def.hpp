#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::telephony
{
	class SubscriptionPlan : public JObject
	{
	public:
		// Fields
		static jlong BYTES_UNKNOWN();
		static jlong BYTES_UNLIMITED();
		static JObject CREATOR();
		static jint LIMIT_BEHAVIOR_BILLED();
		static jint LIMIT_BEHAVIOR_DISABLED();
		static jint LIMIT_BEHAVIOR_THROTTLED();
		static jint LIMIT_BEHAVIOR_UNKNOWN();
		static jlong TIME_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionPlan(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionPlan(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject cycleIterator() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDataLimitBehavior() const;
		jlong getDataLimitBytes() const;
		jlong getDataUsageBytes() const;
		jlong getDataUsageTime() const;
		JString getSummary() const;
		JString getTitle() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony


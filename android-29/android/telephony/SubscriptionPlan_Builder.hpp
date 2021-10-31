#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::telephony
{
	class SubscriptionPlan;
}
namespace java::time
{
	class Period;
}
namespace java::time
{
	class ZonedDateTime;
}

namespace android::telephony
{
	class SubscriptionPlan_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SubscriptionPlan_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionPlan_Builder(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::telephony::SubscriptionPlan_Builder createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1);
		static android::telephony::SubscriptionPlan_Builder createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1);
		android::telephony::SubscriptionPlan build();
		android::telephony::SubscriptionPlan_Builder setDataLimit(jlong arg0, jint arg1);
		android::telephony::SubscriptionPlan_Builder setDataUsage(jlong arg0, jlong arg1);
		android::telephony::SubscriptionPlan_Builder setSummary(jstring arg0);
		android::telephony::SubscriptionPlan_Builder setTitle(jstring arg0);
	};
} // namespace android::telephony


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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SubscriptionPlan_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SubscriptionPlan_Builder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1);
		static QAndroidJniObject createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1);
		QAndroidJniObject build();
		QAndroidJniObject setDataLimit(jlong arg0, jint arg1);
		QAndroidJniObject setDataUsage(jlong arg0, jlong arg1);
		QAndroidJniObject setSummary(jstring arg0);
		QAndroidJniObject setTitle(jstring arg0);
	};
} // namespace android::telephony


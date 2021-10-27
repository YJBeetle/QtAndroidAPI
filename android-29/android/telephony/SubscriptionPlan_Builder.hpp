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
		
		SubscriptionPlan_Builder(QAndroidJniObject obj);
		// Constructors
		SubscriptionPlan_Builder() = default;
		
		// Methods
		static QAndroidJniObject createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1);
		static QAndroidJniObject createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1);
		QAndroidJniObject build();
		QAndroidJniObject setDataLimit(jlong arg0, jint arg1);
		QAndroidJniObject setDataUsage(jlong arg0, jlong arg1);
		QAndroidJniObject setSummary(jstring arg0);
		QAndroidJniObject setSummary(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace android::telephony


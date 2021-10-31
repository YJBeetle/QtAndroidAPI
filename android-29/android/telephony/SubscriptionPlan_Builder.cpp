#include "./SubscriptionPlan.hpp"
#include "../../java/time/Period.hpp"
#include "../../java/time/ZonedDateTime.hpp"
#include "./SubscriptionPlan_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	// QAndroidJniObject forward
	SubscriptionPlan_Builder::SubscriptionPlan_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject SubscriptionPlan_Builder::createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createNonrecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/ZonedDateTime;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createRecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/Period;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/SubscriptionPlan;"
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setDataLimit(jlong arg0, jint arg1)
	{
		return callObjectMethod(
			"setDataLimit",
			"(JI)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setDataUsage(jlong arg0, jlong arg1)
	{
		return callObjectMethod(
			"setDataUsage",
			"(JJ)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setSummary(jstring arg0)
	{
		return callObjectMethod(
			"setSummary",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setTitle(jstring arg0)
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
} // namespace android::telephony


#include "./SubscriptionPlan.hpp"
#include "../../java/time/Period.hpp"
#include "../../java/time/ZonedDateTime.hpp"
#include "./SubscriptionPlan_Builder.hpp"

namespace android::telephony
{
	// Fields
	
	SubscriptionPlan_Builder::SubscriptionPlan_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SubscriptionPlan_Builder::createNonrecurring(java::time::ZonedDateTime arg0, java::time::ZonedDateTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createNonrecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/ZonedDateTime;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::createRecurring(java::time::ZonedDateTime arg0, java::time::Period arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createRecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/Period;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/SubscriptionPlan;"
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setDataLimit(jlong arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setDataLimit",
			"(JI)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setDataUsage(jlong arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"setDataUsage",
			"(JJ)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setSummary(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSummary",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::setTitle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0
		);
	}
} // namespace android::telephony


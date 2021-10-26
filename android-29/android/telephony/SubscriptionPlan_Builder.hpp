#pragma once

#ifndef ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_BUILDER
#define ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class ZonedDateTime;
}
namespace __jni_impl::java::time
{
	class Period;
}
namespace __jni_impl::android::telephony
{
	class SubscriptionPlan;
}

namespace __jni_impl::android::telephony
{
	class SubscriptionPlan_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		static QAndroidJniObject createNonrecurring(__jni_impl::java::time::ZonedDateTime arg0, __jni_impl::java::time::ZonedDateTime arg1);
		static QAndroidJniObject createRecurring(__jni_impl::java::time::ZonedDateTime arg0, __jni_impl::java::time::Period arg1);
		QAndroidJniObject setDataLimit(jlong arg0, jint arg1);
		QAndroidJniObject setDataUsage(jlong arg0, jlong arg1);
		QAndroidJniObject setSummary(jstring arg0);
		QAndroidJniObject setSummary(const QString &arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setTitle(const QString &arg0);
	};
} // namespace __jni_impl::android::telephony

#include "../../java/time/ZonedDateTime.hpp"
#include "../../java/time/Period.hpp"
#include "SubscriptionPlan.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	
	// Constructors
	void SubscriptionPlan_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionPlan$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SubscriptionPlan_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/SubscriptionPlan;"
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::createNonrecurring(__jni_impl::java::time::ZonedDateTime arg0, __jni_impl::java::time::ZonedDateTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createNonrecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/ZonedDateTime;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SubscriptionPlan_Builder::createRecurring(__jni_impl::java::time::ZonedDateTime arg0, __jni_impl::java::time::Period arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telephony.SubscriptionPlan$Builder",
			"createRecurring",
			"(Ljava/time/ZonedDateTime;Ljava/time/Period;)Landroid/telephony/SubscriptionPlan$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	QAndroidJniObject SubscriptionPlan_Builder::setSummary(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSummary",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject SubscriptionPlan_Builder::setTitle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/telephony/SubscriptionPlan$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionPlan_Builder : public __jni_impl::android::telephony::SubscriptionPlan_Builder
	{
	public:
		SubscriptionPlan_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionPlan_Builder()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SUBSCRIPTIONPLAN_BUILDER


#pragma once

#ifndef ANDROID_TELEPHONY_SUBSCRIPTIONPLAN
#define ANDROID_TELEPHONY_SUBSCRIPTIONPLAN

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class SubscriptionPlan : public __JniBaseClass
	{
	public:
		// Fields
		static jlong BYTES_UNKNOWN();
		static jlong BYTES_UNLIMITED();
		static QAndroidJniObject CREATOR();
		static jint LIMIT_BEHAVIOR_BILLED();
		static jint LIMIT_BEHAVIOR_DISABLED();
		static jint LIMIT_BEHAVIOR_THROTTLED();
		static jint LIMIT_BEHAVIOR_UNKNOWN();
		static jlong TIME_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getTitle();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getDataLimitBytes();
		jint getDataLimitBehavior();
		jlong getDataUsageBytes();
		jlong getDataUsageTime();
		QAndroidJniObject cycleIterator();
		QAndroidJniObject getSummary();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jlong SubscriptionPlan::BYTES_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNKNOWN");
	}
	jlong SubscriptionPlan::BYTES_UNLIMITED()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"BYTES_UNLIMITED");
	}
	QAndroidJniObject SubscriptionPlan::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.SubscriptionPlan",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_BILLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_BILLED");
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_DISABLED");
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_THROTTLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_THROTTLED");
	}
	jint SubscriptionPlan::LIMIT_BEHAVIOR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.SubscriptionPlan",
			"LIMIT_BEHAVIOR_UNKNOWN");
	}
	jlong SubscriptionPlan::TIME_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telephony.SubscriptionPlan",
			"TIME_UNKNOWN");
	}
	
	// Constructors
	void SubscriptionPlan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.SubscriptionPlan",
			"(V)V");
	}
	
	// Methods
	jboolean SubscriptionPlan::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SubscriptionPlan::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SubscriptionPlan::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject SubscriptionPlan::getTitle()
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;");
	}
	jint SubscriptionPlan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SubscriptionPlan::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong SubscriptionPlan::getDataLimitBytes()
	{
		return __thiz.callMethod<jlong>(
			"getDataLimitBytes",
			"()J");
	}
	jint SubscriptionPlan::getDataLimitBehavior()
	{
		return __thiz.callMethod<jint>(
			"getDataLimitBehavior",
			"()I");
	}
	jlong SubscriptionPlan::getDataUsageBytes()
	{
		return __thiz.callMethod<jlong>(
			"getDataUsageBytes",
			"()J");
	}
	jlong SubscriptionPlan::getDataUsageTime()
	{
		return __thiz.callMethod<jlong>(
			"getDataUsageTime",
			"()J");
	}
	QAndroidJniObject SubscriptionPlan::cycleIterator()
	{
		return __thiz.callObjectMethod(
			"cycleIterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject SubscriptionPlan::getSummary()
	{
		return __thiz.callObjectMethod(
			"getSummary",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class SubscriptionPlan : public __jni_impl::android::telephony::SubscriptionPlan
	{
	public:
		SubscriptionPlan(QAndroidJniObject obj) { __thiz = obj; }
		SubscriptionPlan()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_SUBSCRIPTIONPLAN


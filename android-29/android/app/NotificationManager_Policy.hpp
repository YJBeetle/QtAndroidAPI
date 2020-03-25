#pragma once

#ifndef ANDROID_APP_NOTIFICATIONMANAGER_POLICY
#define ANDROID_APP_NOTIFICATIONMANAGER_POLICY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class NotificationManager_Policy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PRIORITY_CATEGORY_ALARMS();
		static jint PRIORITY_CATEGORY_CALLS();
		static jint PRIORITY_CATEGORY_EVENTS();
		static jint PRIORITY_CATEGORY_MEDIA();
		static jint PRIORITY_CATEGORY_MESSAGES();
		static jint PRIORITY_CATEGORY_REMINDERS();
		static jint PRIORITY_CATEGORY_REPEAT_CALLERS();
		static jint PRIORITY_CATEGORY_SYSTEM();
		static jint PRIORITY_SENDERS_ANY();
		static jint PRIORITY_SENDERS_CONTACTS();
		static jint PRIORITY_SENDERS_STARRED();
		static jint SUPPRESSED_EFFECT_AMBIENT();
		static jint SUPPRESSED_EFFECT_BADGE();
		static jint SUPPRESSED_EFFECT_FULL_SCREEN_INTENT();
		static jint SUPPRESSED_EFFECT_LIGHTS();
		static jint SUPPRESSED_EFFECT_NOTIFICATION_LIST();
		static jint SUPPRESSED_EFFECT_PEEK();
		static jint SUPPRESSED_EFFECT_SCREEN_OFF();
		static jint SUPPRESSED_EFFECT_SCREEN_ON();
		static jint SUPPRESSED_EFFECT_STATUS_BAR();
		jint priorityCallSenders();
		jint priorityCategories();
		jint priorityMessageSenders();
		jint suppressedVisualEffects();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject suppressedEffectsToString(jint arg0);
		static QAndroidJniObject priorityCategoriesToString(jint arg0);
		static QAndroidJniObject prioritySendersToString(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject NotificationManager_Policy::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.NotificationManager$Policy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_ALARMS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_ALARMS");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_CALLS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_CALLS");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_EVENTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_EVENTS");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_MEDIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MEDIA");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_MESSAGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_MESSAGES");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_REMINDERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REMINDERS");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_REPEAT_CALLERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_REPEAT_CALLERS");
	}
	jint NotificationManager_Policy::PRIORITY_CATEGORY_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_CATEGORY_SYSTEM");
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_ANY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_ANY");
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_CONTACTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_CONTACTS");
	}
	jint NotificationManager_Policy::PRIORITY_SENDERS_STARRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"PRIORITY_SENDERS_STARRED");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_AMBIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_AMBIENT");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_BADGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_BADGE");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_FULL_SCREEN_INTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_FULL_SCREEN_INTENT");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_LIGHTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_LIGHTS");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_NOTIFICATION_LIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_NOTIFICATION_LIST");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_PEEK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_PEEK");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_OFF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_OFF");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_SCREEN_ON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_SCREEN_ON");
	}
	jint NotificationManager_Policy::SUPPRESSED_EFFECT_STATUS_BAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.NotificationManager$Policy",
			"SUPPRESSED_EFFECT_STATUS_BAR");
	}
	jint NotificationManager_Policy::priorityCallSenders()
	{
		return __thiz.getField<jint>(
			"priorityCallSenders");
	}
	jint NotificationManager_Policy::priorityCategories()
	{
		return __thiz.getField<jint>(
			"priorityCategories");
	}
	jint NotificationManager_Policy::priorityMessageSenders()
	{
		return __thiz.getField<jint>(
			"priorityMessageSenders");
	}
	jint NotificationManager_Policy::suppressedVisualEffects()
	{
		return __thiz.getField<jint>(
			"suppressedVisualEffects");
	}
	
	// Constructors
	void NotificationManager_Policy::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationManager$Policy",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void NotificationManager_Policy::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.app.NotificationManager$Policy",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean NotificationManager_Policy::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject NotificationManager_Policy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint NotificationManager_Policy::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject NotificationManager_Policy::suppressedEffectsToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"suppressedEffectsToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NotificationManager_Policy::priorityCategoriesToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"priorityCategoriesToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject NotificationManager_Policy::prioritySendersToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.NotificationManager$Policy",
			"prioritySendersToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint NotificationManager_Policy::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void NotificationManager_Policy::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class NotificationManager_Policy : public __jni_impl::android::app::NotificationManager_Policy
	{
	public:
		NotificationManager_Policy(QAndroidJniObject obj) { __thiz = obj; }
		NotificationManager_Policy(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		NotificationManager_Policy(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATIONMANAGER_POLICY


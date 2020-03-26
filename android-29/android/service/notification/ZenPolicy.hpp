#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_ZENPOLICY
#define ANDROID_SERVICE_NOTIFICATION_ZENPOLICY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::notification
{
	class ZenPolicy : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PEOPLE_TYPE_ANYONE();
		static jint PEOPLE_TYPE_CONTACTS();
		static jint PEOPLE_TYPE_NONE();
		static jint PEOPLE_TYPE_STARRED();
		static jint PEOPLE_TYPE_UNSET();
		static jint STATE_ALLOW();
		static jint STATE_DISALLOW();
		static jint STATE_UNSET();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getPriorityMessageSenders();
		jint getPriorityCallSenders();
		jint getPriorityCategoryReminders();
		jint getPriorityCategoryEvents();
		jint getPriorityCategoryMessages();
		jint getPriorityCategoryCalls();
		jint getPriorityCategoryRepeatCallers();
		jint getPriorityCategoryAlarms();
		jint getPriorityCategoryMedia();
		jint getPriorityCategorySystem();
		jint getVisualEffectFullScreenIntent();
		jint getVisualEffectLights();
		jint getVisualEffectPeek();
		jint getVisualEffectStatusBar();
		jint getVisualEffectBadge();
		jint getVisualEffectAmbient();
		jint getVisualEffectNotificationList();
	};
} // namespace __jni_impl::android::service::notification

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::notification
{
	// Fields
	QAndroidJniObject ZenPolicy::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.ZenPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_ANYONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_ANYONE"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_CONTACTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_CONTACTS"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_NONE"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_STARRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_STARRED"
		);
	}
	jint ZenPolicy::PEOPLE_TYPE_UNSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"PEOPLE_TYPE_UNSET"
		);
	}
	jint ZenPolicy::STATE_ALLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_ALLOW"
		);
	}
	jint ZenPolicy::STATE_DISALLOW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_DISALLOW"
		);
	}
	jint ZenPolicy::STATE_UNSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.notification.ZenPolicy",
			"STATE_UNSET"
		);
	}
	
	// Constructors
	void ZenPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.ZenPolicy",
			"(V)V");
	}
	
	// Methods
	jboolean ZenPolicy::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ZenPolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZenPolicy::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ZenPolicy::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ZenPolicy::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint ZenPolicy::getPriorityMessageSenders()
	{
		return __thiz.callMethod<jint>(
			"getPriorityMessageSenders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCallSenders()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCallSenders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryReminders()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryReminders",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryEvents()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryEvents",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMessages()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryMessages",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryCalls()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryCalls",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryRepeatCallers()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryRepeatCallers",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryAlarms()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryAlarms",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategoryMedia()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategoryMedia",
			"()I"
		);
	}
	jint ZenPolicy::getPriorityCategorySystem()
	{
		return __thiz.callMethod<jint>(
			"getPriorityCategorySystem",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectFullScreenIntent()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectFullScreenIntent",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectLights()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectLights",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectPeek()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectPeek",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectStatusBar()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectStatusBar",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectBadge()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectBadge",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectAmbient()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectAmbient",
			"()I"
		);
	}
	jint ZenPolicy::getVisualEffectNotificationList()
	{
		return __thiz.callMethod<jint>(
			"getVisualEffectNotificationList",
			"()I"
		);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class ZenPolicy : public __jni_impl::android::service::notification::ZenPolicy
	{
	public:
		ZenPolicy(QAndroidJniObject obj) { __thiz = obj; }
		ZenPolicy()
		{
			__constructor();
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_ZENPOLICY


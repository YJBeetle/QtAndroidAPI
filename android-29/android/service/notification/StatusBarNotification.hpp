#pragma once

#ifndef ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION
#define ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class Notification;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::notification
{
	class StatusBarNotification : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::app::Notification arg7, __jni_impl::android::os::UserHandle arg8, jlong arg9);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		QAndroidJniObject getPackageName();
		QAndroidJniObject getKey();
		jint getId();
		QAndroidJniObject getTag();
		jboolean isClearable();
		jboolean isGroup();
		jboolean isOngoing();
		jint getUserId();
		jint getUid();
		QAndroidJniObject getOpPkg();
		QAndroidJniObject getNotification();
		QAndroidJniObject getUser();
		jlong getPostTime();
		QAndroidJniObject getGroupKey();
		void setOverrideGroupKey(jstring arg0);
		QAndroidJniObject getOverrideGroupKey();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::notification

#include "../../app/Notification.hpp"
#include "../../os/UserHandle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::notification
{
	// Fields
	QAndroidJniObject StatusBarNotification::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.StatusBarNotification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void StatusBarNotification::__constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::app::Notification arg7, __jni_impl::android::os::UserHandle arg8, jlong arg9)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.StatusBarNotification",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILandroid/app/Notification;Landroid/os/UserHandle;J)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.__jniObject().object(),
			arg8.__jniObject().object(),
			arg9);
	}
	void StatusBarNotification::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.StatusBarNotification",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject StatusBarNotification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StatusBarNotification::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/service/notification/StatusBarNotification;");
	}
	QAndroidJniObject StatusBarNotification::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StatusBarNotification::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;");
	}
	jint StatusBarNotification::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
	QAndroidJniObject StatusBarNotification::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;");
	}
	jboolean StatusBarNotification::isClearable()
	{
		return __thiz.callMethod<jboolean>(
			"isClearable",
			"()Z");
	}
	jboolean StatusBarNotification::isGroup()
	{
		return __thiz.callMethod<jboolean>(
			"isGroup",
			"()Z");
	}
	jboolean StatusBarNotification::isOngoing()
	{
		return __thiz.callMethod<jboolean>(
			"isOngoing",
			"()Z");
	}
	jint StatusBarNotification::getUserId()
	{
		return __thiz.callMethod<jint>(
			"getUserId",
			"()I");
	}
	jint StatusBarNotification::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I");
	}
	QAndroidJniObject StatusBarNotification::getOpPkg()
	{
		return __thiz.callObjectMethod(
			"getOpPkg",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StatusBarNotification::getNotification()
	{
		return __thiz.callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;");
	}
	QAndroidJniObject StatusBarNotification::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;");
	}
	jlong StatusBarNotification::getPostTime()
	{
		return __thiz.callMethod<jlong>(
			"getPostTime",
			"()J");
	}
	QAndroidJniObject StatusBarNotification::getGroupKey()
	{
		return __thiz.callObjectMethod(
			"getGroupKey",
			"()Ljava/lang/String;");
	}
	void StatusBarNotification::setOverrideGroupKey(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setOverrideGroupKey",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject StatusBarNotification::getOverrideGroupKey()
	{
		return __thiz.callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;");
	}
	jint StatusBarNotification::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void StatusBarNotification::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class StatusBarNotification : public __jni_impl::android::service::notification::StatusBarNotification
	{
	public:
		StatusBarNotification(QAndroidJniObject obj) { __thiz = obj; }
		StatusBarNotification(jstring arg0, jstring arg1, jint arg2, jstring arg3, jint arg4, jint arg5, jint arg6, __jni_impl::android::app::Notification arg7, __jni_impl::android::os::UserHandle arg8, jlong arg9)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7,
				arg8,
				arg9);
		}
		StatusBarNotification(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::notification

#endif // ANDROID_SERVICE_NOTIFICATION_STATUSBARNOTIFICATION


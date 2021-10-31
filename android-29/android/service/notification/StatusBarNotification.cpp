#include "../../app/Notification.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "./StatusBarNotification.hpp"

namespace android::service::notification
{
	// Fields
	QAndroidJniObject StatusBarNotification::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.StatusBarNotification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	StatusBarNotification::StatusBarNotification(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StatusBarNotification::StatusBarNotification(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.StatusBarNotification",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	StatusBarNotification::StatusBarNotification(jstring arg0, jstring arg1, jint arg2, jstring arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9)
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
			arg9
		);
	}
	
	// Methods
	QAndroidJniObject StatusBarNotification::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/service/notification/StatusBarNotification;"
		);
	}
	jint StatusBarNotification::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring StatusBarNotification::getGroupKey()
	{
		return __thiz.callObjectMethod(
			"getGroupKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StatusBarNotification::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jstring StatusBarNotification::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject StatusBarNotification::getNotification()
	{
		return __thiz.callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	jstring StatusBarNotification::getOpPkg()
	{
		return __thiz.callObjectMethod(
			"getOpPkg",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StatusBarNotification::getOverrideGroupKey()
	{
		return __thiz.callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StatusBarNotification::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong StatusBarNotification::getPostTime()
	{
		return __thiz.callMethod<jlong>(
			"getPostTime",
			"()J"
		);
	}
	jstring StatusBarNotification::getTag()
	{
		return __thiz.callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StatusBarNotification::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	QAndroidJniObject StatusBarNotification::getUser()
	{
		return __thiz.callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jint StatusBarNotification::getUserId()
	{
		return __thiz.callMethod<jint>(
			"getUserId",
			"()I"
		);
	}
	jboolean StatusBarNotification::isClearable()
	{
		return __thiz.callMethod<jboolean>(
			"isClearable",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isGroup()
	{
		return __thiz.callMethod<jboolean>(
			"isGroup",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isOngoing()
	{
		return __thiz.callMethod<jboolean>(
			"isOngoing",
			"()Z"
		);
	}
	void StatusBarNotification::setOverrideGroupKey(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setOverrideGroupKey",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring StatusBarNotification::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StatusBarNotification::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::notification


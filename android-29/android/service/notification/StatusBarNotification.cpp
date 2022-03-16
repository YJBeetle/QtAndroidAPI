#include "../../app/Notification.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/UserHandle.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./StatusBarNotification.hpp"

namespace android::service::notification
{
	// Fields
	JObject StatusBarNotification::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.StatusBarNotification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	StatusBarNotification::StatusBarNotification(android::os::Parcel arg0)
		: JObject(
			"android.service.notification.StatusBarNotification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	StatusBarNotification::StatusBarNotification(JString arg0, JString arg1, jint arg2, JString arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9)
		: JObject(
			"android.service.notification.StatusBarNotification",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;IIILandroid/app/Notification;Landroid/os/UserHandle;J)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3.object<jstring>(),
			arg4,
			arg5,
			arg6,
			arg7.object(),
			arg8.object(),
			arg9
		) {}
	
	// Methods
	android::service::notification::StatusBarNotification StatusBarNotification::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/service/notification/StatusBarNotification;"
		);
	}
	jint StatusBarNotification::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString StatusBarNotification::getGroupKey() const
	{
		return callObjectMethod(
			"getGroupKey",
			"()Ljava/lang/String;"
		);
	}
	jint StatusBarNotification::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	JString StatusBarNotification::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	android::app::Notification StatusBarNotification::getNotification() const
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	JString StatusBarNotification::getOpPkg() const
	{
		return callObjectMethod(
			"getOpPkg",
			"()Ljava/lang/String;"
		);
	}
	JString StatusBarNotification::getOverrideGroupKey() const
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	JString StatusBarNotification::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong StatusBarNotification::getPostTime() const
	{
		return callMethod<jlong>(
			"getPostTime",
			"()J"
		);
	}
	JString StatusBarNotification::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	jint StatusBarNotification::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	android::os::UserHandle StatusBarNotification::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	jint StatusBarNotification::getUserId() const
	{
		return callMethod<jint>(
			"getUserId",
			"()I"
		);
	}
	jboolean StatusBarNotification::isClearable() const
	{
		return callMethod<jboolean>(
			"isClearable",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isGroup() const
	{
		return callMethod<jboolean>(
			"isGroup",
			"()Z"
		);
	}
	jboolean StatusBarNotification::isOngoing() const
	{
		return callMethod<jboolean>(
			"isOngoing",
			"()Z"
		);
	}
	void StatusBarNotification::setOverrideGroupKey(JString arg0) const
	{
		callMethod<void>(
			"setOverrideGroupKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString StatusBarNotification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void StatusBarNotification::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification


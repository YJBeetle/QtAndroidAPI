#pragma once

#include "../../app/Notification.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/UserHandle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./StatusBarNotification.def.hpp"

namespace android::service::notification
{
	// Fields
	inline JObject StatusBarNotification::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.StatusBarNotification",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline StatusBarNotification::StatusBarNotification(android::os::Parcel arg0)
		: JObject(
			"android.service.notification.StatusBarNotification",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline StatusBarNotification::StatusBarNotification(JString arg0, JString arg1, jint arg2, JString arg3, jint arg4, jint arg5, jint arg6, android::app::Notification arg7, android::os::UserHandle arg8, jlong arg9)
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
	inline android::service::notification::StatusBarNotification StatusBarNotification::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/service/notification/StatusBarNotification;"
		);
	}
	inline jint StatusBarNotification::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString StatusBarNotification::getGroupKey() const
	{
		return callObjectMethod(
			"getGroupKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint StatusBarNotification::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline JString StatusBarNotification::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::Notification StatusBarNotification::getNotification() const
	{
		return callObjectMethod(
			"getNotification",
			"()Landroid/app/Notification;"
		);
	}
	inline JString StatusBarNotification::getOverrideGroupKey() const
	{
		return callObjectMethod(
			"getOverrideGroupKey",
			"()Ljava/lang/String;"
		);
	}
	inline JString StatusBarNotification::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong StatusBarNotification::getPostTime() const
	{
		return callMethod<jlong>(
			"getPostTime",
			"()J"
		);
	}
	inline JString StatusBarNotification::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::UserHandle StatusBarNotification::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jint StatusBarNotification::getUserId() const
	{
		return callMethod<jint>(
			"getUserId",
			"()I"
		);
	}
	inline jboolean StatusBarNotification::isClearable() const
	{
		return callMethod<jboolean>(
			"isClearable",
			"()Z"
		);
	}
	inline jboolean StatusBarNotification::isGroup() const
	{
		return callMethod<jboolean>(
			"isGroup",
			"()Z"
		);
	}
	inline jboolean StatusBarNotification::isOngoing() const
	{
		return callMethod<jboolean>(
			"isOngoing",
			"()Z"
		);
	}
	inline void StatusBarNotification::setOverrideGroupKey(JString arg0) const
	{
		callMethod<void>(
			"setOverrideGroupKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString StatusBarNotification::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void StatusBarNotification::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

// Base class headers


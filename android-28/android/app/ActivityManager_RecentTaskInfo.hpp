#pragma once

#include "./ActivityManager_TaskDescription.def.hpp"
#include "../content/ComponentName.def.hpp"
#include "../content/Intent.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RecentTaskInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_RecentTaskInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RecentTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ActivityManager_RecentTaskInfo::affiliatedTaskId()
	{
		return getField<jint>(
			"affiliatedTaskId"
		);
	}
	inline android::content::ComponentName ActivityManager_RecentTaskInfo::baseActivity()
	{
		return getObjectField(
			"baseActivity",
			"Landroid/content/ComponentName;"
		);
	}
	inline android::content::Intent ActivityManager_RecentTaskInfo::baseIntent()
	{
		return getObjectField(
			"baseIntent",
			"Landroid/content/Intent;"
		);
	}
	inline JString ActivityManager_RecentTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint ActivityManager_RecentTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	inline jint ActivityManager_RecentTaskInfo::numActivities()
	{
		return getField<jint>(
			"numActivities"
		);
	}
	inline android::content::ComponentName ActivityManager_RecentTaskInfo::origActivity()
	{
		return getObjectField(
			"origActivity",
			"Landroid/content/ComponentName;"
		);
	}
	inline jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return getField<jint>(
			"persistentId"
		);
	}
	inline android::app::ActivityManager_TaskDescription ActivityManager_RecentTaskInfo::taskDescription()
	{
		return getObjectField(
			"taskDescription",
			"Landroid/app/ActivityManager$TaskDescription;"
		);
	}
	inline android::content::ComponentName ActivityManager_RecentTaskInfo::topActivity()
	{
		return getObjectField(
			"topActivity",
			"Landroid/content/ComponentName;"
		);
	}
	
	// Constructors
	inline ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo()
		: JObject(
			"android.app.ActivityManager$RecentTaskInfo",
			"()V"
		) {}
	
	// Methods
	inline jint ActivityManager_RecentTaskInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_RecentTaskInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_RecentTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif

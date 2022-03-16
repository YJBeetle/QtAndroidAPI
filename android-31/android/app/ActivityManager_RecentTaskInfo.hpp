#pragma once

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
	inline jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return getField<jint>(
			"persistentId"
		);
	}
	
	// Constructors
	inline ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo()
		: android::app::TaskInfo(
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
#include "./TaskInfo.hpp"


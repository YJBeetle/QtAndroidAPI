#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RunningTaskInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_RunningTaskInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString ActivityManager_RunningTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint ActivityManager_RunningTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	inline jint ActivityManager_RunningTaskInfo::numRunning()
	{
		return getField<jint>(
			"numRunning"
		);
	}
	inline android::graphics::Bitmap ActivityManager_RunningTaskInfo::thumbnail()
	{
		return getObjectField(
			"thumbnail",
			"Landroid/graphics/Bitmap;"
		);
	}
	
	// Constructors
	inline ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo()
		: android::app::TaskInfo(
			"android.app.ActivityManager$RunningTaskInfo",
			"()V"
		) {}
	
	// Methods
	inline jint ActivityManager_RunningTaskInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_RunningTaskInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_RunningTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif

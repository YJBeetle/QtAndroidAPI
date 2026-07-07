#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_ProcessErrorStateInfo.def.hpp"

namespace android::app
{
	// Fields
	inline jint ActivityManager_ProcessErrorStateInfo::CRASHED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CRASHED"
		);
	}
	inline JObject ActivityManager_ProcessErrorStateInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ActivityManager_ProcessErrorStateInfo::NOT_RESPONDING()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NOT_RESPONDING"
		);
	}
	inline jint ActivityManager_ProcessErrorStateInfo::NO_ERROR()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"NO_ERROR"
		);
	}
	inline jint ActivityManager_ProcessErrorStateInfo::condition()
	{
		return getField<jint>(
			"condition"
		);
	}
	inline JByteArray ActivityManager_ProcessErrorStateInfo::crashData()
	{
		return getObjectField(
			"crashData",
			"[B"
		);
	}
	inline JString ActivityManager_ProcessErrorStateInfo::longMsg()
	{
		return getObjectField(
			"longMsg",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager_ProcessErrorStateInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	inline JString ActivityManager_ProcessErrorStateInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityManager_ProcessErrorStateInfo::shortMsg()
	{
		return getObjectField(
			"shortMsg",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityManager_ProcessErrorStateInfo::stackTrace()
	{
		return getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		);
	}
	inline JString ActivityManager_ProcessErrorStateInfo::tag()
	{
		return getObjectField(
			"tag",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager_ProcessErrorStateInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	inline ActivityManager_ProcessErrorStateInfo::ActivityManager_ProcessErrorStateInfo()
		: JObject(
			"android.app.ActivityManager$ProcessErrorStateInfo",
			"()V"
		) {}
	
	// Methods
	inline jint ActivityManager_ProcessErrorStateInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_ProcessErrorStateInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_ProcessErrorStateInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

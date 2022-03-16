#pragma once

#include "../content/ComponentName.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RunningServiceInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_RunningServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::FLAG_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_FOREGROUND"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::FLAG_PERSISTENT_PROCESS()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_PERSISTENT_PROCESS"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::FLAG_STARTED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_STARTED"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::FLAG_SYSTEM_PROCESS()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_SYSTEM_PROCESS"
		);
	}
	inline jlong ActivityManager_RunningServiceInfo::activeSince()
	{
		return getField<jlong>(
			"activeSince"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::clientCount()
	{
		return getField<jint>(
			"clientCount"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::clientLabel()
	{
		return getField<jint>(
			"clientLabel"
		);
	}
	inline JString ActivityManager_RunningServiceInfo::clientPackage()
	{
		return getObjectField(
			"clientPackage",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::crashCount()
	{
		return getField<jint>(
			"crashCount"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline jboolean ActivityManager_RunningServiceInfo::foreground()
	{
		return getField<jboolean>(
			"foreground"
		);
	}
	inline jlong ActivityManager_RunningServiceInfo::lastActivityTime()
	{
		return getField<jlong>(
			"lastActivityTime"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	inline JString ActivityManager_RunningServiceInfo::process()
	{
		return getObjectField(
			"process",
			"Ljava/lang/String;"
		);
	}
	inline jlong ActivityManager_RunningServiceInfo::restarting()
	{
		return getField<jlong>(
			"restarting"
		);
	}
	inline android::content::ComponentName ActivityManager_RunningServiceInfo::service()
	{
		return getObjectField(
			"service",
			"Landroid/content/ComponentName;"
		);
	}
	inline jboolean ActivityManager_RunningServiceInfo::started()
	{
		return getField<jboolean>(
			"started"
		);
	}
	inline jint ActivityManager_RunningServiceInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	inline ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo()
		: JObject(
			"android.app.ActivityManager$RunningServiceInfo",
			"()V"
		) {}
	
	// Methods
	inline jint ActivityManager_RunningServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_RunningServiceInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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


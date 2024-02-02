#pragma once

#include "../../JArray.hpp"
#include "../content/ComponentName.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RunningAppProcessInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ActivityManager_RunningAppProcessInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_BACKGROUND"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CACHED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CACHED"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CANT_SAVE_STATE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CANT_SAVE_STATE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_EMPTY()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_EMPTY"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND_SERVICE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_GONE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_GONE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE_PRE_26()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE_PRE_26"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_SERVICE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING_PRE_28()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING_PRE_28"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_VISIBLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_VISIBLE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::REASON_PROVIDER_IN_USE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_PROVIDER_IN_USE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::REASON_SERVICE_IN_USE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_SERVICE_IN_USE"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_UNKNOWN"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::importance()
	{
		return getField<jint>(
			"importance"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::importanceReasonCode()
	{
		return getField<jint>(
			"importanceReasonCode"
		);
	}
	inline android::content::ComponentName ActivityManager_RunningAppProcessInfo::importanceReasonComponent()
	{
		return getObjectField(
			"importanceReasonComponent",
			"Landroid/content/ComponentName;"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::importanceReasonPid()
	{
		return getField<jint>(
			"importanceReasonPid"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::lastTrimLevel()
	{
		return getField<jint>(
			"lastTrimLevel"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::lru()
	{
		return getField<jint>(
			"lru"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	inline JArray ActivityManager_RunningAppProcessInfo::pkgList()
	{
		return getObjectField(
			"pkgList",
			"[Ljava/lang/String;"
		);
	}
	inline JString ActivityManager_RunningAppProcessInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	inline jint ActivityManager_RunningAppProcessInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	inline ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo()
		: JObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"()V"
		) {}
	inline ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo(JString arg0, jint arg1, JArray arg2)
		: JObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"(Ljava/lang/String;I[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jarray>()
		) {}
	
	// Methods
	inline jint ActivityManager_RunningAppProcessInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void ActivityManager_RunningAppProcessInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void ActivityManager_RunningAppProcessInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#include "../../JArray.hpp"
#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RunningAppProcessInfo.hpp"

namespace android::app
{
	// Fields
	JObject ActivityManager_RunningAppProcessInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_BACKGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CACHED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CACHED"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CANT_SAVE_STATE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CANT_SAVE_STATE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_EMPTY()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_EMPTY"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_GONE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_GONE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE_PRE_26()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE_PRE_26"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_SERVICE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING_PRE_28()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING_PRE_28"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_VISIBLE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_VISIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_PROVIDER_IN_USE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_PROVIDER_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_SERVICE_IN_USE()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_SERVICE_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_UNKNOWN"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importance()
	{
		return getField<jint>(
			"importance"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importanceReasonCode()
	{
		return getField<jint>(
			"importanceReasonCode"
		);
	}
	android::content::ComponentName ActivityManager_RunningAppProcessInfo::importanceReasonComponent()
	{
		return getObjectField(
			"importanceReasonComponent",
			"Landroid/content/ComponentName;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::importanceReasonPid()
	{
		return getField<jint>(
			"importanceReasonPid"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::lastTrimLevel()
	{
		return getField<jint>(
			"lastTrimLevel"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::lru()
	{
		return getField<jint>(
			"lru"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	JArray ActivityManager_RunningAppProcessInfo::pkgList()
	{
		return getObjectField(
			"pkgList",
			"[Ljava/lang/String;"
		);
	}
	JString ActivityManager_RunningAppProcessInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// Constructors
	ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo()
		: JObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"()V"
		) {}
	ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo(JString arg0, jint arg1, JArray arg2)
		: JObject(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"(Ljava/lang/String;I[Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jarray>()
		) {}
	
	// Methods
	jint ActivityManager_RunningAppProcessInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningAppProcessInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningAppProcessInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app


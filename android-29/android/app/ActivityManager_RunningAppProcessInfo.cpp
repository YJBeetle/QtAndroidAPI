#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RunningAppProcessInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningAppProcessInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_BACKGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CACHED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CACHED"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_CANT_SAVE_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_CANT_SAVE_STATE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_EMPTY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_EMPTY"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_FOREGROUND_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_FOREGROUND_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_GONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_GONE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_PERCEPTIBLE_PRE_26()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_PERCEPTIBLE_PRE_26"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_SERVICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_SERVICE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_TOP_SLEEPING_PRE_28()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_TOP_SLEEPING_PRE_28"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::IMPORTANCE_VISIBLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"IMPORTANCE_VISIBLE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_PROVIDER_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_PROVIDER_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_SERVICE_IN_USE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"REASON_SERVICE_IN_USE"
		);
	}
	jint ActivityManager_RunningAppProcessInfo::REASON_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	QAndroidJniObject ActivityManager_RunningAppProcessInfo::importanceReasonComponent()
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
	jarray ActivityManager_RunningAppProcessInfo::pkgList()
	{
		return getObjectField(
			"pkgList",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	jstring ActivityManager_RunningAppProcessInfo::processName()
	{
		return getObjectField(
			"processName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_RunningAppProcessInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo()
		: __JniBaseClass(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"()V"
		) {}
	ActivityManager_RunningAppProcessInfo::ActivityManager_RunningAppProcessInfo(jstring arg0, jint arg1, jarray arg2)
		: __JniBaseClass(
			"android.app.ActivityManager$RunningAppProcessInfo",
			"(Ljava/lang/String;I[Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint ActivityManager_RunningAppProcessInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningAppProcessInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningAppProcessInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app


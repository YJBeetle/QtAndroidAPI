#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RunningServiceInfo.hpp"

namespace android::app
{
	// Fields
	JObject ActivityManager_RunningServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RunningServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_FOREGROUND"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_PERSISTENT_PROCESS()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_PERSISTENT_PROCESS"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_STARTED()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_STARTED"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_SYSTEM_PROCESS()
	{
		return getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_SYSTEM_PROCESS"
		);
	}
	jlong ActivityManager_RunningServiceInfo::activeSince()
	{
		return getField<jlong>(
			"activeSince"
		);
	}
	jint ActivityManager_RunningServiceInfo::clientCount()
	{
		return getField<jint>(
			"clientCount"
		);
	}
	jint ActivityManager_RunningServiceInfo::clientLabel()
	{
		return getField<jint>(
			"clientLabel"
		);
	}
	JString ActivityManager_RunningServiceInfo::clientPackage()
	{
		return getObjectField(
			"clientPackage",
			"Ljava/lang/String;"
		);
	}
	jint ActivityManager_RunningServiceInfo::crashCount()
	{
		return getField<jint>(
			"crashCount"
		);
	}
	jint ActivityManager_RunningServiceInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	jboolean ActivityManager_RunningServiceInfo::foreground()
	{
		return getField<jboolean>(
			"foreground"
		);
	}
	jlong ActivityManager_RunningServiceInfo::lastActivityTime()
	{
		return getField<jlong>(
			"lastActivityTime"
		);
	}
	jint ActivityManager_RunningServiceInfo::pid()
	{
		return getField<jint>(
			"pid"
		);
	}
	JString ActivityManager_RunningServiceInfo::process()
	{
		return getObjectField(
			"process",
			"Ljava/lang/String;"
		);
	}
	jlong ActivityManager_RunningServiceInfo::restarting()
	{
		return getField<jlong>(
			"restarting"
		);
	}
	android::content::ComponentName ActivityManager_RunningServiceInfo::service()
	{
		return getObjectField(
			"service",
			"Landroid/content/ComponentName;"
		);
	}
	jboolean ActivityManager_RunningServiceInfo::started()
	{
		return getField<jboolean>(
			"started"
		);
	}
	jint ActivityManager_RunningServiceInfo::uid()
	{
		return getField<jint>(
			"uid"
		);
	}
	
	// QJniObject forward
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo()
		: JObject(
			"android.app.ActivityManager$RunningServiceInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RunningServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningServiceInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app


#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RunningServiceInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_FOREGROUND"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_PERSISTENT_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_PERSISTENT_PROCESS"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_STARTED"
		);
	}
	jint ActivityManager_RunningServiceInfo::FLAG_SYSTEM_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
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
	jstring ActivityManager_RunningServiceInfo::clientPackage()
	{
		return getObjectField(
			"clientPackage",
			"Ljava/lang/String;"
		).object<jstring>();
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
	jstring ActivityManager_RunningServiceInfo::process()
	{
		return getObjectField(
			"process",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ActivityManager_RunningServiceInfo::restarting()
	{
		return getField<jlong>(
			"restarting"
		);
	}
	QAndroidJniObject ActivityManager_RunningServiceInfo::service()
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
	
	// QAndroidJniObject forward
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo()
		: __JniBaseClass(
			"android.app.ActivityManager$RunningServiceInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RunningServiceInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningServiceInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

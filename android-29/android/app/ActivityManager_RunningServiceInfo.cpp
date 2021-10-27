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
		return __thiz.getField<jlong>(
			"activeSince"
		);
	}
	jint ActivityManager_RunningServiceInfo::clientCount()
	{
		return __thiz.getField<jint>(
			"clientCount"
		);
	}
	jint ActivityManager_RunningServiceInfo::clientLabel()
	{
		return __thiz.getField<jint>(
			"clientLabel"
		);
	}
	jstring ActivityManager_RunningServiceInfo::clientPackage()
	{
		return __thiz.getObjectField(
			"clientPackage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ActivityManager_RunningServiceInfo::crashCount()
	{
		return __thiz.getField<jint>(
			"crashCount"
		);
	}
	jint ActivityManager_RunningServiceInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags"
		);
	}
	jboolean ActivityManager_RunningServiceInfo::foreground()
	{
		return __thiz.getField<jboolean>(
			"foreground"
		);
	}
	jlong ActivityManager_RunningServiceInfo::lastActivityTime()
	{
		return __thiz.getField<jlong>(
			"lastActivityTime"
		);
	}
	jint ActivityManager_RunningServiceInfo::pid()
	{
		return __thiz.getField<jint>(
			"pid"
		);
	}
	jstring ActivityManager_RunningServiceInfo::process()
	{
		return __thiz.getObjectField(
			"process",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ActivityManager_RunningServiceInfo::restarting()
	{
		return __thiz.getField<jlong>(
			"restarting"
		);
	}
	QAndroidJniObject ActivityManager_RunningServiceInfo::service()
	{
		return __thiz.getObjectField(
			"service",
			"Landroid/content/ComponentName;"
		);
	}
	jboolean ActivityManager_RunningServiceInfo::started()
	{
		return __thiz.getField<jboolean>(
			"started"
		);
	}
	jint ActivityManager_RunningServiceInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid"
		);
	}
	
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_RunningServiceInfo::ActivityManager_RunningServiceInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningServiceInfo",
			"()V"
		);
	}
	
	// Methods
	jint ActivityManager_RunningServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningServiceInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app


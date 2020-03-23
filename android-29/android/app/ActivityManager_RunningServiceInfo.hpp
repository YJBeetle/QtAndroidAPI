#pragma once

#ifndef ANDROID_APP_ACTIVITYMANAGER_RUNNINGSERVICEINFO
#define ANDROID_APP_ACTIVITYMANAGER_RUNNINGSERVICEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ComponentName;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class ActivityManager_RunningServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_FOREGROUND();
		static jint FLAG_PERSISTENT_PROCESS();
		static jint FLAG_STARTED();
		static jint FLAG_SYSTEM_PROCESS();
		jlong activeSince();
		jint clientCount();
		jint clientLabel();
		QAndroidJniObject clientPackage();
		jint crashCount();
		jint flags();
		jboolean foreground();
		jlong lastActivityTime();
		jint pid();
		QAndroidJniObject process();
		jlong restarting();
		QAndroidJniObject service();
		jboolean started();
		jint uid();
		
		// Constructors
		void __constructor();
		
		// Methods
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningServiceInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint ActivityManager_RunningServiceInfo::FLAG_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_FOREGROUND");
	}
	jint ActivityManager_RunningServiceInfo::FLAG_PERSISTENT_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_PERSISTENT_PROCESS");
	}
	jint ActivityManager_RunningServiceInfo::FLAG_STARTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_STARTED");
	}
	jint ActivityManager_RunningServiceInfo::FLAG_SYSTEM_PROCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.ActivityManager$RunningServiceInfo",
			"FLAG_SYSTEM_PROCESS");
	}
	jlong ActivityManager_RunningServiceInfo::activeSince()
	{
		return __thiz.getField<jlong>(
			"activeSince");
	}
	jint ActivityManager_RunningServiceInfo::clientCount()
	{
		return __thiz.getField<jint>(
			"clientCount");
	}
	jint ActivityManager_RunningServiceInfo::clientLabel()
	{
		return __thiz.getField<jint>(
			"clientLabel");
	}
	QAndroidJniObject ActivityManager_RunningServiceInfo::clientPackage()
	{
		return __thiz.getObjectField(
			"clientPackage",
			"Ljava/lang/String;");
	}
	jint ActivityManager_RunningServiceInfo::crashCount()
	{
		return __thiz.getField<jint>(
			"crashCount");
	}
	jint ActivityManager_RunningServiceInfo::flags()
	{
		return __thiz.getField<jint>(
			"flags");
	}
	jboolean ActivityManager_RunningServiceInfo::foreground()
	{
		return __thiz.getField<jboolean>(
			"foreground");
	}
	jlong ActivityManager_RunningServiceInfo::lastActivityTime()
	{
		return __thiz.getField<jlong>(
			"lastActivityTime");
	}
	jint ActivityManager_RunningServiceInfo::pid()
	{
		return __thiz.getField<jint>(
			"pid");
	}
	QAndroidJniObject ActivityManager_RunningServiceInfo::process()
	{
		return __thiz.getObjectField(
			"process",
			"Ljava/lang/String;");
	}
	jlong ActivityManager_RunningServiceInfo::restarting()
	{
		return __thiz.getField<jlong>(
			"restarting");
	}
	QAndroidJniObject ActivityManager_RunningServiceInfo::service()
	{
		return __thiz.getObjectField(
			"service",
			"Landroid/content/ComponentName;");
	}
	jboolean ActivityManager_RunningServiceInfo::started()
	{
		return __thiz.getField<jboolean>(
			"started");
	}
	jint ActivityManager_RunningServiceInfo::uid()
	{
		return __thiz.getField<jint>(
			"uid");
	}
	
	// Constructors
	void ActivityManager_RunningServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RunningServiceInfo",
			"()V");
	}
	
	// Methods
	void ActivityManager_RunningServiceInfo::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	jint ActivityManager_RunningServiceInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void ActivityManager_RunningServiceInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class ActivityManager_RunningServiceInfo : public __jni_impl::android::app::ActivityManager_RunningServiceInfo
	{
	public:
		ActivityManager_RunningServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		ActivityManager_RunningServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_ACTIVITYMANAGER_RUNNINGSERVICEINFO


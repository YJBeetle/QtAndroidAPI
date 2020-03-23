#pragma once

#ifndef ANDROID_APP_USAGE_USAGEEVENTS_EVENT
#define ANDROID_APP_USAGE_USAGEEVENTS_EVENT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::app::usage
{
	class UsageEvents_Event : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACTIVITY_PAUSED();
		static jint ACTIVITY_RESUMED();
		static jint ACTIVITY_STOPPED();
		static jint CONFIGURATION_CHANGE();
		static jint DEVICE_SHUTDOWN();
		static jint DEVICE_STARTUP();
		static jint FOREGROUND_SERVICE_START();
		static jint FOREGROUND_SERVICE_STOP();
		static jint KEYGUARD_HIDDEN();
		static jint KEYGUARD_SHOWN();
		static jint MOVE_TO_BACKGROUND();
		static jint MOVE_TO_FOREGROUND();
		static jint NONE();
		static jint SCREEN_INTERACTIVE();
		static jint SCREEN_NON_INTERACTIVE();
		static jint SHORTCUT_INVOCATION();
		static jint STANDBY_BUCKET_CHANGED();
		static jint USER_INTERACTION();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getPackageName();
		QAndroidJniObject getClassName();
		jlong getTimeStamp();
		QAndroidJniObject getConfiguration();
		QAndroidJniObject getShortcutId();
		jint getAppStandbyBucket();
		jint getEventType();
	};
} // namespace __jni_impl::android::app::usage

#include "../../content/res/Configuration.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	jint UsageEvents_Event::ACTIVITY_PAUSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_PAUSED");
	}
	jint UsageEvents_Event::ACTIVITY_RESUMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_RESUMED");
	}
	jint UsageEvents_Event::ACTIVITY_STOPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_STOPPED");
	}
	jint UsageEvents_Event::CONFIGURATION_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"CONFIGURATION_CHANGE");
	}
	jint UsageEvents_Event::DEVICE_SHUTDOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_SHUTDOWN");
	}
	jint UsageEvents_Event::DEVICE_STARTUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_STARTUP");
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_START()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_START");
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_STOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_STOP");
	}
	jint UsageEvents_Event::KEYGUARD_HIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_HIDDEN");
	}
	jint UsageEvents_Event::KEYGUARD_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_SHOWN");
	}
	jint UsageEvents_Event::MOVE_TO_BACKGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_BACKGROUND");
	}
	jint UsageEvents_Event::MOVE_TO_FOREGROUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_FOREGROUND");
	}
	jint UsageEvents_Event::NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"NONE");
	}
	jint UsageEvents_Event::SCREEN_INTERACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_INTERACTIVE");
	}
	jint UsageEvents_Event::SCREEN_NON_INTERACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_NON_INTERACTIVE");
	}
	jint UsageEvents_Event::SHORTCUT_INVOCATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SHORTCUT_INVOCATION");
	}
	jint UsageEvents_Event::STANDBY_BUCKET_CHANGED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"STANDBY_BUCKET_CHANGED");
	}
	jint UsageEvents_Event::USER_INTERACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"USER_INTERACTION");
	}
	
	// Constructors
	void UsageEvents_Event::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageEvents$Event",
			"()V");
	}
	
	// Methods
	QAndroidJniObject UsageEvents_Event::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject UsageEvents_Event::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;");
	}
	jlong UsageEvents_Event::getTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimeStamp",
			"()J");
	}
	QAndroidJniObject UsageEvents_Event::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;");
	}
	QAndroidJniObject UsageEvents_Event::getShortcutId()
	{
		return __thiz.callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;");
	}
	jint UsageEvents_Event::getAppStandbyBucket()
	{
		return __thiz.callMethod<jint>(
			"getAppStandbyBucket",
			"()I");
	}
	jint UsageEvents_Event::getEventType()
	{
		return __thiz.callMethod<jint>(
			"getEventType",
			"()I");
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class UsageEvents_Event : public __jni_impl::android::app::usage::UsageEvents_Event
	{
	public:
		UsageEvents_Event(QAndroidJniObject obj) { __thiz = obj; }
		UsageEvents_Event()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

#endif // ANDROID_APP_USAGE_USAGEEVENTS_EVENT


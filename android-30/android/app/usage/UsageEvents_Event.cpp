#include "../../content/res/Configuration.hpp"
#include "./UsageEvents_Event.hpp"

namespace android::app::usage
{
	// Fields
	jint UsageEvents_Event::ACTIVITY_PAUSED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_PAUSED"
		);
	}
	jint UsageEvents_Event::ACTIVITY_RESUMED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_RESUMED"
		);
	}
	jint UsageEvents_Event::ACTIVITY_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"ACTIVITY_STOPPED"
		);
	}
	jint UsageEvents_Event::CONFIGURATION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"CONFIGURATION_CHANGE"
		);
	}
	jint UsageEvents_Event::DEVICE_SHUTDOWN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_SHUTDOWN"
		);
	}
	jint UsageEvents_Event::DEVICE_STARTUP()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"DEVICE_STARTUP"
		);
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_START()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_START"
		);
	}
	jint UsageEvents_Event::FOREGROUND_SERVICE_STOP()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"FOREGROUND_SERVICE_STOP"
		);
	}
	jint UsageEvents_Event::KEYGUARD_HIDDEN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_HIDDEN"
		);
	}
	jint UsageEvents_Event::KEYGUARD_SHOWN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_SHOWN"
		);
	}
	jint UsageEvents_Event::MOVE_TO_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_BACKGROUND"
		);
	}
	jint UsageEvents_Event::MOVE_TO_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_FOREGROUND"
		);
	}
	jint UsageEvents_Event::NONE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"NONE"
		);
	}
	jint UsageEvents_Event::SCREEN_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SCREEN_NON_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_NON_INTERACTIVE"
		);
	}
	jint UsageEvents_Event::SHORTCUT_INVOCATION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SHORTCUT_INVOCATION"
		);
	}
	jint UsageEvents_Event::STANDBY_BUCKET_CHANGED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"STANDBY_BUCKET_CHANGED"
		);
	}
	jint UsageEvents_Event::USER_INTERACTION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"USER_INTERACTION"
		);
	}
	
	// QJniObject forward
	UsageEvents_Event::UsageEvents_Event(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsageEvents_Event::UsageEvents_Event()
		: JObject(
			"android.app.usage.UsageEvents$Event",
			"()V"
		) {}
	
	// Methods
	jint UsageEvents_Event::getAppStandbyBucket()
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	jstring UsageEvents_Event::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::res::Configuration UsageEvents_Event::getConfiguration()
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	jint UsageEvents_Event::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	jstring UsageEvents_Event::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UsageEvents_Event::getShortcutId()
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong UsageEvents_Event::getTimeStamp()
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
} // namespace android::app::usage


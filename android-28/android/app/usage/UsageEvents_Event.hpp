#pragma once

#include "../../content/res/Configuration.def.hpp"
#include "../../../JString.hpp"
#include "./UsageEvents_Event.def.hpp"

namespace android::app::usage
{
	// Fields
	inline jint UsageEvents_Event::CONFIGURATION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"CONFIGURATION_CHANGE"
		);
	}
	inline jint UsageEvents_Event::KEYGUARD_HIDDEN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_HIDDEN"
		);
	}
	inline jint UsageEvents_Event::KEYGUARD_SHOWN()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"KEYGUARD_SHOWN"
		);
	}
	inline jint UsageEvents_Event::MOVE_TO_BACKGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_BACKGROUND"
		);
	}
	inline jint UsageEvents_Event::MOVE_TO_FOREGROUND()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"MOVE_TO_FOREGROUND"
		);
	}
	inline jint UsageEvents_Event::NONE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"NONE"
		);
	}
	inline jint UsageEvents_Event::SCREEN_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_INTERACTIVE"
		);
	}
	inline jint UsageEvents_Event::SCREEN_NON_INTERACTIVE()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SCREEN_NON_INTERACTIVE"
		);
	}
	inline jint UsageEvents_Event::SHORTCUT_INVOCATION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"SHORTCUT_INVOCATION"
		);
	}
	inline jint UsageEvents_Event::STANDBY_BUCKET_CHANGED()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"STANDBY_BUCKET_CHANGED"
		);
	}
	inline jint UsageEvents_Event::USER_INTERACTION()
	{
		return getStaticField<jint>(
			"android.app.usage.UsageEvents$Event",
			"USER_INTERACTION"
		);
	}
	
	// Constructors
	inline UsageEvents_Event::UsageEvents_Event()
		: JObject(
			"android.app.usage.UsageEvents$Event",
			"()V"
		) {}
	
	// Methods
	inline jint UsageEvents_Event::getAppStandbyBucket() const
	{
		return callMethod<jint>(
			"getAppStandbyBucket",
			"()I"
		);
	}
	inline JString UsageEvents_Event::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::res::Configuration UsageEvents_Event::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	inline jint UsageEvents_Event::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline JString UsageEvents_Event::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JString UsageEvents_Event::getShortcutId() const
	{
		return callObjectMethod(
			"getShortcutId",
			"()Ljava/lang/String;"
		);
	}
	inline jlong UsageEvents_Event::getTimeStamp() const
	{
		return callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif

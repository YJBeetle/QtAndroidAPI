#pragma once

#include "./AppLinkInfo.def.hpp"
#include "./TvInteractiveAppManager_TvInteractiveAppCallback.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppManager.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	inline JString TvInteractiveAppManager::ACTION_APP_LINK_COMMAND()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ACTION_APP_LINK_COMMAND",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::APP_LINK_KEY_BACK_URI()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"APP_LINK_KEY_BACK_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::APP_LINK_KEY_CLASS_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"APP_LINK_KEY_CLASS_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::APP_LINK_KEY_COMMAND_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"APP_LINK_KEY_COMMAND_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::APP_LINK_KEY_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"APP_LINK_KEY_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::APP_LINK_KEY_SERVICE_ID()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"APP_LINK_KEY_SERVICE_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_BLOCKED()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_BLOCKED"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_ENCRYPTED"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_NONE"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_NOT_SUPPORTED"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_RESOURCE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_RESOURCE_UNAVAILABLE"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_UNKNOWN"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_UNKNOWN_CHANNEL()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_UNKNOWN_CHANNEL"
		);
	}
	inline jint TvInteractiveAppManager::ERROR_WEAK_SIGNAL()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"ERROR_WEAK_SIGNAL"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_BI_INTERACTIVE_APP_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_BI_INTERACTIVE_APP_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_BI_INTERACTIVE_APP_URI()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_BI_INTERACTIVE_APP_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_CHANNEL_URI()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_CHANNEL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_COMMAND_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_COMMAND_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_INTERACTIVE_APP_SERVICE_ID()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_INTERACTIVE_APP_SERVICE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppManager::INTENT_KEY_TV_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTENT_KEY_TV_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInteractiveAppManager::INTERACTIVE_APP_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTERACTIVE_APP_STATE_ERROR"
		);
	}
	inline jint TvInteractiveAppManager::INTERACTIVE_APP_STATE_RUNNING()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTERACTIVE_APP_STATE_RUNNING"
		);
	}
	inline jint TvInteractiveAppManager::INTERACTIVE_APP_STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"INTERACTIVE_APP_STATE_STOPPED"
		);
	}
	inline jint TvInteractiveAppManager::SERVICE_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"SERVICE_STATE_ERROR"
		);
	}
	inline jint TvInteractiveAppManager::SERVICE_STATE_PREPARING()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"SERVICE_STATE_PREPARING"
		);
	}
	inline jint TvInteractiveAppManager::SERVICE_STATE_READY()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"SERVICE_STATE_READY"
		);
	}
	inline jint TvInteractiveAppManager::SERVICE_STATE_UNREALIZED()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"SERVICE_STATE_UNREALIZED"
		);
	}
	inline jint TvInteractiveAppManager::TELETEXT_APP_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"TELETEXT_APP_STATE_ERROR"
		);
	}
	inline jint TvInteractiveAppManager::TELETEXT_APP_STATE_HIDE()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"TELETEXT_APP_STATE_HIDE"
		);
	}
	inline jint TvInteractiveAppManager::TELETEXT_APP_STATE_SHOW()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppManager",
			"TELETEXT_APP_STATE_SHOW"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject TvInteractiveAppManager::getTvInteractiveAppServiceList() const
	{
		return callObjectMethod(
			"getTvInteractiveAppServiceList",
			"()Ljava/util/List;"
		);
	}
	inline void TvInteractiveAppManager::registerAppLinkInfo(JString arg0, android::media::tv::interactive::AppLinkInfo arg1) const
	{
		callMethod<void>(
			"registerAppLinkInfo",
			"(Ljava/lang/String;Landroid/media/tv/interactive/AppLinkInfo;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppManager::registerCallback(JObject arg0, android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/tv/interactive/TvInteractiveAppManager$TvInteractiveAppCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppManager::sendAppLinkCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendAppLinkCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppManager::unregisterAppLinkInfo(JString arg0, android::media::tv::interactive::AppLinkInfo arg1) const
	{
		callMethod<void>(
			"unregisterAppLinkInfo",
			"(Ljava/lang/String;Landroid/media/tv/interactive/AppLinkInfo;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppManager::unregisterCallback(android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/tv/interactive/TvInteractiveAppManager$TvInteractiveAppCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

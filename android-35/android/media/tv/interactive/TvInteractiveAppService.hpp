#pragma once

#include "../../../content/Intent.def.hpp"
#include "./AppLinkInfo.def.hpp"
#include "./TvInteractiveAppService_Session.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppService.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_CHANGE_CHANNEL_QUIETLY()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_CHANGE_CHANNEL_QUIETLY",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_CHANNEL_URI()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_CHANNEL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_PLAYBACK_PARAMS()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_PLAYBACK_PARAMS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_PROGRAM_URI()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_PROGRAM_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_STOP_MODE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_STOP_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_TIME_POSITION()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_TIME_POSITION",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_TIME_SHIFT_MODE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_TIME_SHIFT_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_TRACK_ID()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_TRACK_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_TRACK_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_TRACK_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::COMMAND_PARAMETER_KEY_VOLUME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_KEY_VOLUME",
			"Ljava/lang/String;"
		);
	}
	inline jint TvInteractiveAppService::COMMAND_PARAMETER_VALUE_STOP_MODE_BLANK()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_VALUE_STOP_MODE_BLANK"
		);
	}
	inline jint TvInteractiveAppService::COMMAND_PARAMETER_VALUE_STOP_MODE_FREEZE()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppService",
			"COMMAND_PARAMETER_VALUE_STOP_MODE_FREEZE"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_SELECT_TRACK()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_SELECT_TRACK",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_SET_STREAM_VOLUME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_SET_STREAM_VOLUME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_STOP()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_STOP",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_TUNE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_TUNE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_TUNE_NEXT()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_TUNE_NEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::PLAYBACK_COMMAND_TYPE_TUNE_PREV()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"PLAYBACK_COMMAND_TYPE_TUNE_PREV",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_PAUSE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_PAUSE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_PLAY()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_PLAY",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_RESUME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_RESUME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_SEEK_TO()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_SEEK_TO",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_SET_MODE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_SET_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppService::TIME_SHIFT_COMMAND_TYPE_SET_PLAYBACK_PARAMS()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppService",
			"TIME_SHIFT_COMMAND_TYPE_SET_PLAYBACK_PARAMS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TvInteractiveAppService::TvInteractiveAppService()
		: android::app::Service(
			"android.media.tv.interactive.TvInteractiveAppService",
			"()V"
		) {}
	
	// Methods
	inline void TvInteractiveAppService::notifyStateChanged(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"notifyStateChanged",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void TvInteractiveAppService::onAppLinkCommand(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onAppLinkCommand",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline JObject TvInteractiveAppService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline android::media::tv::interactive::TvInteractiveAppService_Session TvInteractiveAppService::onCreateSession(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"onCreateSession",
			"(Ljava/lang/String;I)Landroid/media/tv/interactive/TvInteractiveAppService$Session;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppService::onRegisterAppLinkInfo(android::media::tv::interactive::AppLinkInfo arg0) const
	{
		callMethod<void>(
			"onRegisterAppLinkInfo",
			"(Landroid/media/tv/interactive/AppLinkInfo;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppService::onUnregisterAppLinkInfo(android::media::tv::interactive::AppLinkInfo arg0) const
	{
		callMethod<void>(
			"onUnregisterAppLinkInfo",
			"(Landroid/media/tv/interactive/AppLinkInfo;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv::interactive

// Base class headers
#include "../../../content/Context.hpp"
#include "../../../content/ContextWrapper.hpp"
#include "../../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif

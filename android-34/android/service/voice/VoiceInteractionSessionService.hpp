#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "../../content/res/Configuration.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./VoiceInteractionSession.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "./VoiceInteractionSessionService.def.hpp"

namespace android::service::voice
{
	// Fields
	
	// Constructors
	inline VoiceInteractionSessionService::VoiceInteractionSessionService()
		: android::app::Service(
			"android.service.voice.VoiceInteractionSessionService",
			"()V"
		) {}
	
	// Methods
	inline JObject VoiceInteractionSessionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void VoiceInteractionSessionService::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	inline void VoiceInteractionSessionService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void VoiceInteractionSessionService::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	inline android::service::voice::VoiceInteractionSession VoiceInteractionSessionService::onNewSession(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onNewSession",
			"(Landroid/os/Bundle;)Landroid/service/voice/VoiceInteractionSession;",
			arg0.object()
		);
	}
	inline void VoiceInteractionSessionService::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
} // namespace android::service::voice

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::voice;
#endif

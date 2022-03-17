#pragma once

#include "../../../JArray.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../content/Context.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./AlwaysOnHotwordDetector.def.hpp"
#include "./AlwaysOnHotwordDetector_Callback.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./VoiceInteractionService.def.hpp"

namespace android::service::voice
{
	// Fields
	inline JString VoiceInteractionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString VoiceInteractionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline VoiceInteractionService::VoiceInteractionService()
		: android::app::Service(
			"android.service.voice.VoiceInteractionService",
			"()V"
		) {}
	
	// Methods
	inline jboolean VoiceInteractionService::isActiveService(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.voice.VoiceInteractionService",
			"isActiveService",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::service::voice::AlwaysOnHotwordDetector VoiceInteractionService::createAlwaysOnHotwordDetector(JString arg0, java::util::Locale arg1, android::service::voice::AlwaysOnHotwordDetector_Callback arg2) const
	{
		return callObjectMethod(
			"createAlwaysOnHotwordDetector",
			"(Ljava/lang/String;Ljava/util/Locale;Landroid/service/voice/AlwaysOnHotwordDetector$Callback;)Landroid/service/voice/AlwaysOnHotwordDetector;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline jint VoiceInteractionService::getDisabledShowContext() const
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	inline JObject VoiceInteractionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void VoiceInteractionService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void VoiceInteractionService::onLaunchVoiceAssistFromKeyguard() const
	{
		callMethod<void>(
			"onLaunchVoiceAssistFromKeyguard",
			"()V"
		);
	}
	inline void VoiceInteractionService::onReady() const
	{
		callMethod<void>(
			"onReady",
			"()V"
		);
	}
	inline void VoiceInteractionService::onShutdown() const
	{
		callMethod<void>(
			"onShutdown",
			"()V"
		);
	}
	inline void VoiceInteractionService::setDisabledShowContext(jint arg0) const
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	inline void VoiceInteractionService::showSession(android::os::Bundle arg0, jint arg1) const
	{
		callMethod<void>(
			"showSession",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
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

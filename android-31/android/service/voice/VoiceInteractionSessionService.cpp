#include "../../../JArray.hpp"
#include "../../content/Intent.hpp"
#include "../../content/res/Configuration.hpp"
#include "../../os/Bundle.hpp"
#include "./VoiceInteractionSession.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./VoiceInteractionSessionService.hpp"

namespace android::service::voice
{
	// Fields
	
	// QAndroidJniObject forward
	VoiceInteractionSessionService::VoiceInteractionSessionService(QAndroidJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VoiceInteractionSessionService::VoiceInteractionSessionService()
		: android::app::Service(
			"android.service.voice.VoiceInteractionSessionService",
			"()V"
		) {}
	
	// Methods
	JObject VoiceInteractionSessionService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	void VoiceInteractionSessionService::onConfigurationChanged(android::content::res::Configuration arg0) const
	{
		callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.object()
		);
	}
	void VoiceInteractionSessionService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void VoiceInteractionSessionService::onLowMemory() const
	{
		callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	android::service::voice::VoiceInteractionSession VoiceInteractionSessionService::onNewSession(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"onNewSession",
			"(Landroid/os/Bundle;)Landroid/service/voice/VoiceInteractionSession;",
			arg0.object()
		);
	}
	void VoiceInteractionSessionService::onTrimMemory(jint arg0) const
	{
		callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
} // namespace android::service::voice


#include "../../content/ComponentName.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"
#include "../../os/Bundle.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/PrintWriter.hpp"
#include "./VoiceInteractionService.hpp"

namespace android::service::voice
{
	// Fields
	jstring VoiceInteractionService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoiceInteractionService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.voice.VoiceInteractionService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	VoiceInteractionService::VoiceInteractionService(QJniObject obj) : android::app::Service(obj) {}
	
	// Constructors
	VoiceInteractionService::VoiceInteractionService()
		: android::app::Service(
			"android.service.voice.VoiceInteractionService",
			"()V"
		) {}
	
	// Methods
	jboolean VoiceInteractionService::isActiveService(android::content::Context arg0, android::content::ComponentName arg1)
	{
		return callStaticMethod<jboolean>(
			"android.service.voice.VoiceInteractionService",
			"isActiveService",
			"(Landroid/content/Context;Landroid/content/ComponentName;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jint VoiceInteractionService::getDisabledShowContext()
	{
		return callMethod<jint>(
			"getDisabledShowContext",
			"()I"
		);
	}
	__JniBaseClass VoiceInteractionService::onBind(android::content::Intent arg0)
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	__JniBaseClass VoiceInteractionService::onGetSupportedVoiceActions(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"onGetSupportedVoiceActions",
			"(Ljava/util/Set;)Ljava/util/Set;",
			arg0.object()
		);
	}
	void VoiceInteractionService::onLaunchVoiceAssistFromKeyguard()
	{
		callMethod<void>(
			"onLaunchVoiceAssistFromKeyguard",
			"()V"
		);
	}
	void VoiceInteractionService::onReady()
	{
		callMethod<void>(
			"onReady",
			"()V"
		);
	}
	void VoiceInteractionService::onShutdown()
	{
		callMethod<void>(
			"onShutdown",
			"()V"
		);
	}
	void VoiceInteractionService::setDisabledShowContext(jint arg0)
	{
		callMethod<void>(
			"setDisabledShowContext",
			"(I)V",
			arg0
		);
	}
	void VoiceInteractionService::setUiHints(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setUiHints",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void VoiceInteractionService::showSession(android::os::Bundle arg0, jint arg1)
	{
		callMethod<void>(
			"showSession",
			"(Landroid/os/Bundle;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::voice


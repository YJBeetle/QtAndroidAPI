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
	
	VoiceInteractionSessionService::VoiceInteractionSessionService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractionSessionService::VoiceInteractionSessionService()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSessionService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject VoiceInteractionSessionService::onBind(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSessionService::onConfigurationChanged(android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSessionService::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	void VoiceInteractionSessionService::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	QAndroidJniObject VoiceInteractionSessionService::onNewSession(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"onNewSession",
			"(Landroid/os/Bundle;)Landroid/service/voice/VoiceInteractionSession;",
			arg0.__jniObject().object()
		);
	}
	void VoiceInteractionSessionService::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
} // namespace android::service::voice


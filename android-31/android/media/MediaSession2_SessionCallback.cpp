#include "./MediaSession2.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./Session2Command.hpp"
#include "./Session2Command_Result.hpp"
#include "./Session2CommandGroup.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2_SessionCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSession2_SessionCallback::MediaSession2_SessionCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSession2_SessionCallback::MediaSession2_SessionCallback()
		: JObject(
			"android.media.MediaSession2$SessionCallback",
			"()V"
		) {}
	
	// Methods
	void MediaSession2_SessionCallback::onCommandResult(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, jobject arg2, android::media::Session2Command arg3, android::media::Session2Command_Result arg4)
	{
		callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	android::media::Session2CommandGroup MediaSession2_SessionCallback::onConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1)
	{
		return callObjectMethod(
			"onConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)Landroid/media/Session2CommandGroup;",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession2_SessionCallback::onDisconnected(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1)
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaSession2_SessionCallback::onPostConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1)
	{
		callMethod<void>(
			"onPostConnect",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;)V",
			arg0.object(),
			arg1.object()
		);
	}
	android::media::Session2Command_Result MediaSession2_SessionCallback::onSessionCommand(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, android::media::Session2Command arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaSession2;Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
} // namespace android::media


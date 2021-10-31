#include "./MediaController2.hpp"
#include "./Session2Command.hpp"
#include "./Session2Command_Result.hpp"
#include "./Session2CommandGroup.hpp"
#include "../os/Bundle.hpp"
#include "./MediaController2_ControllerCallback.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaController2_ControllerCallback::MediaController2_ControllerCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaController2_ControllerCallback::MediaController2_ControllerCallback()
		: __JniBaseClass(
			"android.media.MediaController2$ControllerCallback",
			"()V"
		) {}
	
	// Methods
	void MediaController2_ControllerCallback::onCommandResult(android::media::MediaController2 arg0, jobject arg1, android::media::Session2Command arg2, android::media::Session2Command_Result arg3)
	{
		callMethod<void>(
			"onCommandResult",
			"(Landroid/media/MediaController2;Ljava/lang/Object;Landroid/media/Session2Command;Landroid/media/Session2Command$Result;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	void MediaController2_ControllerCallback::onConnected(android::media::MediaController2 arg0, android::media::Session2CommandGroup arg1)
	{
		callMethod<void>(
			"onConnected",
			"(Landroid/media/MediaController2;Landroid/media/Session2CommandGroup;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController2_ControllerCallback::onDisconnected(android::media::MediaController2 arg0)
	{
		callMethod<void>(
			"onDisconnected",
			"(Landroid/media/MediaController2;)V",
			arg0.object()
		);
	}
	void MediaController2_ControllerCallback::onPlaybackActiveChanged(android::media::MediaController2 arg0, jboolean arg1)
	{
		callMethod<void>(
			"onPlaybackActiveChanged",
			"(Landroid/media/MediaController2;Z)V",
			arg0.object(),
			arg1
		);
	}
	android::media::Session2Command_Result MediaController2_ControllerCallback::onSessionCommand(android::media::MediaController2 arg0, android::media::Session2Command arg1, android::os::Bundle arg2)
	{
		return callObjectMethod(
			"onSessionCommand",
			"(Landroid/media/MediaController2;Landroid/media/Session2Command;Landroid/os/Bundle;)Landroid/media/Session2Command$Result;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::media


#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaController2.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaController2::MediaController2(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaController2::cancelSessionCommand(jobject arg0)
	{
		callMethod<void>(
			"cancelSessionCommand",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void MediaController2::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::Session2Token MediaController2::getConnectedToken()
	{
		return callObjectMethod(
			"getConnectedToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaController2::isPlaybackActive()
	{
		return callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaController2::sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1)
	{
		return callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object()
		).object<jobject>();
	}
} // namespace android::media


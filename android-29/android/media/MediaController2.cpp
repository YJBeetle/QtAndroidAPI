#include "../content/Context.hpp"
#include "./MediaController2_ControllerCallback.hpp"
#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaController2.hpp"

namespace android::media
{
	// Fields
	
	MediaController2::MediaController2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaController2::cancelSessionCommand(jobject arg0)
	{
		__thiz.callMethod<void>(
			"cancelSessionCommand",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void MediaController2::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MediaController2::getConnectedToken()
	{
		return __thiz.callObjectMethod(
			"getConnectedToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaController2::isPlaybackActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaController2::sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
} // namespace android::media


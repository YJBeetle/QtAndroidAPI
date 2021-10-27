#include "../app/PendingIntent.hpp"
#include "../content/Context.hpp"
#include "./MediaSession2_ControllerInfo.hpp"
#include "./MediaSession2_SessionCallback.hpp"
#include "./Session2Command.hpp"
#include "./Session2Token.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2.hpp"

namespace android::media
{
	// Fields
	
	MediaSession2::MediaSession2(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaSession2::broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"broadcastSessionCommand",
			"(Landroid/media/Session2Command;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaSession2::cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"cancelSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaSession2::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MediaSession2::getConnectedControllers()
	{
		return __thiz.callObjectMethod(
			"getConnectedControllers",
			"()Ljava/util/List;"
		);
	}
	jstring MediaSession2::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaSession2::getToken()
	{
		return __thiz.callObjectMethod(
			"getToken",
			"()Landroid/media/Session2Token;"
		);
	}
	jboolean MediaSession2::isPlaybackActive()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaybackActive",
			"()Z"
		);
	}
	jobject MediaSession2::sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"sendSessionCommand",
			"(Landroid/media/MediaSession2$ControllerInfo;Landroid/media/Session2Command;Landroid/os/Bundle;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		).object<jobject>();
	}
	void MediaSession2::setPlaybackActive(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackActive",
			"(Z)V",
			arg0
		);
	}
} // namespace android::media


#include "../Rating.hpp"
#include "./MediaController.hpp"
#include "./PlaybackState_CustomAction.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaController_TransportControls.hpp"

namespace android::media::session
{
	// Fields
	
	MediaController_TransportControls::MediaController_TransportControls(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MediaController_TransportControls::fastForward()
	{
		__thiz.callMethod<void>(
			"fastForward",
			"()V"
		);
	}
	void MediaController_TransportControls::pause()
	{
		__thiz.callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaController_TransportControls::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V"
		);
	}
	void MediaController_TransportControls::playFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromMediaId(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromSearch(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::playFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"playFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepare()
	{
		__thiz.callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"prepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::rewind()
	{
		__thiz.callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void MediaController_TransportControls::seekTo(jlong arg0)
	{
		__thiz.callMethod<void>(
			"seekTo",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(const QString &arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MediaController_TransportControls::setPlaybackSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setPlaybackSpeed",
			"(F)V",
			arg0
		);
	}
	void MediaController_TransportControls::setRating(android::media::Rating arg0)
	{
		__thiz.callMethod<void>(
			"setRating",
			"(Landroid/media/Rating;)V",
			arg0.__jniObject().object()
		);
	}
	void MediaController_TransportControls::skipToNext()
	{
		__thiz.callMethod<void>(
			"skipToNext",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToPrevious()
	{
		__thiz.callMethod<void>(
			"skipToPrevious",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToQueueItem(jlong arg0)
	{
		__thiz.callMethod<void>(
			"skipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media::session


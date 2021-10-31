#include "../Rating.hpp"
#include "./MediaController.hpp"
#include "./PlaybackState_CustomAction.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "./MediaController_TransportControls.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	MediaController_TransportControls::MediaController_TransportControls(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void MediaController_TransportControls::fastForward()
	{
		callMethod<void>(
			"fastForward",
			"()V"
		);
	}
	void MediaController_TransportControls::pause()
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaController_TransportControls::play()
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	void MediaController_TransportControls::playFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaController_TransportControls::playFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaController_TransportControls::playFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"playFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepare()
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"prepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::rewind()
	{
		callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void MediaController_TransportControls::seekTo(jlong arg0)
	{
		callMethod<void>(
			"seekTo",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaController_TransportControls::setRating(android::media::Rating arg0)
	{
		callMethod<void>(
			"setRating",
			"(Landroid/media/Rating;)V",
			arg0.object()
		);
	}
	void MediaController_TransportControls::skipToNext()
	{
		callMethod<void>(
			"skipToNext",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToPrevious()
	{
		callMethod<void>(
			"skipToPrevious",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToQueueItem(jlong arg0)
	{
		callMethod<void>(
			"skipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media::session


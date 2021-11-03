#include "../Rating.hpp"
#include "./MediaController.hpp"
#include "./PlaybackState_CustomAction.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../../JString.hpp"
#include "./MediaController_TransportControls.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	MediaController_TransportControls::MediaController_TransportControls(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void MediaController_TransportControls::fastForward() const
	{
		callMethod<void>(
			"fastForward",
			"()V"
		);
	}
	void MediaController_TransportControls::pause() const
	{
		callMethod<void>(
			"pause",
			"()V"
		);
	}
	void MediaController_TransportControls::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	void MediaController_TransportControls::playFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::playFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::playFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"playFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepare() const
	{
		callMethod<void>(
			"prepare",
			"()V"
		);
	}
	void MediaController_TransportControls::prepareFromMediaId(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromMediaId",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepareFromSearch(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromSearch",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::prepareFromUri(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"prepareFromUri",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::rewind() const
	{
		callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void MediaController_TransportControls::seekTo(jlong arg0) const
	{
		callMethod<void>(
			"seekTo",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::sendCustomAction(android::media::session::PlaybackState_CustomAction arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCustomAction",
			"(Landroid/media/session/PlaybackState$CustomAction;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::sendCustomAction(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendCustomAction",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void MediaController_TransportControls::setRating(android::media::Rating arg0) const
	{
		callMethod<void>(
			"setRating",
			"(Landroid/media/Rating;)V",
			arg0.object()
		);
	}
	void MediaController_TransportControls::skipToNext() const
	{
		callMethod<void>(
			"skipToNext",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToPrevious() const
	{
		callMethod<void>(
			"skipToPrevious",
			"()V"
		);
	}
	void MediaController_TransportControls::skipToQueueItem(jlong arg0) const
	{
		callMethod<void>(
			"skipToQueueItem",
			"(J)V",
			arg0
		);
	}
	void MediaController_TransportControls::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media::session


#include "./MediaBrowser_ConnectionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QJniObject forward
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback()
		: JObject(
			"android.media.browse.MediaBrowser$ConnectionCallback",
			"()V"
		) {}
	
	// Methods
	void MediaBrowser_ConnectionCallback::onConnected() const
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionFailed() const
	{
		callMethod<void>(
			"onConnectionFailed",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionSuspended() const
	{
		callMethod<void>(
			"onConnectionSuspended",
			"()V"
		);
	}
} // namespace android::media::browse


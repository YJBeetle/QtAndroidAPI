#include "./MediaBrowser_ConnectionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QJniObject forward
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback()
		: __JniBaseClass(
			"android.media.browse.MediaBrowser$ConnectionCallback",
			"()V"
		) {}
	
	// Methods
	void MediaBrowser_ConnectionCallback::onConnected()
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionFailed()
	{
		callMethod<void>(
			"onConnectionFailed",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionSuspended()
	{
		callMethod<void>(
			"onConnectionSuspended",
			"()V"
		);
	}
} // namespace android::media::browse


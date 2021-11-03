#include "./MediaBrowser_ConnectionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QAndroidJniObject forward
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback()
		: JObject(
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


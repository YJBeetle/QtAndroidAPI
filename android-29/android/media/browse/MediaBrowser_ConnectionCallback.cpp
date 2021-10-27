#include "./MediaBrowser_ConnectionCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaBrowser_ConnectionCallback::MediaBrowser_ConnectionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser$ConnectionCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaBrowser_ConnectionCallback::onConnected()
	{
		__thiz.callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionFailed()
	{
		__thiz.callMethod<void>(
			"onConnectionFailed",
			"()V"
		);
	}
	void MediaBrowser_ConnectionCallback::onConnectionSuspended()
	{
		__thiz.callMethod<void>(
			"onConnectionSuspended",
			"()V"
		);
	}
} // namespace android::media::browse


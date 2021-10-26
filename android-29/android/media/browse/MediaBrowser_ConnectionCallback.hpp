#pragma once

#ifndef ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK
#define ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ConnectionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onConnected();
		void onConnectionSuspended();
		void onConnectionFailed();
	};
} // namespace __jni_impl::android::media::browse


namespace __jni_impl::android::media::browse
{
	// Fields
	
	// Constructors
	void MediaBrowser_ConnectionCallback::__constructor()
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
	void MediaBrowser_ConnectionCallback::onConnectionSuspended()
	{
		__thiz.callMethod<void>(
			"onConnectionSuspended",
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
} // namespace __jni_impl::android::media::browse

namespace android::media::browse
{
	class MediaBrowser_ConnectionCallback : public __jni_impl::android::media::browse::MediaBrowser_ConnectionCallback
	{
	public:
		MediaBrowser_ConnectionCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowser_ConnectionCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::browse

#endif // ANDROID_MEDIA_BROWSE_MEDIABROWSER_CONNECTIONCALLBACK


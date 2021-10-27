#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::browse
{
	class MediaBrowser_MediaItem;
}

namespace __jni_impl::android::media::browse
{
	class MediaBrowser_ItemCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onError(jstring arg0);
		void onError(const QString &arg0);
		void onItemLoaded(__jni_impl::android::media::browse::MediaBrowser_MediaItem arg0);
	};
} // namespace __jni_impl::android::media::browse

#include "./MediaBrowser_MediaItem.hpp"

namespace __jni_impl::android::media::browse
{
	// Fields
	
	// Constructors
	void MediaBrowser_ItemCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.browse.MediaBrowser$ItemCallback",
			"()V"
		);
	}
	
	// Methods
	void MediaBrowser_ItemCallback::onError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaBrowser_ItemCallback::onError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MediaBrowser_ItemCallback::onItemLoaded(__jni_impl::android::media::browse::MediaBrowser_MediaItem arg0)
	{
		__thiz.callMethod<void>(
			"onItemLoaded",
			"(Landroid/media/browse/MediaBrowser$MediaItem;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media::browse

namespace android::media::browse
{
	class MediaBrowser_ItemCallback : public __jni_impl::android::media::browse::MediaBrowser_ItemCallback
	{
	public:
		MediaBrowser_ItemCallback(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowser_ItemCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::browse


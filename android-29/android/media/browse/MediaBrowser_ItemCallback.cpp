#include "./MediaBrowser_MediaItem.hpp"
#include "./MediaBrowser_ItemCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	MediaBrowser_ItemCallback::MediaBrowser_ItemCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaBrowser_ItemCallback::MediaBrowser_ItemCallback()
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
	void MediaBrowser_ItemCallback::onItemLoaded(android::media::browse::MediaBrowser_MediaItem arg0)
	{
		__thiz.callMethod<void>(
			"onItemLoaded",
			"(Landroid/media/browse/MediaBrowser$MediaItem;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::media::browse


#include "./MediaBrowser_MediaItem.hpp"
#include "../../../JString.hpp"
#include "./MediaBrowser_ItemCallback.hpp"

namespace android::media::browse
{
	// Fields
	
	// QJniObject forward
	MediaBrowser_ItemCallback::MediaBrowser_ItemCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaBrowser_ItemCallback::MediaBrowser_ItemCallback()
		: JObject(
			"android.media.browse.MediaBrowser$ItemCallback",
			"()V"
		) {}
	
	// Methods
	void MediaBrowser_ItemCallback::onError(JString arg0)
	{
		callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void MediaBrowser_ItemCallback::onItemLoaded(android::media::browse::MediaBrowser_MediaItem arg0)
	{
		callMethod<void>(
			"onItemLoaded",
			"(Landroid/media/browse/MediaBrowser$MediaItem;)V",
			arg0.object()
		);
	}
} // namespace android::media::browse


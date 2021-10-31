#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::browse
{
	class MediaBrowser_MediaItem;
}

namespace android::media::browse
{
	class MediaBrowser_ItemCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowser_ItemCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_ItemCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaBrowser_ItemCallback();
		
		// Methods
		void onError(jstring arg0);
		void onItemLoaded(android::media::browse::MediaBrowser_MediaItem arg0);
	};
} // namespace android::media::browse


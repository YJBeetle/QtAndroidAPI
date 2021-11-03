#pragma once

#include "../../../JObject.hpp"

namespace android::media::browse
{
	class MediaBrowser_MediaItem;
}
class JString;

namespace android::media::browse
{
	class MediaBrowser_ItemCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowser_ItemCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_ItemCallback(QJniObject obj);
		
		// Constructors
		MediaBrowser_ItemCallback();
		
		// Methods
		void onError(JString arg0);
		void onItemLoaded(android::media::browse::MediaBrowser_MediaItem arg0);
	};
} // namespace android::media::browse


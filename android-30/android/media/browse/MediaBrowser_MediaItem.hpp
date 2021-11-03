#pragma once

#include "../../../JObject.hpp"

namespace android::media
{
	class MediaDescription;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::browse
{
	class MediaBrowser_MediaItem : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_BROWSABLE();
		static jint FLAG_PLAYABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaBrowser_MediaItem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_MediaItem(QJniObject obj);
		
		// Constructors
		MediaBrowser_MediaItem(android::media::MediaDescription arg0, jint arg1);
		
		// Methods
		jint describeContents() const;
		android::media::MediaDescription getDescription() const;
		jint getFlags() const;
		JString getMediaId() const;
		jboolean isBrowsable() const;
		jboolean isPlayable() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::browse


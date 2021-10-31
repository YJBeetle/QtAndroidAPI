#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaDescription;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::browse
{
	class MediaBrowser_MediaItem : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_BROWSABLE();
		static jint FLAG_PLAYABLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaBrowser_MediaItem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaBrowser_MediaItem(QAndroidJniObject obj);
		
		// Constructors
		MediaBrowser_MediaItem(android::media::MediaDescription arg0, jint arg1);
		
		// Methods
		jint describeContents();
		android::media::MediaDescription getDescription();
		jint getFlags();
		jstring getMediaId();
		jboolean isBrowsable();
		jboolean isPlayable();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::browse


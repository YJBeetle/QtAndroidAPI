#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaDescription;
}
namespace android::media
{
	class Rating;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaMetadata : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring METADATA_KEY_ALBUM();
		static jstring METADATA_KEY_ALBUM_ART();
		static jstring METADATA_KEY_ALBUM_ARTIST();
		static jstring METADATA_KEY_ALBUM_ART_URI();
		static jstring METADATA_KEY_ART();
		static jstring METADATA_KEY_ARTIST();
		static jstring METADATA_KEY_ART_URI();
		static jstring METADATA_KEY_AUTHOR();
		static jstring METADATA_KEY_BT_FOLDER_TYPE();
		static jstring METADATA_KEY_COMPILATION();
		static jstring METADATA_KEY_COMPOSER();
		static jstring METADATA_KEY_DATE();
		static jstring METADATA_KEY_DISC_NUMBER();
		static jstring METADATA_KEY_DISPLAY_DESCRIPTION();
		static jstring METADATA_KEY_DISPLAY_ICON();
		static jstring METADATA_KEY_DISPLAY_ICON_URI();
		static jstring METADATA_KEY_DISPLAY_SUBTITLE();
		static jstring METADATA_KEY_DISPLAY_TITLE();
		static jstring METADATA_KEY_DURATION();
		static jstring METADATA_KEY_GENRE();
		static jstring METADATA_KEY_MEDIA_ID();
		static jstring METADATA_KEY_MEDIA_URI();
		static jstring METADATA_KEY_NUM_TRACKS();
		static jstring METADATA_KEY_RATING();
		static jstring METADATA_KEY_TITLE();
		static jstring METADATA_KEY_TRACK_NUMBER();
		static jstring METADATA_KEY_USER_RATING();
		static jstring METADATA_KEY_WRITER();
		static jstring METADATA_KEY_YEAR();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadata(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean containsKey(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::graphics::Bitmap getBitmap(jstring arg0);
		android::media::MediaDescription getDescription();
		jlong getLong(jstring arg0);
		android::media::Rating getRating(jstring arg0);
		jstring getString(jstring arg0);
		jstring getText(jstring arg0);
		jint hashCode();
		JObject keySet();
		jint size();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media


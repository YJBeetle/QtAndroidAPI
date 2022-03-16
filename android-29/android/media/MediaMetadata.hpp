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
class JString;
class JObject;
class JString;

namespace android::media
{
	class MediaMetadata : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString METADATA_KEY_ALBUM();
		static JString METADATA_KEY_ALBUM_ART();
		static JString METADATA_KEY_ALBUM_ARTIST();
		static JString METADATA_KEY_ALBUM_ART_URI();
		static JString METADATA_KEY_ART();
		static JString METADATA_KEY_ARTIST();
		static JString METADATA_KEY_ART_URI();
		static JString METADATA_KEY_AUTHOR();
		static JString METADATA_KEY_BT_FOLDER_TYPE();
		static JString METADATA_KEY_COMPILATION();
		static JString METADATA_KEY_COMPOSER();
		static JString METADATA_KEY_DATE();
		static JString METADATA_KEY_DISC_NUMBER();
		static JString METADATA_KEY_DISPLAY_DESCRIPTION();
		static JString METADATA_KEY_DISPLAY_ICON();
		static JString METADATA_KEY_DISPLAY_ICON_URI();
		static JString METADATA_KEY_DISPLAY_SUBTITLE();
		static JString METADATA_KEY_DISPLAY_TITLE();
		static JString METADATA_KEY_DURATION();
		static JString METADATA_KEY_GENRE();
		static JString METADATA_KEY_MEDIA_ID();
		static JString METADATA_KEY_MEDIA_URI();
		static JString METADATA_KEY_NUM_TRACKS();
		static JString METADATA_KEY_RATING();
		static JString METADATA_KEY_TITLE();
		static JString METADATA_KEY_TRACK_NUMBER();
		static JString METADATA_KEY_USER_RATING();
		static JString METADATA_KEY_WRITER();
		static JString METADATA_KEY_YEAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadata(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean containsKey(JString arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::Bitmap getBitmap(JString arg0) const;
		android::media::MediaDescription getDescription() const;
		jlong getLong(JString arg0) const;
		android::media::Rating getRating(JString arg0) const;
		JString getString(JString arg0) const;
		JString getText(JString arg0) const;
		jint hashCode() const;
		JObject keySet() const;
		jint size() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media


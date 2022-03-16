#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::media::tv
{
	class TvContract_Programs : public JObject
	{
	public:
		// Fields
		static JString COLUMN_AUDIO_LANGUAGE();
		static JString COLUMN_BROADCAST_GENRE();
		static JString COLUMN_CANONICAL_GENRE();
		static JString COLUMN_CHANNEL_ID();
		static JString COLUMN_CONTENT_RATING();
		static JString COLUMN_END_TIME_UTC_MILLIS();
		static JString COLUMN_EPISODE_DISPLAY_NUMBER();
		static JString COLUMN_EPISODE_NUMBER();
		static JString COLUMN_EPISODE_TITLE();
		static JString COLUMN_INTERNAL_PROVIDER_DATA();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG1();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG2();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG3();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG4();
		static JString COLUMN_LONG_DESCRIPTION();
		static JString COLUMN_POSTER_ART_URI();
		static JString COLUMN_RECORDING_PROHIBITED();
		static JString COLUMN_REVIEW_RATING();
		static JString COLUMN_REVIEW_RATING_STYLE();
		static JString COLUMN_SEARCHABLE();
		static JString COLUMN_SEASON_DISPLAY_NUMBER();
		static JString COLUMN_SEASON_NUMBER();
		static JString COLUMN_SEASON_TITLE();
		static JString COLUMN_SERIES_ID();
		static JString COLUMN_SHORT_DESCRIPTION();
		static JString COLUMN_START_TIME_UTC_MILLIS();
		static JString COLUMN_THUMBNAIL_URI();
		static JString COLUMN_TITLE();
		static JString COLUMN_VERSION_NUMBER();
		static JString COLUMN_VIDEO_HEIGHT();
		static JString COLUMN_VIDEO_WIDTH();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jint REVIEW_RATING_STYLE_PERCENTAGE();
		static jint REVIEW_RATING_STYLE_STARS();
		static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract_Programs(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Programs(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::tv


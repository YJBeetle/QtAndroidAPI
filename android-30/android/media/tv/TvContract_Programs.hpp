#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::media::tv
{
	class TvContract_Programs : public __JniBaseClass
	{
	public:
		// Fields
		static jstring COLUMN_AUDIO_LANGUAGE();
		static jstring COLUMN_BROADCAST_GENRE();
		static jstring COLUMN_CANONICAL_GENRE();
		static jstring COLUMN_CHANNEL_ID();
		static jstring COLUMN_CONTENT_RATING();
		static jstring COLUMN_END_TIME_UTC_MILLIS();
		static jstring COLUMN_EPISODE_DISPLAY_NUMBER();
		static jstring COLUMN_EPISODE_NUMBER();
		static jstring COLUMN_EPISODE_TITLE();
		static jstring COLUMN_EVENT_ID();
		static jstring COLUMN_GLOBAL_CONTENT_ID();
		static jstring COLUMN_INTERNAL_PROVIDER_DATA();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG1();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG2();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG3();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG4();
		static jstring COLUMN_LONG_DESCRIPTION();
		static jstring COLUMN_POSTER_ART_URI();
		static jstring COLUMN_RECORDING_PROHIBITED();
		static jstring COLUMN_REVIEW_RATING();
		static jstring COLUMN_REVIEW_RATING_STYLE();
		static jstring COLUMN_SEARCHABLE();
		static jstring COLUMN_SEASON_DISPLAY_NUMBER();
		static jstring COLUMN_SEASON_NUMBER();
		static jstring COLUMN_SEASON_TITLE();
		static jstring COLUMN_SERIES_ID();
		static jstring COLUMN_SHORT_DESCRIPTION();
		static jstring COLUMN_SPLIT_ID();
		static jstring COLUMN_START_TIME_UTC_MILLIS();
		static jstring COLUMN_THUMBNAIL_URI();
		static jstring COLUMN_TITLE();
		static jstring COLUMN_VERSION_NUMBER();
		static jstring COLUMN_VIDEO_HEIGHT();
		static jstring COLUMN_VIDEO_WIDTH();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jint REVIEW_RATING_STYLE_PERCENTAGE();
		static jint REVIEW_RATING_STYLE_STARS();
		static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract_Programs(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Programs(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::tv


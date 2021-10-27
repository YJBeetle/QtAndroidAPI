#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::media::tv
{
	class TvContract_WatchNextPrograms : public __JniBaseClass
	{
	public:
		// Fields
		static jint ASPECT_RATIO_16_9();
		static jint ASPECT_RATIO_1_1();
		static jint ASPECT_RATIO_2_3();
		static jint ASPECT_RATIO_3_2();
		static jint ASPECT_RATIO_4_3();
		static jint AVAILABILITY_AVAILABLE();
		static jint AVAILABILITY_FREE_WITH_SUBSCRIPTION();
		static jint AVAILABILITY_PAID_CONTENT();
		static jstring COLUMN_AUDIO_LANGUAGE();
		static jstring COLUMN_AUTHOR();
		static jstring COLUMN_AVAILABILITY();
		static jstring COLUMN_BROWSABLE();
		static jstring COLUMN_CANONICAL_GENRE();
		static jstring COLUMN_CONTENT_ID();
		static jstring COLUMN_CONTENT_RATING();
		static jstring COLUMN_DURATION_MILLIS();
		static jstring COLUMN_EPISODE_DISPLAY_NUMBER();
		static jstring COLUMN_EPISODE_TITLE();
		static jstring COLUMN_INTENT_URI();
		static jstring COLUMN_INTERACTION_COUNT();
		static jstring COLUMN_INTERACTION_TYPE();
		static jstring COLUMN_INTERNAL_PROVIDER_DATA();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG1();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG2();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG3();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG4();
		static jstring COLUMN_INTERNAL_PROVIDER_ID();
		static jstring COLUMN_ITEM_COUNT();
		static jstring COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS();
		static jstring COLUMN_LAST_PLAYBACK_POSITION_MILLIS();
		static jstring COLUMN_LIVE();
		static jstring COLUMN_LOGO_URI();
		static jstring COLUMN_LONG_DESCRIPTION();
		static jstring COLUMN_OFFER_PRICE();
		static jstring COLUMN_POSTER_ART_ASPECT_RATIO();
		static jstring COLUMN_POSTER_ART_URI();
		static jstring COLUMN_PREVIEW_VIDEO_URI();
		static jstring COLUMN_RELEASE_DATE();
		static jstring COLUMN_REVIEW_RATING();
		static jstring COLUMN_REVIEW_RATING_STYLE();
		static jstring COLUMN_SEARCHABLE();
		static jstring COLUMN_SEASON_DISPLAY_NUMBER();
		static jstring COLUMN_SEASON_TITLE();
		static jstring COLUMN_SERIES_ID();
		static jstring COLUMN_SHORT_DESCRIPTION();
		static jstring COLUMN_STARTING_PRICE();
		static jstring COLUMN_THUMBNAIL_ASPECT_RATIO();
		static jstring COLUMN_THUMBNAIL_URI();
		static jstring COLUMN_TITLE();
		static jstring COLUMN_TRANSIENT();
		static jstring COLUMN_TYPE();
		static jstring COLUMN_VERSION_NUMBER();
		static jstring COLUMN_VIDEO_HEIGHT();
		static jstring COLUMN_VIDEO_WIDTH();
		static jstring COLUMN_WATCH_NEXT_TYPE();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jint INTERACTION_TYPE_FANS();
		static jint INTERACTION_TYPE_FOLLOWERS();
		static jint INTERACTION_TYPE_LIKES();
		static jint INTERACTION_TYPE_LISTENS();
		static jint INTERACTION_TYPE_THUMBS();
		static jint INTERACTION_TYPE_VIEWERS();
		static jint INTERACTION_TYPE_VIEWS();
		static jint REVIEW_RATING_STYLE_PERCENTAGE();
		static jint REVIEW_RATING_STYLE_STARS();
		static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN();
		static jint TYPE_ALBUM();
		static jint TYPE_ARTIST();
		static jint TYPE_CHANNEL();
		static jint TYPE_CLIP();
		static jint TYPE_EVENT();
		static jint TYPE_MOVIE();
		static jint TYPE_PLAYLIST();
		static jint TYPE_STATION();
		static jint TYPE_TRACK();
		static jint TYPE_TV_EPISODE();
		static jint TYPE_TV_SEASON();
		static jint TYPE_TV_SERIES();
		static jint WATCH_NEXT_TYPE_CONTINUE();
		static jint WATCH_NEXT_TYPE_NEW();
		static jint WATCH_NEXT_TYPE_NEXT();
		static jint WATCH_NEXT_TYPE_WATCHLIST();
		
		TvContract_WatchNextPrograms(QAndroidJniObject obj);
		// Constructors
		TvContract_WatchNextPrograms() = default;
		
		// Methods
	};
} // namespace android::media::tv


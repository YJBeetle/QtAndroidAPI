#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::media::tv
{
	class TvContract_WatchNextPrograms : public JObject
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
		static JString COLUMN_AUDIO_LANGUAGE();
		static JString COLUMN_AUTHOR();
		static JString COLUMN_AVAILABILITY();
		static JString COLUMN_BROWSABLE();
		static JString COLUMN_CANONICAL_GENRE();
		static JString COLUMN_CONTENT_ID();
		static JString COLUMN_CONTENT_RATING();
		static JString COLUMN_DURATION_MILLIS();
		static JString COLUMN_END_TIME_UTC_MILLIS();
		static JString COLUMN_EPISODE_DISPLAY_NUMBER();
		static JString COLUMN_EPISODE_TITLE();
		static JString COLUMN_INTENT_URI();
		static JString COLUMN_INTERACTION_COUNT();
		static JString COLUMN_INTERACTION_TYPE();
		static JString COLUMN_INTERNAL_PROVIDER_DATA();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG1();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG2();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG3();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG4();
		static JString COLUMN_INTERNAL_PROVIDER_ID();
		static JString COLUMN_ITEM_COUNT();
		static JString COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS();
		static JString COLUMN_LAST_PLAYBACK_POSITION_MILLIS();
		static JString COLUMN_LIVE();
		static JString COLUMN_LOGO_URI();
		static JString COLUMN_LONG_DESCRIPTION();
		static JString COLUMN_OFFER_PRICE();
		static JString COLUMN_POSTER_ART_ASPECT_RATIO();
		static JString COLUMN_POSTER_ART_URI();
		static JString COLUMN_PREVIEW_VIDEO_URI();
		static JString COLUMN_RELEASE_DATE();
		static JString COLUMN_REVIEW_RATING();
		static JString COLUMN_REVIEW_RATING_STYLE();
		static JString COLUMN_SEARCHABLE();
		static JString COLUMN_SEASON_DISPLAY_NUMBER();
		static JString COLUMN_SEASON_TITLE();
		static JString COLUMN_SERIES_ID();
		static JString COLUMN_SHORT_DESCRIPTION();
		static JString COLUMN_SPLIT_ID();
		static JString COLUMN_STARTING_PRICE();
		static JString COLUMN_START_TIME_UTC_MILLIS();
		static JString COLUMN_THUMBNAIL_ASPECT_RATIO();
		static JString COLUMN_THUMBNAIL_URI();
		static JString COLUMN_TITLE();
		static JString COLUMN_TRANSIENT();
		static JString COLUMN_TYPE();
		static JString COLUMN_VERSION_NUMBER();
		static JString COLUMN_VIDEO_HEIGHT();
		static JString COLUMN_VIDEO_WIDTH();
		static JString COLUMN_WATCH_NEXT_TYPE();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
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
		
		// QJniObject forward
		template<typename ...Ts> explicit TvContract_WatchNextPrograms(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_WatchNextPrograms(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::tv


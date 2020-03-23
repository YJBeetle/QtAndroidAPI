#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS
#define ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
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
		static QAndroidJniObject COLUMN_AUDIO_LANGUAGE();
		static QAndroidJniObject COLUMN_AUTHOR();
		static QAndroidJniObject COLUMN_AVAILABILITY();
		static QAndroidJniObject COLUMN_BROWSABLE();
		static QAndroidJniObject COLUMN_CANONICAL_GENRE();
		static QAndroidJniObject COLUMN_CONTENT_ID();
		static QAndroidJniObject COLUMN_CONTENT_RATING();
		static QAndroidJniObject COLUMN_DURATION_MILLIS();
		static QAndroidJniObject COLUMN_EPISODE_DISPLAY_NUMBER();
		static QAndroidJniObject COLUMN_EPISODE_TITLE();
		static QAndroidJniObject COLUMN_INTENT_URI();
		static QAndroidJniObject COLUMN_INTERACTION_COUNT();
		static QAndroidJniObject COLUMN_INTERACTION_TYPE();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_DATA();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG1();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG2();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG3();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG4();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_ID();
		static QAndroidJniObject COLUMN_ITEM_COUNT();
		static QAndroidJniObject COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS();
		static QAndroidJniObject COLUMN_LAST_PLAYBACK_POSITION_MILLIS();
		static QAndroidJniObject COLUMN_LIVE();
		static QAndroidJniObject COLUMN_LOGO_URI();
		static QAndroidJniObject COLUMN_LONG_DESCRIPTION();
		static QAndroidJniObject COLUMN_OFFER_PRICE();
		static QAndroidJniObject COLUMN_POSTER_ART_ASPECT_RATIO();
		static QAndroidJniObject COLUMN_POSTER_ART_URI();
		static QAndroidJniObject COLUMN_PREVIEW_VIDEO_URI();
		static QAndroidJniObject COLUMN_RELEASE_DATE();
		static QAndroidJniObject COLUMN_REVIEW_RATING();
		static QAndroidJniObject COLUMN_REVIEW_RATING_STYLE();
		static QAndroidJniObject COLUMN_SEARCHABLE();
		static QAndroidJniObject COLUMN_SEASON_DISPLAY_NUMBER();
		static QAndroidJniObject COLUMN_SEASON_TITLE();
		static QAndroidJniObject COLUMN_SERIES_ID();
		static QAndroidJniObject COLUMN_SHORT_DESCRIPTION();
		static QAndroidJniObject COLUMN_STARTING_PRICE();
		static QAndroidJniObject COLUMN_THUMBNAIL_ASPECT_RATIO();
		static QAndroidJniObject COLUMN_THUMBNAIL_URI();
		static QAndroidJniObject COLUMN_TITLE();
		static QAndroidJniObject COLUMN_TRANSIENT();
		static QAndroidJniObject COLUMN_TYPE();
		static QAndroidJniObject COLUMN_VERSION_NUMBER();
		static QAndroidJniObject COLUMN_VIDEO_HEIGHT();
		static QAndroidJniObject COLUMN_VIDEO_WIDTH();
		static QAndroidJniObject COLUMN_WATCH_NEXT_TYPE();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_16_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_16_9");
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_1_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_1_1");
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_2_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_2_3");
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_3_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_3_2");
	}
	jint TvContract_WatchNextPrograms::ASPECT_RATIO_4_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"ASPECT_RATIO_4_3");
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_AVAILABLE");
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_FREE_WITH_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_FREE_WITH_SUBSCRIPTION");
	}
	jint TvContract_WatchNextPrograms::AVAILABILITY_PAID_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"AVAILABILITY_PAID_CONTENT");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_AUDIO_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_AUTHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AUTHOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_AVAILABILITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_AVAILABILITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_CANONICAL_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_CONTENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CONTENT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_CONTENT_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_DURATION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_DURATION_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_EPISODE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTENT_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERACTION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERACTION_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERACTION_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERACTION_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_ITEM_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_ITEM_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LAST_ENGAGEMENT_TIME_UTC_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_LAST_PLAYBACK_POSITION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LAST_PLAYBACK_POSITION_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_LIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LIVE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_LOGO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LOGO_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_LONG_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_OFFER_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_OFFER_PRICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_POSTER_ART_ASPECT_RATIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_POSTER_ART_ASPECT_RATIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_PREVIEW_VIDEO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_PREVIEW_VIDEO_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_RELEASE_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_RELEASE_DATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_REVIEW_RATING_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_SEASON_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_SERIES_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SERIES_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_SHORT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_STARTING_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_STARTING_PRICE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_ASPECT_RATIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_THUMBNAIL_ASPECT_RATIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_THUMBNAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_TRANSIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::COLUMN_WATCH_NEXT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"COLUMN_WATCH_NEXT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_WatchNextPrograms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$WatchNextPrograms",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FANS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_FANS");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_FOLLOWERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_FOLLOWERS");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LIKES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_LIKES");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_LISTENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_LISTENS");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_THUMBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_THUMBS");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_VIEWERS");
	}
	jint TvContract_WatchNextPrograms::INTERACTION_TYPE_VIEWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"INTERACTION_TYPE_VIEWS");
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_PERCENTAGE");
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_STARS");
	}
	jint TvContract_WatchNextPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN");
	}
	jint TvContract_WatchNextPrograms::TYPE_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_ALBUM");
	}
	jint TvContract_WatchNextPrograms::TYPE_ARTIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_ARTIST");
	}
	jint TvContract_WatchNextPrograms::TYPE_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_CHANNEL");
	}
	jint TvContract_WatchNextPrograms::TYPE_CLIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_CLIP");
	}
	jint TvContract_WatchNextPrograms::TYPE_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_EVENT");
	}
	jint TvContract_WatchNextPrograms::TYPE_MOVIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_MOVIE");
	}
	jint TvContract_WatchNextPrograms::TYPE_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_PLAYLIST");
	}
	jint TvContract_WatchNextPrograms::TYPE_STATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_STATION");
	}
	jint TvContract_WatchNextPrograms::TYPE_TRACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TRACK");
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_EPISODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_EPISODE");
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_SEASON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_SEASON");
	}
	jint TvContract_WatchNextPrograms::TYPE_TV_SERIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"TYPE_TV_SERIES");
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_CONTINUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_CONTINUE");
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_NEW");
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_NEXT");
	}
	jint TvContract_WatchNextPrograms::WATCH_NEXT_TYPE_WATCHLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$WatchNextPrograms",
			"WATCH_NEXT_TYPE_WATCHLIST");
	}
	
	// Constructors
	void TvContract_WatchNextPrograms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$WatchNextPrograms",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_WatchNextPrograms : public __jni_impl::android::media::tv::TvContract_WatchNextPrograms
	{
	public:
		TvContract_WatchNextPrograms(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_WatchNextPrograms()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTRACT_WATCHNEXTPROGRAMS


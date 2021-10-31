#include "../../net/Uri.hpp"
#include "./TvContract_PreviewPrograms.hpp"

namespace android::media::tv
{
	// Fields
	jint TvContract_PreviewPrograms::ASPECT_RATIO_16_9()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"ASPECT_RATIO_16_9"
		);
	}
	jint TvContract_PreviewPrograms::ASPECT_RATIO_1_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"ASPECT_RATIO_1_1"
		);
	}
	jint TvContract_PreviewPrograms::ASPECT_RATIO_2_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"ASPECT_RATIO_2_3"
		);
	}
	jint TvContract_PreviewPrograms::ASPECT_RATIO_3_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"ASPECT_RATIO_3_2"
		);
	}
	jint TvContract_PreviewPrograms::ASPECT_RATIO_4_3()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"ASPECT_RATIO_4_3"
		);
	}
	jint TvContract_PreviewPrograms::AVAILABILITY_AVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"AVAILABILITY_AVAILABLE"
		);
	}
	jint TvContract_PreviewPrograms::AVAILABILITY_FREE_WITH_SUBSCRIPTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"AVAILABILITY_FREE_WITH_SUBSCRIPTION"
		);
	}
	jint TvContract_PreviewPrograms::AVAILABILITY_PAID_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"AVAILABILITY_PAID_CONTENT"
		);
	}
	jstring TvContract_PreviewPrograms::COLUMN_AUDIO_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_AUTHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_AUTHOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_AVAILABILITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_AVAILABILITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_CANONICAL_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_CONTENT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_CONTENT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_CONTENT_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_DURATION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_DURATION_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_EPISODE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTENT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERACTION_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERACTION_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERACTION_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERACTION_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_ITEM_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_ITEM_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_LAST_PLAYBACK_POSITION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_LAST_PLAYBACK_POSITION_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_LIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_LIVE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_LOGO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_LOGO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_LONG_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_OFFER_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_OFFER_PRICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_POSTER_ART_ASPECT_RATIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_POSTER_ART_ASPECT_RATIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_PREVIEW_VIDEO_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_PREVIEW_VIDEO_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_RELEASE_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_RELEASE_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_REVIEW_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_REVIEW_RATING_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_SEASON_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_SERIES_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_SERIES_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_SHORT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_STARTING_PRICE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_STARTING_PRICE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_THUMBNAIL_ASPECT_RATIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_THUMBNAIL_ASPECT_RATIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_THUMBNAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_TRANSIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::COLUMN_WEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"COLUMN_WEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_PreviewPrograms::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvContract_PreviewPrograms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$PreviewPrograms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_FANS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_FANS"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_FOLLOWERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_FOLLOWERS"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_LIKES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_LIKES"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_LISTENS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_LISTENS"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_THUMBS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_THUMBS"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_VIEWERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_VIEWERS"
		);
	}
	jint TvContract_PreviewPrograms::INTERACTION_TYPE_VIEWS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"INTERACTION_TYPE_VIEWS"
		);
	}
	jint TvContract_PreviewPrograms::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"REVIEW_RATING_STYLE_PERCENTAGE"
		);
	}
	jint TvContract_PreviewPrograms::REVIEW_RATING_STYLE_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"REVIEW_RATING_STYLE_STARS"
		);
	}
	jint TvContract_PreviewPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_ALBUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_ALBUM"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_ARTIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_ARTIST"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_CHANNEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_CHANNEL"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_CLIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_CLIP"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_EVENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_EVENT"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_MOVIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_MOVIE"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_PLAYLIST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_PLAYLIST"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_STATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_STATION"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_TRACK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_TRACK"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_TV_EPISODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_TV_EPISODE"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_TV_SEASON()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_TV_SEASON"
		);
	}
	jint TvContract_PreviewPrograms::TYPE_TV_SERIES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$PreviewPrograms",
			"TYPE_TV_SERIES"
		);
	}
	
	// QAndroidJniObject forward
	TvContract_PreviewPrograms::TvContract_PreviewPrograms(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media::tv


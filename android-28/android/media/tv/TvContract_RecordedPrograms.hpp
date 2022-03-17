#pragma once

#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./TvContract_RecordedPrograms.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JString TvContract_RecordedPrograms::COLUMN_AUDIO_LANGUAGE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_BROADCAST_GENRE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_BROADCAST_GENRE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_CANONICAL_GENRE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_CONTENT_RATING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_END_TIME_UTC_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_END_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_EPISODE_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_LONG_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_POSTER_ART_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_RECORDING_DATA_BYTES()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DATA_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_RECORDING_DATA_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DATA_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_RECORDING_DURATION_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DURATION_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_REVIEW_RATING()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_REVIEW_RATING_STYLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_SEARCHABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_SEASON_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_SHORT_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_START_TIME_UTC_MILLIS()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_START_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_THUMBNAIL_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_TITLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_VERSION_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_VIDEO_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::COLUMN_VIDEO_WIDTH()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvContract_RecordedPrograms::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri TvContract_RecordedPrograms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_PERCENTAGE"
		);
	}
	inline jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_STARS()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_STARS"
		);
	}
	inline jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif

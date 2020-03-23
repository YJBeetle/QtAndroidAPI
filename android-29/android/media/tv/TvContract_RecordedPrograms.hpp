#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS
#define ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
{
	class TvContract_RecordedPrograms : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject COLUMN_AUDIO_LANGUAGE();
		static QAndroidJniObject COLUMN_BROADCAST_GENRE();
		static QAndroidJniObject COLUMN_CANONICAL_GENRE();
		static QAndroidJniObject COLUMN_CHANNEL_ID();
		static QAndroidJniObject COLUMN_CONTENT_RATING();
		static QAndroidJniObject COLUMN_END_TIME_UTC_MILLIS();
		static QAndroidJniObject COLUMN_EPISODE_DISPLAY_NUMBER();
		static QAndroidJniObject COLUMN_EPISODE_TITLE();
		static QAndroidJniObject COLUMN_INPUT_ID();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_DATA();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG1();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG2();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG3();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG4();
		static QAndroidJniObject COLUMN_LONG_DESCRIPTION();
		static QAndroidJniObject COLUMN_POSTER_ART_URI();
		static QAndroidJniObject COLUMN_RECORDING_DATA_BYTES();
		static QAndroidJniObject COLUMN_RECORDING_DATA_URI();
		static QAndroidJniObject COLUMN_RECORDING_DURATION_MILLIS();
		static QAndroidJniObject COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS();
		static QAndroidJniObject COLUMN_REVIEW_RATING();
		static QAndroidJniObject COLUMN_REVIEW_RATING_STYLE();
		static QAndroidJniObject COLUMN_SEARCHABLE();
		static QAndroidJniObject COLUMN_SEASON_DISPLAY_NUMBER();
		static QAndroidJniObject COLUMN_SEASON_TITLE();
		static QAndroidJniObject COLUMN_SERIES_ID();
		static QAndroidJniObject COLUMN_SHORT_DESCRIPTION();
		static QAndroidJniObject COLUMN_START_TIME_UTC_MILLIS();
		static QAndroidJniObject COLUMN_THUMBNAIL_URI();
		static QAndroidJniObject COLUMN_TITLE();
		static QAndroidJniObject COLUMN_VERSION_NUMBER();
		static QAndroidJniObject COLUMN_VIDEO_HEIGHT();
		static QAndroidJniObject COLUMN_VIDEO_WIDTH();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jint REVIEW_RATING_STYLE_PERCENTAGE();
		static jint REVIEW_RATING_STYLE_STARS();
		static jint REVIEW_RATING_STYLE_THUMBS_UP_DOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_AUDIO_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_BROADCAST_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_BROADCAST_GENRE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_CANONICAL_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CHANNEL_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_CONTENT_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_END_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_END_TIME_UTC_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_EPISODE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INPUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INPUT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_LONG_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_RECORDING_DATA_BYTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DATA_BYTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_RECORDING_DATA_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DATA_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_RECORDING_DURATION_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_DURATION_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_RECORDING_EXPIRE_TIME_UTC_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_REVIEW_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_REVIEW_RATING_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_SEASON_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_SERIES_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SERIES_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_SHORT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_START_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_START_TIME_UTC_MILLIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_THUMBNAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_TITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::COLUMN_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_RecordedPrograms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$RecordedPrograms",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_PERCENTAGE");
	}
	jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_STARS");
	}
	jint TvContract_RecordedPrograms::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$RecordedPrograms",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN");
	}
	
	// Constructors
	void TvContract_RecordedPrograms::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$RecordedPrograms",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_RecordedPrograms : public __jni_impl::android::media::tv::TvContract_RecordedPrograms
	{
	public:
		TvContract_RecordedPrograms(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_RecordedPrograms()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTRACT_RECORDEDPROGRAMS


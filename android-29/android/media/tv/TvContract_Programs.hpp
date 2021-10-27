#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
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
		static jstring COLUMN_START_TIME_UTC_MILLIS();
		static jstring COLUMN_THUMBNAIL_URI();
		static jstring COLUMN_TITLE();
		static jstring COLUMN_VERSION_NUMBER();
		static jstring COLUMN_VIDEO_HEIGHT();
		static jstring COLUMN_VIDEO_WIDTH();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
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
	jstring TvContract_Programs::COLUMN_AUDIO_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_AUDIO_LANGUAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_BROADCAST_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_BROADCAST_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_CANONICAL_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_CANONICAL_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_CHANNEL_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_CHANNEL_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_CONTENT_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_CONTENT_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_END_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_END_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_EPISODE_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_EPISODE_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_EPISODE_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_EPISODE_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_EPISODE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_EPISODE_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_LONG_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_LONG_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_POSTER_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_RECORDING_PROHIBITED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_RECORDING_PROHIBITED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_REVIEW_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_REVIEW_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_REVIEW_RATING_STYLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_REVIEW_RATING_STYLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SEASON_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SEASON_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SEASON_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SEASON_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SEASON_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SEASON_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SERIES_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SERIES_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_SHORT_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_SHORT_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_START_TIME_UTC_MILLIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_START_TIME_UTC_MILLIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_THUMBNAIL_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_THUMBNAIL_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_VIDEO_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_VIDEO_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::COLUMN_VIDEO_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"COLUMN_VIDEO_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Programs::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvContract_Programs::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Programs",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint TvContract_Programs::REVIEW_RATING_STYLE_PERCENTAGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$Programs",
			"REVIEW_RATING_STYLE_PERCENTAGE"
		);
	}
	jint TvContract_Programs::REVIEW_RATING_STYLE_STARS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$Programs",
			"REVIEW_RATING_STYLE_STARS"
		);
	}
	jint TvContract_Programs::REVIEW_RATING_STYLE_THUMBS_UP_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.tv.TvContract$Programs",
			"REVIEW_RATING_STYLE_THUMBS_UP_DOWN"
		);
	}
	
	// Constructors
	void TvContract_Programs::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$Programs",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_Programs : public __jni_impl::android::media::tv::TvContract_Programs
	{
	public:
		TvContract_Programs(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_Programs()
		{
			__constructor();
		}
	};
} // namespace android::media::tv


#pragma once

#ifndef ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS
#define ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::media::tv
{
	class TvContract_Channels : public __JniBaseClass
	{
	public:
		// Fields
		static jstring COLUMN_APP_LINK_COLOR();
		static jstring COLUMN_APP_LINK_ICON_URI();
		static jstring COLUMN_APP_LINK_INTENT_URI();
		static jstring COLUMN_APP_LINK_POSTER_ART_URI();
		static jstring COLUMN_APP_LINK_TEXT();
		static jstring COLUMN_BROWSABLE();
		static jstring COLUMN_DESCRIPTION();
		static jstring COLUMN_DISPLAY_NAME();
		static jstring COLUMN_DISPLAY_NUMBER();
		static jstring COLUMN_INPUT_ID();
		static jstring COLUMN_INTERNAL_PROVIDER_DATA();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG1();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG2();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG3();
		static jstring COLUMN_INTERNAL_PROVIDER_FLAG4();
		static jstring COLUMN_INTERNAL_PROVIDER_ID();
		static jstring COLUMN_LOCKED();
		static jstring COLUMN_NETWORK_AFFILIATION();
		static jstring COLUMN_ORIGINAL_NETWORK_ID();
		static jstring COLUMN_SEARCHABLE();
		static jstring COLUMN_SERVICE_ID();
		static jstring COLUMN_SERVICE_TYPE();
		static jstring COLUMN_TRANSIENT();
		static jstring COLUMN_TRANSPORT_STREAM_ID();
		static jstring COLUMN_TYPE();
		static jstring COLUMN_VERSION_NUMBER();
		static jstring COLUMN_VIDEO_FORMAT();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring SERVICE_TYPE_AUDIO();
		static jstring SERVICE_TYPE_AUDIO_VIDEO();
		static jstring SERVICE_TYPE_OTHER();
		static jstring TYPE_1SEG();
		static jstring TYPE_ATSC_C();
		static jstring TYPE_ATSC_M_H();
		static jstring TYPE_ATSC_T();
		static jstring TYPE_CMMB();
		static jstring TYPE_DTMB();
		static jstring TYPE_DVB_C();
		static jstring TYPE_DVB_C2();
		static jstring TYPE_DVB_H();
		static jstring TYPE_DVB_S();
		static jstring TYPE_DVB_S2();
		static jstring TYPE_DVB_SH();
		static jstring TYPE_DVB_T();
		static jstring TYPE_DVB_T2();
		static jstring TYPE_ISDB_C();
		static jstring TYPE_ISDB_S();
		static jstring TYPE_ISDB_S3();
		static jstring TYPE_ISDB_T();
		static jstring TYPE_ISDB_TB();
		static jstring TYPE_NTSC();
		static jstring TYPE_OTHER();
		static jstring TYPE_PAL();
		static jstring TYPE_PREVIEW();
		static jstring TYPE_SECAM();
		static jstring TYPE_S_DMB();
		static jstring TYPE_T_DMB();
		static jstring VIDEO_FORMAT_1080I();
		static jstring VIDEO_FORMAT_1080P();
		static jstring VIDEO_FORMAT_2160P();
		static jstring VIDEO_FORMAT_240P();
		static jstring VIDEO_FORMAT_360P();
		static jstring VIDEO_FORMAT_4320P();
		static jstring VIDEO_FORMAT_480I();
		static jstring VIDEO_FORMAT_480P();
		static jstring VIDEO_FORMAT_576I();
		static jstring VIDEO_FORMAT_576P();
		static jstring VIDEO_FORMAT_720P();
		static jstring VIDEO_RESOLUTION_ED();
		static jstring VIDEO_RESOLUTION_FHD();
		static jstring VIDEO_RESOLUTION_HD();
		static jstring VIDEO_RESOLUTION_SD();
		static jstring VIDEO_RESOLUTION_UHD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getVideoResolution(jstring arg0);
		static jstring getVideoResolution(const QString &arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	jstring TvContract_Channels::COLUMN_APP_LINK_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_COLOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_ICON_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_ICON_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_INTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_INTENT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_POSTER_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INPUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INPUT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_LOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_LOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_NETWORK_AFFILIATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_NETWORK_AFFILIATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_ORIGINAL_NETWORK_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_ORIGINAL_NETWORK_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SERVICE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SERVICE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TRANSIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TRANSPORT_STREAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSPORT_STREAM_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_VIDEO_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VIDEO_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject TvContract_Channels::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring TvContract_Channels::SERVICE_TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::SERVICE_TYPE_AUDIO_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::SERVICE_TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_1SEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_1SEG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_M_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_M_H",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_CMMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_CMMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DTMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DTMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_C2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_H",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_S()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_S2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_SH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_SH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_T2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_S()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_S",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_S3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_S3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_TB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_TB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_NTSC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_NTSC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_PAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_PREVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PREVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_SECAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_SECAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_S_DMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_S_DMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_T_DMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_T_DMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_1080I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_1080P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_2160P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_2160P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_240P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_240P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_360P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_360P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_4320P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_4320P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_480I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_480P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_576I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_576P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_720P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_720P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_ED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_ED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_FHD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_FHD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_HD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_HD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_SD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_SD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_UHD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_UHD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void TvContract_Channels::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$Channels",
			"(V)V");
	}
	
	// Methods
	jstring TvContract_Channels::getVideoResolution(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract$Channels",
			"getVideoResolution",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring TvContract_Channels::getVideoResolution(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract$Channels",
			"getVideoResolution",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvContract_Channels : public __jni_impl::android::media::tv::TvContract_Channels
	{
	public:
		TvContract_Channels(QAndroidJniObject obj) { __thiz = obj; }
		TvContract_Channels()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVCONTRACT_CHANNELS


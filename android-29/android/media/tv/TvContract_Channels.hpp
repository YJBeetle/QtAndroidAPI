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
		static QAndroidJniObject COLUMN_APP_LINK_COLOR();
		static QAndroidJniObject COLUMN_APP_LINK_ICON_URI();
		static QAndroidJniObject COLUMN_APP_LINK_INTENT_URI();
		static QAndroidJniObject COLUMN_APP_LINK_POSTER_ART_URI();
		static QAndroidJniObject COLUMN_APP_LINK_TEXT();
		static QAndroidJniObject COLUMN_BROWSABLE();
		static QAndroidJniObject COLUMN_DESCRIPTION();
		static QAndroidJniObject COLUMN_DISPLAY_NAME();
		static QAndroidJniObject COLUMN_DISPLAY_NUMBER();
		static QAndroidJniObject COLUMN_INPUT_ID();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_DATA();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG1();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG2();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG3();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_FLAG4();
		static QAndroidJniObject COLUMN_INTERNAL_PROVIDER_ID();
		static QAndroidJniObject COLUMN_LOCKED();
		static QAndroidJniObject COLUMN_NETWORK_AFFILIATION();
		static QAndroidJniObject COLUMN_ORIGINAL_NETWORK_ID();
		static QAndroidJniObject COLUMN_SEARCHABLE();
		static QAndroidJniObject COLUMN_SERVICE_ID();
		static QAndroidJniObject COLUMN_SERVICE_TYPE();
		static QAndroidJniObject COLUMN_TRANSIENT();
		static QAndroidJniObject COLUMN_TRANSPORT_STREAM_ID();
		static QAndroidJniObject COLUMN_TYPE();
		static QAndroidJniObject COLUMN_VERSION_NUMBER();
		static QAndroidJniObject COLUMN_VIDEO_FORMAT();
		static QAndroidJniObject CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject SERVICE_TYPE_AUDIO();
		static QAndroidJniObject SERVICE_TYPE_AUDIO_VIDEO();
		static QAndroidJniObject SERVICE_TYPE_OTHER();
		static QAndroidJniObject TYPE_1SEG();
		static QAndroidJniObject TYPE_ATSC_C();
		static QAndroidJniObject TYPE_ATSC_M_H();
		static QAndroidJniObject TYPE_ATSC_T();
		static QAndroidJniObject TYPE_CMMB();
		static QAndroidJniObject TYPE_DTMB();
		static QAndroidJniObject TYPE_DVB_C();
		static QAndroidJniObject TYPE_DVB_C2();
		static QAndroidJniObject TYPE_DVB_H();
		static QAndroidJniObject TYPE_DVB_S();
		static QAndroidJniObject TYPE_DVB_S2();
		static QAndroidJniObject TYPE_DVB_SH();
		static QAndroidJniObject TYPE_DVB_T();
		static QAndroidJniObject TYPE_DVB_T2();
		static QAndroidJniObject TYPE_ISDB_C();
		static QAndroidJniObject TYPE_ISDB_S();
		static QAndroidJniObject TYPE_ISDB_S3();
		static QAndroidJniObject TYPE_ISDB_T();
		static QAndroidJniObject TYPE_ISDB_TB();
		static QAndroidJniObject TYPE_NTSC();
		static QAndroidJniObject TYPE_OTHER();
		static QAndroidJniObject TYPE_PAL();
		static QAndroidJniObject TYPE_PREVIEW();
		static QAndroidJniObject TYPE_SECAM();
		static QAndroidJniObject TYPE_S_DMB();
		static QAndroidJniObject TYPE_T_DMB();
		static QAndroidJniObject VIDEO_FORMAT_1080I();
		static QAndroidJniObject VIDEO_FORMAT_1080P();
		static QAndroidJniObject VIDEO_FORMAT_2160P();
		static QAndroidJniObject VIDEO_FORMAT_240P();
		static QAndroidJniObject VIDEO_FORMAT_360P();
		static QAndroidJniObject VIDEO_FORMAT_4320P();
		static QAndroidJniObject VIDEO_FORMAT_480I();
		static QAndroidJniObject VIDEO_FORMAT_480P();
		static QAndroidJniObject VIDEO_FORMAT_576I();
		static QAndroidJniObject VIDEO_FORMAT_576P();
		static QAndroidJniObject VIDEO_FORMAT_720P();
		static QAndroidJniObject VIDEO_RESOLUTION_ED();
		static QAndroidJniObject VIDEO_RESOLUTION_FHD();
		static QAndroidJniObject VIDEO_RESOLUTION_HD();
		static QAndroidJniObject VIDEO_RESOLUTION_SD();
		static QAndroidJniObject VIDEO_RESOLUTION_UHD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getVideoResolution(jstring arg0);
	};
} // namespace __jni_impl::android::media::tv

#include "../../net/Uri.hpp"

namespace __jni_impl::android::media::tv
{
	// Fields
	QAndroidJniObject TvContract_Channels::COLUMN_APP_LINK_COLOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_COLOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_APP_LINK_ICON_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_ICON_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_APP_LINK_INTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_INTENT_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_APP_LINK_POSTER_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_POSTER_ART_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_APP_LINK_TEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_TEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_BROWSABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_DISPLAY_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_DISPLAY_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INPUT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INPUT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_LOCKED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_LOCKED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_NETWORK_AFFILIATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_NETWORK_AFFILIATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_ORIGINAL_NETWORK_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_ORIGINAL_NETWORK_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_SEARCHABLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_SERVICE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_SERVICE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_TRANSIENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_TRANSPORT_STREAM_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSPORT_STREAM_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_VERSION_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::COLUMN_VIDEO_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VIDEO_FORMAT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::CONTENT_ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject TvContract_Channels::SERVICE_TYPE_AUDIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::SERVICE_TYPE_AUDIO_VIDEO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO_VIDEO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::SERVICE_TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_OTHER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_1SEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_1SEG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ATSC_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_C",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ATSC_M_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_M_H",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ATSC_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_T",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_CMMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_CMMB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DTMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DTMB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_C2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_H()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_H",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_S()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_S2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_SH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_SH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_DVB_T2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ISDB_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_C",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ISDB_S()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_S",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ISDB_S3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_S3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ISDB_T()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_T",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_ISDB_TB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_TB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_NTSC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_NTSC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_OTHER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_OTHER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_PAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_PREVIEW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PREVIEW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_SECAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_SECAM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_S_DMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_S_DMB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::TYPE_T_DMB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_T_DMB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_1080I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080I",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_1080P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_2160P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_2160P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_240P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_240P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_360P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_360P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_4320P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_4320P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_480I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480I",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_480P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_576I()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576I",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_576P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_FORMAT_720P()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_720P",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_RESOLUTION_ED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_ED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_RESOLUTION_FHD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_FHD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_RESOLUTION_HD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_HD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_RESOLUTION_SD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_SD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject TvContract_Channels::VIDEO_RESOLUTION_UHD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_UHD",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void TvContract_Channels::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvContract$Channels",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TvContract_Channels::getVideoResolution(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.tv.TvContract$Channels",
			"getVideoResolution",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
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


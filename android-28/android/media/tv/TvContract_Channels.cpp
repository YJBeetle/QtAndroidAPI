#include "../../net/Uri.hpp"
#include "./TvContract_Channels.hpp"

namespace android::media::tv
{
	// Fields
	jstring TvContract_Channels::COLUMN_APP_LINK_COLOR()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_COLOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_ICON_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_ICON_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_INTENT_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_INTENT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_POSTER_ART_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_POSTER_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_APP_LINK_TEXT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_APP_LINK_TEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_BROWSABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_BROWSABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DESCRIPTION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_DISPLAY_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_DISPLAY_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INPUT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_DATA()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG1()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG3()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_FLAG4()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_FLAG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_INTERNAL_PROVIDER_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_INTERNAL_PROVIDER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_LOCKED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_LOCKED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_NETWORK_AFFILIATION()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_NETWORK_AFFILIATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_ORIGINAL_NETWORK_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_ORIGINAL_NETWORK_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SEARCHABLE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SEARCHABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SERVICE_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_SERVICE_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_SERVICE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TRANSIENT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSIENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TRANSPORT_STREAM_ID()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TRANSPORT_STREAM_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_VERSION_NUMBER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VERSION_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::COLUMN_VIDEO_FORMAT()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"COLUMN_VIDEO_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::CONTENT_ITEM_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri TvContract_Channels::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring TvContract_Channels::SERVICE_TYPE_AUDIO()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::SERVICE_TYPE_AUDIO_VIDEO()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_AUDIO_VIDEO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::SERVICE_TYPE_OTHER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"SERVICE_TYPE_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_1SEG()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_1SEG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_C()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_M_H()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_M_H",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ATSC_T()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ATSC_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_CMMB()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_CMMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DTMB()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DTMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_C()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_C2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_C2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_H()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_H",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_S()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_S2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_S2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_SH()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_SH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_T()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_DVB_T2()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_DVB_T2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_C()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_C",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_S()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_S",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_T()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_T",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_ISDB_TB()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_ISDB_TB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_NTSC()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_NTSC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_OTHER()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_OTHER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_PAL()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_PREVIEW()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_PREVIEW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_SECAM()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_SECAM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_S_DMB()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_S_DMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::TYPE_T_DMB()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"TYPE_T_DMB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_1080I()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_1080P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_1080P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_2160P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_2160P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_240P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_240P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_360P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_360P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_4320P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_4320P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_480I()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_480P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_480P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_576I()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576I",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_576P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_576P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_FORMAT_720P()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_FORMAT_720P",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_ED()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_ED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_FHD()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_FHD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_HD()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_HD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_SD()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_SD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring TvContract_Channels::VIDEO_RESOLUTION_UHD()
	{
		return getStaticObjectField(
			"android.media.tv.TvContract$Channels",
			"VIDEO_RESOLUTION_UHD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	TvContract_Channels::TvContract_Channels(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring TvContract_Channels::getVideoResolution(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.media.tv.TvContract$Channels",
			"getVideoResolution",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
} // namespace android::media::tv


#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::media::tv
{
	class TvContract_Channels : public JObject
	{
	public:
		// Fields
		static JString COLUMN_APP_LINK_COLOR();
		static JString COLUMN_APP_LINK_ICON_URI();
		static JString COLUMN_APP_LINK_INTENT_URI();
		static JString COLUMN_APP_LINK_POSTER_ART_URI();
		static JString COLUMN_APP_LINK_TEXT();
		static JString COLUMN_BROWSABLE();
		static JString COLUMN_DESCRIPTION();
		static JString COLUMN_DISPLAY_NAME();
		static JString COLUMN_DISPLAY_NUMBER();
		static JString COLUMN_GLOBAL_CONTENT_ID();
		static JString COLUMN_INPUT_ID();
		static JString COLUMN_INTERNAL_PROVIDER_DATA();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG1();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG2();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG3();
		static JString COLUMN_INTERNAL_PROVIDER_FLAG4();
		static JString COLUMN_INTERNAL_PROVIDER_ID();
		static JString COLUMN_LOCKED();
		static JString COLUMN_NETWORK_AFFILIATION();
		static JString COLUMN_ORIGINAL_NETWORK_ID();
		static JString COLUMN_SEARCHABLE();
		static JString COLUMN_SERVICE_ID();
		static JString COLUMN_SERVICE_TYPE();
		static JString COLUMN_TRANSIENT();
		static JString COLUMN_TRANSPORT_STREAM_ID();
		static JString COLUMN_TYPE();
		static JString COLUMN_VERSION_NUMBER();
		static JString COLUMN_VIDEO_FORMAT();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString SERVICE_TYPE_AUDIO();
		static JString SERVICE_TYPE_AUDIO_VIDEO();
		static JString SERVICE_TYPE_OTHER();
		static JString TYPE_1SEG();
		static JString TYPE_ATSC3_T();
		static JString TYPE_ATSC_C();
		static JString TYPE_ATSC_M_H();
		static JString TYPE_ATSC_T();
		static JString TYPE_CMMB();
		static JString TYPE_DTMB();
		static JString TYPE_DVB_C();
		static JString TYPE_DVB_C2();
		static JString TYPE_DVB_H();
		static JString TYPE_DVB_S();
		static JString TYPE_DVB_S2();
		static JString TYPE_DVB_SH();
		static JString TYPE_DVB_T();
		static JString TYPE_DVB_T2();
		static JString TYPE_ISDB_C();
		static JString TYPE_ISDB_S();
		static JString TYPE_ISDB_S3();
		static JString TYPE_ISDB_T();
		static JString TYPE_ISDB_TB();
		static JString TYPE_NTSC();
		static JString TYPE_OTHER();
		static JString TYPE_PAL();
		static JString TYPE_PREVIEW();
		static JString TYPE_SECAM();
		static JString TYPE_S_DMB();
		static JString TYPE_T_DMB();
		static JString VIDEO_FORMAT_1080I();
		static JString VIDEO_FORMAT_1080P();
		static JString VIDEO_FORMAT_2160P();
		static JString VIDEO_FORMAT_240P();
		static JString VIDEO_FORMAT_360P();
		static JString VIDEO_FORMAT_4320P();
		static JString VIDEO_FORMAT_480I();
		static JString VIDEO_FORMAT_480P();
		static JString VIDEO_FORMAT_576I();
		static JString VIDEO_FORMAT_576P();
		static JString VIDEO_FORMAT_720P();
		static JString VIDEO_RESOLUTION_ED();
		static JString VIDEO_RESOLUTION_FHD();
		static JString VIDEO_RESOLUTION_HD();
		static JString VIDEO_RESOLUTION_SD();
		static JString VIDEO_RESOLUTION_UHD();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvContract_Channels(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Channels(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getVideoResolution(JString arg0);
	};
} // namespace android::media::tv


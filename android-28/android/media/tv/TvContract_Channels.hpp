#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::media::tv
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
		static android::net::Uri CONTENT_URI();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract_Channels(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Channels(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getVideoResolution(jstring arg0);
	};
} // namespace android::media::tv


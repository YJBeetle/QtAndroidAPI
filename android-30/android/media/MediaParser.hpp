#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaFormat;
}
namespace android::media
{
	class MediaParser_SeekPoint;
}

namespace android::media
{
	class MediaParser : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PARAMETER_ADTS_ENABLE_CBR_SEEKING();
		static jstring PARAMETER_AMR_ENABLE_CBR_SEEKING();
		static jstring PARAMETER_FLAC_DISABLE_ID3();
		static jstring PARAMETER_MATROSKA_DISABLE_CUES_SEEKING();
		static jstring PARAMETER_MP3_DISABLE_ID3();
		static jstring PARAMETER_MP3_ENABLE_CBR_SEEKING();
		static jstring PARAMETER_MP3_ENABLE_INDEX_SEEKING();
		static jstring PARAMETER_MP4_IGNORE_EDIT_LISTS();
		static jstring PARAMETER_MP4_IGNORE_TFDT_BOX();
		static jstring PARAMETER_MP4_TREAT_VIDEO_FRAMES_AS_KEYFRAMES();
		static jstring PARAMETER_TS_ALLOW_NON_IDR_AVC_KEYFRAMES();
		static jstring PARAMETER_TS_DETECT_ACCESS_UNITS();
		static jstring PARAMETER_TS_ENABLE_HDMV_DTS_AUDIO_STREAMS();
		static jstring PARAMETER_TS_IGNORE_AAC_STREAM();
		static jstring PARAMETER_TS_IGNORE_AVC_STREAM();
		static jstring PARAMETER_TS_IGNORE_SPLICE_INFO_STREAM();
		static jstring PARAMETER_TS_MODE();
		static jstring PARSER_NAME_AC3();
		static jstring PARSER_NAME_AC4();
		static jstring PARSER_NAME_ADTS();
		static jstring PARSER_NAME_AMR();
		static jstring PARSER_NAME_FLAC();
		static jstring PARSER_NAME_FLV();
		static jstring PARSER_NAME_FMP4();
		static jstring PARSER_NAME_MATROSKA();
		static jstring PARSER_NAME_MP3();
		static jstring PARSER_NAME_MP4();
		static jstring PARSER_NAME_OGG();
		static jstring PARSER_NAME_PS();
		static jstring PARSER_NAME_TS();
		static jstring PARSER_NAME_UNKNOWN();
		static jstring PARSER_NAME_WAV();
		static jint SAMPLE_FLAG_DECODE_ONLY();
		static jint SAMPLE_FLAG_ENCRYPTED();
		static jint SAMPLE_FLAG_HAS_SUPPLEMENTAL_DATA();
		static jint SAMPLE_FLAG_KEY_FRAME();
		static jint SAMPLE_FLAG_LAST_SAMPLE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::MediaParser create(__JniBaseClass arg0, jarray arg1);
		static android::media::MediaParser createByName(jstring arg0, __JniBaseClass arg1);
		static __JniBaseClass getParserNames(android::media::MediaFormat arg0);
		jboolean advance(__JniBaseClass arg0);
		jstring getParserName();
		void release();
		void seek(android::media::MediaParser_SeekPoint arg0);
		android::media::MediaParser setParameter(jstring arg0, jobject arg1);
		jboolean supportsParameter(jstring arg0);
	};
} // namespace android::media


#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::media
{
	class MediaFormat;
}
namespace android::media
{
	class MediaParser_SeekPoint;
}
class JObject;
class JString;

namespace android::media
{
	class MediaParser : public JObject
	{
	public:
		// Fields
		static JString PARAMETER_ADTS_ENABLE_CBR_SEEKING();
		static JString PARAMETER_AMR_ENABLE_CBR_SEEKING();
		static JString PARAMETER_FLAC_DISABLE_ID3();
		static JString PARAMETER_MATROSKA_DISABLE_CUES_SEEKING();
		static JString PARAMETER_MP3_DISABLE_ID3();
		static JString PARAMETER_MP3_ENABLE_CBR_SEEKING();
		static JString PARAMETER_MP3_ENABLE_INDEX_SEEKING();
		static JString PARAMETER_MP4_IGNORE_EDIT_LISTS();
		static JString PARAMETER_MP4_IGNORE_TFDT_BOX();
		static JString PARAMETER_MP4_TREAT_VIDEO_FRAMES_AS_KEYFRAMES();
		static JString PARAMETER_TS_ALLOW_NON_IDR_AVC_KEYFRAMES();
		static JString PARAMETER_TS_DETECT_ACCESS_UNITS();
		static JString PARAMETER_TS_ENABLE_HDMV_DTS_AUDIO_STREAMS();
		static JString PARAMETER_TS_IGNORE_AAC_STREAM();
		static JString PARAMETER_TS_IGNORE_AVC_STREAM();
		static JString PARAMETER_TS_IGNORE_SPLICE_INFO_STREAM();
		static JString PARAMETER_TS_MODE();
		static JString PARSER_NAME_AC3();
		static JString PARSER_NAME_AC4();
		static JString PARSER_NAME_ADTS();
		static JString PARSER_NAME_AMR();
		static JString PARSER_NAME_FLAC();
		static JString PARSER_NAME_FLV();
		static JString PARSER_NAME_FMP4();
		static JString PARSER_NAME_MATROSKA();
		static JString PARSER_NAME_MP3();
		static JString PARSER_NAME_MP4();
		static JString PARSER_NAME_OGG();
		static JString PARSER_NAME_PS();
		static JString PARSER_NAME_TS();
		static JString PARSER_NAME_UNKNOWN();
		static JString PARSER_NAME_WAV();
		static jint SAMPLE_FLAG_DECODE_ONLY();
		static jint SAMPLE_FLAG_ENCRYPTED();
		static jint SAMPLE_FLAG_HAS_SUPPLEMENTAL_DATA();
		static jint SAMPLE_FLAG_KEY_FRAME();
		static jint SAMPLE_FLAG_LAST_SAMPLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaParser(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaParser(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::MediaParser create(JObject arg0, JArray arg1);
		static android::media::MediaParser createByName(JString arg0, JObject arg1);
		static JObject getParserNames(android::media::MediaFormat arg0);
		jboolean advance(JObject arg0) const;
		JString getParserName() const;
		void release() const;
		void seek(android::media::MediaParser_SeekPoint arg0) const;
		android::media::MediaParser setParameter(JString arg0, JObject arg1) const;
		jboolean supportsParameter(JString arg0) const;
	};
} // namespace android::media


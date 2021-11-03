#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Number;
}
class JString;
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaFormat : public JObject
	{
	public:
		// Fields
		static jint COLOR_RANGE_FULL();
		static jint COLOR_RANGE_LIMITED();
		static jint COLOR_STANDARD_BT2020();
		static jint COLOR_STANDARD_BT601_NTSC();
		static jint COLOR_STANDARD_BT601_PAL();
		static jint COLOR_STANDARD_BT709();
		static jint COLOR_TRANSFER_HLG();
		static jint COLOR_TRANSFER_LINEAR();
		static jint COLOR_TRANSFER_SDR_VIDEO();
		static jint COLOR_TRANSFER_ST2084();
		static JString KEY_AAC_DRC_ALBUM_MODE();
		static JString KEY_AAC_DRC_ATTENUATION_FACTOR();
		static JString KEY_AAC_DRC_BOOST_FACTOR();
		static JString KEY_AAC_DRC_EFFECT_TYPE();
		static JString KEY_AAC_DRC_HEAVY_COMPRESSION();
		static JString KEY_AAC_DRC_OUTPUT_LOUDNESS();
		static JString KEY_AAC_DRC_TARGET_REFERENCE_LEVEL();
		static JString KEY_AAC_ENCODED_TARGET_LEVEL();
		static JString KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT();
		static JString KEY_AAC_PROFILE();
		static JString KEY_AAC_SBR_MODE();
		static JString KEY_ALLOW_FRAME_DROP();
		static JString KEY_AUDIO_SESSION_ID();
		static JString KEY_BITRATE_MODE();
		static JString KEY_BIT_RATE();
		static JString KEY_CAPTION_SERVICE_NUMBER();
		static JString KEY_CAPTURE_RATE();
		static JString KEY_CHANNEL_COUNT();
		static JString KEY_CHANNEL_MASK();
		static JString KEY_CODECS_STRING();
		static JString KEY_COLOR_FORMAT();
		static JString KEY_COLOR_RANGE();
		static JString KEY_COLOR_STANDARD();
		static JString KEY_COLOR_TRANSFER();
		static JString KEY_COLOR_TRANSFER_REQUEST();
		static JString KEY_COMPLEXITY();
		static JString KEY_CREATE_INPUT_SURFACE_SUSPENDED();
		static JString KEY_DURATION();
		static JString KEY_ENCODER_DELAY();
		static JString KEY_ENCODER_PADDING();
		static JString KEY_FLAC_COMPRESSION_LEVEL();
		static JString KEY_FRAME_RATE();
		static JString KEY_GRID_COLUMNS();
		static JString KEY_GRID_ROWS();
		static JString KEY_HAPTIC_CHANNEL_COUNT();
		static JString KEY_HARDWARE_AV_SYNC_ID();
		static JString KEY_HDR10_PLUS_INFO();
		static JString KEY_HDR_STATIC_INFO();
		static JString KEY_HEIGHT();
		static JString KEY_INTRA_REFRESH_PERIOD();
		static JString KEY_IS_ADTS();
		static JString KEY_IS_AUTOSELECT();
		static JString KEY_IS_DEFAULT();
		static JString KEY_IS_FORCED_SUBTITLE();
		static JString KEY_I_FRAME_INTERVAL();
		static JString KEY_LANGUAGE();
		static JString KEY_LATENCY();
		static JString KEY_LEVEL();
		static JString KEY_LOW_LATENCY();
		static JString KEY_MAX_B_FRAMES();
		static JString KEY_MAX_FPS_TO_ENCODER();
		static JString KEY_MAX_HEIGHT();
		static JString KEY_MAX_INPUT_SIZE();
		static JString KEY_MAX_PTS_GAP_TO_ENCODER();
		static JString KEY_MAX_WIDTH();
		static JString KEY_MIME();
		static JString KEY_MPEGH_COMPATIBLE_SETS();
		static JString KEY_MPEGH_PROFILE_LEVEL_INDICATION();
		static JString KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT();
		static JString KEY_OPERATING_RATE();
		static JString KEY_OUTPUT_REORDER_DEPTH();
		static JString KEY_PCM_ENCODING();
		static JString KEY_PIXEL_ASPECT_RATIO_HEIGHT();
		static JString KEY_PIXEL_ASPECT_RATIO_WIDTH();
		static JString KEY_PREPEND_HEADER_TO_SYNC_FRAMES();
		static JString KEY_PRIORITY();
		static JString KEY_PROFILE();
		static JString KEY_PUSH_BLANK_BUFFERS_ON_STOP();
		static JString KEY_QUALITY();
		static JString KEY_REPEAT_PREVIOUS_FRAME_AFTER();
		static JString KEY_ROTATION();
		static JString KEY_SAMPLE_RATE();
		static JString KEY_SLICE_HEIGHT();
		static JString KEY_SLOW_MOTION_MARKERS();
		static JString KEY_STRIDE();
		static JString KEY_TEMPORAL_LAYERING();
		static JString KEY_TILE_HEIGHT();
		static JString KEY_TILE_WIDTH();
		static JString KEY_TRACK_ID();
		static JString KEY_VIDEO_QP_B_MAX();
		static JString KEY_VIDEO_QP_B_MIN();
		static JString KEY_VIDEO_QP_I_MAX();
		static JString KEY_VIDEO_QP_I_MIN();
		static JString KEY_VIDEO_QP_MAX();
		static JString KEY_VIDEO_QP_MIN();
		static JString KEY_VIDEO_QP_P_MAX();
		static JString KEY_VIDEO_QP_P_MIN();
		static JString KEY_WIDTH();
		static JString MIMETYPE_AUDIO_AAC();
		static JString MIMETYPE_AUDIO_AC3();
		static JString MIMETYPE_AUDIO_AC4();
		static JString MIMETYPE_AUDIO_AMR_NB();
		static JString MIMETYPE_AUDIO_AMR_WB();
		static JString MIMETYPE_AUDIO_EAC3();
		static JString MIMETYPE_AUDIO_EAC3_JOC();
		static JString MIMETYPE_AUDIO_FLAC();
		static JString MIMETYPE_AUDIO_G711_ALAW();
		static JString MIMETYPE_AUDIO_G711_MLAW();
		static JString MIMETYPE_AUDIO_MPEG();
		static JString MIMETYPE_AUDIO_MPEGH_MHA1();
		static JString MIMETYPE_AUDIO_MPEGH_MHM1();
		static JString MIMETYPE_AUDIO_MSGSM();
		static JString MIMETYPE_AUDIO_OPUS();
		static JString MIMETYPE_AUDIO_QCELP();
		static JString MIMETYPE_AUDIO_RAW();
		static JString MIMETYPE_AUDIO_SCRAMBLED();
		static JString MIMETYPE_AUDIO_VORBIS();
		static JString MIMETYPE_IMAGE_ANDROID_HEIC();
		static JString MIMETYPE_TEXT_CEA_608();
		static JString MIMETYPE_TEXT_CEA_708();
		static JString MIMETYPE_TEXT_SUBRIP();
		static JString MIMETYPE_TEXT_VTT();
		static JString MIMETYPE_VIDEO_AV1();
		static JString MIMETYPE_VIDEO_AVC();
		static JString MIMETYPE_VIDEO_DOLBY_VISION();
		static JString MIMETYPE_VIDEO_H263();
		static JString MIMETYPE_VIDEO_HEVC();
		static JString MIMETYPE_VIDEO_MPEG2();
		static JString MIMETYPE_VIDEO_MPEG4();
		static JString MIMETYPE_VIDEO_RAW();
		static JString MIMETYPE_VIDEO_SCRAMBLED();
		static JString MIMETYPE_VIDEO_VP8();
		static JString MIMETYPE_VIDEO_VP9();
		static jint TYPE_BYTE_BUFFER();
		static jint TYPE_FLOAT();
		static jint TYPE_INTEGER();
		static jint TYPE_LONG();
		static jint TYPE_NULL();
		static jint TYPE_STRING();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaFormat(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaFormat(QAndroidJniObject obj);
		
		// Constructors
		MediaFormat();
		MediaFormat(android::media::MediaFormat &arg0);
		
		// Methods
		static android::media::MediaFormat createAudioFormat(JString arg0, jint arg1, jint arg2);
		static android::media::MediaFormat createSubtitleFormat(JString arg0, JString arg1);
		static android::media::MediaFormat createVideoFormat(JString arg0, jint arg1, jint arg2);
		jboolean containsFeature(JString arg0);
		jboolean containsKey(JString arg0);
		java::nio::ByteBuffer getByteBuffer(JString arg0);
		java::nio::ByteBuffer getByteBuffer(JString arg0, java::nio::ByteBuffer arg1);
		jboolean getFeatureEnabled(JString arg0);
		JObject getFeatures();
		jfloat getFloat(JString arg0);
		jfloat getFloat(JString arg0, jfloat arg1);
		jint getInteger(JString arg0);
		jint getInteger(JString arg0, jint arg1);
		JObject getKeys();
		jlong getLong(JString arg0);
		jlong getLong(JString arg0, jlong arg1);
		java::lang::Number getNumber(JString arg0);
		java::lang::Number getNumber(JString arg0, java::lang::Number arg1);
		JString getString(JString arg0);
		JString getString(JString arg0, JString arg1);
		jint getValueTypeForKey(JString arg0);
		void removeFeature(JString arg0);
		void removeKey(JString arg0);
		void setByteBuffer(JString arg0, java::nio::ByteBuffer arg1);
		void setFeatureEnabled(JString arg0, jboolean arg1);
		void setFloat(JString arg0, jfloat arg1);
		void setInteger(JString arg0, jint arg1);
		void setLong(JString arg0, jlong arg1);
		void setString(JString arg0, JString arg1);
		JString toString();
	};
} // namespace android::media


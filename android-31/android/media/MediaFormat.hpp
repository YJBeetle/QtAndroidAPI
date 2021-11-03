#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Number;
}
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
		static jstring KEY_AAC_DRC_ALBUM_MODE();
		static jstring KEY_AAC_DRC_ATTENUATION_FACTOR();
		static jstring KEY_AAC_DRC_BOOST_FACTOR();
		static jstring KEY_AAC_DRC_EFFECT_TYPE();
		static jstring KEY_AAC_DRC_HEAVY_COMPRESSION();
		static jstring KEY_AAC_DRC_OUTPUT_LOUDNESS();
		static jstring KEY_AAC_DRC_TARGET_REFERENCE_LEVEL();
		static jstring KEY_AAC_ENCODED_TARGET_LEVEL();
		static jstring KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT();
		static jstring KEY_AAC_PROFILE();
		static jstring KEY_AAC_SBR_MODE();
		static jstring KEY_ALLOW_FRAME_DROP();
		static jstring KEY_AUDIO_SESSION_ID();
		static jstring KEY_BITRATE_MODE();
		static jstring KEY_BIT_RATE();
		static jstring KEY_CAPTION_SERVICE_NUMBER();
		static jstring KEY_CAPTURE_RATE();
		static jstring KEY_CHANNEL_COUNT();
		static jstring KEY_CHANNEL_MASK();
		static jstring KEY_CODECS_STRING();
		static jstring KEY_COLOR_FORMAT();
		static jstring KEY_COLOR_RANGE();
		static jstring KEY_COLOR_STANDARD();
		static jstring KEY_COLOR_TRANSFER();
		static jstring KEY_COLOR_TRANSFER_REQUEST();
		static jstring KEY_COMPLEXITY();
		static jstring KEY_CREATE_INPUT_SURFACE_SUSPENDED();
		static jstring KEY_DURATION();
		static jstring KEY_ENCODER_DELAY();
		static jstring KEY_ENCODER_PADDING();
		static jstring KEY_FLAC_COMPRESSION_LEVEL();
		static jstring KEY_FRAME_RATE();
		static jstring KEY_GRID_COLUMNS();
		static jstring KEY_GRID_ROWS();
		static jstring KEY_HAPTIC_CHANNEL_COUNT();
		static jstring KEY_HARDWARE_AV_SYNC_ID();
		static jstring KEY_HDR10_PLUS_INFO();
		static jstring KEY_HDR_STATIC_INFO();
		static jstring KEY_HEIGHT();
		static jstring KEY_INTRA_REFRESH_PERIOD();
		static jstring KEY_IS_ADTS();
		static jstring KEY_IS_AUTOSELECT();
		static jstring KEY_IS_DEFAULT();
		static jstring KEY_IS_FORCED_SUBTITLE();
		static jstring KEY_I_FRAME_INTERVAL();
		static jstring KEY_LANGUAGE();
		static jstring KEY_LATENCY();
		static jstring KEY_LEVEL();
		static jstring KEY_LOW_LATENCY();
		static jstring KEY_MAX_B_FRAMES();
		static jstring KEY_MAX_FPS_TO_ENCODER();
		static jstring KEY_MAX_HEIGHT();
		static jstring KEY_MAX_INPUT_SIZE();
		static jstring KEY_MAX_PTS_GAP_TO_ENCODER();
		static jstring KEY_MAX_WIDTH();
		static jstring KEY_MIME();
		static jstring KEY_MPEGH_COMPATIBLE_SETS();
		static jstring KEY_MPEGH_PROFILE_LEVEL_INDICATION();
		static jstring KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT();
		static jstring KEY_OPERATING_RATE();
		static jstring KEY_OUTPUT_REORDER_DEPTH();
		static jstring KEY_PCM_ENCODING();
		static jstring KEY_PIXEL_ASPECT_RATIO_HEIGHT();
		static jstring KEY_PIXEL_ASPECT_RATIO_WIDTH();
		static jstring KEY_PREPEND_HEADER_TO_SYNC_FRAMES();
		static jstring KEY_PRIORITY();
		static jstring KEY_PROFILE();
		static jstring KEY_PUSH_BLANK_BUFFERS_ON_STOP();
		static jstring KEY_QUALITY();
		static jstring KEY_REPEAT_PREVIOUS_FRAME_AFTER();
		static jstring KEY_ROTATION();
		static jstring KEY_SAMPLE_RATE();
		static jstring KEY_SLICE_HEIGHT();
		static jstring KEY_SLOW_MOTION_MARKERS();
		static jstring KEY_STRIDE();
		static jstring KEY_TEMPORAL_LAYERING();
		static jstring KEY_TILE_HEIGHT();
		static jstring KEY_TILE_WIDTH();
		static jstring KEY_TRACK_ID();
		static jstring KEY_VIDEO_QP_B_MAX();
		static jstring KEY_VIDEO_QP_B_MIN();
		static jstring KEY_VIDEO_QP_I_MAX();
		static jstring KEY_VIDEO_QP_I_MIN();
		static jstring KEY_VIDEO_QP_MAX();
		static jstring KEY_VIDEO_QP_MIN();
		static jstring KEY_VIDEO_QP_P_MAX();
		static jstring KEY_VIDEO_QP_P_MIN();
		static jstring KEY_WIDTH();
		static jstring MIMETYPE_AUDIO_AAC();
		static jstring MIMETYPE_AUDIO_AC3();
		static jstring MIMETYPE_AUDIO_AC4();
		static jstring MIMETYPE_AUDIO_AMR_NB();
		static jstring MIMETYPE_AUDIO_AMR_WB();
		static jstring MIMETYPE_AUDIO_EAC3();
		static jstring MIMETYPE_AUDIO_EAC3_JOC();
		static jstring MIMETYPE_AUDIO_FLAC();
		static jstring MIMETYPE_AUDIO_G711_ALAW();
		static jstring MIMETYPE_AUDIO_G711_MLAW();
		static jstring MIMETYPE_AUDIO_MPEG();
		static jstring MIMETYPE_AUDIO_MPEGH_MHA1();
		static jstring MIMETYPE_AUDIO_MPEGH_MHM1();
		static jstring MIMETYPE_AUDIO_MSGSM();
		static jstring MIMETYPE_AUDIO_OPUS();
		static jstring MIMETYPE_AUDIO_QCELP();
		static jstring MIMETYPE_AUDIO_RAW();
		static jstring MIMETYPE_AUDIO_SCRAMBLED();
		static jstring MIMETYPE_AUDIO_VORBIS();
		static jstring MIMETYPE_IMAGE_ANDROID_HEIC();
		static jstring MIMETYPE_TEXT_CEA_608();
		static jstring MIMETYPE_TEXT_CEA_708();
		static jstring MIMETYPE_TEXT_SUBRIP();
		static jstring MIMETYPE_TEXT_VTT();
		static jstring MIMETYPE_VIDEO_AV1();
		static jstring MIMETYPE_VIDEO_AVC();
		static jstring MIMETYPE_VIDEO_DOLBY_VISION();
		static jstring MIMETYPE_VIDEO_H263();
		static jstring MIMETYPE_VIDEO_HEVC();
		static jstring MIMETYPE_VIDEO_MPEG2();
		static jstring MIMETYPE_VIDEO_MPEG4();
		static jstring MIMETYPE_VIDEO_RAW();
		static jstring MIMETYPE_VIDEO_SCRAMBLED();
		static jstring MIMETYPE_VIDEO_VP8();
		static jstring MIMETYPE_VIDEO_VP9();
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
		static android::media::MediaFormat createAudioFormat(jstring arg0, jint arg1, jint arg2);
		static android::media::MediaFormat createSubtitleFormat(jstring arg0, jstring arg1);
		static android::media::MediaFormat createVideoFormat(jstring arg0, jint arg1, jint arg2);
		jboolean containsFeature(jstring arg0);
		jboolean containsKey(jstring arg0);
		java::nio::ByteBuffer getByteBuffer(jstring arg0);
		java::nio::ByteBuffer getByteBuffer(jstring arg0, java::nio::ByteBuffer arg1);
		jboolean getFeatureEnabled(jstring arg0);
		JObject getFeatures();
		jfloat getFloat(jstring arg0);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jint getInteger(jstring arg0);
		jint getInteger(jstring arg0, jint arg1);
		JObject getKeys();
		jlong getLong(jstring arg0);
		jlong getLong(jstring arg0, jlong arg1);
		java::lang::Number getNumber(jstring arg0);
		java::lang::Number getNumber(jstring arg0, java::lang::Number arg1);
		jstring getString(jstring arg0);
		jstring getString(jstring arg0, jstring arg1);
		jint getValueTypeForKey(jstring arg0);
		void removeFeature(jstring arg0);
		void removeKey(jstring arg0);
		void setByteBuffer(jstring arg0, java::nio::ByteBuffer arg1);
		void setFeatureEnabled(jstring arg0, jboolean arg1);
		void setFloat(jstring arg0, jfloat arg1);
		void setInteger(jstring arg0, jint arg1);
		void setLong(jstring arg0, jlong arg1);
		void setString(jstring arg0, jstring arg1);
		jstring toString();
	};
} // namespace android::media


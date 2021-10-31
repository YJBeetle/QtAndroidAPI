#include "../../java/lang/Number.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./MediaFormat.hpp"

namespace android::media
{
	// Fields
	jint MediaFormat::COLOR_RANGE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_FULL"
		);
	}
	jint MediaFormat::COLOR_RANGE_LIMITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_LIMITED"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT2020()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT2020"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT601_NTSC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_NTSC"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT601_PAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_PAL"
		);
	}
	jint MediaFormat::COLOR_STANDARD_BT709()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT709"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_HLG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_HLG"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_LINEAR"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_SDR_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_SDR_VIDEO"
		);
	}
	jint MediaFormat::COLOR_TRANSFER_ST2084()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_ST2084"
		);
	}
	jstring MediaFormat::KEY_AAC_DRC_ATTENUATION_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ATTENUATION_FACTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_BOOST_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_BOOST_FACTOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_EFFECT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_EFFECT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_HEAVY_COMPRESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_HEAVY_COMPRESSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_DRC_TARGET_REFERENCE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_TARGET_REFERENCE_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_ENCODED_TARGET_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_ENCODED_TARGET_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AAC_SBR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_SBR_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_AUDIO_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AUDIO_SESSION_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_BITRATE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BITRATE_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_BIT_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BIT_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CAPTURE_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTURE_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CHANNEL_MASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_MASK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_FORMAT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_RANGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_STANDARD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COLOR_TRANSFER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_COMPLEXITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COMPLEXITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_CREATE_INPUT_SURFACE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CREATE_INPUT_SURFACE_SUSPENDED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_FLAC_COMPRESSION_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FLAC_COMPRESSION_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_FRAME_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FRAME_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_GRID_COLUMNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_COLUMNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_GRID_ROWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_ROWS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HAPTIC_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HAPTIC_CHANNEL_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HDR10_PLUS_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HDR_STATIC_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR_STATIC_INFO",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_INTRA_REFRESH_PERIOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_INTRA_REFRESH_PERIOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_ADTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_ADTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_AUTOSELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_AUTOSELECT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_IS_FORCED_SUBTITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_FORCED_SUBTITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_I_FRAME_INTERVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_I_FRAME_INTERVAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LANGUAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LATENCY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LEVEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_B_FRAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_B_FRAMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_FPS_TO_ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_FPS_TO_ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_INPUT_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_INPUT_SIZE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_PTS_GAP_TO_ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_PTS_GAP_TO_ENCODER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MAX_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_MIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_OPERATING_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OPERATING_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_OUTPUT_REORDER_DEPTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OUTPUT_REORDER_DEPTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PCM_ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PCM_ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PREPEND_HEADER_TO_SYNC_FRAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PREPEND_HEADER_TO_SYNC_FRAMES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PRIORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PRIORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PROFILE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_PUSH_BLANK_BUFFERS_ON_STOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PUSH_BLANK_BUFFERS_ON_STOP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_QUALITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_REPEAT_PREVIOUS_FRAME_AFTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_REPEAT_PREVIOUS_FRAME_AFTER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ROTATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_SAMPLE_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SAMPLE_RATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_SLICE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLICE_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_STRIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_STRIDE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TEMPORAL_LAYERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TEMPORAL_LAYERING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TILE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TILE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_TRACK_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TRACK_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::KEY_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AC3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AC4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AMR_NB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_NB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_AMR_WB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_WB",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_EAC3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_EAC3_JOC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3_JOC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_FLAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_FLAC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_G711_ALAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_ALAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_G711_MLAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_MLAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MPEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_MSGSM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MSGSM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_OPUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_OPUS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_QCELP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_QCELP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_SCRAMBLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_SCRAMBLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_AUDIO_VORBIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_VORBIS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_IMAGE_ANDROID_HEIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_IMAGE_ANDROID_HEIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_CEA_608()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_608",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_CEA_708()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_708",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_SUBRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_TEXT_VTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_VTT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_AV1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AV1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_AVC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AVC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_DOLBY_VISION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_DOLBY_VISION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_H263()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_H263",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_HEVC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_HEVC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_MPEG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG2",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_MPEG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG4",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_RAW",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_SCRAMBLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_SCRAMBLED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_VP8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP8",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaFormat::MIMETYPE_VIDEO_VP9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP9",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaFormat::TYPE_BYTE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_BYTE_BUFFER"
		);
	}
	jint MediaFormat::TYPE_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_FLOAT"
		);
	}
	jint MediaFormat::TYPE_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_INTEGER"
		);
	}
	jint MediaFormat::TYPE_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_LONG"
		);
	}
	jint MediaFormat::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_NULL"
		);
	}
	jint MediaFormat::TYPE_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_STRING"
		);
	}
	
	// QAndroidJniObject forward
	MediaFormat::MediaFormat(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaFormat::MediaFormat()
		: __JniBaseClass(
			"android.media.MediaFormat",
			"()V"
		) {}
	MediaFormat::MediaFormat(android::media::MediaFormat &arg0)
		: __JniBaseClass(
			"android.media.MediaFormat",
			"(Landroid/media/MediaFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	android::media::MediaFormat MediaFormat::createAudioFormat(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createAudioFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2
		);
	}
	android::media::MediaFormat MediaFormat::createSubtitleFormat(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createSubtitleFormat",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaFormat;",
			arg0,
			arg1
		);
	}
	android::media::MediaFormat MediaFormat::createVideoFormat(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createVideoFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean MediaFormat::containsFeature(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsFeature",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean MediaFormat::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	java::nio::ByteBuffer MediaFormat::getByteBuffer(jstring arg0)
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0
		);
	}
	java::nio::ByteBuffer MediaFormat::getByteBuffer(jstring arg0, java::nio::ByteBuffer arg1)
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.object()
		);
	}
	jboolean MediaFormat::getFeatureEnabled(jstring arg0)
	{
		return callMethod<jboolean>(
			"getFeatureEnabled",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	__JniBaseClass MediaFormat::getFeatures()
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	jfloat MediaFormat::getFloat(jstring arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat MediaFormat::getFloat(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jint MediaFormat::getInteger(jstring arg0)
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint MediaFormat::getInteger(jstring arg0, jint arg1)
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1
		);
	}
	__JniBaseClass MediaFormat::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	jlong MediaFormat::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	jlong MediaFormat::getLong(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	java::lang::Number MediaFormat::getNumber(jstring arg0)
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0
		);
	}
	java::lang::Number MediaFormat::getNumber(jstring arg0, java::lang::Number arg1)
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;Ljava/lang/Number;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	jstring MediaFormat::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaFormat::getString(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jint MediaFormat::getValueTypeForKey(jstring arg0)
	{
		return callMethod<jint>(
			"getValueTypeForKey",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	void MediaFormat::removeFeature(jstring arg0)
	{
		callMethod<void>(
			"removeFeature",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaFormat::removeKey(jstring arg0)
	{
		callMethod<void>(
			"removeKey",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MediaFormat::setByteBuffer(jstring arg0, java::nio::ByteBuffer arg1)
	{
		callMethod<void>(
			"setByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)V",
			arg0,
			arg1.object()
		);
	}
	void MediaFormat::setFeatureEnabled(jstring arg0, jboolean arg1)
	{
		callMethod<void>(
			"setFeatureEnabled",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setFloat(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setInteger(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"setInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setLong(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void MediaFormat::setString(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring MediaFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media


#pragma once

#include "../../java/lang/Number.def.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MediaFormat.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaFormat::COLOR_RANGE_FULL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_FULL"
		);
	}
	inline jint MediaFormat::COLOR_RANGE_LIMITED()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_LIMITED"
		);
	}
	inline jint MediaFormat::COLOR_STANDARD_BT2020()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT2020"
		);
	}
	inline jint MediaFormat::COLOR_STANDARD_BT601_NTSC()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_NTSC"
		);
	}
	inline jint MediaFormat::COLOR_STANDARD_BT601_PAL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_PAL"
		);
	}
	inline jint MediaFormat::COLOR_STANDARD_BT709()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT709"
		);
	}
	inline jint MediaFormat::COLOR_TRANSFER_HLG()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_HLG"
		);
	}
	inline jint MediaFormat::COLOR_TRANSFER_LINEAR()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_LINEAR"
		);
	}
	inline jint MediaFormat::COLOR_TRANSFER_SDR_VIDEO()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_SDR_VIDEO"
		);
	}
	inline jint MediaFormat::COLOR_TRANSFER_ST2084()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_ST2084"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_ALBUM_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ALBUM_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_ATTENUATION_FACTOR()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ATTENUATION_FACTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_BOOST_FACTOR()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_BOOST_FACTOR",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_EFFECT_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_EFFECT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_HEAVY_COMPRESSION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_HEAVY_COMPRESSION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_OUTPUT_LOUDNESS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_OUTPUT_LOUDNESS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_DRC_TARGET_REFERENCE_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_TARGET_REFERENCE_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_ENCODED_TARGET_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_ENCODED_TARGET_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_PROFILE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AAC_SBR_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_SBR_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_ALLOW_FRAME_DROP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ALLOW_FRAME_DROP",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_AUDIO_SESSION_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AUDIO_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_BITRATE_MODE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BITRATE_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_BIT_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BIT_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CAPTION_SERVICE_NUMBER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTION_SERVICE_NUMBER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CAPTURE_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTURE_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CHANNEL_MASK()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_MASK",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CODECS_STRING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CODECS_STRING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COLOR_FORMAT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_FORMAT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COLOR_RANGE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_RANGE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COLOR_STANDARD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_STANDARD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COLOR_TRANSFER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COLOR_TRANSFER_REQUEST()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_COMPLEXITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COMPLEXITY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CREATE_INPUT_SURFACE_SUSPENDED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CREATE_INPUT_SURFACE_SUSPENDED",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CROP_BOTTOM()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CROP_BOTTOM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CROP_LEFT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CROP_LEFT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CROP_RIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CROP_RIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_CROP_TOP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CROP_TOP",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_DURATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_DURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_ENCODER_DELAY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ENCODER_DELAY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_ENCODER_PADDING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ENCODER_PADDING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_FLAC_COMPRESSION_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FLAC_COMPRESSION_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_FRAME_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FRAME_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_GRID_COLUMNS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_COLUMNS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_GRID_ROWS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_ROWS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_HAPTIC_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HAPTIC_CHANNEL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_HARDWARE_AV_SYNC_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HARDWARE_AV_SYNC_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_HDR10_PLUS_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_HDR_STATIC_INFO()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR_STATIC_INFO",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_INTRA_REFRESH_PERIOD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_INTRA_REFRESH_PERIOD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_IS_ADTS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_ADTS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_IS_AUTOSELECT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_AUTOSELECT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_IS_DEFAULT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_IS_FORCED_SUBTITLE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_FORCED_SUBTITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_I_FRAME_INTERVAL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_I_FRAME_INTERVAL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_LANGUAGE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LANGUAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LATENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_LOW_LATENCY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LOW_LATENCY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_B_FRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_B_FRAMES",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_FPS_TO_ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_FPS_TO_ENCODER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_INPUT_SIZE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_INPUT_SIZE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_OUTPUT_CHANNEL_COUNT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_OUTPUT_CHANNEL_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_PTS_GAP_TO_ENCODER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_PTS_GAP_TO_ENCODER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MAX_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MIME()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MIME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MPEGH_COMPATIBLE_SETS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_COMPATIBLE_SETS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MPEGH_PROFILE_LEVEL_INDICATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_PROFILE_LEVEL_INDICATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_OPERATING_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OPERATING_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_OUTPUT_REORDER_DEPTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OUTPUT_REORDER_DEPTH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PCM_ENCODING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PCM_ENCODING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PICTURE_TYPE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PICTURE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PIXEL_ASPECT_RATIO_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PIXEL_ASPECT_RATIO_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PIXEL_ASPECT_RATIO_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PIXEL_ASPECT_RATIO_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PREPEND_HEADER_TO_SYNC_FRAMES()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PREPEND_HEADER_TO_SYNC_FRAMES",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PRIORITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PRIORITY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PROFILE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PROFILE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_PUSH_BLANK_BUFFERS_ON_STOP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PUSH_BLANK_BUFFERS_ON_STOP",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_QUALITY()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_QUALITY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_REPEAT_PREVIOUS_FRAME_AFTER()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_REPEAT_PREVIOUS_FRAME_AFTER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_ROTATION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ROTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_SAMPLE_RATE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SAMPLE_RATE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_SLICE_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLICE_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_SLOW_MOTION_MARKERS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLOW_MOTION_MARKERS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_STRIDE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_STRIDE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_TEMPORAL_LAYERING()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TEMPORAL_LAYERING",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_TILE_HEIGHT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_TILE_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_TRACK_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TRACK_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_ENCODING_STATISTICS_LEVEL()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_ENCODING_STATISTICS_LEVEL",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_AVERAGE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_AVERAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_B_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_B_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_B_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_B_MIN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_I_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_I_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_I_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_I_MIN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_MIN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_P_MAX()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_P_MAX",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_VIDEO_QP_P_MIN()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_VIDEO_QP_P_MIN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::KEY_WIDTH()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_WIDTH",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::LOG_SESSION_ID()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"LOG_SESSION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC_ELD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC_ELD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC_HE_V1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC_HE_V1",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC_HE_V2()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC_HE_V2",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC_LC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC_LC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AAC_XHE()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC_XHE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AC3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AC4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AMR_NB()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_NB",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_AMR_WB()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_WB",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DOLBY_MAT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DOLBY_MAT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DOLBY_TRUEHD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DOLBY_TRUEHD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DRA()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DRA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DTS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DTS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DTS_HD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DTS_HD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_DTS_UHD()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_DTS_UHD",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_EAC3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_EAC3_JOC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3_JOC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_FLAC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_FLAC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_G711_ALAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_ALAW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_G711_MLAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_MLAW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_IEC61937()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_IEC61937",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEG()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEG",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_BL_L3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_BL_L3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_BL_L4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_BL_L4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_LC_L3()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_LC_L3",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_LC_L4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_LC_L4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_MHA1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_MHA1",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MPEGH_MHM1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEGH_MHM1",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_MSGSM()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MSGSM",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_OPUS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_OPUS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_QCELP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_QCELP",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_RAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_RAW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_SCRAMBLED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_SCRAMBLED",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_AUDIO_VORBIS()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_VORBIS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_IMAGE_ANDROID_HEIC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_IMAGE_ANDROID_HEIC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_IMAGE_AVIF()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_IMAGE_AVIF",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_TEXT_CEA_608()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_608",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_TEXT_CEA_708()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_708",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_TEXT_SUBRIP()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_TEXT_VTT()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_VTT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_AV1()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AV1",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_AVC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AVC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_DOLBY_VISION()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_DOLBY_VISION",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_H263()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_H263",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_HEVC()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_HEVC",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_MPEG2()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG2",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_MPEG4()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG4",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_RAW()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_RAW",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_SCRAMBLED()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_SCRAMBLED",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_VP8()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP8",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaFormat::MIMETYPE_VIDEO_VP9()
	{
		return getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP9",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaFormat::PICTURE_TYPE_B()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"PICTURE_TYPE_B"
		);
	}
	inline jint MediaFormat::PICTURE_TYPE_I()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"PICTURE_TYPE_I"
		);
	}
	inline jint MediaFormat::PICTURE_TYPE_P()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"PICTURE_TYPE_P"
		);
	}
	inline jint MediaFormat::PICTURE_TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"PICTURE_TYPE_UNKNOWN"
		);
	}
	inline jint MediaFormat::TYPE_BYTE_BUFFER()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_BYTE_BUFFER"
		);
	}
	inline jint MediaFormat::TYPE_FLOAT()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_FLOAT"
		);
	}
	inline jint MediaFormat::TYPE_INTEGER()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_INTEGER"
		);
	}
	inline jint MediaFormat::TYPE_LONG()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_LONG"
		);
	}
	inline jint MediaFormat::TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_NULL"
		);
	}
	inline jint MediaFormat::TYPE_STRING()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_STRING"
		);
	}
	inline jint MediaFormat::VIDEO_ENCODING_STATISTICS_LEVEL_1()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"VIDEO_ENCODING_STATISTICS_LEVEL_1"
		);
	}
	inline jint MediaFormat::VIDEO_ENCODING_STATISTICS_LEVEL_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaFormat",
			"VIDEO_ENCODING_STATISTICS_LEVEL_NONE"
		);
	}
	
	// Constructors
	inline MediaFormat::MediaFormat()
		: JObject(
			"android.media.MediaFormat",
			"()V"
		) {}
	inline MediaFormat::MediaFormat(android::media::MediaFormat &arg0)
		: JObject(
			"android.media.MediaFormat",
			"(Landroid/media/MediaFormat;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::MediaFormat MediaFormat::createAudioFormat(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createAudioFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline android::media::MediaFormat MediaFormat::createSubtitleFormat(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createSubtitleFormat",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaFormat;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::media::MediaFormat MediaFormat::createVideoFormat(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaFormat",
			"createVideoFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline jboolean MediaFormat::containsFeature(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsFeature",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean MediaFormat::containsKey(JString arg0) const
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline java::nio::ByteBuffer MediaFormat::getByteBuffer(JString arg0) const
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0.object<jstring>()
		);
	}
	inline java::nio::ByteBuffer MediaFormat::getByteBuffer(JString arg0, java::nio::ByteBuffer arg1) const
	{
		return callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean MediaFormat::getFeatureEnabled(JString arg0) const
	{
		return callMethod<jboolean>(
			"getFeatureEnabled",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline JObject MediaFormat::getFeatures() const
	{
		return callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;"
		);
	}
	inline jfloat MediaFormat::getFloat(JString arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline jfloat MediaFormat::getFloat(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline jint MediaFormat::getInteger(JString arg0) const
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline jint MediaFormat::getInteger(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JObject MediaFormat::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;"
		);
	}
	inline jlong MediaFormat::getLong(JString arg0) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0.object<jstring>()
		);
	}
	inline jlong MediaFormat::getLong(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline java::lang::Number MediaFormat::getNumber(JString arg0) const
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Number MediaFormat::getNumber(JString arg0, java::lang::Number arg1) const
	{
		return callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;Ljava/lang/Number;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JString MediaFormat::getString(JString arg0) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString MediaFormat::getString(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint MediaFormat::getValueTypeForKey(JString arg0) const
	{
		return callMethod<jint>(
			"getValueTypeForKey",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline void MediaFormat::removeFeature(JString arg0) const
	{
		callMethod<void>(
			"removeFeature",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaFormat::removeKey(JString arg0) const
	{
		callMethod<void>(
			"removeKey",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaFormat::setByteBuffer(JString arg0, java::nio::ByteBuffer arg1) const
	{
		callMethod<void>(
			"setByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void MediaFormat::setFeatureEnabled(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setFeatureEnabled",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaFormat::setFloat(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaFormat::setInteger(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setInteger",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaFormat::setLong(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"setLong",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void MediaFormat::setString(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"setString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JString MediaFormat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

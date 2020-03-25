#pragma once

#ifndef ANDROID_MEDIA_MEDIAFORMAT
#define ANDROID_MEDIA_MEDIAFORMAT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::lang
{
	class Number;
}

namespace __jni_impl::android::media
{
	class MediaFormat : public __JniBaseClass
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
		static QAndroidJniObject KEY_AAC_DRC_ATTENUATION_FACTOR();
		static QAndroidJniObject KEY_AAC_DRC_BOOST_FACTOR();
		static QAndroidJniObject KEY_AAC_DRC_EFFECT_TYPE();
		static QAndroidJniObject KEY_AAC_DRC_HEAVY_COMPRESSION();
		static QAndroidJniObject KEY_AAC_DRC_TARGET_REFERENCE_LEVEL();
		static QAndroidJniObject KEY_AAC_ENCODED_TARGET_LEVEL();
		static QAndroidJniObject KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT();
		static QAndroidJniObject KEY_AAC_PROFILE();
		static QAndroidJniObject KEY_AAC_SBR_MODE();
		static QAndroidJniObject KEY_AUDIO_SESSION_ID();
		static QAndroidJniObject KEY_BITRATE_MODE();
		static QAndroidJniObject KEY_BIT_RATE();
		static QAndroidJniObject KEY_CAPTURE_RATE();
		static QAndroidJniObject KEY_CHANNEL_COUNT();
		static QAndroidJniObject KEY_CHANNEL_MASK();
		static QAndroidJniObject KEY_COLOR_FORMAT();
		static QAndroidJniObject KEY_COLOR_RANGE();
		static QAndroidJniObject KEY_COLOR_STANDARD();
		static QAndroidJniObject KEY_COLOR_TRANSFER();
		static QAndroidJniObject KEY_COMPLEXITY();
		static QAndroidJniObject KEY_CREATE_INPUT_SURFACE_SUSPENDED();
		static QAndroidJniObject KEY_DURATION();
		static QAndroidJniObject KEY_FLAC_COMPRESSION_LEVEL();
		static QAndroidJniObject KEY_FRAME_RATE();
		static QAndroidJniObject KEY_GRID_COLUMNS();
		static QAndroidJniObject KEY_GRID_ROWS();
		static QAndroidJniObject KEY_HAPTIC_CHANNEL_COUNT();
		static QAndroidJniObject KEY_HDR10_PLUS_INFO();
		static QAndroidJniObject KEY_HDR_STATIC_INFO();
		static QAndroidJniObject KEY_HEIGHT();
		static QAndroidJniObject KEY_INTRA_REFRESH_PERIOD();
		static QAndroidJniObject KEY_IS_ADTS();
		static QAndroidJniObject KEY_IS_AUTOSELECT();
		static QAndroidJniObject KEY_IS_DEFAULT();
		static QAndroidJniObject KEY_IS_FORCED_SUBTITLE();
		static QAndroidJniObject KEY_I_FRAME_INTERVAL();
		static QAndroidJniObject KEY_LANGUAGE();
		static QAndroidJniObject KEY_LATENCY();
		static QAndroidJniObject KEY_LEVEL();
		static QAndroidJniObject KEY_MAX_B_FRAMES();
		static QAndroidJniObject KEY_MAX_FPS_TO_ENCODER();
		static QAndroidJniObject KEY_MAX_HEIGHT();
		static QAndroidJniObject KEY_MAX_INPUT_SIZE();
		static QAndroidJniObject KEY_MAX_PTS_GAP_TO_ENCODER();
		static QAndroidJniObject KEY_MAX_WIDTH();
		static QAndroidJniObject KEY_MIME();
		static QAndroidJniObject KEY_OPERATING_RATE();
		static QAndroidJniObject KEY_OUTPUT_REORDER_DEPTH();
		static QAndroidJniObject KEY_PCM_ENCODING();
		static QAndroidJniObject KEY_PREPEND_HEADER_TO_SYNC_FRAMES();
		static QAndroidJniObject KEY_PRIORITY();
		static QAndroidJniObject KEY_PROFILE();
		static QAndroidJniObject KEY_PUSH_BLANK_BUFFERS_ON_STOP();
		static QAndroidJniObject KEY_QUALITY();
		static QAndroidJniObject KEY_REPEAT_PREVIOUS_FRAME_AFTER();
		static QAndroidJniObject KEY_ROTATION();
		static QAndroidJniObject KEY_SAMPLE_RATE();
		static QAndroidJniObject KEY_SLICE_HEIGHT();
		static QAndroidJniObject KEY_STRIDE();
		static QAndroidJniObject KEY_TEMPORAL_LAYERING();
		static QAndroidJniObject KEY_TILE_HEIGHT();
		static QAndroidJniObject KEY_TILE_WIDTH();
		static QAndroidJniObject KEY_TRACK_ID();
		static QAndroidJniObject KEY_WIDTH();
		static QAndroidJniObject MIMETYPE_AUDIO_AAC();
		static QAndroidJniObject MIMETYPE_AUDIO_AC3();
		static QAndroidJniObject MIMETYPE_AUDIO_AC4();
		static QAndroidJniObject MIMETYPE_AUDIO_AMR_NB();
		static QAndroidJniObject MIMETYPE_AUDIO_AMR_WB();
		static QAndroidJniObject MIMETYPE_AUDIO_EAC3();
		static QAndroidJniObject MIMETYPE_AUDIO_EAC3_JOC();
		static QAndroidJniObject MIMETYPE_AUDIO_FLAC();
		static QAndroidJniObject MIMETYPE_AUDIO_G711_ALAW();
		static QAndroidJniObject MIMETYPE_AUDIO_G711_MLAW();
		static QAndroidJniObject MIMETYPE_AUDIO_MPEG();
		static QAndroidJniObject MIMETYPE_AUDIO_MSGSM();
		static QAndroidJniObject MIMETYPE_AUDIO_OPUS();
		static QAndroidJniObject MIMETYPE_AUDIO_QCELP();
		static QAndroidJniObject MIMETYPE_AUDIO_RAW();
		static QAndroidJniObject MIMETYPE_AUDIO_SCRAMBLED();
		static QAndroidJniObject MIMETYPE_AUDIO_VORBIS();
		static QAndroidJniObject MIMETYPE_IMAGE_ANDROID_HEIC();
		static QAndroidJniObject MIMETYPE_TEXT_CEA_608();
		static QAndroidJniObject MIMETYPE_TEXT_CEA_708();
		static QAndroidJniObject MIMETYPE_TEXT_SUBRIP();
		static QAndroidJniObject MIMETYPE_TEXT_VTT();
		static QAndroidJniObject MIMETYPE_VIDEO_AV1();
		static QAndroidJniObject MIMETYPE_VIDEO_AVC();
		static QAndroidJniObject MIMETYPE_VIDEO_DOLBY_VISION();
		static QAndroidJniObject MIMETYPE_VIDEO_H263();
		static QAndroidJniObject MIMETYPE_VIDEO_HEVC();
		static QAndroidJniObject MIMETYPE_VIDEO_MPEG2();
		static QAndroidJniObject MIMETYPE_VIDEO_MPEG4();
		static QAndroidJniObject MIMETYPE_VIDEO_RAW();
		static QAndroidJniObject MIMETYPE_VIDEO_SCRAMBLED();
		static QAndroidJniObject MIMETYPE_VIDEO_VP8();
		static QAndroidJniObject MIMETYPE_VIDEO_VP9();
		static jint TYPE_BYTE_BUFFER();
		static jint TYPE_FLOAT();
		static jint TYPE_INTEGER();
		static jint TYPE_LONG();
		static jint TYPE_NULL();
		static jint TYPE_STRING();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::media::MediaFormat arg0);
		
		// Methods
		QAndroidJniObject toString();
		jlong getLong(jstring arg0);
		jlong getLong(jstring arg0, jlong arg1);
		jfloat getFloat(jstring arg0);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jboolean containsKey(jstring arg0);
		void setLong(jstring arg0, jlong arg1);
		void setFloat(jstring arg0, jfloat arg1);
		QAndroidJniObject getByteBuffer(jstring arg0);
		QAndroidJniObject getByteBuffer(jstring arg0, __jni_impl::java::nio::ByteBuffer arg1);
		jint getInteger(jstring arg0, jint arg1);
		jint getInteger(jstring arg0);
		QAndroidJniObject getString(jstring arg0, jstring arg1);
		QAndroidJniObject getString(jstring arg0);
		QAndroidJniObject getKeys();
		QAndroidJniObject getNumber(jstring arg0);
		QAndroidJniObject getNumber(jstring arg0, __jni_impl::java::lang::Number arg1);
		jboolean containsFeature(jstring arg0);
		jint getValueTypeForKey(jstring arg0);
		jboolean getFeatureEnabled(jstring arg0);
		void setInteger(jstring arg0, jint arg1);
		void setByteBuffer(jstring arg0, __jni_impl::java::nio::ByteBuffer arg1);
		void removeKey(jstring arg0);
		void removeFeature(jstring arg0);
		void setFeatureEnabled(jstring arg0, jboolean arg1);
		static QAndroidJniObject createAudioFormat(jstring arg0, jint arg1, jint arg2);
		static QAndroidJniObject createSubtitleFormat(jstring arg0, jstring arg1);
		static QAndroidJniObject createVideoFormat(jstring arg0, jint arg1, jint arg2);
		void setString(jstring arg0, jstring arg1);
		QAndroidJniObject getFeatures();
	};
} // namespace __jni_impl::android::media

#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/lang/Number.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaFormat::COLOR_RANGE_FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_FULL");
	}
	jint MediaFormat::COLOR_RANGE_LIMITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_RANGE_LIMITED");
	}
	jint MediaFormat::COLOR_STANDARD_BT2020()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT2020");
	}
	jint MediaFormat::COLOR_STANDARD_BT601_NTSC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_NTSC");
	}
	jint MediaFormat::COLOR_STANDARD_BT601_PAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT601_PAL");
	}
	jint MediaFormat::COLOR_STANDARD_BT709()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_STANDARD_BT709");
	}
	jint MediaFormat::COLOR_TRANSFER_HLG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_HLG");
	}
	jint MediaFormat::COLOR_TRANSFER_LINEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_LINEAR");
	}
	jint MediaFormat::COLOR_TRANSFER_SDR_VIDEO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_SDR_VIDEO");
	}
	jint MediaFormat::COLOR_TRANSFER_ST2084()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"COLOR_TRANSFER_ST2084");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_DRC_ATTENUATION_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_ATTENUATION_FACTOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_DRC_BOOST_FACTOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_BOOST_FACTOR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_DRC_EFFECT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_EFFECT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_DRC_HEAVY_COMPRESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_HEAVY_COMPRESSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_DRC_TARGET_REFERENCE_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_DRC_TARGET_REFERENCE_LEVEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_ENCODED_TARGET_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_ENCODED_TARGET_LEVEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_PROFILE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AAC_SBR_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AAC_SBR_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_AUDIO_SESSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_AUDIO_SESSION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_BITRATE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BITRATE_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_BIT_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_BIT_RATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_CAPTURE_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CAPTURE_RATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_CHANNEL_MASK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CHANNEL_MASK",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_COLOR_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_FORMAT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_COLOR_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_RANGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_COLOR_STANDARD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_STANDARD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_COLOR_TRANSFER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COLOR_TRANSFER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_COMPLEXITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_COMPLEXITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_CREATE_INPUT_SURFACE_SUSPENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_CREATE_INPUT_SURFACE_SUSPENDED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_DURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_FLAC_COMPRESSION_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FLAC_COMPRESSION_LEVEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_FRAME_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_FRAME_RATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_GRID_COLUMNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_COLUMNS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_GRID_ROWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_GRID_ROWS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_HAPTIC_CHANNEL_COUNT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HAPTIC_CHANNEL_COUNT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_HDR10_PLUS_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR10_PLUS_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_HDR_STATIC_INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HDR_STATIC_INFO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_INTRA_REFRESH_PERIOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_INTRA_REFRESH_PERIOD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_IS_ADTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_ADTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_IS_AUTOSELECT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_AUTOSELECT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_IS_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_DEFAULT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_IS_FORCED_SUBTITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_IS_FORCED_SUBTITLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_I_FRAME_INTERVAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_I_FRAME_INTERVAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_LANGUAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LANGUAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_LATENCY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LATENCY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_LEVEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_LEVEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_B_FRAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_B_FRAMES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_FPS_TO_ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_FPS_TO_ENCODER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_INPUT_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_INPUT_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_PTS_GAP_TO_ENCODER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_PTS_GAP_TO_ENCODER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MAX_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MAX_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_MIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_MIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_OPERATING_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OPERATING_RATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_OUTPUT_REORDER_DEPTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_OUTPUT_REORDER_DEPTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_PCM_ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PCM_ENCODING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_PREPEND_HEADER_TO_SYNC_FRAMES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PREPEND_HEADER_TO_SYNC_FRAMES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_PRIORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PRIORITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PROFILE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_PUSH_BLANK_BUFFERS_ON_STOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_PUSH_BLANK_BUFFERS_ON_STOP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_QUALITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_QUALITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_REPEAT_PREVIOUS_FRAME_AFTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_REPEAT_PREVIOUS_FRAME_AFTER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_ROTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_ROTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_SAMPLE_RATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SAMPLE_RATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_SLICE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_SLICE_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_STRIDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_STRIDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_TEMPORAL_LAYERING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TEMPORAL_LAYERING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_TILE_HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_HEIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_TILE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TILE_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_TRACK_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_TRACK_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::KEY_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"KEY_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_AAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AAC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_AC3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_AC4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AC4",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_AMR_NB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_NB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_AMR_WB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_AMR_WB",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_EAC3()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_EAC3_JOC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_EAC3_JOC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_FLAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_FLAC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_G711_ALAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_ALAW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_G711_MLAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_G711_MLAW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_MPEG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MPEG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_MSGSM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_MSGSM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_OPUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_OPUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_QCELP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_QCELP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_RAW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_SCRAMBLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_SCRAMBLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_AUDIO_VORBIS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_AUDIO_VORBIS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_IMAGE_ANDROID_HEIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_IMAGE_ANDROID_HEIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_TEXT_CEA_608()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_608",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_TEXT_CEA_708()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_CEA_708",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_TEXT_SUBRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_SUBRIP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_TEXT_VTT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_TEXT_VTT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_AV1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AV1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_AVC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_AVC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_DOLBY_VISION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_DOLBY_VISION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_H263()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_H263",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_HEVC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_HEVC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_MPEG2()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG2",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_MPEG4()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_MPEG4",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_RAW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_SCRAMBLED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_SCRAMBLED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_VP8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP8",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaFormat::MIMETYPE_VIDEO_VP9()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaFormat",
			"MIMETYPE_VIDEO_VP9",
			"Ljava/lang/String;");
	}
	jint MediaFormat::TYPE_BYTE_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_BYTE_BUFFER");
	}
	jint MediaFormat::TYPE_FLOAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_FLOAT");
	}
	jint MediaFormat::TYPE_INTEGER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_INTEGER");
	}
	jint MediaFormat::TYPE_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_LONG");
	}
	jint MediaFormat::TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_NULL");
	}
	jint MediaFormat::TYPE_STRING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaFormat",
			"TYPE_STRING");
	}
	
	// Constructors
	void MediaFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaFormat",
			"()V");
	}
	void MediaFormat::__constructor(__jni_impl::android::media::MediaFormat arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaFormat",
			"(Landroid/media/MediaFormat;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject MediaFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jlong MediaFormat::getLong(jstring arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0);
	}
	jlong MediaFormat::getLong(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1);
	}
	jfloat MediaFormat::getFloat(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0);
	}
	jfloat MediaFormat::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1);
	}
	jboolean MediaFormat::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	void MediaFormat::setLong(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setLong",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	void MediaFormat::setFloat(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaFormat::getByteBuffer(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject MediaFormat::getByteBuffer(jstring arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		return __thiz.callObjectMethod(
			"getByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0,
			arg1.__jniObject().object());
	}
	jint MediaFormat::getInteger(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1);
	}
	jint MediaFormat::getInteger(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getInteger",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject MediaFormat::getString(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaFormat::getString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject MediaFormat::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject MediaFormat::getNumber(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;)Ljava/lang/Number;",
			arg0);
	}
	QAndroidJniObject MediaFormat::getNumber(jstring arg0, __jni_impl::java::lang::Number arg1)
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"(Ljava/lang/String;Ljava/lang/Number;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean MediaFormat::containsFeature(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsFeature",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint MediaFormat::getValueTypeForKey(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getValueTypeForKey",
			"(Ljava/lang/String;)I",
			arg0);
	}
	jboolean MediaFormat::getFeatureEnabled(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getFeatureEnabled",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	void MediaFormat::setInteger(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInteger",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void MediaFormat::setByteBuffer(jstring arg0, __jni_impl::java::nio::ByteBuffer arg1)
	{
		__thiz.callMethod<void>(
			"setByteBuffer",
			"(Ljava/lang/String;Ljava/nio/ByteBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void MediaFormat::removeKey(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeKey",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaFormat::removeFeature(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeFeature",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void MediaFormat::setFeatureEnabled(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setFeatureEnabled",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaFormat::createAudioFormat(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createAudioFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject MediaFormat::createSubtitleFormat(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createSubtitleFormat",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/media/MediaFormat;",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaFormat::createVideoFormat(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaFormat",
			"createVideoFormat",
			"(Ljava/lang/String;II)Landroid/media/MediaFormat;",
			arg0,
			arg1,
			arg2);
	}
	void MediaFormat::setString(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setString",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	QAndroidJniObject MediaFormat::getFeatures()
	{
		return __thiz.callObjectMethod(
			"getFeatures",
			"()Ljava/util/Set;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaFormat : public __jni_impl::android::media::MediaFormat
	{
	public:
		MediaFormat(QAndroidJniObject obj) { __thiz = obj; }
		MediaFormat()
		{
			__constructor();
		}
		MediaFormat(__jni_impl::android::media::MediaFormat arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIAFORMAT


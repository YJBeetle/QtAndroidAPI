#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCodecInfo_AudioCapabilities.def.hpp"
#include "./MediaCodecInfo_EncoderCapabilities.def.hpp"
#include "./MediaCodecInfo_VideoCapabilities.def.hpp"
#include "./MediaFormat.def.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo_CodecCapabilities.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format12bitRGB444()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format12bitRGB444"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB1555()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB1555"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB4444()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB4444"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitBGR565()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitBGR565"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitRGB565()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitRGB565"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format18BitBGR666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18BitBGR666"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitARGB1665()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitARGB1665"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitRGB666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitRGB666"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format19bitARGB1666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format19bitARGB1666"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitABGR6666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitABGR6666"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitARGB6666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitARGB6666"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitARGB1887()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitARGB1887"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitBGR888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitBGR888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitRGB888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitRGB888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format25bitARGB1888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format25bitARGB1888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitABGR8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitABGR8888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitARGB8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitARGB8888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitBGRA8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitBGRA8888"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_Format8bitRGB332()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format8bitRGB332"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCbYCrY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCbYCrY"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCrYCbY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCrYCbY"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL16()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL16"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL2()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL2"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL24()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL24"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL32()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL32"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL4()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL4"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL8()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL8"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatMonochrome()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatMonochrome"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBAFlexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBAFlexible"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBFlexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBFlexible"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer10bit()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer10bit"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bit()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bit"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bitcompressed()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bitcompressed"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatSurface()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatSurface"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCbYCr()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCbYCr"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCrYCb()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCrYCb"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411PackedPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411Planar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Flexible"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedSemiPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Planar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420SemiPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Flexible"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedSemiPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Planar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422SemiPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Flexible"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Interleaved()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Interleaved"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_QCOM_FormatYUV420SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_QCOM_FormatYUV420SemiPlanar"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::COLOR_TI_FormatYUV420PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_TI_FormatYUV420PackedSemiPlanar"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_AdaptivePlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_AdaptivePlayback",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_DynamicTimestamp()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_DynamicTimestamp",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_FrameParsing()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_FrameParsing",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_IntraRefresh()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_IntraRefresh",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_LowLatency()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_LowLatency",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_MultipleFrames()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_MultipleFrames",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_PartialFrame()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_PartialFrame",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_SecurePlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_SecurePlayback",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::FEATURE_TunneledPlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_TunneledPlayback",
			"Ljava/lang/String;"
		);
	}
	inline JIntArray MediaCodecInfo_CodecCapabilities::colorFormats()
	{
		return getObjectField(
			"colorFormats",
			"[I"
		);
	}
	inline JArray MediaCodecInfo_CodecCapabilities::profileLevels()
	{
		return getObjectField(
			"profileLevels",
			"[Landroid/media/MediaCodecInfo$CodecProfileLevel;"
		);
	}
	
	// Constructors
	inline MediaCodecInfo_CodecCapabilities::MediaCodecInfo_CodecCapabilities()
		: JObject(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"()V"
		) {}
	
	// Methods
	inline android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo_CodecCapabilities::createFromProfileLevel(JString arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"createFromProfileLevel",
			"(Ljava/lang/String;II)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0.object<jstring>(),
			arg1,
			arg2
		);
	}
	inline android::media::MediaCodecInfo_AudioCapabilities MediaCodecInfo_CodecCapabilities::getAudioCapabilities() const
	{
		return callObjectMethod(
			"getAudioCapabilities",
			"()Landroid/media/MediaCodecInfo$AudioCapabilities;"
		);
	}
	inline android::media::MediaFormat MediaCodecInfo_CodecCapabilities::getDefaultFormat() const
	{
		return callObjectMethod(
			"getDefaultFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	inline android::media::MediaCodecInfo_EncoderCapabilities MediaCodecInfo_CodecCapabilities::getEncoderCapabilities() const
	{
		return callObjectMethod(
			"getEncoderCapabilities",
			"()Landroid/media/MediaCodecInfo$EncoderCapabilities;"
		);
	}
	inline jint MediaCodecInfo_CodecCapabilities::getMaxSupportedInstances() const
	{
		return callMethod<jint>(
			"getMaxSupportedInstances",
			"()I"
		);
	}
	inline JString MediaCodecInfo_CodecCapabilities::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::MediaCodecInfo_VideoCapabilities MediaCodecInfo_CodecCapabilities::getVideoCapabilities() const
	{
		return callObjectMethod(
			"getVideoCapabilities",
			"()Landroid/media/MediaCodecInfo$VideoCapabilities;"
		);
	}
	inline jboolean MediaCodecInfo_CodecCapabilities::isFeatureRequired(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFeatureRequired",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean MediaCodecInfo_CodecCapabilities::isFeatureSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFeatureSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean MediaCodecInfo_CodecCapabilities::isFormatSupported(android::media::MediaFormat arg0) const
	{
		return callMethod<jboolean>(
			"isFormatSupported",
			"(Landroid/media/MediaFormat;)Z",
			arg0.object()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

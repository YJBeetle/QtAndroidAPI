#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCodecInfo_AudioCapabilities.hpp"
#include "./MediaCodecInfo_EncoderCapabilities.hpp"
#include "./MediaCodecInfo_VideoCapabilities.hpp"
#include "./MediaFormat.hpp"
#include "../../JString.hpp"
#include "./MediaCodecInfo_CodecCapabilities.hpp"

namespace android::media
{
	// Fields
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format12bitRGB444()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format12bitRGB444"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB1555()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB1555"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB4444()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB4444"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitBGR565()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitBGR565"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitRGB565()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitRGB565"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18BitBGR666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18BitBGR666"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitARGB1665()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitARGB1665"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitRGB666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitRGB666"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format19bitARGB1666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format19bitARGB1666"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitABGR6666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitABGR6666"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitARGB6666()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitARGB6666"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitARGB1887()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitARGB1887"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitBGR888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitBGR888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitRGB888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitRGB888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format25bitARGB1888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format25bitARGB1888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitABGR8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitABGR8888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitARGB8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitARGB8888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitBGRA8888()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitBGRA8888"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format8bitRGB332()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format8bitRGB332"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCbYCrY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCbYCrY"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCrYCbY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCrYCbY"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL16()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL16"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL2()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL2"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL24()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL24"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL32()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL32"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL4()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL4"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL8()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL8"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatMonochrome()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatMonochrome"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBAFlexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBAFlexible"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBFlexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBFlexible"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer10bit()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer10bit"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bit()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bit"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bitcompressed()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bitcompressed"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatSurface()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatSurface"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCbYCr()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCbYCr"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCrYCb()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCrYCb"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411PackedPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411Planar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Flexible"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedSemiPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Planar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420SemiPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Flexible"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedSemiPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Planar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Planar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422SemiPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Flexible()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Flexible"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Interleaved()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Interleaved"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_QCOM_FormatYUV420SemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_QCOM_FormatYUV420SemiPlanar"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_TI_FormatYUV420PackedSemiPlanar()
	{
		return getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_TI_FormatYUV420PackedSemiPlanar"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_AdaptivePlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_AdaptivePlayback",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_DynamicTimestamp()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_DynamicTimestamp",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_FrameParsing()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_FrameParsing",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_IntraRefresh()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_IntraRefresh",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_LowLatency()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_LowLatency",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_MultipleFrames()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_MultipleFrames",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_PartialFrame()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_PartialFrame",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_SecurePlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_SecurePlayback",
			"Ljava/lang/String;"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::FEATURE_TunneledPlayback()
	{
		return getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_TunneledPlayback",
			"Ljava/lang/String;"
		);
	}
	JIntArray MediaCodecInfo_CodecCapabilities::colorFormats()
	{
		return getObjectField(
			"colorFormats",
			"[I"
		);
	}
	JArray MediaCodecInfo_CodecCapabilities::profileLevels()
	{
		return getObjectField(
			"profileLevels",
			"[Landroid/media/MediaCodecInfo$CodecProfileLevel;"
		);
	}
	
	// Constructors
	MediaCodecInfo_CodecCapabilities::MediaCodecInfo_CodecCapabilities()
		: JObject(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"()V"
		) {}
	
	// Methods
	android::media::MediaCodecInfo_CodecCapabilities MediaCodecInfo_CodecCapabilities::createFromProfileLevel(JString arg0, jint arg1, jint arg2)
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
	android::media::MediaCodecInfo_AudioCapabilities MediaCodecInfo_CodecCapabilities::getAudioCapabilities() const
	{
		return callObjectMethod(
			"getAudioCapabilities",
			"()Landroid/media/MediaCodecInfo$AudioCapabilities;"
		);
	}
	android::media::MediaFormat MediaCodecInfo_CodecCapabilities::getDefaultFormat() const
	{
		return callObjectMethod(
			"getDefaultFormat",
			"()Landroid/media/MediaFormat;"
		);
	}
	android::media::MediaCodecInfo_EncoderCapabilities MediaCodecInfo_CodecCapabilities::getEncoderCapabilities() const
	{
		return callObjectMethod(
			"getEncoderCapabilities",
			"()Landroid/media/MediaCodecInfo$EncoderCapabilities;"
		);
	}
	jint MediaCodecInfo_CodecCapabilities::getMaxSupportedInstances() const
	{
		return callMethod<jint>(
			"getMaxSupportedInstances",
			"()I"
		);
	}
	JString MediaCodecInfo_CodecCapabilities::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	android::media::MediaCodecInfo_VideoCapabilities MediaCodecInfo_CodecCapabilities::getVideoCapabilities() const
	{
		return callObjectMethod(
			"getVideoCapabilities",
			"()Landroid/media/MediaCodecInfo$VideoCapabilities;"
		);
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFeatureRequired(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFeatureRequired",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFeatureSupported(JString arg0) const
	{
		return callMethod<jboolean>(
			"isFeatureSupported",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFormatSupported(android::media::MediaFormat arg0) const
	{
		return callMethod<jboolean>(
			"isFormatSupported",
			"(Landroid/media/MediaFormat;)Z",
			arg0.object()
		);
	}
} // namespace android::media


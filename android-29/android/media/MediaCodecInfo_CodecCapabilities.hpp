#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCodecInfo_AudioCapabilities;
}
namespace android::media
{
	class MediaCodecInfo_EncoderCapabilities;
}
namespace android::media
{
	class MediaCodecInfo_VideoCapabilities;
}
namespace android::media
{
	class MediaFormat;
}

namespace android::media
{
	class MediaCodecInfo_CodecCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_Format12bitRGB444();
		static jint COLOR_Format16bitARGB1555();
		static jint COLOR_Format16bitARGB4444();
		static jint COLOR_Format16bitBGR565();
		static jint COLOR_Format16bitRGB565();
		static jint COLOR_Format18BitBGR666();
		static jint COLOR_Format18bitARGB1665();
		static jint COLOR_Format18bitRGB666();
		static jint COLOR_Format19bitARGB1666();
		static jint COLOR_Format24BitABGR6666();
		static jint COLOR_Format24BitARGB6666();
		static jint COLOR_Format24bitARGB1887();
		static jint COLOR_Format24bitBGR888();
		static jint COLOR_Format24bitRGB888();
		static jint COLOR_Format25bitARGB1888();
		static jint COLOR_Format32bitABGR8888();
		static jint COLOR_Format32bitARGB8888();
		static jint COLOR_Format32bitBGRA8888();
		static jint COLOR_Format8bitRGB332();
		static jint COLOR_FormatCbYCrY();
		static jint COLOR_FormatCrYCbY();
		static jint COLOR_FormatL16();
		static jint COLOR_FormatL2();
		static jint COLOR_FormatL24();
		static jint COLOR_FormatL32();
		static jint COLOR_FormatL4();
		static jint COLOR_FormatL8();
		static jint COLOR_FormatMonochrome();
		static jint COLOR_FormatRGBAFlexible();
		static jint COLOR_FormatRGBFlexible();
		static jint COLOR_FormatRawBayer10bit();
		static jint COLOR_FormatRawBayer8bit();
		static jint COLOR_FormatRawBayer8bitcompressed();
		static jint COLOR_FormatSurface();
		static jint COLOR_FormatYCbYCr();
		static jint COLOR_FormatYCrYCb();
		static jint COLOR_FormatYUV411PackedPlanar();
		static jint COLOR_FormatYUV411Planar();
		static jint COLOR_FormatYUV420Flexible();
		static jint COLOR_FormatYUV420PackedPlanar();
		static jint COLOR_FormatYUV420PackedSemiPlanar();
		static jint COLOR_FormatYUV420Planar();
		static jint COLOR_FormatYUV420SemiPlanar();
		static jint COLOR_FormatYUV422Flexible();
		static jint COLOR_FormatYUV422PackedPlanar();
		static jint COLOR_FormatYUV422PackedSemiPlanar();
		static jint COLOR_FormatYUV422Planar();
		static jint COLOR_FormatYUV422SemiPlanar();
		static jint COLOR_FormatYUV444Flexible();
		static jint COLOR_FormatYUV444Interleaved();
		static jint COLOR_QCOM_FormatYUV420SemiPlanar();
		static jint COLOR_TI_FormatYUV420PackedSemiPlanar();
		static jstring FEATURE_AdaptivePlayback();
		static jstring FEATURE_DynamicTimestamp();
		static jstring FEATURE_FrameParsing();
		static jstring FEATURE_IntraRefresh();
		static jstring FEATURE_MultipleFrames();
		static jstring FEATURE_PartialFrame();
		static jstring FEATURE_SecurePlayback();
		static jstring FEATURE_TunneledPlayback();
		jintArray colorFormats();
		jarray profileLevels();
		
		MediaCodecInfo_CodecCapabilities(QAndroidJniObject obj);
		// Constructors
		MediaCodecInfo_CodecCapabilities();
		
		// Methods
		static QAndroidJniObject createFromProfileLevel(jstring arg0, jint arg1, jint arg2);
		static QAndroidJniObject createFromProfileLevel(const QString &arg0, jint arg1, jint arg2);
		QAndroidJniObject getAudioCapabilities();
		QAndroidJniObject getDefaultFormat();
		QAndroidJniObject getEncoderCapabilities();
		jint getMaxSupportedInstances();
		jstring getMimeType();
		QAndroidJniObject getVideoCapabilities();
		jboolean isFeatureRequired(jstring arg0);
		jboolean isFeatureRequired(const QString &arg0);
		jboolean isFeatureSupported(jstring arg0);
		jboolean isFeatureSupported(const QString &arg0);
		jboolean isFormatSupported(android::media::MediaFormat arg0);
	};
} // namespace android::media


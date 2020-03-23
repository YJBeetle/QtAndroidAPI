#pragma once

#ifndef ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES
#define ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::android::media
{
	class MediaCodecInfo_AudioCapabilities;
}
namespace __jni_impl::android::media
{
	class MediaCodecInfo_EncoderCapabilities;
}
namespace __jni_impl::android::media
{
	class MediaCodecInfo_VideoCapabilities;
}

namespace __jni_impl::android::media
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
		static QAndroidJniObject FEATURE_AdaptivePlayback();
		static QAndroidJniObject FEATURE_DynamicTimestamp();
		static QAndroidJniObject FEATURE_FrameParsing();
		static QAndroidJniObject FEATURE_IntraRefresh();
		static QAndroidJniObject FEATURE_MultipleFrames();
		static QAndroidJniObject FEATURE_PartialFrame();
		static QAndroidJniObject FEATURE_SecurePlayback();
		static QAndroidJniObject FEATURE_TunneledPlayback();
		QAndroidJniObject colorFormats();
		QAndroidJniObject profileLevels();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getMimeType();
		jboolean isFeatureSupported(jstring arg0);
		jboolean isFeatureRequired(jstring arg0);
		jboolean isFormatSupported(__jni_impl::android::media::MediaFormat arg0);
		QAndroidJniObject getDefaultFormat();
		jint getMaxSupportedInstances();
		QAndroidJniObject getAudioCapabilities();
		QAndroidJniObject getEncoderCapabilities();
		QAndroidJniObject getVideoCapabilities();
		static QAndroidJniObject createFromProfileLevel(jstring arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::media

#include "MediaFormat.hpp"
#include "MediaCodecInfo_AudioCapabilities.hpp"
#include "MediaCodecInfo_EncoderCapabilities.hpp"
#include "MediaCodecInfo_VideoCapabilities.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format12bitRGB444()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format12bitRGB444");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB1555()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB1555");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitARGB4444()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitARGB4444");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitBGR565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitBGR565");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format16bitRGB565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format16bitRGB565");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18BitBGR666()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18BitBGR666");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitARGB1665()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitARGB1665");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format18bitRGB666()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format18bitRGB666");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format19bitARGB1666()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format19bitARGB1666");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitABGR6666()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitABGR6666");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24BitARGB6666()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24BitARGB6666");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitARGB1887()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitARGB1887");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitBGR888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitBGR888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format24bitRGB888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format24bitRGB888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format25bitARGB1888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format25bitARGB1888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitABGR8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitABGR8888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitARGB8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitARGB8888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format32bitBGRA8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format32bitBGRA8888");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_Format8bitRGB332()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_Format8bitRGB332");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCbYCrY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCbYCrY");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatCrYCbY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatCrYCbY");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL16");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL2");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL24()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL24");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL32");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL4()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL4");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatL8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatL8");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatMonochrome()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatMonochrome");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBAFlexible()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBAFlexible");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRGBFlexible()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRGBFlexible");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer10bit()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer10bit");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bit()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bit");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatRawBayer8bitcompressed()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatRawBayer8bitcompressed");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatSurface()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatSurface");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCbYCr()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCbYCr");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYCrYCb()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYCrYCb");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411PackedPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411PackedPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV411Planar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV411Planar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Flexible()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Flexible");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420PackedSemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420PackedSemiPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420Planar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420Planar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV420SemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV420SemiPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Flexible()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Flexible");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422PackedSemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422PackedSemiPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422Planar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422Planar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV422SemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV422SemiPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Flexible()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Flexible");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_FormatYUV444Interleaved()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_FormatYUV444Interleaved");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_QCOM_FormatYUV420SemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_QCOM_FormatYUV420SemiPlanar");
	}
	jint MediaCodecInfo_CodecCapabilities::COLOR_TI_FormatYUV420PackedSemiPlanar()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"COLOR_TI_FormatYUV420PackedSemiPlanar");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_AdaptivePlayback()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_AdaptivePlayback",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_DynamicTimestamp()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_DynamicTimestamp",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_FrameParsing()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_FrameParsing",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_IntraRefresh()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_IntraRefresh",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_MultipleFrames()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_MultipleFrames",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_PartialFrame()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_PartialFrame",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_SecurePlayback()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_SecurePlayback",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::FEATURE_TunneledPlayback()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"FEATURE_TunneledPlayback",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::colorFormats()
	{
		return __thiz.getObjectField(
			"colorFormats",
			"[I");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::profileLevels()
	{
		return __thiz.getObjectField(
			"profileLevels",
			"[Landroid/media/MediaCodecInfo$CodecProfileLevel;");
	}
	
	// Constructors
	void MediaCodecInfo_CodecCapabilities::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;");
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFeatureSupported(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFeatureSupported",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFeatureRequired(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFeatureRequired",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jboolean MediaCodecInfo_CodecCapabilities::isFormatSupported(__jni_impl::android::media::MediaFormat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFormatSupported",
			"(Landroid/media/MediaFormat;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::getDefaultFormat()
	{
		return __thiz.callObjectMethod(
			"getDefaultFormat",
			"()Landroid/media/MediaFormat;");
	}
	jint MediaCodecInfo_CodecCapabilities::getMaxSupportedInstances()
	{
		return __thiz.callMethod<jint>(
			"getMaxSupportedInstances",
			"()I");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::getAudioCapabilities()
	{
		return __thiz.callObjectMethod(
			"getAudioCapabilities",
			"()Landroid/media/MediaCodecInfo$AudioCapabilities;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::getEncoderCapabilities()
	{
		return __thiz.callObjectMethod(
			"getEncoderCapabilities",
			"()Landroid/media/MediaCodecInfo$EncoderCapabilities;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::getVideoCapabilities()
	{
		return __thiz.callObjectMethod(
			"getVideoCapabilities",
			"()Landroid/media/MediaCodecInfo$VideoCapabilities;");
	}
	QAndroidJniObject MediaCodecInfo_CodecCapabilities::createFromProfileLevel(jstring arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaCodecInfo$CodecCapabilities",
			"createFromProfileLevel",
			"(Ljava/lang/String;II)Landroid/media/MediaCodecInfo$CodecCapabilities;",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecInfo_CodecCapabilities : public __jni_impl::android::media::MediaCodecInfo_CodecCapabilities
	{
	public:
		MediaCodecInfo_CodecCapabilities(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecInfo_CodecCapabilities()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODECINFO_CODECCAPABILITIES


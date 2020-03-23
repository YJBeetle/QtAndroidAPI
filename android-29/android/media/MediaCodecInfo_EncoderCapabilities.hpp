#pragma once

#ifndef ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES
#define ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class Range;
}

namespace __jni_impl::android::media
{
	class MediaCodecInfo_EncoderCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static jint BITRATE_MODE_CBR();
		static jint BITRATE_MODE_CQ();
		static jint BITRATE_MODE_VBR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getComplexityRange();
		jboolean isBitrateModeSupported(jint arg0);
		QAndroidJniObject getQualityRange();
	};
} // namespace __jni_impl::android::media

#include "../util/Range.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CBR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CBR");
	}
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_CQ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_CQ");
	}
	jint MediaCodecInfo_EncoderCapabilities::BITRATE_MODE_VBR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"BITRATE_MODE_VBR");
	}
	
	// Constructors
	void MediaCodecInfo_EncoderCapabilities::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodecInfo$EncoderCapabilities",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaCodecInfo_EncoderCapabilities::getComplexityRange()
	{
		return __thiz.callObjectMethod(
			"getComplexityRange",
			"()Landroid/util/Range;");
	}
	jboolean MediaCodecInfo_EncoderCapabilities::isBitrateModeSupported(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isBitrateModeSupported",
			"(I)Z",
			arg0);
	}
	QAndroidJniObject MediaCodecInfo_EncoderCapabilities::getQualityRange()
	{
		return __thiz.callObjectMethod(
			"getQualityRange",
			"()Landroid/util/Range;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodecInfo_EncoderCapabilities : public __jni_impl::android::media::MediaCodecInfo_EncoderCapabilities
	{
	public:
		MediaCodecInfo_EncoderCapabilities(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodecInfo_EncoderCapabilities()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODECINFO_ENCODERCAPABILITIES


#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_CALLBACK
#define ANDROID_MEDIA_MEDIACODEC_CALLBACK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class MediaCodec;
}
namespace __jni_impl::android::media
{
	class MediaCodec_BufferInfo;
}
namespace __jni_impl::android::media
{
	class MediaFormat;
}
namespace __jni_impl::android::media
{
	class MediaCodec_CodecException;
}

namespace __jni_impl::android::media
{
	class MediaCodec_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onInputBufferAvailable(__jni_impl::android::media::MediaCodec arg0, jint arg1);
		void onOutputBufferAvailable(__jni_impl::android::media::MediaCodec arg0, jint arg1, __jni_impl::android::media::MediaCodec_BufferInfo arg2);
		void onOutputFormatChanged(__jni_impl::android::media::MediaCodec arg0, __jni_impl::android::media::MediaFormat arg1);
		void onError(__jni_impl::android::media::MediaCodec arg0, __jni_impl::android::media::MediaCodec_CodecException arg1);
	};
} // namespace __jni_impl::android::media

#include "MediaCodec.hpp"
#include "MediaCodec_BufferInfo.hpp"
#include "MediaFormat.hpp"
#include "MediaCodec_CodecException.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaCodec_Callback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$Callback",
			"()V");
	}
	
	// Methods
	void MediaCodec_Callback::onInputBufferAvailable(__jni_impl::android::media::MediaCodec arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onInputBufferAvailable",
			"(Landroid/media/MediaCodec;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void MediaCodec_Callback::onOutputBufferAvailable(__jni_impl::android::media::MediaCodec arg0, jint arg1, __jni_impl::android::media::MediaCodec_BufferInfo arg2)
	{
		__thiz.callMethod<void>(
			"onOutputBufferAvailable",
			"(Landroid/media/MediaCodec;ILandroid/media/MediaCodec$BufferInfo;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void MediaCodec_Callback::onOutputFormatChanged(__jni_impl::android::media::MediaCodec arg0, __jni_impl::android::media::MediaFormat arg1)
	{
		__thiz.callMethod<void>(
			"onOutputFormatChanged",
			"(Landroid/media/MediaCodec;Landroid/media/MediaFormat;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void MediaCodec_Callback::onError(__jni_impl::android::media::MediaCodec arg0, __jni_impl::android::media::MediaCodec_CodecException arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Landroid/media/MediaCodec;Landroid/media/MediaCodec$CodecException;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_Callback : public __jni_impl::android::media::MediaCodec_Callback
	{
	public:
		MediaCodec_Callback(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_Callback()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_CALLBACK


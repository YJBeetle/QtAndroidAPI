#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_CODECEXCEPTION
#define ANDROID_MEDIA_MEDIACODEC_CODECEXCEPTION

#include "../../java/lang/IllegalStateException.hpp"


namespace __jni_impl::android::media
{
	class MediaCodec_CodecException : public __jni_impl::java::lang::IllegalStateException
	{
	public:
		// Fields
		static jint ERROR_INSUFFICIENT_RESOURCE();
		static jint ERROR_RECLAIMED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isTransient();
		QAndroidJniObject getDiagnosticInfo();
		jboolean isRecoverable();
		jint getErrorCode();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodec_CodecException::ERROR_INSUFFICIENT_RESOURCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_INSUFFICIENT_RESOURCE");
	}
	jint MediaCodec_CodecException::ERROR_RECLAIMED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CodecException",
			"ERROR_RECLAIMED");
	}
	
	// Constructors
	void MediaCodec_CodecException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CodecException",
			"(V)V");
	}
	
	// Methods
	jboolean MediaCodec_CodecException::isTransient()
	{
		return __thiz.callMethod<jboolean>(
			"isTransient",
			"()Z");
	}
	QAndroidJniObject MediaCodec_CodecException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;");
	}
	jboolean MediaCodec_CodecException::isRecoverable()
	{
		return __thiz.callMethod<jboolean>(
			"isRecoverable",
			"()Z");
	}
	jint MediaCodec_CodecException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_CodecException : public __jni_impl::android::media::MediaCodec_CodecException
	{
	public:
		MediaCodec_CodecException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_CodecException()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_CODECEXCEPTION


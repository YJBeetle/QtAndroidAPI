#pragma once

#ifndef ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION
#define ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION

#include "../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::media
{
	class MediaCodec_CryptoException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		static jint ERROR_FRAME_TOO_LARGE();
		static jint ERROR_INSUFFICIENT_OUTPUT_PROTECTION();
		static jint ERROR_INSUFFICIENT_SECURITY();
		static jint ERROR_KEY_EXPIRED();
		static jint ERROR_LOST_STATE();
		static jint ERROR_NO_KEY();
		static jint ERROR_RESOURCE_BUSY();
		static jint ERROR_SESSION_NOT_OPENED();
		static jint ERROR_UNSUPPORTED_OPERATION();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1);
		
		// Methods
		jint getErrorCode();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaCodec_CryptoException::ERROR_FRAME_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_FRAME_TOO_LARGE");
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION");
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_SECURITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_SECURITY");
	}
	jint MediaCodec_CryptoException::ERROR_KEY_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_KEY_EXPIRED");
	}
	jint MediaCodec_CryptoException::ERROR_LOST_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_LOST_STATE");
	}
	jint MediaCodec_CryptoException::ERROR_NO_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_NO_KEY");
	}
	jint MediaCodec_CryptoException::ERROR_RESOURCE_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_RESOURCE_BUSY");
	}
	jint MediaCodec_CryptoException::ERROR_SESSION_NOT_OPENED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_SESSION_NOT_OPENED");
	}
	jint MediaCodec_CryptoException::ERROR_UNSUPPORTED_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_UNSUPPORTED_OPERATION");
	}
	
	// Constructors
	void MediaCodec_CryptoException::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CryptoException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint MediaCodec_CryptoException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaCodec_CryptoException : public __jni_impl::android::media::MediaCodec_CryptoException
	{
	public:
		MediaCodec_CryptoException(QAndroidJniObject obj) { __thiz = obj; }
		MediaCodec_CryptoException(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIACODEC_CRYPTOEXCEPTION


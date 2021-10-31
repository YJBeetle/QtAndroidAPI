#include "./MediaCodec_CryptoException.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_CryptoException::ERROR_FRAME_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_FRAME_TOO_LARGE"
		);
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_SECURITY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_SECURITY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_KEY_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_KEY_EXPIRED"
		);
	}
	jint MediaCodec_CryptoException::ERROR_LOST_STATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_LOST_STATE"
		);
	}
	jint MediaCodec_CryptoException::ERROR_NO_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_NO_KEY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_RESOURCE_BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_RESOURCE_BUSY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_SESSION_NOT_OPENED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_SESSION_NOT_OPENED"
		);
	}
	jint MediaCodec_CryptoException::ERROR_UNSUPPORTED_OPERATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	MediaCodec_CryptoException::MediaCodec_CryptoException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaCodec_CryptoException::MediaCodec_CryptoException(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaCodec$CryptoException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint MediaCodec_CryptoException::getErrorCode()
	{
		return __thiz.callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media


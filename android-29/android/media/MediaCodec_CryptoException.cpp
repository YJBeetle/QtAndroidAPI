#include "../../JString.hpp"
#include "./MediaCodec_CryptoException.hpp"

namespace android::media
{
	// Fields
	jint MediaCodec_CryptoException::ERROR_FRAME_TOO_LARGE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_FRAME_TOO_LARGE"
		);
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_OUTPUT_PROTECTION()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_OUTPUT_PROTECTION"
		);
	}
	jint MediaCodec_CryptoException::ERROR_INSUFFICIENT_SECURITY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_INSUFFICIENT_SECURITY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_KEY_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_KEY_EXPIRED"
		);
	}
	jint MediaCodec_CryptoException::ERROR_LOST_STATE()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_LOST_STATE"
		);
	}
	jint MediaCodec_CryptoException::ERROR_NO_KEY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_NO_KEY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_RESOURCE_BUSY()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_RESOURCE_BUSY"
		);
	}
	jint MediaCodec_CryptoException::ERROR_SESSION_NOT_OPENED()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_SESSION_NOT_OPENED"
		);
	}
	jint MediaCodec_CryptoException::ERROR_UNSUPPORTED_OPERATION()
	{
		return getStaticField<jint>(
			"android.media.MediaCodec$CryptoException",
			"ERROR_UNSUPPORTED_OPERATION"
		);
	}
	
	// QAndroidJniObject forward
	MediaCodec_CryptoException::MediaCodec_CryptoException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MediaCodec_CryptoException::MediaCodec_CryptoException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.media.MediaCodec$CryptoException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint MediaCodec_CryptoException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media


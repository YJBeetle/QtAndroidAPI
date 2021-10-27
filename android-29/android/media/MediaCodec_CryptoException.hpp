#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"


namespace android::media
{
	class MediaCodec_CryptoException : public java::lang::RuntimeException
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
		
		MediaCodec_CryptoException(QAndroidJniObject obj);
		// Constructors
		MediaCodec_CryptoException(jint &arg0, jstring &arg1);
		MediaCodec_CryptoException(jint &arg0, const QString &arg1);
		MediaCodec_CryptoException() = default;
		
		// Methods
		jint getErrorCode();
	};
} // namespace android::media


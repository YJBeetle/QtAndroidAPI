#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


namespace android::media
{
	class MediaCodec_CodecException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		static jint ERROR_INSUFFICIENT_RESOURCE();
		static jint ERROR_RECLAIMED();
		
		MediaCodec_CodecException(QAndroidJniObject obj);
		// Constructors
		MediaCodec_CodecException() = default;
		
		// Methods
		jstring getDiagnosticInfo();
		jint getErrorCode();
		jboolean isRecoverable();
		jboolean isTransient();
	};
} // namespace android::media


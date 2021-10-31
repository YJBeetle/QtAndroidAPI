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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_CodecException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CodecException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDiagnosticInfo();
		jint getErrorCode();
		jboolean isRecoverable();
		jboolean isTransient();
	};
} // namespace android::media


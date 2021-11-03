#pragma once

#include "../../java/lang/IllegalStateException.hpp"

class JString;

namespace android::media
{
	class MediaCodec_CodecException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		static jint ERROR_INSUFFICIENT_RESOURCE();
		static jint ERROR_RECLAIMED();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_CodecException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CodecException(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDiagnosticInfo() const;
		jint getErrorCode() const;
		jboolean isRecoverable() const;
		jboolean isTransient() const;
	};
} // namespace android::media


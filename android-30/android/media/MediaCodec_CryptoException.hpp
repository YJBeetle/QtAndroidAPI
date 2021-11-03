#pragma once

#include "../../java/lang/RuntimeException.hpp"

class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_CryptoException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CryptoException(QJniObject obj);
		
		// Constructors
		MediaCodec_CryptoException(jint arg0, JString arg1);
		
		// Methods
		jint getErrorCode() const;
	};
} // namespace android::media


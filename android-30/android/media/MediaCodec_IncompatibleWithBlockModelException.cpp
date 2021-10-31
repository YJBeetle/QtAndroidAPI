#include "./MediaCodec.hpp"
#include "./MediaCodec_IncompatibleWithBlockModelException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCodec_IncompatibleWithBlockModelException::MediaCodec_IncompatibleWithBlockModelException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media


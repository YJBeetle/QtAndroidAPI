#include "./MediaCodec.hpp"
#include "./MediaCodec_IncompatibleWithBlockModelException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaCodec_IncompatibleWithBlockModelException::MediaCodec_IncompatibleWithBlockModelException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media


#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

namespace android::media
{
	class MediaCodec;
}

namespace android::media
{
	class MediaCodec_IncompatibleWithBlockModelException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_IncompatibleWithBlockModelException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_IncompatibleWithBlockModelException(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media


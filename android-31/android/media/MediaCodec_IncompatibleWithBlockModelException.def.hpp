#pragma once

#include "../../java/lang/RuntimeException.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaCodec_IncompatibleWithBlockModelException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_IncompatibleWithBlockModelException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media


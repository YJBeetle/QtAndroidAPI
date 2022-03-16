#pragma once

#include "../../JString.hpp"
#include "./MediaCryptoException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCryptoException::MediaCryptoException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaCryptoException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"


#pragma once

#include "../../JString.hpp"
#include "./MediaDrmResetException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaDrmResetException::MediaDrmResetException(JString arg0)
		: java::lang::IllegalStateException(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IllegalStateException.hpp"


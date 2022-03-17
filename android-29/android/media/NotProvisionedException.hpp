#pragma once

#include "../../JString.hpp"
#include "./NotProvisionedException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline NotProvisionedException::NotProvisionedException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


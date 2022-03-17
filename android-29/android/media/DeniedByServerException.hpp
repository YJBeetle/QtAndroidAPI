#pragma once

#include "../../JString.hpp"
#include "./DeniedByServerException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline DeniedByServerException::DeniedByServerException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


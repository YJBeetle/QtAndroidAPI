#pragma once

#include "../../JString.hpp"
#include "./UnsupportedSchemeException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline UnsupportedSchemeException::UnsupportedSchemeException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


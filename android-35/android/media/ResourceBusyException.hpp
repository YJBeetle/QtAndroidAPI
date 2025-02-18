#pragma once

#include "../../JString.hpp"
#include "./ResourceBusyException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline ResourceBusyException::ResourceBusyException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

#pragma once

#include "../../JString.hpp"
#include "./MediaDrmException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaDrmException::MediaDrmException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif

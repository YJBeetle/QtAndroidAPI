#pragma once

#include "../../JString.hpp"
#include "./MediaPlayer_ProvisioningServerErrorException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$ProvisioningServerErrorException",
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

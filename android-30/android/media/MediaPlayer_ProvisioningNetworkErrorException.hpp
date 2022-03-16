#pragma once

#include "../../JString.hpp"
#include "./MediaPlayer_ProvisioningNetworkErrorException.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaPlayer_ProvisioningNetworkErrorException::MediaPlayer_ProvisioningNetworkErrorException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$ProvisioningNetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media

// Base class headers
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


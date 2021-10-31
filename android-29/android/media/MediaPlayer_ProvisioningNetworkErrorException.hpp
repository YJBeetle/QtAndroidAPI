#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class MediaPlayer_ProvisioningNetworkErrorException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		MediaPlayer_ProvisioningNetworkErrorException(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_ProvisioningNetworkErrorException(jstring arg0);
		MediaPlayer_ProvisioningNetworkErrorException() = default;
		
		// Methods
	};
} // namespace android::media


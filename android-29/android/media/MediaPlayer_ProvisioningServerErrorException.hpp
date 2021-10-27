#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./MediaDrmException.hpp"


namespace android::media
{
	class MediaPlayer_ProvisioningServerErrorException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		MediaPlayer_ProvisioningServerErrorException(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_ProvisioningServerErrorException(jstring &arg0);
		MediaPlayer_ProvisioningServerErrorException(const QString &arg0);
		MediaPlayer_ProvisioningServerErrorException() = default;
		
		// Methods
	};
} // namespace android::media


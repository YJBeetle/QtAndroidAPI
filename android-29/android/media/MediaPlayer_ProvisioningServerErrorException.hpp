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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_ProvisioningServerErrorException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_ProvisioningServerErrorException(QJniObject obj);
		
		// Constructors
		MediaPlayer_ProvisioningServerErrorException(jstring arg0);
		
		// Methods
	};
} // namespace android::media


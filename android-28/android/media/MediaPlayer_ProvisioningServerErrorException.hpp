#pragma once

#include "./MediaDrmException.hpp"

class JString;

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
		MediaPlayer_ProvisioningServerErrorException(JString arg0);
		
		// Methods
	};
} // namespace android::media


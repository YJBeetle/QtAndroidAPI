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
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_ProvisioningNetworkErrorException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_ProvisioningNetworkErrorException(QJniObject obj);
		
		// Constructors
		MediaPlayer_ProvisioningNetworkErrorException(jstring arg0);
		
		// Methods
	};
} // namespace android::media


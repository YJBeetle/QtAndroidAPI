#pragma once

#include "./MediaDrmException.def.hpp"

class JString;

namespace android::media
{
	class MediaPlayer_ProvisioningNetworkErrorException : public android::media::MediaDrmException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaPlayer_ProvisioningNetworkErrorException(const char *className, const char *sig, Ts...agv) : android::media::MediaDrmException(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_ProvisioningNetworkErrorException(QJniObject obj) : android::media::MediaDrmException(obj) {}
		
		// Constructors
		MediaPlayer_ProvisioningNetworkErrorException(JString arg0);
		
		// Methods
	};
} // namespace android::media


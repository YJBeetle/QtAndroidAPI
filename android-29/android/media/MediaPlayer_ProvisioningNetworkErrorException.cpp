#include "../../JString.hpp"
#include "./MediaPlayer_ProvisioningNetworkErrorException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaPlayer_ProvisioningNetworkErrorException::MediaPlayer_ProvisioningNetworkErrorException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	MediaPlayer_ProvisioningNetworkErrorException::MediaPlayer_ProvisioningNetworkErrorException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$ProvisioningNetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


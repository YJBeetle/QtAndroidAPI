#include "../../JString.hpp"
#include "./MediaPlayer_ProvisioningServerErrorException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.MediaPlayer$ProvisioningServerErrorException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


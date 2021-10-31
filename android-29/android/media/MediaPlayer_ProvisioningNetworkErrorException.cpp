#include "./MediaPlayer_ProvisioningNetworkErrorException.hpp"

namespace android::media
{
	// Fields
	
	MediaPlayer_ProvisioningNetworkErrorException::MediaPlayer_ProvisioningNetworkErrorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaPlayer_ProvisioningNetworkErrorException::MediaPlayer_ProvisioningNetworkErrorException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$ProvisioningNetworkErrorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::media


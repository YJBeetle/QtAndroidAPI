#include "./MediaPlayer_ProvisioningServerErrorException.hpp"

namespace android::media
{
	// Fields
	
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$ProvisioningServerErrorException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	MediaPlayer_ProvisioningServerErrorException::MediaPlayer_ProvisioningServerErrorException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaPlayer$ProvisioningServerErrorException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::media


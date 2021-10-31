#include "./NotProvisionedException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	NotProvisionedException::NotProvisionedException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	NotProvisionedException::NotProvisionedException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media


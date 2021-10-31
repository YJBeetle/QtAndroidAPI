#include "./NotProvisionedException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	NotProvisionedException::NotProvisionedException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	NotProvisionedException::NotProvisionedException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media


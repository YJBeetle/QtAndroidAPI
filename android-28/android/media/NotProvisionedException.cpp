#include "../../JString.hpp"
#include "./NotProvisionedException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	NotProvisionedException::NotProvisionedException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	NotProvisionedException::NotProvisionedException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


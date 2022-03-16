#include "../../JString.hpp"
#include "./NotProvisionedException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	NotProvisionedException::NotProvisionedException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.NotProvisionedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


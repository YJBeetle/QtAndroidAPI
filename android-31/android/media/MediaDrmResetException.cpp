#include "../../JString.hpp"
#include "./MediaDrmResetException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaDrmResetException::MediaDrmResetException(JString arg0)
		: java::lang::IllegalStateException(
			"android.media.MediaDrmResetException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


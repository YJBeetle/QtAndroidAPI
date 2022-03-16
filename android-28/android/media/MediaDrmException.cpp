#include "../../JString.hpp"
#include "./MediaDrmException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	MediaDrmException::MediaDrmException(JString arg0)
		: java::lang::Exception(
			"android.media.MediaDrmException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


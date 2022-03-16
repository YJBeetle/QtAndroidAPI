#include "../../JString.hpp"
#include "./DeniedByServerException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	DeniedByServerException::DeniedByServerException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


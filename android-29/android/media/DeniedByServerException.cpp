#include "../../JString.hpp"
#include "./DeniedByServerException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	DeniedByServerException::DeniedByServerException(QJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	DeniedByServerException::DeniedByServerException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


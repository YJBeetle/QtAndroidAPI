#include "./DeniedByServerException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	DeniedByServerException::DeniedByServerException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	DeniedByServerException::DeniedByServerException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.DeniedByServerException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media


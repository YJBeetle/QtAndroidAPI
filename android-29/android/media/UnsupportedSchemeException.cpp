#include "./UnsupportedSchemeException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	UnsupportedSchemeException::UnsupportedSchemeException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	UnsupportedSchemeException::UnsupportedSchemeException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.UnsupportedSchemeException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media


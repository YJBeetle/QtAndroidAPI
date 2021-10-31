#include "./ResourceBusyException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ResourceBusyException::ResourceBusyException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	ResourceBusyException::ResourceBusyException(jstring arg0)
		: android::media::MediaDrmException(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::media


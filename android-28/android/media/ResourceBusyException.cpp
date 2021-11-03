#include "../../JString.hpp"
#include "./ResourceBusyException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ResourceBusyException::ResourceBusyException(QAndroidJniObject obj) : android::media::MediaDrmException(obj) {}
	
	// Constructors
	ResourceBusyException::ResourceBusyException(JString arg0)
		: android::media::MediaDrmException(
			"android.media.ResourceBusyException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::media


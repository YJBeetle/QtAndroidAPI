#include "./MediaDrm_MediaDrmStateException.hpp"

namespace android::media
{
	// Fields
	
	MediaDrm_MediaDrmStateException::MediaDrm_MediaDrmStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring MediaDrm_MediaDrmStateException::getDiagnosticInfo()
	{
		return __thiz.callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media


#include "./MediaDrm_MediaDrmStateException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDrm_MediaDrmStateException::MediaDrm_MediaDrmStateException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaDrm_MediaDrmStateException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media


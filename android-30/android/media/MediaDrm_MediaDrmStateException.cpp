#include "../../JString.hpp"
#include "./MediaDrm_MediaDrmStateException.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_MediaDrmStateException::MediaDrm_MediaDrmStateException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaDrm_MediaDrmStateException::getDiagnosticInfo()
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media


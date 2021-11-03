#include "../../JString.hpp"
#include "./MediaDrm_MediaDrmStateException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaDrm_MediaDrmStateException::MediaDrm_MediaDrmStateException(QJniObject obj) : java::lang::IllegalStateException(obj) {}
	
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


#include "../../JString.hpp"
#include "./MediaDrm_MediaDrmStateException.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JString MediaDrm_MediaDrmStateException::getDiagnosticInfo() const
	{
		return callObjectMethod(
			"getDiagnosticInfo",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media


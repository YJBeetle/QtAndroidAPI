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
	jint MediaDrm_MediaDrmStateException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaDrm_MediaDrmStateException::isTransient() const
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media


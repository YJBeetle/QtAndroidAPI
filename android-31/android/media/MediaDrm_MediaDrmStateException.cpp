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
	jint MediaDrm_MediaDrmStateException::getErrorCode()
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	jboolean MediaDrm_MediaDrmStateException::isTransient()
	{
		return callMethod<jboolean>(
			"isTransient",
			"()Z"
		);
	}
} // namespace android::media


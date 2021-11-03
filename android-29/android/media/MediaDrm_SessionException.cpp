#include "../../JString.hpp"
#include "./MediaDrm_SessionException.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_SessionException::ERROR_RESOURCE_CONTENTION()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_RESOURCE_CONTENTION"
		);
	}
	jint MediaDrm_SessionException::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$SessionException",
			"ERROR_UNKNOWN"
		);
	}
	
	// QJniObject forward
	MediaDrm_SessionException::MediaDrm_SessionException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	MediaDrm_SessionException::MediaDrm_SessionException(jint arg0, JString arg1)
		: java::lang::RuntimeException(
			"android.media.MediaDrm$SessionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint MediaDrm_SessionException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::media


#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./MediaDrm_KeyRequest.hpp"

namespace android::media
{
	// Fields
	jint MediaDrm_KeyRequest::REQUEST_TYPE_INITIAL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_INITIAL"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_NONE"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RELEASE"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_RENEWAL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RENEWAL"
		);
	}
	jint MediaDrm_KeyRequest::REQUEST_TYPE_UPDATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_UPDATE"
		);
	}
	
	// Constructors
	
	// Methods
	JByteArray MediaDrm_KeyRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	JString MediaDrm_KeyRequest::getDefaultUrl() const
	{
		return callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		);
	}
	jint MediaDrm_KeyRequest::getRequestType() const
	{
		return callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
} // namespace android::media


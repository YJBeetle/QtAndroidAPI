#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./MediaDrm_KeyRequest.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm_KeyRequest::REQUEST_TYPE_INITIAL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_INITIAL"
		);
	}
	inline jint MediaDrm_KeyRequest::REQUEST_TYPE_NONE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_NONE"
		);
	}
	inline jint MediaDrm_KeyRequest::REQUEST_TYPE_RELEASE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RELEASE"
		);
	}
	inline jint MediaDrm_KeyRequest::REQUEST_TYPE_RENEWAL()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_RENEWAL"
		);
	}
	inline jint MediaDrm_KeyRequest::REQUEST_TYPE_UPDATE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyRequest",
			"REQUEST_TYPE_UPDATE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray MediaDrm_KeyRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline JString MediaDrm_KeyRequest::getDefaultUrl() const
	{
		return callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaDrm_KeyRequest::getRequestType() const
	{
		return callMethod<jint>(
			"getRequestType",
			"()I"
		);
	}
} // namespace android::media

// Base class headers


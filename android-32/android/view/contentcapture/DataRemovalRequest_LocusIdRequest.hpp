#pragma once

#include "../../content/LocusId.def.hpp"
#include "./DataRemovalRequest.def.hpp"
#include "./DataRemovalRequest_LocusIdRequest.def.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint DataRemovalRequest_LocusIdRequest::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	inline android::content::LocusId DataRemovalRequest_LocusIdRequest::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace android::view::contentcapture

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::contentcapture;
#endif

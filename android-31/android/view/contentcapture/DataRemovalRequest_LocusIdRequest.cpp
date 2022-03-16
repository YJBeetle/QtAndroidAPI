#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_LocusIdRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// Constructors
	
	// Methods
	jint DataRemovalRequest_LocusIdRequest::getFlags() const
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::content::LocusId DataRemovalRequest_LocusIdRequest::getLocusId() const
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace android::view::contentcapture


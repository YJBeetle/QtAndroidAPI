#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_LocusIdRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	// QJniObject forward
	DataRemovalRequest_LocusIdRequest::DataRemovalRequest_LocusIdRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint DataRemovalRequest_LocusIdRequest::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::content::LocusId DataRemovalRequest_LocusIdRequest::getLocusId()
	{
		return callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace android::view::contentcapture


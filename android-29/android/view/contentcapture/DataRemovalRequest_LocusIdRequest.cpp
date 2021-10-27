#include "../../content/LocusId.hpp"
#include "./DataRemovalRequest.hpp"
#include "./DataRemovalRequest_LocusIdRequest.hpp"

namespace android::view::contentcapture
{
	// Fields
	
	DataRemovalRequest_LocusIdRequest::DataRemovalRequest_LocusIdRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint DataRemovalRequest_LocusIdRequest::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject DataRemovalRequest_LocusIdRequest::getLocusId()
	{
		return __thiz.callObjectMethod(
			"getLocusId",
			"()Landroid/content/LocusId;"
		);
	}
} // namespace android::view::contentcapture


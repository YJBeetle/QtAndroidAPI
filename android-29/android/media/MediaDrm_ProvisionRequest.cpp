#include "./MediaDrm_ProvisionRequest.hpp"

namespace android::media
{
	// Fields
	
	MediaDrm_ProvisionRequest::MediaDrm_ProvisionRequest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_ProvisionRequest::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring MediaDrm_ProvisionRequest::getDefaultUrl()
	{
		return __thiz.callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media


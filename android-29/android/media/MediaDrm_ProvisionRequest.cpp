#include "./MediaDrm_ProvisionRequest.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_ProvisionRequest::MediaDrm_ProvisionRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray MediaDrm_ProvisionRequest::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring MediaDrm_ProvisionRequest::getDefaultUrl()
	{
		return callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media


#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./MediaDrm_ProvisionRequest.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JByteArray MediaDrm_ProvisionRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	JString MediaDrm_ProvisionRequest::getDefaultUrl() const
	{
		return callObjectMethod(
			"getDefaultUrl",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media


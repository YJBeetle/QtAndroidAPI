#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDrm_ProvisionRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaDrm_ProvisionRequest(QAndroidJniObject obj);
		// Constructors
		MediaDrm_ProvisionRequest() = default;
		
		// Methods
		jbyteArray getData();
		jstring getDefaultUrl();
	};
} // namespace android::media


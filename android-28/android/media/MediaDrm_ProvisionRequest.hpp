#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDrm_ProvisionRequest : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_ProvisionRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_ProvisionRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getData();
		jstring getDefaultUrl();
	};
} // namespace android::media


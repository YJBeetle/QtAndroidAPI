#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class ProcessedData : public __JniBaseClass
	{
	public:
		// Fields
		
		ProcessedData(QAndroidJniObject obj);
		// Constructors
		ProcessedData() = default;
		
		// Methods
		jstring getAccountId();
		jbyteArray getData();
		jstring getSubscriptionId();
	};
} // namespace android::drm


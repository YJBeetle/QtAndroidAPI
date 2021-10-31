#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class ProcessedData : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProcessedData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ProcessedData(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getAccountId();
		jbyteArray getData();
		jstring getSubscriptionId();
	};
} // namespace android::drm


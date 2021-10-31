#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::telephony::ims::feature
{
	class MmTelFeature : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MmTelFeature(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MmTelFeature(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::ims::feature


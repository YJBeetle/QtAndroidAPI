#pragma once

#include "../../../../JObject.hpp"

namespace android::telephony::ims::feature
{
	class MmTelFeature : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MmTelFeature(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MmTelFeature(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telephony::ims::feature


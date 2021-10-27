#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::net::wifi::aware
{
	class WifiAwareSession;
}

namespace android::net::wifi::aware
{
	class AttachCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		AttachCallback(QAndroidJniObject obj);
		// Constructors
		AttachCallback();
		
		// Methods
		void onAttachFailed();
		void onAttached(android::net::wifi::aware::WifiAwareSession arg0);
	};
} // namespace android::net::wifi::aware


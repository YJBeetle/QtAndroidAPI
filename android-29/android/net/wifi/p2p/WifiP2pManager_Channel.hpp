#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net::wifi::p2p
{
	class WifiP2pManager;
}
namespace android::os
{
	class Binder;
}
namespace android::os
{
	class Looper;
}

namespace android::net::wifi::p2p
{
	class WifiP2pManager_Channel : public __JniBaseClass
	{
	public:
		// Fields
		
		WifiP2pManager_Channel(QAndroidJniObject obj);
		// Constructors
		WifiP2pManager_Channel() = default;
		
		// Methods
		void close();
	};
} // namespace android::net::wifi::p2p


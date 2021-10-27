#include "../../../content/Context.hpp"
#include "./WifiP2pManager.hpp"
#include "../../../os/Binder.hpp"
#include "../../../os/Looper.hpp"
#include "./WifiP2pManager_Channel.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	WifiP2pManager_Channel::WifiP2pManager_Channel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void WifiP2pManager_Channel::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::net::wifi::p2p


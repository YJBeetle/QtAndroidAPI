#include "./WifiP2pManager_Channel.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// QJniObject forward
	WifiP2pManager_Channel::WifiP2pManager_Channel(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void WifiP2pManager_Channel::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::net::wifi::p2p


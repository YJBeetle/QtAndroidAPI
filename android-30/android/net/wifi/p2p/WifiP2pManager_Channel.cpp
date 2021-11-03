#include "./WifiP2pManager_Channel.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// QAndroidJniObject forward
	WifiP2pManager_Channel::WifiP2pManager_Channel(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void WifiP2pManager_Channel::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::net::wifi::p2p


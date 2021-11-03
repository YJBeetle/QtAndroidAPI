#include "../../../content/Context.hpp"
#include "./WifiP2pManager.hpp"
#include "../../../os/Binder.hpp"
#include "../../../os/Looper.hpp"
#include "./WifiP2pManager_Channel.hpp"

namespace android::net::wifi::p2p
{
	// Fields
	
	// QJniObject forward
	WifiP2pManager_Channel::WifiP2pManager_Channel(QJniObject obj) : JObject(obj) {}
	
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


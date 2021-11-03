#include "../../../Network.hpp"
#include "./IkeNetworkLostException.hpp"

namespace android::net::ipsec::ike::exceptions
{
	// Fields
	
	// QAndroidJniObject forward
	IkeNetworkLostException::IkeNetworkLostException(QAndroidJniObject obj) : android::net::ipsec::ike::exceptions::IkeNonProtocolException(obj) {}
	
	// Constructors
	IkeNetworkLostException::IkeNetworkLostException(android::net::Network arg0)
		: android::net::ipsec::ike::exceptions::IkeNonProtocolException(
			"android.net.ipsec.ike.exceptions.IkeNetworkLostException",
			"(Landroid/net/Network;)V",
			arg0.object()
		) {}
	
	// Methods
	android::net::Network IkeNetworkLostException::getNetwork() const
	{
		return callObjectMethod(
			"getNetwork",
			"()Landroid/net/Network;"
		);
	}
} // namespace android::net::ipsec::ike::exceptions


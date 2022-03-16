#include "./ChildSessionConfiguration.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject ChildSessionConfiguration::getInboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	JObject ChildSessionConfiguration::getOutboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
} // namespace android::net::ipsec::ike


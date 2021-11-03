#include "./ChildSessionConfiguration.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	ChildSessionConfiguration::ChildSessionConfiguration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject ChildSessionConfiguration::getInboundTrafficSelectors()
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	JObject ChildSessionConfiguration::getOutboundTrafficSelectors()
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
} // namespace android::net::ipsec::ike


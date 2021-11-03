#include "./ChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	ChildSessionParams::ChildSessionParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ChildSessionParams::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject ChildSessionParams::getChildSaProposals()
	{
		return callObjectMethod(
			"getChildSaProposals",
			"()Ljava/util/List;"
		);
	}
	jint ChildSessionParams::getHardLifetimeSeconds()
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	JObject ChildSessionParams::getInboundTrafficSelectors()
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	JObject ChildSessionParams::getOutboundTrafficSelectors()
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	jint ChildSessionParams::getSoftLifetimeSeconds()
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	jint ChildSessionParams::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


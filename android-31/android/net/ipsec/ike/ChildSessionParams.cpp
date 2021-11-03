#include "../../../../JObject.hpp"
#include "./ChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	ChildSessionParams::ChildSessionParams(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ChildSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ChildSessionParams::getChildSaProposals() const
	{
		return callObjectMethod(
			"getChildSaProposals",
			"()Ljava/util/List;"
		);
	}
	jint ChildSessionParams::getHardLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getHardLifetimeSeconds",
			"()I"
		);
	}
	JObject ChildSessionParams::getInboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getInboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	JObject ChildSessionParams::getOutboundTrafficSelectors() const
	{
		return callObjectMethod(
			"getOutboundTrafficSelectors",
			"()Ljava/util/List;"
		);
	}
	jint ChildSessionParams::getSoftLifetimeSeconds() const
	{
		return callMethod<jint>(
			"getSoftLifetimeSeconds",
			"()I"
		);
	}
	jint ChildSessionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


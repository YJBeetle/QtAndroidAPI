#include "./TunnelModeChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	TunnelModeChildSessionParams::TunnelModeChildSessionParams(QJniObject obj) : android::net::ipsec::ike::ChildSessionParams(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TunnelModeChildSessionParams::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass TunnelModeChildSessionParams::getConfigurationRequests()
	{
		return callObjectMethod(
			"getConfigurationRequests",
			"()Ljava/util/List;"
		);
	}
	jint TunnelModeChildSessionParams::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


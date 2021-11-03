#include "../../../../JObject.hpp"
#include "./TunnelModeChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	TunnelModeChildSessionParams::TunnelModeChildSessionParams(QJniObject obj) : android::net::ipsec::ike::ChildSessionParams(obj) {}
	
	// Constructors
	
	// Methods
	jboolean TunnelModeChildSessionParams::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject TunnelModeChildSessionParams::getConfigurationRequests()
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


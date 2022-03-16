#include "../../../../JObject.hpp"
#include "./TunnelModeChildSessionParams.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean TunnelModeChildSessionParams::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject TunnelModeChildSessionParams::getConfigurationRequests() const
	{
		return callObjectMethod(
			"getConfigurationRequests",
			"()Ljava/util/List;"
		);
	}
	jint TunnelModeChildSessionParams::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


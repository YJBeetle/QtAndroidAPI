#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeSessionParams_IkeAuthConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


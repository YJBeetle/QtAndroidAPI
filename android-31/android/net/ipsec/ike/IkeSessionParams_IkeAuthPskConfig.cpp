#include "../../../../JByteArray.hpp"
#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthPskConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthPskConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray IkeSessionParams_IkeAuthPskConfig::getPsk() const
	{
		return callObjectMethod(
			"getPsk",
			"()[B"
		);
	}
	jint IkeSessionParams_IkeAuthPskConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


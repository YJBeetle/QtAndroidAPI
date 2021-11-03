#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSessionParams_IkeAuthConfig::IkeSessionParams_IkeAuthConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint IkeSessionParams_IkeAuthConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


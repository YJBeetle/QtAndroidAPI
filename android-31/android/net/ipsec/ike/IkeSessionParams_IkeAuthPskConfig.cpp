#include "../../../../JByteArray.hpp"
#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthPskConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QAndroidJniObject forward
	IkeSessionParams_IkeAuthPskConfig::IkeSessionParams_IkeAuthPskConfig(QAndroidJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthPskConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JByteArray IkeSessionParams_IkeAuthPskConfig::getPsk()
	{
		return callObjectMethod(
			"getPsk",
			"()[B"
		);
	}
	jint IkeSessionParams_IkeAuthPskConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


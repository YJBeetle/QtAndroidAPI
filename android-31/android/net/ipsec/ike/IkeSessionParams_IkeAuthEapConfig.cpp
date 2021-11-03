#include "../../eap/EapSessionConfig.hpp"
#include "../../../../JObject.hpp"
#include "./IkeSessionParams_IkeAuthEapConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSessionParams_IkeAuthEapConfig::IkeSessionParams_IkeAuthEapConfig(QJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthEapConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::eap::EapSessionConfig IkeSessionParams_IkeAuthEapConfig::getEapConfig()
	{
		return callObjectMethod(
			"getEapConfig",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	jint IkeSessionParams_IkeAuthEapConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike


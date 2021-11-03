#include "../../JString.hpp"
#include "./NetworkSecurityPolicy.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkSecurityPolicy::NetworkSecurityPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::security::NetworkSecurityPolicy NetworkSecurityPolicy::getInstance()
	{
		return callStaticObjectMethod(
			"android.security.NetworkSecurityPolicy",
			"getInstance",
			"()Landroid/security/NetworkSecurityPolicy;"
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted() const
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"()Z"
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted(JString arg0) const
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
} // namespace android::security


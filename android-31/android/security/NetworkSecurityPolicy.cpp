#include "./NetworkSecurityPolicy.hpp"

namespace android::security
{
	// Fields
	
	// QJniObject forward
	NetworkSecurityPolicy::NetworkSecurityPolicy(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted()
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"()Z"
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted(jstring arg0)
	{
		return callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
} // namespace android::security


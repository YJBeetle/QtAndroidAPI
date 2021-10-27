#include "./NetworkSecurityPolicy.hpp"

namespace android::security
{
	// Fields
	
	NetworkSecurityPolicy::NetworkSecurityPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject NetworkSecurityPolicy::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.security.NetworkSecurityPolicy",
			"getInstance",
			"()Landroid/security/NetworkSecurityPolicy;"
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted()
	{
		return __thiz.callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"()Z"
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean NetworkSecurityPolicy::isCleartextTrafficPermitted(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isCleartextTrafficPermitted",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::security


#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::security
{
	class NetworkSecurityPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean isCleartextTrafficPermitted();
		jboolean isCleartextTrafficPermitted(jstring arg0);
		jboolean isCleartextTrafficPermitted(const QString &arg0);
	};
} // namespace __jni_impl::android::security


namespace __jni_impl::android::security
{
	// Fields
	
	// Constructors
	void NetworkSecurityPolicy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.security.NetworkSecurityPolicy",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::security

namespace android::security
{
	class NetworkSecurityPolicy : public __jni_impl::android::security::NetworkSecurityPolicy
	{
	public:
		NetworkSecurityPolicy(QAndroidJniObject obj) { __thiz = obj; }
		NetworkSecurityPolicy()
		{
			__constructor();
		}
	};
} // namespace android::security


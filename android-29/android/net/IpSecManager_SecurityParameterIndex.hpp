#pragma once

#ifndef ANDROID_NET_IPSECMANAGER_SECURITYPARAMETERINDEX
#define ANDROID_NET_IPSECMANAGER_SECURITYPARAMETERINDEX

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class IpSecManager_SecurityParameterIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jint getSpi();
		jstring toString();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecManager_SecurityParameterIndex::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecManager$SecurityParameterIndex",
			"(V)V");
	}
	
	// Methods
	void IpSecManager_SecurityParameterIndex::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint IpSecManager_SecurityParameterIndex::getSpi()
	{
		return __thiz.callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
	jstring IpSecManager_SecurityParameterIndex::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecManager_SecurityParameterIndex : public __jni_impl::android::net::IpSecManager_SecurityParameterIndex
	{
	public:
		IpSecManager_SecurityParameterIndex(QAndroidJniObject obj) { __thiz = obj; }
		IpSecManager_SecurityParameterIndex()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECMANAGER_SECURITYPARAMETERINDEX


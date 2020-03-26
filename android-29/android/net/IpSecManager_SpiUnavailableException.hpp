#pragma once

#ifndef ANDROID_NET_IPSECMANAGER_SPIUNAVAILABLEEXCEPTION
#define ANDROID_NET_IPSECMANAGER_SPIUNAVAILABLEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace __jni_impl::android::net
{
	class IpSecManager_SpiUnavailableException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSpi();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecManager_SpiUnavailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecManager$SpiUnavailableException",
			"(V)V");
	}
	
	// Methods
	jint IpSecManager_SpiUnavailableException::getSpi()
	{
		return __thiz.callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecManager_SpiUnavailableException : public __jni_impl::android::net::IpSecManager_SpiUnavailableException
	{
	public:
		IpSecManager_SpiUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		IpSecManager_SpiUnavailableException()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECMANAGER_SPIUNAVAILABLEEXCEPTION


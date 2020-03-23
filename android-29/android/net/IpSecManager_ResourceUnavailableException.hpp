#pragma once

#ifndef ANDROID_NET_IPSECMANAGER_RESOURCEUNAVAILABLEEXCEPTION
#define ANDROID_NET_IPSECMANAGER_RESOURCEUNAVAILABLEEXCEPTION

#include "../util/AndroidException.hpp"


namespace __jni_impl::android::net
{
	class IpSecManager_ResourceUnavailableException : public __jni_impl::android::util::AndroidException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void IpSecManager_ResourceUnavailableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecManager$ResourceUnavailableException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecManager_ResourceUnavailableException : public __jni_impl::android::net::IpSecManager_ResourceUnavailableException
	{
	public:
		IpSecManager_ResourceUnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		IpSecManager_ResourceUnavailableException()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECMANAGER_RESOURCEUNAVAILABLEEXCEPTION


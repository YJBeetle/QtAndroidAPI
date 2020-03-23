#pragma once

#ifndef ANDROID_NET_DNSRESOLVER_DNSEXCEPTION
#define ANDROID_NET_DNSRESOLVER_DNSEXCEPTION

#include "../../java/lang/Exception.hpp"


namespace __jni_impl::android::net
{
	class DnsResolver_DnsException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		jint code();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
{
	// Fields
	jint DnsResolver_DnsException::code()
	{
		return __thiz.getField<jint>(
			"code");
	}
	
	// Constructors
	void DnsResolver_DnsException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.DnsResolver$DnsException",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::net

namespace android::net
{
	class DnsResolver_DnsException : public __jni_impl::android::net::DnsResolver_DnsException
	{
	public:
		DnsResolver_DnsException(QAndroidJniObject obj) { __thiz = obj; }
		DnsResolver_DnsException()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_DNSRESOLVER_DNSEXCEPTION


#pragma once

#ifndef JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION
#define JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION

#include "SSLException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLPeerUnverifiedException : public __jni_impl::javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLPeerUnverifiedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLPeerUnverifiedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLPeerUnverifiedException : public __jni_impl::javax::net::ssl::SSLPeerUnverifiedException
	{
	public:
		SSLPeerUnverifiedException(QAndroidJniObject obj) { __thiz = obj; }
		SSLPeerUnverifiedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLPEERUNVERIFIEDEXCEPTION


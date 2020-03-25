#pragma once

#ifndef JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION
#define JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "SSLException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLHandshakeException : public __jni_impl::javax::net::ssl::SSLException
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
	void SSLHandshakeException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLHandshakeException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLHandshakeException : public __jni_impl::javax::net::ssl::SSLHandshakeException
	{
	public:
		SSLHandshakeException(QAndroidJniObject obj) { __thiz = obj; }
		SSLHandshakeException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLHANDSHAKEEXCEPTION


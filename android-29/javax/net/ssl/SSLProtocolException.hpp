#pragma once

#ifndef JAVAX_NET_SSL_SSLPROTOCOLEXCEPTION
#define JAVAX_NET_SSL_SSLPROTOCOLEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "SSLException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLProtocolException : public __jni_impl::javax::net::ssl::SSLException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLProtocolException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLProtocolException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLProtocolException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLProtocolException : public __jni_impl::javax::net::ssl::SSLProtocolException
	{
	public:
		SSLProtocolException(QAndroidJniObject obj) { __thiz = obj; }
		SSLProtocolException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLPROTOCOLEXCEPTION


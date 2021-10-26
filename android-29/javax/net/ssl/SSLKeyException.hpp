#pragma once

#ifndef JAVAX_NET_SSL_SSLKEYEXCEPTION
#define JAVAX_NET_SSL_SSLKEYEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "SSLException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLKeyException : public __jni_impl::javax::net::ssl::SSLException
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
	void SSLKeyException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SSLKeyException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLKeyException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLKeyException : public __jni_impl::javax::net::ssl::SSLKeyException
	{
	public:
		SSLKeyException(QAndroidJniObject obj) { __thiz = obj; }
		SSLKeyException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLKEYEXCEPTION


#pragma once

#ifndef JAVAX_NET_SSL_SSLEXCEPTION
#define JAVAX_NET_SSL_SSLEXCEPTION

#include "../../../java/io/IOException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::net::ssl


namespace __jni_impl::javax::net::ssl
{
	// Fields
	
	// Constructors
	void SSLException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SSLException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void SSLException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::net::ssl

namespace javax::net::ssl
{
	class SSLException : public __jni_impl::javax::net::ssl::SSLException
	{
	public:
		SSLException(QAndroidJniObject obj) { __thiz = obj; }
		SSLException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SSLException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		SSLException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::net::ssl

#endif // JAVAX_NET_SSL_SSLEXCEPTION


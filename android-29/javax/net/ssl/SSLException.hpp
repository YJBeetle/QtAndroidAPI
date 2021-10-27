#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"


namespace __jni_impl::javax::net::ssl
{
	class SSLException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(const QString &arg0, jthrowable arg1);
		
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
			arg0
		);
	}
	void SSLException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SSLException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	void SSLException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	void SSLException::__constructor(const QString &arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.SSLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
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
		SSLException(jthrowable arg0)
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
	};
} // namespace javax::net::ssl


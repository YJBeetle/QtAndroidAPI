#pragma once

#ifndef JAVA_NET_SOCKETTIMEOUTEXCEPTION
#define JAVA_NET_SOCKETTIMEOUTEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "../io/InterruptedIOException.hpp"


namespace __jni_impl::java::net
{
	class SocketTimeoutException : public __jni_impl::java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void SocketTimeoutException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"()V"
		);
	}
	void SocketTimeoutException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SocketTimeoutException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketTimeoutException : public __jni_impl::java::net::SocketTimeoutException
	{
	public:
		SocketTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
		SocketTimeoutException()
		{
			__constructor();
		}
		SocketTimeoutException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETTIMEOUTEXCEPTION


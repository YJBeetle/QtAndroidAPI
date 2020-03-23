#pragma once

#ifndef JAVA_NET_SOCKETTIMEOUTEXCEPTION
#define JAVA_NET_SOCKETTIMEOUTEXCEPTION

#include "../io/InterruptedIOException.hpp"


namespace __jni_impl::java::net
{
	class SocketTimeoutException : public __jni_impl::java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void SocketTimeoutException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SocketTimeoutException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketTimeoutException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketTimeoutException : public __jni_impl::java::net::SocketTimeoutException
	{
	public:
		SocketTimeoutException(QAndroidJniObject obj) { __thiz = obj; }
		SocketTimeoutException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SocketTimeoutException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETTIMEOUTEXCEPTION


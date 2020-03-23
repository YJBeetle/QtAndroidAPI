#pragma once

#ifndef JAVA_NET_CONNECTEXCEPTION
#define JAVA_NET_CONNECTEXCEPTION

#include "SocketException.hpp"


namespace __jni_impl::java::net
{
	class ConnectException : public __jni_impl::java::net::SocketException
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
	void ConnectException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ConnectException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ConnectException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class ConnectException : public __jni_impl::java::net::ConnectException
	{
	public:
		ConnectException(QAndroidJniObject obj) { __thiz = obj; }
		ConnectException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ConnectException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_CONNECTEXCEPTION


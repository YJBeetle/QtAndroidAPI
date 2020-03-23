#pragma once

#ifndef JAVA_NET_SOCKETEXCEPTION
#define JAVA_NET_SOCKETEXCEPTION

#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class SocketException : public __jni_impl::java::io::IOException
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
	void SocketException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void SocketException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketException : public __jni_impl::java::net::SocketException
	{
	public:
		SocketException(QAndroidJniObject obj) { __thiz = obj; }
		SocketException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		SocketException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETEXCEPTION


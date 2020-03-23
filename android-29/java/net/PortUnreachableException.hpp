#pragma once

#ifndef JAVA_NET_PORTUNREACHABLEEXCEPTION
#define JAVA_NET_PORTUNREACHABLEEXCEPTION

#include "SocketException.hpp"


namespace __jni_impl::java::net
{
	class PortUnreachableException : public __jni_impl::java::net::SocketException
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
	void PortUnreachableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PortUnreachableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class PortUnreachableException : public __jni_impl::java::net::PortUnreachableException
	{
	public:
		PortUnreachableException(QAndroidJniObject obj) { __thiz = obj; }
		PortUnreachableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		PortUnreachableException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_PORTUNREACHABLEEXCEPTION


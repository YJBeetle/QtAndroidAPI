#pragma once

#ifndef JAVA_NET_NOROUTETOHOSTEXCEPTION
#define JAVA_NET_NOROUTETOHOSTEXCEPTION

#include "SocketException.hpp"


namespace __jni_impl::java::net
{
	class NoRouteToHostException : public __jni_impl::java::net::SocketException
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
	void NoRouteToHostException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void NoRouteToHostException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class NoRouteToHostException : public __jni_impl::java::net::NoRouteToHostException
	{
	public:
		NoRouteToHostException(QAndroidJniObject obj) { __thiz = obj; }
		NoRouteToHostException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NoRouteToHostException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_NOROUTETOHOSTEXCEPTION


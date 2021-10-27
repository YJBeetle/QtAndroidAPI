#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace __jni_impl::java::net
{
	class NoRouteToHostException : public __jni_impl::java::net::SocketException
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
	void NoRouteToHostException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"()V"
		);
	}
	void NoRouteToHostException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NoRouteToHostException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.NoRouteToHostException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class NoRouteToHostException : public __jni_impl::java::net::NoRouteToHostException
	{
	public:
		NoRouteToHostException(QAndroidJniObject obj) { __thiz = obj; }
		NoRouteToHostException()
		{
			__constructor();
		}
		NoRouteToHostException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net


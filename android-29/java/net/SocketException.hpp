#pragma once

#ifndef JAVA_NET_SOCKETEXCEPTION
#define JAVA_NET_SOCKETEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class SocketException : public __jni_impl::java::io::IOException
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
	void SocketException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"()V"
		);
	}
	void SocketException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SocketException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.SocketException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class SocketException : public __jni_impl::java::net::SocketException
	{
	public:
		SocketException(QAndroidJniObject obj) { __thiz = obj; }
		SocketException()
		{
			__constructor();
		}
		SocketException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_SOCKETEXCEPTION


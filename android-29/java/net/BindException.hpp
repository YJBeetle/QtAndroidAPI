#pragma once

#ifndef JAVA_NET_BINDEXCEPTION
#define JAVA_NET_BINDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "SocketException.hpp"


namespace __jni_impl::java::net
{
	class BindException : public __jni_impl::java::net::SocketException
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
	void BindException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"()V"
		);
	}
	void BindException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BindException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.BindException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class BindException : public __jni_impl::java::net::BindException
	{
	public:
		BindException(QAndroidJniObject obj) { __thiz = obj; }
		BindException()
		{
			__constructor();
		}
		BindException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_BINDEXCEPTION


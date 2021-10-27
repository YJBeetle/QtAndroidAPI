#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "SocketException.hpp"


namespace __jni_impl::java::net
{
	class PortUnreachableException : public __jni_impl::java::net::SocketException
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
	void PortUnreachableException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"()V"
		);
	}
	void PortUnreachableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PortUnreachableException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.PortUnreachableException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class PortUnreachableException : public __jni_impl::java::net::PortUnreachableException
	{
	public:
		PortUnreachableException(QAndroidJniObject obj) { __thiz = obj; }
		PortUnreachableException()
		{
			__constructor();
		}
		PortUnreachableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net


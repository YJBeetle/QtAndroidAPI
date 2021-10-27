#pragma once

#ifndef JAVA_NET_PROTOCOLEXCEPTION
#define JAVA_NET_PROTOCOLEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class ProtocolException : public __jni_impl::java::io::IOException
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
	void ProtocolException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"()V"
		);
	}
	void ProtocolException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ProtocolException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class ProtocolException : public __jni_impl::java::net::ProtocolException
	{
	public:
		ProtocolException(QAndroidJniObject obj) { __thiz = obj; }
		ProtocolException()
		{
			__constructor();
		}
		ProtocolException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_PROTOCOLEXCEPTION


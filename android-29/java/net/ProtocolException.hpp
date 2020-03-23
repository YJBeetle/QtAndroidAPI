#pragma once

#ifndef JAVA_NET_PROTOCOLEXCEPTION
#define JAVA_NET_PROTOCOLEXCEPTION

#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class ProtocolException : public __jni_impl::java::io::IOException
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
	void ProtocolException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ProtocolException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.ProtocolException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class ProtocolException : public __jni_impl::java::net::ProtocolException
	{
	public:
		ProtocolException(QAndroidJniObject obj) { __thiz = obj; }
		ProtocolException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ProtocolException()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_PROTOCOLEXCEPTION


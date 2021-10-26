#pragma once

#ifndef JAVA_NET_UNKNOWNSERVICEEXCEPTION
#define JAVA_NET_UNKNOWNSERVICEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class UnknownServiceException : public __jni_impl::java::io::IOException
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
	void UnknownServiceException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownServiceException",
			"()V"
		);
	}
	void UnknownServiceException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownServiceException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnknownServiceException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownServiceException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class UnknownServiceException : public __jni_impl::java::net::UnknownServiceException
	{
	public:
		UnknownServiceException(QAndroidJniObject obj) { __thiz = obj; }
		UnknownServiceException()
		{
			__constructor();
		}
		UnknownServiceException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_UNKNOWNSERVICEEXCEPTION


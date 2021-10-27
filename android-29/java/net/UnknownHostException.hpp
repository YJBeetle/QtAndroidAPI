#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class UnknownHostException : public __jni_impl::java::io::IOException
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
	void UnknownHostException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownHostException",
			"()V"
		);
	}
	void UnknownHostException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnknownHostException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.UnknownHostException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class UnknownHostException : public __jni_impl::java::net::UnknownHostException
	{
	public:
		UnknownHostException(QAndroidJniObject obj) { __thiz = obj; }
		UnknownHostException()
		{
			__constructor();
		}
		UnknownHostException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net


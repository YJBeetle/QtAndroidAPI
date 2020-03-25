#pragma once

#ifndef JAVA_NET_MALFORMEDURLEXCEPTION
#define JAVA_NET_MALFORMEDURLEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace __jni_impl::java::net
{
	class MalformedURLException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::net


namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void MalformedURLException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.MalformedURLException",
			"()V");
	}
	void MalformedURLException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.MalformedURLException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::net

namespace java::net
{
	class MalformedURLException : public __jni_impl::java::net::MalformedURLException
	{
	public:
		MalformedURLException(QAndroidJniObject obj) { __thiz = obj; }
		MalformedURLException()
		{
			__constructor();
		}
		MalformedURLException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::net

#endif // JAVA_NET_MALFORMEDURLEXCEPTION


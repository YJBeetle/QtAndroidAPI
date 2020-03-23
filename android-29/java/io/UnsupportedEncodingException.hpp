#pragma once

#ifndef JAVA_IO_UNSUPPORTEDENCODINGEXCEPTION
#define JAVA_IO_UNSUPPORTEDENCODINGEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class UnsupportedEncodingException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void UnsupportedEncodingException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.UnsupportedEncodingException",
			"()V");
	}
	void UnsupportedEncodingException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UnsupportedEncodingException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class UnsupportedEncodingException : public __jni_impl::java::io::UnsupportedEncodingException
	{
	public:
		UnsupportedEncodingException(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedEncodingException()
		{
			__constructor();
		}
		UnsupportedEncodingException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_UNSUPPORTEDENCODINGEXCEPTION


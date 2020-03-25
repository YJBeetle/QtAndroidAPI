#pragma once

#ifndef JAVA_IO_INTERRUPTEDIOEXCEPTION
#define JAVA_IO_INTERRUPTEDIOEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class InterruptedIOException : public __jni_impl::java::io::IOException
	{
	public:
		// Fields
		jint bytesTransferred();
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	jint InterruptedIOException::bytesTransferred()
	{
		return __thiz.getField<jint>(
			"bytesTransferred");
	}
	
	// Constructors
	void InterruptedIOException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.InterruptedIOException",
			"()V");
	}
	void InterruptedIOException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InterruptedIOException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class InterruptedIOException : public __jni_impl::java::io::InterruptedIOException
	{
	public:
		InterruptedIOException(QAndroidJniObject obj) { __thiz = obj; }
		InterruptedIOException()
		{
			__constructor();
		}
		InterruptedIOException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_INTERRUPTEDIOEXCEPTION


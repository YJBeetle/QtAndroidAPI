#pragma once

#ifndef JAVA_IO_UNCHECKEDIOEXCEPTION
#define JAVA_IO_UNCHECKEDIOEXCEPTION

#include "../lang/RuntimeException.hpp"

namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}

namespace __jni_impl::java::io
{
	class UncheckedIOException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::io::IOException arg1);
		void __constructor(__jni_impl::java::io::IOException arg0);
		
		// Methods
		QAndroidJniObject getCause();
	};
} // namespace __jni_impl::java::io

#include "IOException.hpp"
#include "ObjectInputStream.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void UncheckedIOException::__constructor(jstring arg0, __jni_impl::java::io::IOException arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.UncheckedIOException",
			"(Ljava/lang/String;Ljava/io/IOException;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void UncheckedIOException::__constructor(__jni_impl::java::io::IOException arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UncheckedIOException",
			"(Ljava/io/IOException;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject UncheckedIOException::getCause()
	{
		return __thiz.callObjectMethod(
			"getCause",
			"()Ljava/io/IOException;");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class UncheckedIOException : public __jni_impl::java::io::UncheckedIOException
	{
	public:
		UncheckedIOException(QAndroidJniObject obj) { __thiz = obj; }
		UncheckedIOException(jstring arg0, __jni_impl::java::io::IOException arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		UncheckedIOException(__jni_impl::java::io::IOException arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_UNCHECKEDIOEXCEPTION


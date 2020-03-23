#pragma once

#ifndef JAVA_IO_EOFEXCEPTION
#define JAVA_IO_EOFEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class EOFException : public __jni_impl::java::io::IOException
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
	void EOFException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.EOFException",
			"()V");
	}
	void EOFException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.EOFException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class EOFException : public __jni_impl::java::io::EOFException
	{
	public:
		EOFException(QAndroidJniObject obj) { __thiz = obj; }
		EOFException()
		{
			__constructor();
		}
		EOFException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_EOFEXCEPTION


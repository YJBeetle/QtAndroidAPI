#pragma once

#ifndef JAVA_IO_UTFDATAFORMATEXCEPTION
#define JAVA_IO_UTFDATAFORMATEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class UTFDataFormatException : public __jni_impl::java::io::IOException
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
	void UTFDataFormatException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.UTFDataFormatException",
			"()V");
	}
	void UTFDataFormatException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.UTFDataFormatException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class UTFDataFormatException : public __jni_impl::java::io::UTFDataFormatException
	{
	public:
		UTFDataFormatException(QAndroidJniObject obj) { __thiz = obj; }
		UTFDataFormatException()
		{
			__constructor();
		}
		UTFDataFormatException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_UTFDATAFORMATEXCEPTION


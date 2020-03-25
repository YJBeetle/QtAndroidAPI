#pragma once

#ifndef JAVA_IO_IOEXCEPTION
#define JAVA_IO_IOEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace __jni_impl::java::io
{
	class IOException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void IOException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void IOException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void IOException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void IOException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.IOException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class IOException : public __jni_impl::java::io::IOException
	{
	public:
		IOException(QAndroidJniObject obj) { __thiz = obj; }
		IOException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		IOException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IOException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		IOException()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_IOEXCEPTION


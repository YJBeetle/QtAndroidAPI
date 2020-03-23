#pragma once

#ifndef JAVA_IO_FILENOTFOUNDEXCEPTION
#define JAVA_IO_FILENOTFOUNDEXCEPTION

#include "IOException.hpp"


namespace __jni_impl::java::io
{
	class FileNotFoundException : public __jni_impl::java::io::IOException
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
	void FileNotFoundException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FileNotFoundException",
			"()V");
	}
	void FileNotFoundException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.FileNotFoundException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::io

namespace java::io
{
	class FileNotFoundException : public __jni_impl::java::io::FileNotFoundException
	{
	public:
		FileNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
		FileNotFoundException()
		{
			__constructor();
		}
		FileNotFoundException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILENOTFOUNDEXCEPTION


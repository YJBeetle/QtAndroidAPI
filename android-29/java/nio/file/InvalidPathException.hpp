#pragma once

#ifndef JAVA_NIO_FILE_INVALIDPATHEXCEPTION
#define JAVA_NIO_FILE_INVALIDPATHEXCEPTION

#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::file
{
	class InvalidPathException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getMessage();
		jint getIndex();
		QAndroidJniObject getReason();
		QAndroidJniObject getInput();
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void InvalidPathException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2);
	}
	void InvalidPathException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject InvalidPathException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	jint InvalidPathException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	QAndroidJniObject InvalidPathException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject InvalidPathException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class InvalidPathException : public __jni_impl::java::nio::file::InvalidPathException
	{
	public:
		InvalidPathException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidPathException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		InvalidPathException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_INVALIDPATHEXCEPTION


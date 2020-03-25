#pragma once

#ifndef JAVA_IO_INVALIDCLASSEXCEPTION
#define JAVA_IO_INVALIDCLASSEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "IOException.hpp"
#include "ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class InvalidClassException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		QAndroidJniObject classname();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getMessage();
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	QAndroidJniObject InvalidClassException::classname()
	{
		return __thiz.getObjectField(
			"classname",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void InvalidClassException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void InvalidClassException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	QAndroidJniObject InvalidClassException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class InvalidClassException : public __jni_impl::java::io::InvalidClassException
	{
	public:
		InvalidClassException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidClassException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		InvalidClassException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::io

#endif // JAVA_IO_INVALIDCLASSEXCEPTION


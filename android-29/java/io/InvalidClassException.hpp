#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace __jni_impl::java::io
{
	class InvalidClassException : public __jni_impl::java::io::ObjectStreamException
	{
	public:
		// Fields
		jstring classname();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		
		// Methods
		jstring getMessage();
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	jstring InvalidClassException::classname()
	{
		return __thiz.getObjectField(
			"classname",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void InvalidClassException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void InvalidClassException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void InvalidClassException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void InvalidClassException::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jstring InvalidClassException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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


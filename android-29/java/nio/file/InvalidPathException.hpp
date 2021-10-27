#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace __jni_impl::java::nio::file
{
	class InvalidPathException : public __jni_impl::java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1, jint arg2);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2);
		
		// Methods
		jint getIndex();
		jstring getInput();
		jstring getMessage();
		jstring getReason();
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void InvalidPathException::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void InvalidPathException::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void InvalidPathException::__constructor(jstring arg0, jstring arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void InvalidPathException::__constructor(const QString &arg0, const QString &arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	
	// Methods
	jint InvalidPathException::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring InvalidPathException::getInput()
	{
		return __thiz.callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InvalidPathException::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class InvalidPathException : public __jni_impl::java::nio::file::InvalidPathException
	{
	public:
		InvalidPathException(QAndroidJniObject obj) { __thiz = obj; }
		InvalidPathException(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InvalidPathException(jstring arg0, jstring arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file


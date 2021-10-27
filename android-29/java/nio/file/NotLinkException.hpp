#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class NotLinkException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void NotLinkException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotLinkException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void NotLinkException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NotLinkException::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotLinkException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class NotLinkException : public __jni_impl::java::nio::file::NotLinkException
	{
	public:
		NotLinkException(QAndroidJniObject obj) { __thiz = obj; }
		NotLinkException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		NotLinkException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::nio::file


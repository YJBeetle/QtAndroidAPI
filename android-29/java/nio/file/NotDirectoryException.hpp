#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class NotDirectoryException : public __jni_impl::java::nio::file::FileSystemException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void NotDirectoryException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void NotDirectoryException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.NotDirectoryException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class NotDirectoryException : public __jni_impl::java::nio::file::NotDirectoryException
	{
	public:
		NotDirectoryException(QAndroidJniObject obj) { __thiz = obj; }
		NotDirectoryException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file


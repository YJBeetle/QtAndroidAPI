#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./FileSystemException.hpp"


namespace __jni_impl::java::nio::file
{
	class FileSystemLoopException : public __jni_impl::java::nio::file::FileSystemException
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
	void FileSystemLoopException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FileSystemLoopException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystemLoopException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystemLoopException : public __jni_impl::java::nio::file::FileSystemLoopException
	{
	public:
		FileSystemLoopException(QAndroidJniObject obj) { __thiz = obj; }
		FileSystemLoopException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::nio::file


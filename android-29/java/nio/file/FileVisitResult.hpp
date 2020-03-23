#pragma once

#ifndef JAVA_NIO_FILE_FILEVISITRESULT
#define JAVA_NIO_FILE_FILEVISITRESULT

#include "../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file
{
	class FileVisitResult : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CONTINUE();
		static QAndroidJniObject TERMINATE();
		static QAndroidJniObject SKIP_SUBTREE();
		static QAndroidJniObject SKIP_SIBLINGS();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	QAndroidJniObject FileVisitResult::CONTINUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"CONTINUE",
			"Ljava/nio/file/FileVisitResult;");
	}
	QAndroidJniObject FileVisitResult::TERMINATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"TERMINATE",
			"Ljava/nio/file/FileVisitResult;");
	}
	QAndroidJniObject FileVisitResult::SKIP_SUBTREE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SUBTREE",
			"Ljava/nio/file/FileVisitResult;");
	}
	QAndroidJniObject FileVisitResult::SKIP_SIBLINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.FileVisitResult",
			"SKIP_SIBLINGS",
			"Ljava/nio/file/FileVisitResult;");
	}
	
	// Constructors
	void FileVisitResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileVisitResult",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileVisitResult::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"values",
			"()[Ljava/nio/file/FileVisitResult;");
	}
	QAndroidJniObject FileVisitResult::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileVisitResult",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/FileVisitResult;",
			arg0);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileVisitResult : public __jni_impl::java::nio::file::FileVisitResult
	{
	public:
		FileVisitResult(QAndroidJniObject obj) { __thiz = obj; }
		FileVisitResult()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILEVISITRESULT


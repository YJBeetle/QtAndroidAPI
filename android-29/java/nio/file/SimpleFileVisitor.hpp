#pragma once

#ifndef JAVA_NIO_FILE_SIMPLEFILEVISITOR
#define JAVA_NIO_FILE_SIMPLEFILEVISITOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::nio::file
{
	class FileVisitResult;
}

namespace __jni_impl::java::nio::file
{
	class SimpleFileVisitor : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject postVisitDirectory(jobject arg0, __jni_impl::java::io::IOException arg1);
		QAndroidJniObject preVisitDirectory(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject visitFile(jobject arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject visitFileFailed(jobject arg0, __jni_impl::java::io::IOException arg1);
	};
} // namespace __jni_impl::java::nio::file

#include "../../io/IOException.hpp"
#include "FileVisitResult.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void SimpleFileVisitor::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.SimpleFileVisitor",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SimpleFileVisitor::postVisitDirectory(jobject arg0, __jni_impl::java::io::IOException arg1)
	{
		return __thiz.callObjectMethod(
			"postVisitDirectory",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::preVisitDirectory(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"preVisitDirectory",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::visitFile(jobject arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"visitFile",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::visitFileFailed(jobject arg0, __jni_impl::java::io::IOException arg1)
	{
		return __thiz.callObjectMethod(
			"visitFileFailed",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class SimpleFileVisitor : public __jni_impl::java::nio::file::SimpleFileVisitor
	{
	public:
		SimpleFileVisitor(QAndroidJniObject obj) { __thiz = obj; }
		SimpleFileVisitor()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_SIMPLEFILEVISITOR


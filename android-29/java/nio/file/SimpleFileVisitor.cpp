#include "../../io/IOException.hpp"
#include "./FileVisitResult.hpp"
#include "./SimpleFileVisitor.hpp"

namespace java::nio::file
{
	// Fields
	
	SimpleFileVisitor::SimpleFileVisitor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SimpleFileVisitor::postVisitDirectory(jobject arg0, java::io::IOException arg1)
	{
		return __thiz.callObjectMethod(
			"postVisitDirectory",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::preVisitDirectory(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"preVisitDirectory",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::visitFile(jobject arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"visitFile",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SimpleFileVisitor::visitFileFailed(jobject arg0, java::io::IOException arg1)
	{
		return __thiz.callObjectMethod(
			"visitFileFailed",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace java::nio::file


#include "../../io/IOException.hpp"
#include "../../../JObject.hpp"
#include "./FileVisitResult.hpp"
#include "./SimpleFileVisitor.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	SimpleFileVisitor::SimpleFileVisitor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::FileVisitResult SimpleFileVisitor::postVisitDirectory(JObject arg0, java::io::IOException arg1)
	{
		return callObjectMethod(
			"postVisitDirectory",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	java::nio::file::FileVisitResult SimpleFileVisitor::preVisitDirectory(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"preVisitDirectory",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	java::nio::file::FileVisitResult SimpleFileVisitor::visitFile(JObject arg0, JObject arg1)
	{
		return callObjectMethod(
			"visitFile",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	java::nio::file::FileVisitResult SimpleFileVisitor::visitFileFailed(JObject arg0, java::io::IOException arg1)
	{
		return callObjectMethod(
			"visitFileFailed",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
} // namespace java::nio::file


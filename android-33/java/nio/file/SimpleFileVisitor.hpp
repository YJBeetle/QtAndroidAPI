#pragma once

#include "../../io/IOException.def.hpp"
#include "../../../JObject.hpp"
#include "./FileVisitResult.def.hpp"
#include "./SimpleFileVisitor.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::file::FileVisitResult SimpleFileVisitor::postVisitDirectory(JObject arg0, java::io::IOException arg1) const
	{
		return callObjectMethod(
			"postVisitDirectory",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline java::nio::file::FileVisitResult SimpleFileVisitor::preVisitDirectory(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"preVisitDirectory",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline java::nio::file::FileVisitResult SimpleFileVisitor::visitFile(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"visitFile",
			"(Ljava/lang/Object;Ljava/nio/file/attribute/BasicFileAttributes;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline java::nio::file::FileVisitResult SimpleFileVisitor::visitFileFailed(JObject arg0, java::io::IOException arg1) const
	{
		return callObjectMethod(
			"visitFileFailed",
			"(Ljava/lang/Object;Ljava/io/IOException;)Ljava/nio/file/FileVisitResult;",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
} // namespace java::nio::file

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif

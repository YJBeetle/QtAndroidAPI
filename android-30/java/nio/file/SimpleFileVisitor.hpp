#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class IOException;
}
namespace java::nio::file
{
	class FileVisitResult;
}

namespace java::nio::file
{
	class SimpleFileVisitor : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleFileVisitor(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFileVisitor(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::FileVisitResult postVisitDirectory(jobject arg0, java::io::IOException arg1);
		java::nio::file::FileVisitResult preVisitDirectory(jobject arg0, __JniBaseClass arg1);
		java::nio::file::FileVisitResult visitFile(jobject arg0, __JniBaseClass arg1);
		java::nio::file::FileVisitResult visitFileFailed(jobject arg0, java::io::IOException arg1);
	};
} // namespace java::nio::file


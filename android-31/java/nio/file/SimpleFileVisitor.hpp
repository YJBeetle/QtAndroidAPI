#pragma once

#include "../../../JObject.hpp"

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
	class SimpleFileVisitor : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleFileVisitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFileVisitor(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::file::FileVisitResult postVisitDirectory(jobject arg0, java::io::IOException arg1);
		java::nio::file::FileVisitResult preVisitDirectory(jobject arg0, JObject arg1);
		java::nio::file::FileVisitResult visitFile(jobject arg0, JObject arg1);
		java::nio::file::FileVisitResult visitFileFailed(jobject arg0, java::io::IOException arg1);
	};
} // namespace java::nio::file


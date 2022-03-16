#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class IOException;
}
class JObject;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleFileVisitor(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFileVisitor(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::nio::file::FileVisitResult postVisitDirectory(JObject arg0, java::io::IOException arg1) const;
		java::nio::file::FileVisitResult preVisitDirectory(JObject arg0, JObject arg1) const;
		java::nio::file::FileVisitResult visitFile(JObject arg0, JObject arg1) const;
		java::nio::file::FileVisitResult visitFileFailed(JObject arg0, java::io::IOException arg1) const;
	};
} // namespace java::nio::file


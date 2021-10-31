#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::file::attribute
{
	class UserPrincipalLookupService;
}
namespace java::nio::file::spi
{
	class FileSystemProvider;
}

namespace java::nio::file
{
	class FileSystem : public __JniBaseClass
	{
	public:
		// Fields
		
		FileSystem(QAndroidJniObject obj);
		// Constructors
		FileSystem() = default;
		
		// Methods
		void close();
		QAndroidJniObject getFileStores();
		QAndroidJniObject getPath(jstring arg0, jarray arg1);
		QAndroidJniObject getPathMatcher(jstring arg0);
		QAndroidJniObject getRootDirectories();
		jstring getSeparator();
		QAndroidJniObject getUserPrincipalLookupService();
		jboolean isOpen();
		jboolean isReadOnly();
		QAndroidJniObject newWatchService();
		QAndroidJniObject provider();
		QAndroidJniObject supportedFileAttributeViews();
	};
} // namespace java::nio::file


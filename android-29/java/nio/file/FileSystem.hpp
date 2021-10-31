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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystem(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileSystem(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		__JniBaseClass getFileStores();
		__JniBaseClass getPath(jstring arg0, jarray arg1);
		__JniBaseClass getPathMatcher(jstring arg0);
		__JniBaseClass getRootDirectories();
		jstring getSeparator();
		java::nio::file::attribute::UserPrincipalLookupService getUserPrincipalLookupService();
		jboolean isOpen();
		jboolean isReadOnly();
		__JniBaseClass newWatchService();
		java::nio::file::spi::FileSystemProvider provider();
		__JniBaseClass supportedFileAttributeViews();
	};
} // namespace java::nio::file


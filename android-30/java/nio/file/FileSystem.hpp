#pragma once

#include "../../../JObject.hpp"

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
	class FileSystem : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystem(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		JObject getFileStores();
		JObject getPath(jstring arg0, jarray arg1);
		JObject getPathMatcher(jstring arg0);
		JObject getRootDirectories();
		jstring getSeparator();
		java::nio::file::attribute::UserPrincipalLookupService getUserPrincipalLookupService();
		jboolean isOpen();
		jboolean isReadOnly();
		JObject newWatchService();
		java::nio::file::spi::FileSystemProvider provider();
		JObject supportedFileAttributeViews();
	};
} // namespace java::nio::file


#pragma once

#include "../../../JObject.hpp"

class JArray;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystem(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		JObject getFileStores();
		JObject getPath(JString arg0, JArray arg1);
		JObject getPathMatcher(JString arg0);
		JObject getRootDirectories();
		JString getSeparator();
		java::nio::file::attribute::UserPrincipalLookupService getUserPrincipalLookupService();
		jboolean isOpen();
		jboolean isReadOnly();
		JObject newWatchService();
		java::nio::file::spi::FileSystemProvider provider();
		JObject supportedFileAttributeViews();
	};
} // namespace java::nio::file


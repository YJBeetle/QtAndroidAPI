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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystem(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystem(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		JObject getFileStores() const;
		JObject getPath(JString arg0, JArray arg1) const;
		JObject getPathMatcher(JString arg0) const;
		JObject getRootDirectories() const;
		JString getSeparator() const;
		java::nio::file::attribute::UserPrincipalLookupService getUserPrincipalLookupService() const;
		jboolean isOpen() const;
		jboolean isReadOnly() const;
		JObject newWatchService() const;
		java::nio::file::spi::FileSystemProvider provider() const;
		JObject supportedFileAttributeViews() const;
	};
} // namespace java::nio::file


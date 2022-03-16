#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./attribute/UserPrincipalLookupService.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./FileSystem.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	void FileSystem::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	JObject FileSystem::getFileStores() const
	{
		return callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	JObject FileSystem::getPath(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject FileSystem::getPathMatcher(JString arg0) const
	{
		return callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0.object<jstring>()
		);
	}
	JObject FileSystem::getRootDirectories() const
	{
		return callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	JString FileSystem::getSeparator() const
	{
		return callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		);
	}
	java::nio::file::attribute::UserPrincipalLookupService FileSystem::getUserPrincipalLookupService() const
	{
		return callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jboolean FileSystem::isOpen() const
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean FileSystem::isReadOnly() const
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	JObject FileSystem::newWatchService() const
	{
		return callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	java::nio::file::spi::FileSystemProvider FileSystem::provider() const
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	JObject FileSystem::supportedFileAttributeViews() const
	{
		return callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::nio::file


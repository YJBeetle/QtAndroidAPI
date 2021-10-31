#include "./attribute/UserPrincipalLookupService.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./FileSystem.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileSystem::FileSystem(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void FileSystem::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileSystem::getFileStores()
	{
		return callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject FileSystem::getPath(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FileSystem::getPathMatcher(jstring arg0)
	{
		return callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0
		);
	}
	QAndroidJniObject FileSystem::getRootDirectories()
	{
		return callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	jstring FileSystem::getSeparator()
	{
		return callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FileSystem::getUserPrincipalLookupService()
	{
		return callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jboolean FileSystem::isOpen()
	{
		return callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean FileSystem::isReadOnly()
	{
		return callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	QAndroidJniObject FileSystem::newWatchService()
	{
		return callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	QAndroidJniObject FileSystem::provider()
	{
		return callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	QAndroidJniObject FileSystem::supportedFileAttributeViews()
	{
		return callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::nio::file


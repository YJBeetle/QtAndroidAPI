#include "./attribute/UserPrincipalLookupService.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./FileSystem.hpp"

namespace java::nio::file
{
	// Fields
	
	FileSystem::FileSystem(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void FileSystem::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileSystem::getFileStores()
	{
		return __thiz.callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject FileSystem::getPath(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FileSystem::getPathMatcher(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0
		);
	}
	QAndroidJniObject FileSystem::getRootDirectories()
	{
		return __thiz.callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	jstring FileSystem::getSeparator()
	{
		return __thiz.callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FileSystem::getUserPrincipalLookupService()
	{
		return __thiz.callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jboolean FileSystem::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean FileSystem::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	QAndroidJniObject FileSystem::newWatchService()
	{
		return __thiz.callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	QAndroidJniObject FileSystem::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	QAndroidJniObject FileSystem::supportedFileAttributeViews()
	{
		return __thiz.callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
} // namespace java::nio::file


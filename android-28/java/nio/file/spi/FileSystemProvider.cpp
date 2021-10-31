#include "../../../io/InputStream.hpp"
#include "../../../io/OutputStream.hpp"
#include "../../../lang/Void.hpp"
#include "../../../net/URI.hpp"
#include "../../channels/AsynchronousFileChannel.hpp"
#include "../../channels/FileChannel.hpp"
#include "../FileStore.hpp"
#include "../FileSystem.hpp"
#include "./FileSystemProvider.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	// QJniObject forward
	FileSystemProvider::FileSystemProvider(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass FileSystemProvider::installedProviders()
	{
		return callStaticObjectMethod(
			"java.nio.file.spi.FileSystemProvider",
			"installedProviders",
			"()Ljava/util/List;"
		);
	}
	void FileSystemProvider::checkAccess(__JniBaseClass arg0, jarray arg1)
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V",
			arg0.object(),
			arg1
		);
	}
	void FileSystemProvider::copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		callMethod<void>(
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void FileSystemProvider::createDirectory(__JniBaseClass arg0, jarray arg1)
	{
		callMethod<void>(
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.object(),
			arg1
		);
	}
	void FileSystemProvider::createLink(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FileSystemProvider::createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		callMethod<void>(
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	void FileSystemProvider::_delete(__JniBaseClass arg0)
	{
		callMethod<void>(
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.object()
		);
	}
	jboolean FileSystemProvider::deleteIfExists(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	__JniBaseClass FileSystemProvider::getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return callObjectMethod(
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::nio::file::FileStore FileSystemProvider::getFileStore(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.object()
		);
	}
	java::nio::file::FileSystem FileSystemProvider::getFileSystem(java::net::URI arg0)
	{
		return callObjectMethod(
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.object()
		);
	}
	__JniBaseClass FileSystemProvider::getPath(java::net::URI arg0)
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	jstring FileSystemProvider::getScheme()
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileSystemProvider::isHidden(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean FileSystemProvider::isSameFile(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callMethod<jboolean>(
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void FileSystemProvider::move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		callMethod<void>(
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::nio::channels::AsynchronousFileChannel FileSystemProvider::newAsynchronousFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3)
	{
		return callObjectMethod(
			"newAsynchronousFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	__JniBaseClass FileSystemProvider::newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return callObjectMethod(
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass FileSystemProvider::newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::channels::FileChannel FileSystemProvider::newFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return callObjectMethod(
			"newFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::nio::file::FileSystem FileSystemProvider::newFileSystem(java::net::URI arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::file::FileSystem FileSystemProvider::newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::InputStream FileSystemProvider::newInputStream(__JniBaseClass arg0, jarray arg1)
	{
		return callObjectMethod(
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.object(),
			arg1
		);
	}
	java::io::OutputStream FileSystemProvider::newOutputStream(__JniBaseClass arg0, jarray arg1)
	{
		return callObjectMethod(
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass FileSystemProvider::readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass FileSystemProvider::readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass FileSystemProvider::readSymbolicLink(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	void FileSystemProvider::setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3)
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace java::nio::file::spi


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
	
	FileSystemProvider::FileSystemProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FileSystemProvider::installedProviders()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.spi.FileSystemProvider",
			"installedProviders",
			"()Ljava/util/List;"
		);
	}
	void FileSystemProvider::checkAccess(__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FileSystemProvider::copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FileSystemProvider::createDirectory(__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FileSystemProvider::createLink(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FileSystemProvider::createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FileSystemProvider::_delete(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean FileSystemProvider::deleteIfExists(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::getFileStore(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::getFileSystem(java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::getPath(java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	jstring FileSystemProvider::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileSystemProvider::isHidden(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean FileSystemProvider::isSameFile(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void FileSystemProvider::move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::newAsynchronousFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3)
	{
		return __thiz.callObjectMethod(
			"newAsynchronousFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject FileSystemProvider::newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"newFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::newFileSystem(java::net::URI arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newInputStream(__JniBaseClass arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileSystemProvider::newOutputStream(__JniBaseClass arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::readSymbolicLink(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	void FileSystemProvider::setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void FileSystemProvider::setAttribute(__JniBaseClass arg0, const QString &arg1, jobject arg2, jarray arg3)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
} // namespace java::nio::file::spi


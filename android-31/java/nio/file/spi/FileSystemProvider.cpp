#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../io/InputStream.hpp"
#include "../../../io/OutputStream.hpp"
#include "../../../../JClass.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
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
	FileSystemProvider::FileSystemProvider(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject FileSystemProvider::installedProviders()
	{
		return callStaticObjectMethod(
			"java.nio.file.spi.FileSystemProvider",
			"installedProviders",
			"()Ljava/util/List;"
		);
	}
	void FileSystemProvider::checkAccess(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void FileSystemProvider::copy(JObject arg0, JObject arg1, JArray arg2) const
	{
		callMethod<void>(
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	void FileSystemProvider::createDirectory(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	void FileSystemProvider::createLink(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void FileSystemProvider::createSymbolicLink(JObject arg0, JObject arg1, JArray arg2) const
	{
		callMethod<void>(
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	void FileSystemProvider::delete_(JObject arg0) const
	{
		callMethod<void>(
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.object()
		);
	}
	jboolean FileSystemProvider::deleteIfExists(JObject arg0) const
	{
		return callMethod<jboolean>(
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	JObject FileSystemProvider::getFileAttributeView(JObject arg0, JClass arg1, JArray arg2) const
	{
		return callObjectMethod(
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object<jarray>()
		);
	}
	java::nio::file::FileStore FileSystemProvider::getFileStore(JObject arg0) const
	{
		return callObjectMethod(
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.object()
		);
	}
	java::nio::file::FileSystem FileSystemProvider::getFileSystem(java::net::URI arg0) const
	{
		return callObjectMethod(
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.object()
		);
	}
	JObject FileSystemProvider::getPath(java::net::URI arg0) const
	{
		return callObjectMethod(
			"getPath",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	JString FileSystemProvider::getScheme() const
	{
		return callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		);
	}
	jboolean FileSystemProvider::isHidden(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean FileSystemProvider::isSameFile(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	void FileSystemProvider::move(JObject arg0, JObject arg1, JArray arg2) const
	{
		callMethod<void>(
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	java::nio::channels::AsynchronousFileChannel FileSystemProvider::newAsynchronousFileChannel(JObject arg0, JObject arg1, JObject arg2, JArray arg3) const
	{
		return callObjectMethod(
			"newAsynchronousFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	JObject FileSystemProvider::newByteChannel(JObject arg0, JObject arg1, JArray arg2) const
	{
		return callObjectMethod(
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject FileSystemProvider::newDirectoryStream(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::channels::FileChannel FileSystemProvider::newFileChannel(JObject arg0, JObject arg1, JArray arg2) const
	{
		return callObjectMethod(
			"newFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	java::nio::file::FileSystem FileSystemProvider::newFileSystem(java::net::URI arg0, JObject arg1) const
	{
		return callObjectMethod(
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::file::FileSystem FileSystemProvider::newFileSystem(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::InputStream FileSystemProvider::newInputStream(JObject arg0, JArray arg1) const
	{
		return callObjectMethod(
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	java::io::OutputStream FileSystemProvider::newOutputStream(JObject arg0, JArray arg1) const
	{
		return callObjectMethod(
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject FileSystemProvider::readAttributes(JObject arg0, JClass arg1, JArray arg2) const
	{
		return callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object<jarray>()
		);
	}
	JObject FileSystemProvider::readAttributes(JObject arg0, JString arg1, JArray arg2) const
	{
		return callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject FileSystemProvider::readSymbolicLink(JObject arg0) const
	{
		return callObjectMethod(
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	void FileSystemProvider::setAttribute(JObject arg0, JString arg1, JObject arg2, JArray arg3) const
	{
		callMethod<void>(
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jarray>()
		);
	}
} // namespace java::nio::file::spi


#pragma once

#ifndef JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER
#define JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::nio::file
{
	class FileSystem;
}
namespace __jni_impl::java::nio::file
{
	class FileStore;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}
namespace __jni_impl::java::nio::channels
{
	class AsynchronousFileChannel;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::nio::file::spi
{
	class FileSystemProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void _delete(__jni_impl::__JniBaseClass arg0);
		void checkAccess(__jni_impl::__JniBaseClass arg0, jarray arg1);
		void copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		jstring getScheme();
		QAndroidJniObject getPath(__jni_impl::java::net::URI arg0);
		QAndroidJniObject newDirectoryStream(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2);
		QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2);
		QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject installedProviders();
		QAndroidJniObject newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getFileStore(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getFileAttributeView(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2);
		QAndroidJniObject newFileChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		QAndroidJniObject newAsynchronousFileChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		void move(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		jboolean isSameFile(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject newByteChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		void createSymbolicLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		void createLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject readSymbolicLink(__jni_impl::__JniBaseClass arg0);
		void setAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
		void setAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jobject arg2, jarray arg3);
		jboolean deleteIfExists(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject newInputStream(__jni_impl::__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject newOutputStream(__jni_impl::__JniBaseClass arg0, jarray arg1);
		void createDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject getFileSystem(__jni_impl::java::net::URI arg0);
		jboolean isHidden(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::nio::file::spi

#include "../../../lang/Void.hpp"
#include "../../../net/URI.hpp"
#include "../FileSystem.hpp"
#include "../FileStore.hpp"
#include "../../channels/FileChannel.hpp"
#include "../../channels/AsynchronousFileChannel.hpp"
#include "../../../io/InputStream.hpp"
#include "../../../io/OutputStream.hpp"

namespace __jni_impl::java::nio::file::spi
{
	// Fields
	
	// Constructors
	void FileSystemProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.spi.FileSystemProvider",
			"(V)V");
	}
	
	// Methods
	void FileSystemProvider::_delete(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.__jniObject().object()
		);
	}
	void FileSystemProvider::checkAccess(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FileSystemProvider::copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jstring FileSystemProvider::getScheme()
	{
		return __thiz.callObjectMethod(
			"getScheme",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FileSystemProvider::getPath(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newDirectoryStream(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::readAttributes(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::installedProviders()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.spi.FileSystemProvider",
			"installedProviders",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject FileSystemProvider::newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::getFileStore(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::getFileAttributeView(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::newFileChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"newFileChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FileSystemProvider::newAsynchronousFileChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
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
	void FileSystemProvider::move(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean FileSystemProvider::isSameFile(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newByteChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FileSystemProvider::createSymbolicLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void FileSystemProvider::createLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::readSymbolicLink(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	void FileSystemProvider::setAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3)
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
	void FileSystemProvider::setAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jobject arg2, jarray arg3)
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
	jboolean FileSystemProvider::deleteIfExists(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystemProvider::newInputStream(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileSystemProvider::newOutputStream(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FileSystemProvider::createDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FileSystemProvider::getFileSystem(__jni_impl::java::net::URI arg0)
	{
		return __thiz.callObjectMethod(
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object()
		);
	}
	jboolean FileSystemProvider::isHidden(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::file::spi

namespace java::nio::file::spi
{
	class FileSystemProvider : public __jni_impl::java::nio::file::spi::FileSystemProvider
	{
	public:
		FileSystemProvider(QAndroidJniObject obj) { __thiz = obj; }
		FileSystemProvider()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::spi

#endif // JAVA_NIO_FILE_SPI_FILESYSTEMPROVIDER


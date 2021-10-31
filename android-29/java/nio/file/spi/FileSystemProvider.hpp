#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::lang
{
	class Void;
}
namespace java::net
{
	class URI;
}
namespace java::nio::channels
{
	class AsynchronousFileChannel;
}
namespace java::nio::channels
{
	class FileChannel;
}
namespace java::nio::file
{
	class FileStore;
}
namespace java::nio::file
{
	class FileSystem;
}

namespace java::nio::file::spi
{
	class FileSystemProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		FileSystemProvider(QAndroidJniObject obj);
		// Constructors
		FileSystemProvider() = default;
		
		// Methods
		static QAndroidJniObject installedProviders();
		void checkAccess(__JniBaseClass arg0, jarray arg1);
		void copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		void createDirectory(__JniBaseClass arg0, jarray arg1);
		void createLink(__JniBaseClass arg0, __JniBaseClass arg1);
		void createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		void _delete(__JniBaseClass arg0);
		jboolean deleteIfExists(__JniBaseClass arg0);
		QAndroidJniObject getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2);
		QAndroidJniObject getFileStore(__JniBaseClass arg0);
		QAndroidJniObject getFileSystem(java::net::URI arg0);
		QAndroidJniObject getPath(java::net::URI arg0);
		jstring getScheme();
		jboolean isHidden(__JniBaseClass arg0);
		jboolean isSameFile(__JniBaseClass arg0, __JniBaseClass arg1);
		void move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		QAndroidJniObject newAsynchronousFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3);
		QAndroidJniObject newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		QAndroidJniObject newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject newFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		QAndroidJniObject newFileSystem(java::net::URI arg0, __JniBaseClass arg1);
		QAndroidJniObject newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject newInputStream(__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject newOutputStream(__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2);
		QAndroidJniObject readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2);
		QAndroidJniObject readSymbolicLink(__JniBaseClass arg0);
		void setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
	};
} // namespace java::nio::file::spi


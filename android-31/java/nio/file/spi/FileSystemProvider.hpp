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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemProvider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass installedProviders();
		void checkAccess(__JniBaseClass arg0, jarray arg1);
		void copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		void createDirectory(__JniBaseClass arg0, jarray arg1);
		void createLink(__JniBaseClass arg0, __JniBaseClass arg1);
		void createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		void _delete(__JniBaseClass arg0);
		jboolean deleteIfExists(__JniBaseClass arg0);
		__JniBaseClass getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2);
		java::nio::file::FileStore getFileStore(__JniBaseClass arg0);
		java::nio::file::FileSystem getFileSystem(java::net::URI arg0);
		__JniBaseClass getPath(java::net::URI arg0);
		jstring getScheme();
		jboolean isHidden(__JniBaseClass arg0);
		jboolean isSameFile(__JniBaseClass arg0, __JniBaseClass arg1);
		void move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		java::nio::channels::AsynchronousFileChannel newAsynchronousFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2, jarray arg3);
		__JniBaseClass newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		__JniBaseClass newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1);
		java::nio::channels::FileChannel newFileChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		java::nio::file::FileSystem newFileSystem(java::net::URI arg0, __JniBaseClass arg1);
		java::nio::file::FileSystem newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1);
		java::io::InputStream newInputStream(__JniBaseClass arg0, jarray arg1);
		java::io::OutputStream newOutputStream(__JniBaseClass arg0, jarray arg1);
		__JniBaseClass readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2);
		__JniBaseClass readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2);
		__JniBaseClass readSymbolicLink(__JniBaseClass arg0);
		void setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
	};
} // namespace java::nio::file::spi


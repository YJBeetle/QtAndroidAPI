#pragma once

#include "../../../../JObject.hpp"

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
	class FileSystemProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystemProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject installedProviders();
		void checkAccess(JObject arg0, jarray arg1);
		void copy(JObject arg0, JObject arg1, jarray arg2);
		void createDirectory(JObject arg0, jarray arg1);
		void createLink(JObject arg0, JObject arg1);
		void createSymbolicLink(JObject arg0, JObject arg1, jarray arg2);
		void _delete(JObject arg0);
		jboolean deleteIfExists(JObject arg0);
		JObject getFileAttributeView(JObject arg0, jclass arg1, jarray arg2);
		java::nio::file::FileStore getFileStore(JObject arg0);
		java::nio::file::FileSystem getFileSystem(java::net::URI arg0);
		JObject getPath(java::net::URI arg0);
		jstring getScheme();
		jboolean isHidden(JObject arg0);
		jboolean isSameFile(JObject arg0, JObject arg1);
		void move(JObject arg0, JObject arg1, jarray arg2);
		java::nio::channels::AsynchronousFileChannel newAsynchronousFileChannel(JObject arg0, JObject arg1, JObject arg2, jarray arg3);
		JObject newByteChannel(JObject arg0, JObject arg1, jarray arg2);
		JObject newDirectoryStream(JObject arg0, JObject arg1);
		java::nio::channels::FileChannel newFileChannel(JObject arg0, JObject arg1, jarray arg2);
		java::nio::file::FileSystem newFileSystem(java::net::URI arg0, JObject arg1);
		java::nio::file::FileSystem newFileSystem(JObject arg0, JObject arg1);
		java::io::InputStream newInputStream(JObject arg0, jarray arg1);
		java::io::OutputStream newOutputStream(JObject arg0, jarray arg1);
		JObject readAttributes(JObject arg0, jclass arg1, jarray arg2);
		JObject readAttributes(JObject arg0, jstring arg1, jarray arg2);
		JObject readSymbolicLink(JObject arg0);
		void setAttribute(JObject arg0, jstring arg1, jobject arg2, jarray arg3);
	};
} // namespace java::nio::file::spi


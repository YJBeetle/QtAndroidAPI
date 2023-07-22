#pragma once

#include "../../../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JClass;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystemProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystemProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject installedProviders();
		void checkAccess(JObject arg0, JArray arg1) const;
		void copy(JObject arg0, JObject arg1, JArray arg2) const;
		void createDirectory(JObject arg0, JArray arg1) const;
		void createLink(JObject arg0, JObject arg1) const;
		void createSymbolicLink(JObject arg0, JObject arg1, JArray arg2) const;
		void delete_(JObject arg0) const;
		jboolean deleteIfExists(JObject arg0) const;
		jboolean exists(JObject arg0, JArray arg1) const;
		JObject getFileAttributeView(JObject arg0, JClass arg1, JArray arg2) const;
		java::nio::file::FileStore getFileStore(JObject arg0) const;
		java::nio::file::FileSystem getFileSystem(java::net::URI arg0) const;
		JObject getPath(java::net::URI arg0) const;
		JString getScheme() const;
		jboolean isHidden(JObject arg0) const;
		jboolean isSameFile(JObject arg0, JObject arg1) const;
		void move(JObject arg0, JObject arg1, JArray arg2) const;
		java::nio::channels::AsynchronousFileChannel newAsynchronousFileChannel(JObject arg0, JObject arg1, JObject arg2, JArray arg3) const;
		JObject newByteChannel(JObject arg0, JObject arg1, JArray arg2) const;
		JObject newDirectoryStream(JObject arg0, JObject arg1) const;
		java::nio::channels::FileChannel newFileChannel(JObject arg0, JObject arg1, JArray arg2) const;
		java::nio::file::FileSystem newFileSystem(java::net::URI arg0, JObject arg1) const;
		java::nio::file::FileSystem newFileSystem(JObject arg0, JObject arg1) const;
		java::io::InputStream newInputStream(JObject arg0, JArray arg1) const;
		java::io::OutputStream newOutputStream(JObject arg0, JArray arg1) const;
		JObject readAttributes(JObject arg0, JClass arg1, JArray arg2) const;
		JObject readAttributes(JObject arg0, JString arg1, JArray arg2) const;
		JObject readAttributesIfExists(JObject arg0, JClass arg1, JArray arg2) const;
		JObject readSymbolicLink(JObject arg0) const;
		void setAttribute(JObject arg0, JString arg1, JObject arg2, JArray arg3) const;
	};
} // namespace java::nio::file::spi


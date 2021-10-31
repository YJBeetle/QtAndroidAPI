#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class BufferedReader;
}
namespace java::io
{
	class BufferedWriter;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::nio::channels
{
	class FileChannel;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::nio::file
{
	class FileStore;
}
namespace java::nio::file::attribute
{
	class FileTime;
}
namespace java::nio::file::spi
{
	class FileSystemProvider;
}

namespace java::nio::file
{
	class Files : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Files(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Files(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static jlong copy(__JniBaseClass arg0, java::io::OutputStream arg1);
		static jlong copy(java::io::InputStream arg0, __JniBaseClass arg1, jarray arg2);
		static __JniBaseClass createDirectories(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass createDirectory(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass createFile(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass createLink(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static __JniBaseClass createTempDirectory(jstring arg0, jarray arg1);
		static __JniBaseClass createTempDirectory(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static __JniBaseClass createTempFile(jstring arg0, jstring arg1, jarray arg2);
		static __JniBaseClass createTempFile(__JniBaseClass arg0, jstring arg1, jstring arg2, jarray arg3);
		static void _delete(__JniBaseClass arg0);
		static jboolean deleteIfExists(__JniBaseClass arg0);
		static jboolean exists(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass find(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2, jarray arg3);
		static jobject getAttribute(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static __JniBaseClass getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2);
		static java::nio::file::FileStore getFileStore(__JniBaseClass arg0);
		static java::nio::file::attribute::FileTime getLastModifiedTime(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass getOwner(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass getPosixFilePermissions(__JniBaseClass arg0, jarray arg1);
		static jboolean isDirectory(__JniBaseClass arg0, jarray arg1);
		static jboolean isExecutable(__JniBaseClass arg0);
		static jboolean isHidden(__JniBaseClass arg0);
		static jboolean isReadable(__JniBaseClass arg0);
		static jboolean isRegularFile(__JniBaseClass arg0, jarray arg1);
		static jboolean isSameFile(__JniBaseClass arg0, __JniBaseClass arg1);
		static jboolean isSymbolicLink(__JniBaseClass arg0);
		static jboolean isWritable(__JniBaseClass arg0);
		static __JniBaseClass lines(__JniBaseClass arg0);
		static __JniBaseClass lines(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static __JniBaseClass list(__JniBaseClass arg0);
		static jlong mismatch(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static java::io::BufferedReader newBufferedReader(__JniBaseClass arg0);
		static java::io::BufferedReader newBufferedReader(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static java::io::BufferedWriter newBufferedWriter(__JniBaseClass arg0, jarray arg1);
		static java::io::BufferedWriter newBufferedWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1, jarray arg2);
		static __JniBaseClass newByteChannel(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static __JniBaseClass newDirectoryStream(__JniBaseClass arg0);
		static __JniBaseClass newDirectoryStream(__JniBaseClass arg0, jstring arg1);
		static __JniBaseClass newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1);
		static java::io::InputStream newInputStream(__JniBaseClass arg0, jarray arg1);
		static java::io::OutputStream newOutputStream(__JniBaseClass arg0, jarray arg1);
		static jboolean notExists(__JniBaseClass arg0, jarray arg1);
		static jstring probeContentType(__JniBaseClass arg0);
		static jbyteArray readAllBytes(__JniBaseClass arg0);
		static __JniBaseClass readAllLines(__JniBaseClass arg0);
		static __JniBaseClass readAllLines(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static __JniBaseClass readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2);
		static __JniBaseClass readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static jstring readString(__JniBaseClass arg0);
		static jstring readString(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static __JniBaseClass readSymbolicLink(__JniBaseClass arg0);
		static __JniBaseClass setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
		static __JniBaseClass setLastModifiedTime(__JniBaseClass arg0, java::nio::file::attribute::FileTime arg1);
		static __JniBaseClass setOwner(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass setPosixFilePermissions(__JniBaseClass arg0, __JniBaseClass arg1);
		static jlong size(__JniBaseClass arg0);
		static __JniBaseClass walk(__JniBaseClass arg0, jarray arg1);
		static __JniBaseClass walk(__JniBaseClass arg0, jint arg1, jarray arg2);
		static __JniBaseClass walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1);
		static __JniBaseClass walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		static __JniBaseClass write(__JniBaseClass arg0, jbyteArray arg1, jarray arg2);
		static __JniBaseClass write(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static __JniBaseClass write(__JniBaseClass arg0, __JniBaseClass arg1, java::nio::charset::Charset arg2, jarray arg3);
		static __JniBaseClass writeString(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static __JniBaseClass writeString(__JniBaseClass arg0, jstring arg1, java::nio::charset::Charset arg2, jarray arg3);
	};
} // namespace java::nio::file


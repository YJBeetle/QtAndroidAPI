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
		
		Files(QAndroidJniObject obj);
		// Constructors
		Files() = default;
		
		// Methods
		static QAndroidJniObject copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static jlong copy(__JniBaseClass arg0, java::io::OutputStream arg1);
		static jlong copy(java::io::InputStream arg0, __JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject createDirectories(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject createDirectory(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject createFile(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject createLink(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject createTempDirectory(jstring arg0, jarray arg1);
		static QAndroidJniObject createTempDirectory(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject createTempFile(__JniBaseClass arg0, jstring arg1, jstring arg2, jarray arg3);
		static void _delete(__JniBaseClass arg0);
		static jboolean deleteIfExists(__JniBaseClass arg0);
		static jboolean exists(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject find(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2, jarray arg3);
		static jobject getAttribute(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject getFileStore(__JniBaseClass arg0);
		static QAndroidJniObject getLastModifiedTime(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject getOwner(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject getPosixFilePermissions(__JniBaseClass arg0, jarray arg1);
		static jboolean isDirectory(__JniBaseClass arg0, jarray arg1);
		static jboolean isExecutable(__JniBaseClass arg0);
		static jboolean isHidden(__JniBaseClass arg0);
		static jboolean isReadable(__JniBaseClass arg0);
		static jboolean isRegularFile(__JniBaseClass arg0, jarray arg1);
		static jboolean isSameFile(__JniBaseClass arg0, __JniBaseClass arg1);
		static jboolean isSymbolicLink(__JniBaseClass arg0);
		static jboolean isWritable(__JniBaseClass arg0);
		static QAndroidJniObject lines(__JniBaseClass arg0);
		static QAndroidJniObject lines(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject list(__JniBaseClass arg0);
		static jlong mismatch(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject newBufferedReader(__JniBaseClass arg0);
		static QAndroidJniObject newBufferedReader(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject newBufferedWriter(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newBufferedWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1, jarray arg2);
		static QAndroidJniObject newByteChannel(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject newDirectoryStream(__JniBaseClass arg0);
		static QAndroidJniObject newDirectoryStream(__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject newInputStream(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newOutputStream(__JniBaseClass arg0, jarray arg1);
		static jboolean notExists(__JniBaseClass arg0, jarray arg1);
		static jstring probeContentType(__JniBaseClass arg0);
		static jbyteArray readAllBytes(__JniBaseClass arg0);
		static QAndroidJniObject readAllLines(__JniBaseClass arg0);
		static QAndroidJniObject readAllLines(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static jstring readString(__JniBaseClass arg0);
		static jstring readString(__JniBaseClass arg0, java::nio::charset::Charset arg1);
		static QAndroidJniObject readSymbolicLink(__JniBaseClass arg0);
		static QAndroidJniObject setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
		static QAndroidJniObject setLastModifiedTime(__JniBaseClass arg0, java::nio::file::attribute::FileTime arg1);
		static QAndroidJniObject setOwner(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject setPosixFilePermissions(__JniBaseClass arg0, __JniBaseClass arg1);
		static jlong size(__JniBaseClass arg0);
		static QAndroidJniObject walk(__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject walk(__JniBaseClass arg0, jint arg1, jarray arg2);
		static QAndroidJniObject walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3);
		static QAndroidJniObject write(__JniBaseClass arg0, jbyteArray arg1, jarray arg2);
		static QAndroidJniObject write(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject write(__JniBaseClass arg0, __JniBaseClass arg1, java::nio::charset::Charset arg2, jarray arg3);
		static QAndroidJniObject writeString(__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject writeString(__JniBaseClass arg0, jstring arg1, java::nio::charset::Charset arg2, jarray arg3);
	};
} // namespace java::nio::file


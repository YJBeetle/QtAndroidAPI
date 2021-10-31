#include "../../io/BufferedReader.hpp"
#include "../../io/BufferedWriter.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../channels/FileChannel.hpp"
#include "../charset/Charset.hpp"
#include "./FileStore.hpp"
#include "./attribute/FileTime.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./Files.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	Files::Files(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Files::copy(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jlong Files::copy(__JniBaseClass arg0, java::io::OutputStream arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/io/OutputStream;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Files::copy(java::io::InputStream arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/io/InputStream;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)J",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass Files::createDirectories(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectories",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::createDirectory(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::createFile(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::createLink(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::createSymbolicLink(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass Files::createTempDirectory(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	__JniBaseClass Files::createTempDirectory(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::createTempFile(jstring arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::createTempFile(__JniBaseClass arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Files::_delete(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.nio.file.Files",
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.object()
		);
	}
	jboolean Files::deleteIfExists(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::exists(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"exists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::find(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"find",
			"(Ljava/nio/file/Path;ILjava/util/function/BiPredicate;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	jobject Files::getAttribute(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2
		).object<jobject>();
	}
	__JniBaseClass Files::getFileAttributeView(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	java::nio::file::FileStore Files::getFileStore(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.object()
		);
	}
	java::nio::file::attribute::FileTime Files::getLastModifiedTime(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getLastModifiedTime",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileTime;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::getOwner(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getOwner",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::getPosixFilePermissions(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getPosixFilePermissions",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/util/Set;",
			arg0.object(),
			arg1
		);
	}
	jboolean Files::isDirectory(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Files::isExecutable(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isExecutable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isHidden(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isReadable(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isReadable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isRegularFile(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isRegularFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Files::isSameFile(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Files::isSymbolicLink(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSymbolicLink",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isWritable(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isWritable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	__JniBaseClass Files::lines(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	__JniBaseClass Files::lines(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::list(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"list",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	jlong Files::mismatch(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"mismatch",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)J",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::move(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	java::io::BufferedReader Files::newBufferedReader(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;)Ljava/io/BufferedReader;",
			arg0.object()
		);
	}
	java::io::BufferedReader Files::newBufferedReader(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::BufferedWriter Files::newBufferedWriter(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.object(),
			arg1
		);
	}
	java::io::BufferedWriter Files::newBufferedWriter(__JniBaseClass arg0, java::nio::charset::Charset arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass Files::newByteChannel(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::newByteChannel(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass Files::newDirectoryStream(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;)Ljava/nio/file/DirectoryStream;",
			arg0.object()
		);
	}
	__JniBaseClass Files::newDirectoryStream(__JniBaseClass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::newDirectoryStream(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::InputStream Files::newInputStream(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.object(),
			arg1
		);
	}
	java::io::OutputStream Files::newOutputStream(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1
		);
	}
	jboolean Files::notExists(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"notExists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1
		);
	}
	jstring Files::probeContentType(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jbyteArray Files::readAllBytes(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllBytes",
			"(Ljava/nio/file/Path;)[B",
			arg0.object()
		).object<jbyteArray>();
	}
	__JniBaseClass Files::readAllLines(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;)Ljava/util/List;",
			arg0.object()
		);
	}
	__JniBaseClass Files::readAllLines(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::readAttributes(__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::readAttributes(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring Files::readString(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jstring Files::readString(__JniBaseClass arg0, java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	__JniBaseClass Files::readSymbolicLink(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	__JniBaseClass Files::setAttribute(__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	__JniBaseClass Files::setLastModifiedTime(__JniBaseClass arg0, java::nio::file::attribute::FileTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setLastModifiedTime",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/FileTime;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::setOwner(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setOwner",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::setPosixFilePermissions(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setPosixFilePermissions",
			"(Ljava/nio/file/Path;Ljava/util/Set;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Files::size(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"size",
			"(Ljava/nio/file/Path;)J",
			arg0.object()
		);
	}
	__JniBaseClass Files::walk(__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass Files::walk(__JniBaseClass arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Files::walkFileTree(__JniBaseClass arg0, __JniBaseClass arg1, jint arg2, __JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/util/Set;ILjava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	__JniBaseClass Files::write(__JniBaseClass arg0, jbyteArray arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;[B[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::write(__JniBaseClass arg0, __JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass Files::write(__JniBaseClass arg0, __JniBaseClass arg1, java::nio::charset::Charset arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	__JniBaseClass Files::writeString(__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	__JniBaseClass Files::writeString(__JniBaseClass arg0, jstring arg1, java::nio::charset::Charset arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
} // namespace java::nio::file


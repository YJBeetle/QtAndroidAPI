#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../io/BufferedReader.hpp"
#include "../../io/BufferedWriter.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../channels/FileChannel.hpp"
#include "../charset/Charset.hpp"
#include "./FileStore.hpp"
#include "./attribute/FileTime.hpp"
#include "./spi/FileSystemProvider.hpp"
#include "./Files.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject Files::copy(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	jlong Files::copy(JObject arg0, java::io::OutputStream arg1)
	{
		return callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/io/OutputStream;)J",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Files::copy(java::io::InputStream arg0, JObject arg1, JArray arg2)
	{
		return callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/io/InputStream;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)J",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject Files::createDirectories(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectories",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::createDirectory(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::createFile(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::createLink(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::createSymbolicLink(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject Files::createTempDirectory(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	JObject Files::createTempDirectory(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::createTempFile(JString arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::createTempFile(JObject arg0, JString arg1, JString arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jarray>()
		);
	}
	void Files::delete_(JObject arg0)
	{
		callStaticMethod<void>(
			"java.nio.file.Files",
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.object()
		);
	}
	jboolean Files::deleteIfExists(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::exists(JObject arg0, JArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"exists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::find(JObject arg0, jint arg1, JObject arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"find",
			"(Ljava/nio/file/Path;ILjava/util/function/BiPredicate;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	JObject Files::getAttribute(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::getFileAttributeView(JObject arg0, JClass arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object<jarray>()
		);
	}
	java::nio::file::FileStore Files::getFileStore(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.object()
		);
	}
	java::nio::file::attribute::FileTime Files::getLastModifiedTime(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getLastModifiedTime",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileTime;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::getOwner(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getOwner",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::getPosixFilePermissions(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"getPosixFilePermissions",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/util/Set;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	jboolean Files::isDirectory(JObject arg0, JArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	jboolean Files::isExecutable(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isExecutable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isHidden(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isReadable(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isReadable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isRegularFile(JObject arg0, JArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isRegularFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	jboolean Files::isSameFile(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Files::isSymbolicLink(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSymbolicLink",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	jboolean Files::isWritable(JObject arg0)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isWritable",
			"(Ljava/nio/file/Path;)Z",
			arg0.object()
		);
	}
	JObject Files::lines(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	JObject Files::lines(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::list(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"list",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.object()
		);
	}
	jlong Files::mismatch(JObject arg0, JObject arg1)
	{
		return callStaticMethod<jlong>(
			"java.nio.file.Files",
			"mismatch",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)J",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::move(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	java::io::BufferedReader Files::newBufferedReader(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;)Ljava/io/BufferedReader;",
			arg0.object()
		);
	}
	java::io::BufferedReader Files::newBufferedReader(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::BufferedWriter Files::newBufferedWriter(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	java::io::BufferedWriter Files::newBufferedWriter(JObject arg0, java::nio::charset::Charset arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject Files::newByteChannel(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::newByteChannel(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject Files::newDirectoryStream(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;)Ljava/nio/file/DirectoryStream;",
			arg0.object()
		);
	}
	JObject Files::newDirectoryStream(JObject arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	JObject Files::newDirectoryStream(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.object(),
			arg1.object()
		);
	}
	java::io::InputStream Files::newInputStream(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	java::io::OutputStream Files::newOutputStream(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	jboolean Files::notExists(JObject arg0, JArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"notExists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JString Files::probeContentType(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JByteArray Files::readAllBytes(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllBytes",
			"(Ljava/nio/file/Path;)[B",
			arg0.object()
		);
	}
	JObject Files::readAllLines(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;)Ljava/util/List;",
			arg0.object()
		);
	}
	JObject Files::readAllLines(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::readAttributes(JObject arg0, JClass arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::readAttributes(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JString Files::readString(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Files::readString(JObject arg0, java::nio::charset::Charset arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::readSymbolicLink(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	JObject Files::setAttribute(JObject arg0, JString arg1, JObject arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobject>(),
			arg3.object<jarray>()
		);
	}
	JObject Files::setLastModifiedTime(JObject arg0, java::nio::file::attribute::FileTime arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"setLastModifiedTime",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/FileTime;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::setOwner(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"setOwner",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::setPosixFilePermissions(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"setPosixFilePermissions",
			"(Ljava/nio/file/Path;Ljava/util/Set;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Files::size(JObject arg0)
	{
		return callStaticMethod<jlong>(
			"java.nio.file.Files",
			"size",
			"(Ljava/nio/file/Path;)J",
			arg0.object()
		);
	}
	JObject Files::walk(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	JObject Files::walk(JObject arg0, jint arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.object(),
			arg1,
			arg2.object<jarray>()
		);
	}
	JObject Files::walkFileTree(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object()
		);
	}
	JObject Files::walkFileTree(JObject arg0, JObject arg1, jint arg2, JObject arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/util/Set;ILjava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	JObject Files::write(JObject arg0, JByteArray arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;[B[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::write(JObject arg0, JObject arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	JObject Files::write(JObject arg0, JObject arg1, java::nio::charset::Charset arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	JObject Files::writeString(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	JObject Files::writeString(JObject arg0, JString arg1, java::nio::charset::Charset arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
} // namespace java::nio::file


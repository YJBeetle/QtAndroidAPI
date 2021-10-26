#pragma once

#ifndef JAVA_NIO_FILE_FILES
#define JAVA_NIO_FILE_FILES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::nio::file::spi
{
	class FileSystemProvider;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class BufferedReader;
}
namespace __jni_impl::java::io
{
	class BufferedWriter;
}
namespace __jni_impl::java::nio::channels
{
	class FileChannel;
}
namespace __jni_impl::java::nio::file
{
	class FileStore;
}
namespace __jni_impl::java::nio::file::attribute
{
	class FileTime;
}

namespace __jni_impl::java::nio::file
{
	class Files : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jlong size(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject lines(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject lines(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject list(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject write(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3);
		static QAndroidJniObject write(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject write(__jni_impl::__JniBaseClass arg0, jbyteArray arg1, jarray arg2);
		static void _delete(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static jlong copy(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::OutputStream arg1);
		static jlong copy(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static jbyteArray readAllBytes(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject find(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		static QAndroidJniObject walk(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject walk(__jni_impl::__JniBaseClass arg0, jint arg1, jarray arg2);
		static QAndroidJniObject getOwner(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static jlong mismatch(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject createTempDirectory(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject createTempDirectory(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2);
		static QAndroidJniObject createTempDirectory(jstring arg0, jarray arg1);
		static QAndroidJniObject createTempDirectory(const QString &arg0, jarray arg1);
		static jstring probeContentType(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject walkFileTree(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject walkFileTree(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3);
		static QAndroidJniObject newBufferedReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject newBufferedReader(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newBufferedWriter(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newBufferedWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1, jarray arg2);
		static jstring readString(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static jstring readString(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject readAllLines(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject readAllLines(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1);
		static QAndroidJniObject writeString(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject writeString(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2);
		static QAndroidJniObject writeString(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3);
		static QAndroidJniObject writeString(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3);
		static QAndroidJniObject createFile(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject createDirectories(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static jobject getAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2);
		static jobject getAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2);
		static QAndroidJniObject getPosixFilePermissions(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject setPosixFilePermissions(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static jboolean notExists(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static jboolean isReadable(__jni_impl::__JniBaseClass arg0);
		static jboolean isWritable(__jni_impl::__JniBaseClass arg0);
		static jboolean isExecutable(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newDirectoryStream(__jni_impl::__JniBaseClass arg0, jstring arg1);
		static QAndroidJniObject newDirectoryStream(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		static QAndroidJniObject newDirectoryStream(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newDirectoryStream(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2);
		static QAndroidJniObject readAttributes(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject getFileStore(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getFileAttributeView(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2);
		static QAndroidJniObject move(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static jboolean isSameFile(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newByteChannel(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newByteChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject createSymbolicLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2);
		static QAndroidJniObject createLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject readSymbolicLink(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject setAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3);
		static QAndroidJniObject setAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jobject arg2, jarray arg3);
		static jboolean deleteIfExists(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newInputStream(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject newOutputStream(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static jboolean isSymbolicLink(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject setOwner(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static jboolean isDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject getLastModifiedTime(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject createDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static jboolean exists(__jni_impl::__JniBaseClass arg0, jarray arg1);
		static QAndroidJniObject setLastModifiedTime(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::file::attribute::FileTime arg1);
		static QAndroidJniObject createTempFile(jstring arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject createTempFile(const QString &arg0, const QString &arg1, jarray arg2);
		static QAndroidJniObject createTempFile(__jni_impl::__JniBaseClass arg0, jstring arg1, jstring arg2, jarray arg3);
		static QAndroidJniObject createTempFile(__jni_impl::__JniBaseClass arg0, const QString &arg1, const QString &arg2, jarray arg3);
		static jboolean isHidden(__jni_impl::__JniBaseClass arg0);
		static jboolean isRegularFile(__jni_impl::__JniBaseClass arg0, jarray arg1);
	};
} // namespace __jni_impl::java::nio::file

#include "../charset/Charset.hpp"
#include "spi/FileSystemProvider.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/BufferedReader.hpp"
#include "../../io/BufferedWriter.hpp"
#include "../channels/FileChannel.hpp"
#include "FileStore.hpp"
#include "attribute/FileTime.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void Files::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.Files",
			"(V)V");
	}
	
	// Methods
	jlong Files::size(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"size",
			"(Ljava/nio/file/Path;)J",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::lines(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::lines(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"lines",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::list(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"list",
			"(Ljava/nio/file/Path;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::write(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Files::write(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;Ljava/lang/Iterable;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Files::write(__jni_impl::__JniBaseClass arg0, jbyteArray arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"write",
			"(Ljava/nio/file/Path;[B[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Files::_delete(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.nio.file.Files",
			"delete",
			"(Ljava/nio/file/Path;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::copy(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jlong Files::copy(__jni_impl::__JniBaseClass arg0, __jni_impl::java::io::OutputStream arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/nio/file/Path;Ljava/io/OutputStream;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong Files::copy(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"copy",
			"(Ljava/io/InputStream;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jbyteArray Files::readAllBytes(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllBytes",
			"(Ljava/nio/file/Path;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
	QAndroidJniObject Files::find(__jni_impl::__JniBaseClass arg0, jint arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"find",
			"(Ljava/nio/file/Path;ILjava/util/function/BiPredicate;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Files::walk(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::walk(__jni_impl::__JniBaseClass arg0, jint arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walk",
			"(Ljava/nio/file/Path;I[Ljava/nio/file/FileVisitOption;)Ljava/util/stream/Stream;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::getOwner(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getOwner",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong Files::mismatch(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.nio.file.Files",
			"mismatch",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::createTempDirectory(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::createTempDirectory(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Files::createTempDirectory(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Files::createTempDirectory(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempDirectory",
			"(Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jstring Files::probeContentType(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Files::walkFileTree(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::walkFileTree(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::__JniBaseClass arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"walkFileTree",
			"(Ljava/nio/file/Path;Ljava/util/Set;ILjava/nio/file/FileVisitor;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newBufferedReader(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/io/BufferedReader;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newBufferedReader(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedReader",
			"(Ljava/nio/file/Path;)Ljava/io/BufferedReader;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newBufferedWriter(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::newBufferedWriter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newBufferedWriter",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jstring Files::readString(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring Files::readString(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readString",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject Files::readAllLines(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;)Ljava/util/List;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::readAllLines(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAllLines",
			"(Ljava/nio/file/Path;Ljava/nio/charset/Charset;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::writeString(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::writeString(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Files::writeString(__jni_impl::__JniBaseClass arg0, jstring arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Files::writeString(__jni_impl::__JniBaseClass arg0, const QString &arg1, __jni_impl::java::nio::charset::Charset arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"writeString",
			"(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Files::createFile(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::createDirectories(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectories",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jobject Files::getAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		).object<jobject>();
	}
	jobject Files::getAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		).object<jobject>();
	}
	QAndroidJniObject Files::getPosixFilePermissions(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getPosixFilePermissions",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/util/Set;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::setPosixFilePermissions(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setPosixFilePermissions",
			"(Ljava/nio/file/Path;Ljava/util/Set;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Files::notExists(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"notExists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Files::isReadable(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isReadable",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Files::isWritable(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isWritable",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Files::isExecutable(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isExecutable",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newDirectoryStream(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::newDirectoryStream(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/lang/String;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Files::newDirectoryStream(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newDirectoryStream(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newDirectoryStream",
			"(Ljava/nio/file/Path;)Ljava/nio/file/DirectoryStream;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::readAttributes(__jni_impl::__JniBaseClass arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::readAttributes(__jni_impl::__JniBaseClass arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Files::readAttributes(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readAttributes",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::getFileStore(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileStore",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::getFileAttributeView(__jni_impl::__JniBaseClass arg0, jclass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getFileAttributeView",
			"(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Files::move(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"move",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean Files::isSameFile(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSameFile",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newByteChannel(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::newByteChannel(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newByteChannel",
			"(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Files::createSymbolicLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createSymbolicLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Files::createLink(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createLink",
			"(Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::readSymbolicLink(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"readSymbolicLink",
			"(Ljava/nio/file/Path;)Ljava/nio/file/Path;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::setAttribute(__jni_impl::__JniBaseClass arg0, jstring arg1, jobject arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Files::setAttribute(__jni_impl::__JniBaseClass arg0, const QString &arg1, jobject arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setAttribute",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	jboolean Files::deleteIfExists(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"deleteIfExists",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::newInputStream(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newInputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::newOutputStream(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"newOutputStream",
			"(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Files::isSymbolicLink(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isSymbolicLink",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Files::setOwner(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setOwner",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Files::isDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::getLastModifiedTime(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"getLastModifiedTime",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileTime;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::createDirectory(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createDirectory",
			"(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Files::exists(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"exists",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Files::setLastModifiedTime(__jni_impl::__JniBaseClass arg0, __jni_impl::java::nio::file::attribute::FileTime arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"setLastModifiedTime",
			"(Ljava/nio/file/Path;Ljava/nio/file/attribute/FileTime;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Files::createTempFile(jstring arg0, jstring arg1, jarray arg2)
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
	QAndroidJniObject Files::createTempFile(const QString &arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Files::createTempFile(__jni_impl::__JniBaseClass arg0, jstring arg1, jstring arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Files::createTempFile(__jni_impl::__JniBaseClass arg0, const QString &arg1, const QString &arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.Files",
			"createTempFile",
			"(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/String;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/file/Path;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	jboolean Files::isHidden(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isHidden",
			"(Ljava/nio/file/Path;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Files::isRegularFile(__jni_impl::__JniBaseClass arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.nio.file.Files",
			"isRegularFile",
			"(Ljava/nio/file/Path;[Ljava/nio/file/LinkOption;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class Files : public __jni_impl::java::nio::file::Files
	{
	public:
		Files(QAndroidJniObject obj) { __thiz = obj; }
		Files()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILES


#include "../../io/File.hpp"
#include "../../io/InputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "../jar/JarEntry.hpp"
#include "./ZipEntry.hpp"
#include "./ZipFile.hpp"

namespace java::util::zip
{
	// Fields
	jint ZipFile::OPEN_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_DELETE"
		);
	}
	jint ZipFile::OPEN_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipFile",
			"OPEN_READ"
		);
	}
	
	// QAndroidJniObject forward
	ZipFile::ZipFile(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ZipFile::ZipFile(java::io::File arg0)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	ZipFile::ZipFile(jstring arg0)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ZipFile::ZipFile(java::io::File arg0, jint arg1)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;I)V",
			arg0.object(),
			arg1
		) {}
	ZipFile::ZipFile(java::io::File arg0, java::nio::charset::Charset arg1)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	ZipFile::ZipFile(jstring arg0, java::nio::charset::Charset arg1)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.object()
		) {}
	ZipFile::ZipFile(java::io::File arg0, jint arg1, java::nio::charset::Charset arg2)
		: __JniBaseClass(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;ILjava/nio/charset/Charset;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void ZipFile::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	__JniBaseClass ZipFile::entries()
	{
		return callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring ZipFile::getComment()
	{
		return callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::zip::ZipEntry ZipFile::getEntry(jstring arg0)
	{
		return callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	java::io::InputStream ZipFile::getInputStream(java::util::zip::ZipEntry arg0)
	{
		return callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
	jstring ZipFile::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZipFile::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	__JniBaseClass ZipFile::stream()
	{
		return callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::zip


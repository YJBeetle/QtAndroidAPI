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
	
	ZipFile::ZipFile(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipFile::ZipFile(java::io::File &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	ZipFile::ZipFile(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ZipFile::ZipFile(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ZipFile::ZipFile(java::io::File &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ZipFile::ZipFile(java::io::File &arg0, java::nio::charset::Charset &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ZipFile::ZipFile(jstring &arg0, java::nio::charset::Charset &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	ZipFile::ZipFile(const QString &arg0, java::nio::charset::Charset &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	ZipFile::ZipFile(java::io::File &arg0, jint &arg1, java::nio::charset::Charset &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipFile",
			"(Ljava/io/File;ILjava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void ZipFile::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ZipFile::entries()
	{
		return __thiz.callObjectMethod(
			"entries",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring ZipFile::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ZipFile::getEntry(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			arg0
		);
	}
	QAndroidJniObject ZipFile::getEntry(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getEntry",
			"(Ljava/lang/String;)Ljava/util/zip/ZipEntry;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ZipFile::getInputStream(java::util::zip::ZipEntry arg0)
	{
		return __thiz.callObjectMethod(
			"getInputStream",
			"(Ljava/util/zip/ZipEntry;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
	jstring ZipFile::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ZipFile::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	QAndroidJniObject ZipFile::stream()
	{
		return __thiz.callObjectMethod(
			"stream",
			"()Ljava/util/stream/Stream;"
		);
	}
} // namespace java::util::zip


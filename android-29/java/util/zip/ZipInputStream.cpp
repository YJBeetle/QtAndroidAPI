#include "../../io/InputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "./CRC32.hpp"
#include "./ZipEntry.hpp"
#include "./ZipInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	ZipInputStream::ZipInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZipInputStream::ZipInputStream(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	ZipInputStream::ZipInputStream(java::io::InputStream arg0, java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint ZipInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ZipInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipInputStream::closeEntry()
	{
		__thiz.callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	QAndroidJniObject ZipInputStream::getNextEntry()
	{
		return __thiz.callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	jint ZipInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong ZipInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip


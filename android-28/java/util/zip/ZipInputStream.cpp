#include "../../io/InputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "./CRC32.hpp"
#include "./ZipEntry.hpp"
#include "./ZipInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
	// QAndroidJniObject forward
	ZipInputStream::ZipInputStream(QAndroidJniObject obj) : java::util::zip::InflaterInputStream(obj) {}
	
	// Constructors
	ZipInputStream::ZipInputStream(java::io::InputStream arg0)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	ZipInputStream::ZipInputStream(java::io::InputStream arg0, java::nio::charset::Charset arg1)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.ZipInputStream",
			"(Ljava/io/InputStream;Ljava/nio/charset/Charset;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint ZipInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ZipInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipInputStream::closeEntry()
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	java::util::zip::ZipEntry ZipInputStream::getNextEntry()
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	jint ZipInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jlong ZipInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip


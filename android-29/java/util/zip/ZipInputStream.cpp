#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "../../../JString.hpp"
#include "../../nio/charset/Charset.hpp"
#include "./CRC32.hpp"
#include "./ZipEntry.hpp"
#include "./ZipInputStream.hpp"

namespace java::util::zip
{
	// Fields
	
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
	jint ZipInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ZipInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipInputStream::closeEntry() const
	{
		callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	java::util::zip::ZipEntry ZipInputStream::getNextEntry() const
	{
		return callObjectMethod(
			"getNextEntry",
			"()Ljava/util/zip/ZipEntry;"
		);
	}
	jint ZipInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jlong ZipInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::util::zip


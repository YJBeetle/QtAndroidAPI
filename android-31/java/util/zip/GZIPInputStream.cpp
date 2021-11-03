#include "../../../JByteArray.hpp"
#include "../../io/InputStream.hpp"
#include "./CRC32.hpp"
#include "./GZIPInputStream.hpp"

namespace java::util::zip
{
	// Fields
	jint GZIPInputStream::GZIP_MAGIC()
	{
		return getStaticField<jint>(
			"java.util.zip.GZIPInputStream",
			"GZIP_MAGIC"
		);
	}
	
	// QAndroidJniObject forward
	GZIPInputStream::GZIPInputStream(QAndroidJniObject obj) : java::util::zip::InflaterInputStream(obj) {}
	
	// Constructors
	GZIPInputStream::GZIPInputStream(java::io::InputStream arg0)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	GZIPInputStream::GZIPInputStream(java::io::InputStream arg0, jint arg1)
		: java::util::zip::InflaterInputStream(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void GZIPInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint GZIPInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip


#include "../../io/InputStream.hpp"
#include "./CRC32.hpp"
#include "./GZIPInputStream.hpp"

namespace java::util::zip
{
	// Fields
	jint GZIPInputStream::GZIP_MAGIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.GZIPInputStream",
			"GZIP_MAGIC"
		);
	}
	
	GZIPInputStream::GZIPInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GZIPInputStream::GZIPInputStream(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	GZIPInputStream::GZIPInputStream(java::io::InputStream arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.GZIPInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void GZIPInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jint GZIPInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::util::zip


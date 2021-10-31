#include "./OutputStream.hpp"
#include "./ByteArrayInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ByteArrayInputStream::ByteArrayInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	ByteArrayInputStream::ByteArrayInputStream(jbyteArray arg0)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([B)V",
			arg0
		) {}
	ByteArrayInputStream::ByteArrayInputStream(jbyteArray arg0, jint arg1, jint arg2)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([BII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint ByteArrayInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ByteArrayInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean ByteArrayInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint ByteArrayInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ByteArrayInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray ByteArrayInputStream::readAllBytes()
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint ByteArrayInputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void ByteArrayInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong ByteArrayInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jlong ByteArrayInputStream::transferTo(java::io::OutputStream arg0)
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io


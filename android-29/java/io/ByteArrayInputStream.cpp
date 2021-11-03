#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "./ByteArrayInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ByteArrayInputStream::ByteArrayInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	ByteArrayInputStream::ByteArrayInputStream(JByteArray arg0)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	ByteArrayInputStream::ByteArrayInputStream(JByteArray arg0, jint arg1, jint arg2)
		: java::io::InputStream(
			"java.io.ByteArrayInputStream",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	jint ByteArrayInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ByteArrayInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean ByteArrayInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint ByteArrayInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ByteArrayInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JByteArray ByteArrayInputStream::readAllBytes() const
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		);
	}
	jint ByteArrayInputStream::readNBytes(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void ByteArrayInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong ByteArrayInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jlong ByteArrayInputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io


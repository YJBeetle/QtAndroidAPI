#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "./InputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	InputStream::InputStream(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputStream::InputStream()
		: JObject(
			"java.io.InputStream",
			"()V"
		) {}
	
	// Methods
	java::io::InputStream InputStream::nullInputStream()
	{
		return callStaticObjectMethod(
			"java.io.InputStream",
			"nullInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	jint InputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void InputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void InputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean InputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint InputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint InputStream::read(JByteArray arg0) const
	{
		return callMethod<jint>(
			"read",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint InputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JByteArray InputStream::readAllBytes() const
	{
		return callObjectMethod(
			"readAllBytes",
			"()[B"
		);
	}
	JByteArray InputStream::readNBytes(jint arg0) const
	{
		return callObjectMethod(
			"readNBytes",
			"(I)[B",
			arg0
		);
	}
	jint InputStream::readNBytes(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void InputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong InputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void InputStream::skipNBytes(jlong arg0) const
	{
		callMethod<void>(
			"skipNBytes",
			"(J)V",
			arg0
		);
	}
	jlong InputStream::transferTo(java::io::OutputStream arg0) const
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.object()
		);
	}
} // namespace java::io


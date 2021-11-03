#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./PushbackInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	PushbackInputStream::PushbackInputStream(QJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	PushbackInputStream::PushbackInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	PushbackInputStream::PushbackInputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint PushbackInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PushbackInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackInputStream::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void PushbackInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackInputStream::unread(JByteArray arg0) const
	{
		callMethod<void>(
			"unread",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void PushbackInputStream::unread(jint arg0) const
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackInputStream::unread(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"unread",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io


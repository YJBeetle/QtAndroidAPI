#include "./InputStream.hpp"
#include "./PushbackInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PushbackInputStream::PushbackInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
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
	jint PushbackInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PushbackInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void PushbackInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackInputStream::unread(jbyteArray arg0)
	{
		callMethod<void>(
			"unread",
			"([B)V",
			arg0
		);
	}
	void PushbackInputStream::unread(jint arg0)
	{
		callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackInputStream::unread(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"unread",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


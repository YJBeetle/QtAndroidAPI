#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./BufferedInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	BufferedInputStream::BufferedInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	BufferedInputStream::BufferedInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	BufferedInputStream::BufferedInputStream(java::io::InputStream arg0, jint arg1)
		: java::io::FilterInputStream(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint BufferedInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void BufferedInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedInputStream::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedInputStream::read(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void BufferedInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


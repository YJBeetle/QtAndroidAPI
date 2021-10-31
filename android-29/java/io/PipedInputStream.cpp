#include "./PipedOutputStream.hpp"
#include "../lang/Thread.hpp"
#include "./PipedInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PipedInputStream::PipedInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	PipedInputStream::PipedInputStream()
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"()V"
		) {}
	PipedInputStream::PipedInputStream(jint arg0)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(I)V",
			arg0
		) {}
	PipedInputStream::PipedInputStream(java::io::PipedOutputStream arg0)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.object()
		) {}
	PipedInputStream::PipedInputStream(java::io::PipedOutputStream arg0, jint arg1)
		: java::io::InputStream(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint PipedInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PipedInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedInputStream::connect(java::io::PipedOutputStream arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.object()
		);
	}
	jint PipedInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


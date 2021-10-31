#include "./PipedInputStream.hpp"
#include "./PipedOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PipedOutputStream::PipedOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	PipedOutputStream::PipedOutputStream()
		: java::io::OutputStream(
			"java.io.PipedOutputStream",
			"()V"
		) {}
	PipedOutputStream::PipedOutputStream(java::io::PipedInputStream arg0)
		: java::io::OutputStream(
			"java.io.PipedOutputStream",
			"(Ljava/io/PipedInputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	void PipedOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedOutputStream::connect(java::io::PipedInputStream arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedInputStream;)V",
			arg0.object()
		);
	}
	void PipedOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


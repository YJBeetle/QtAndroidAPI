#include "./PipedInputStream.hpp"
#include "./PipedOutputStream.hpp"

namespace java::io
{
	// Fields
	
	PipedOutputStream::PipedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PipedOutputStream::PipedOutputStream()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedOutputStream",
			"()V"
		);
	}
	PipedOutputStream::PipedOutputStream(java::io::PipedInputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedOutputStream",
			"(Ljava/io/PipedInputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PipedOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedOutputStream::connect(java::io::PipedInputStream arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedInputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void PipedOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


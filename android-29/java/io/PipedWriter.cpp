#include "./PipedReader.hpp"
#include "./PipedWriter.hpp"

namespace java::io
{
	// Fields
	
	PipedWriter::PipedWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PipedWriter::PipedWriter()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"()V"
		);
	}
	PipedWriter::PipedWriter(java::io::PipedReader arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedWriter",
			"(Ljava/io/PipedReader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void PipedWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedWriter::connect(java::io::PipedReader arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedReader;)V",
			arg0.__jniObject().object()
		);
	}
	void PipedWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


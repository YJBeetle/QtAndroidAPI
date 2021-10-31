#include "./PipedReader.hpp"
#include "./PipedWriter.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	PipedWriter::PipedWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
	
	// Constructors
	PipedWriter::PipedWriter()
		: java::io::Writer(
			"java.io.PipedWriter",
			"()V"
		) {}
	PipedWriter::PipedWriter(java::io::PipedReader arg0)
		: java::io::Writer(
			"java.io.PipedWriter",
			"(Ljava/io/PipedReader;)V",
			arg0.object()
		) {}
	
	// Methods
	void PipedWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedWriter::connect(java::io::PipedReader arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedReader;)V",
			arg0.object()
		);
	}
	void PipedWriter::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedWriter::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io

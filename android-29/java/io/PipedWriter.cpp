#include "../../JCharArray.hpp"
#include "./PipedReader.hpp"
#include "./PipedWriter.hpp"

namespace java::io
{
	// Fields
	
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
	void PipedWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedWriter::connect(java::io::PipedReader arg0) const
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedReader;)V",
			arg0.object()
		);
	}
	void PipedWriter::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void PipedWriter::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void PipedWriter::write(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io


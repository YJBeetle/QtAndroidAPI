#include "./PipedWriter.hpp"
#include "../lang/Thread.hpp"
#include "./PipedReader.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	PipedReader::PipedReader(QJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	PipedReader::PipedReader()
		: java::io::Reader(
			"java.io.PipedReader",
			"()V"
		) {}
	PipedReader::PipedReader(jint arg0)
		: java::io::Reader(
			"java.io.PipedReader",
			"(I)V",
			arg0
		) {}
	PipedReader::PipedReader(java::io::PipedWriter arg0)
		: java::io::Reader(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;)V",
			arg0.object()
		) {}
	PipedReader::PipedReader(java::io::PipedWriter arg0, jint arg1)
		: java::io::Reader(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void PipedReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedReader::connect(java::io::PipedWriter arg0)
	{
		callMethod<void>(
			"connect",
			"(Ljava/io/PipedWriter;)V",
			arg0.object()
		);
	}
	jint PipedReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PipedReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io


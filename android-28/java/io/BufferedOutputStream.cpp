#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "./BufferedOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	BufferedOutputStream::BufferedOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
	
	// Constructors
	BufferedOutputStream::BufferedOutputStream(java::io::OutputStream arg0)
		: java::io::FilterOutputStream(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		) {}
	BufferedOutputStream::BufferedOutputStream(java::io::OutputStream arg0, jint arg1)
		: java::io::FilterOutputStream(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void BufferedOutputStream::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedOutputStream::write(JByteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io


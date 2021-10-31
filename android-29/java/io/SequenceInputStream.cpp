#include "./InputStream.hpp"
#include "./SequenceInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	SequenceInputStream::SequenceInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	SequenceInputStream::SequenceInputStream(__JniBaseClass arg0)
		: java::io::InputStream(
			"java.io.SequenceInputStream",
			"(Ljava/util/Enumeration;)V",
			arg0.object()
		) {}
	SequenceInputStream::SequenceInputStream(java::io::InputStream arg0, java::io::InputStream arg1)
		: java::io::InputStream(
			"java.io.SequenceInputStream",
			"(Ljava/io/InputStream;Ljava/io/InputStream;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jint SequenceInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void SequenceInputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SequenceInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint SequenceInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
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


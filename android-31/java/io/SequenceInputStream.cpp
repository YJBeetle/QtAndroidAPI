#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./SequenceInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	SequenceInputStream::SequenceInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	SequenceInputStream::SequenceInputStream(JObject arg0)
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
	jint SequenceInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	void SequenceInputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint SequenceInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint SequenceInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::io


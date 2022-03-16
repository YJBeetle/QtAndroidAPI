#include "../../JByteArray.hpp"
#include "./InputStream.hpp"
#include "./LineNumberInputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	LineNumberInputStream::LineNumberInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.LineNumberInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jint LineNumberInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	jint LineNumberInputStream::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberInputStream::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jint LineNumberInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint LineNumberInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void LineNumberInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LineNumberInputStream::setLineNumber(jint arg0) const
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


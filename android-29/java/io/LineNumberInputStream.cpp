#include "./InputStream.hpp"
#include "./LineNumberInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	LineNumberInputStream::LineNumberInputStream(QAndroidJniObject obj) : java::io::FilterInputStream(obj) {}
	
	// Constructors
	LineNumberInputStream::LineNumberInputStream(java::io::InputStream arg0)
		: java::io::FilterInputStream(
			"java.io.LineNumberInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	
	// Methods
	jint LineNumberInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	jint LineNumberInputStream::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberInputStream::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jint LineNumberInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint LineNumberInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void LineNumberInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LineNumberInputStream::setLineNumber(jint arg0)
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


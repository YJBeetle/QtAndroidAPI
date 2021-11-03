#include "./Writer.hpp"
#include "../nio/CharBuffer.hpp"
#include "./Reader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	Reader::Reader(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::io::Reader Reader::nullReader()
	{
		return callStaticObjectMethod(
			"java.io.Reader",
			"nullReader",
			"()Ljava/io/Reader;"
		);
	}
	void Reader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Reader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean Reader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint Reader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint Reader::read(jcharArray arg0)
	{
		return callMethod<jint>(
			"read",
			"([C)I",
			arg0
		);
	}
	jint Reader::read(java::nio::CharBuffer arg0)
	{
		return callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.object()
		);
	}
	jint Reader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Reader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void Reader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong Reader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jlong Reader::transferTo(java::io::Writer arg0)
	{
		return callMethod<jlong>(
			"transferTo",
			"(Ljava/io/Writer;)J",
			arg0.object()
		);
	}
} // namespace java::io


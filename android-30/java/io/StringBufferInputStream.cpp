#include "./StringBufferInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	StringBufferInputStream::StringBufferInputStream(QJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	StringBufferInputStream::StringBufferInputStream(jstring arg0)
		: java::io::InputStream(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint StringBufferInputStream::available()
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	jint StringBufferInputStream::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringBufferInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void StringBufferInputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringBufferInputStream::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


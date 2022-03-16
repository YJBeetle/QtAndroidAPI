#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./StringBufferInputStream.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	StringBufferInputStream::StringBufferInputStream(JString arg0)
		: java::io::InputStream(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint StringBufferInputStream::available() const
	{
		return callMethod<jint>(
			"available",
			"()I"
		);
	}
	jint StringBufferInputStream::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringBufferInputStream::read(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void StringBufferInputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringBufferInputStream::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./StringBufferInputStream.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	StringBufferInputStream::StringBufferInputStream(QAndroidJniObject obj) : java::io::InputStream(obj) {}
	
	// Constructors
	StringBufferInputStream::StringBufferInputStream(JString arg0)
		: java::io::InputStream(
			"java.io.StringBufferInputStream",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	jint StringBufferInputStream::read(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([BII)I",
			arg0.object<jbyteArray>(),
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


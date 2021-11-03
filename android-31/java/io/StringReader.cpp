#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./StringReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	StringReader::StringReader(QAndroidJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	StringReader::StringReader(JString arg0)
		: java::io::Reader(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void StringReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean StringReader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint StringReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringReader::read(JCharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jboolean StringReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void StringReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


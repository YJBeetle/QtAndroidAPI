#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./StringReader.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	StringReader::StringReader(JString arg0)
		: java::io::Reader(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void StringReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean StringReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint StringReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jboolean StringReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void StringReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


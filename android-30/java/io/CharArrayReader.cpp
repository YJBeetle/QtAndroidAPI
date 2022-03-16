#include "../../JCharArray.hpp"
#include "./CharArrayReader.hpp"

namespace java::io
{
	// Fields
	
	// Constructors
	CharArrayReader::CharArrayReader(JCharArray arg0)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([C)V",
			arg0.object<jcharArray>()
		) {}
	CharArrayReader::CharArrayReader(JCharArray arg0, jint arg1, jint arg2)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	void CharArrayReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayReader::mark(jint arg0) const
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean CharArrayReader::markSupported() const
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CharArrayReader::read() const
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CharArrayReader::read(JCharArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	jboolean CharArrayReader::ready() const
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void CharArrayReader::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong CharArrayReader::skip(jlong arg0) const
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


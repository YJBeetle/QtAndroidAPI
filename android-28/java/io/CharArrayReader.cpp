#include "./CharArrayReader.hpp"

namespace java::io
{
	// Fields
	
	// QAndroidJniObject forward
	CharArrayReader::CharArrayReader(QAndroidJniObject obj) : java::io::Reader(obj) {}
	
	// Constructors
	CharArrayReader::CharArrayReader(jcharArray arg0)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([C)V",
			arg0
		) {}
	CharArrayReader::CharArrayReader(jcharArray arg0, jint arg1, jint arg2)
		: java::io::Reader(
			"java.io.CharArrayReader",
			"([CII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	void CharArrayReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayReader::mark(jint arg0)
	{
		callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean CharArrayReader::markSupported()
	{
		return callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CharArrayReader::read()
	{
		return callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CharArrayReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CharArrayReader::ready()
	{
		return callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void CharArrayReader::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong CharArrayReader::skip(jlong arg0)
	{
		return callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io

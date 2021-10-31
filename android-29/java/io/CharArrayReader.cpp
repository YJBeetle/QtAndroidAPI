#include "./CharArrayReader.hpp"

namespace java::io
{
	// Fields
	
	CharArrayReader::CharArrayReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CharArrayReader::CharArrayReader(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayReader",
			"([C)V",
			arg0
		);
	}
	CharArrayReader::CharArrayReader(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayReader",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	void CharArrayReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void CharArrayReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean CharArrayReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint CharArrayReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint CharArrayReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean CharArrayReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void CharArrayReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong CharArrayReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


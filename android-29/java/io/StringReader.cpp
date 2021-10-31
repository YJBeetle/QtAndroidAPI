#include "./StringReader.hpp"

namespace java::io
{
	// Fields
	
	StringReader::StringReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StringReader::StringReader(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringReader",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void StringReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean StringReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint StringReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint StringReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean StringReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void StringReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong StringReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


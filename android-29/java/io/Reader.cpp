#include "./Writer.hpp"
#include "../nio/CharBuffer.hpp"
#include "./Reader.hpp"

namespace java::io
{
	// Fields
	
	Reader::Reader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Reader::nullReader()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.Reader",
			"nullReader",
			"()Ljava/io/Reader;"
		);
	}
	void Reader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Reader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean Reader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint Reader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint Reader::read(jcharArray arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([C)I",
			arg0
		);
	}
	jint Reader::read(java::nio::CharBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"read",
			"(Ljava/nio/CharBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Reader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Reader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void Reader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong Reader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jlong Reader::transferTo(java::io::Writer arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/Writer;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace java::io


#include "./Reader.hpp"
#include "./LineNumberReader.hpp"

namespace java::io
{
	// Fields
	
	LineNumberReader::LineNumberReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LineNumberReader::LineNumberReader(java::io::Reader &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	LineNumberReader::LineNumberReader(java::io::Reader &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.LineNumberReader",
			"(Ljava/io/Reader;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint LineNumberReader::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	void LineNumberReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jint LineNumberReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint LineNumberReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring LineNumberReader::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LineNumberReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LineNumberReader::setLineNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	jlong LineNumberReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


#include "./Reader.hpp"
#include "./BufferedReader.hpp"

namespace java::io
{
	// Fields
	
	BufferedReader::BufferedReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferedReader::BufferedReader(java::io::Reader &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;)V",
			arg0.__jniObject().object()
		);
	}
	BufferedReader::BufferedReader(java::io::Reader &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedReader",
			"(Ljava/io/Reader;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BufferedReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject BufferedReader::lines()
	{
		return __thiz.callObjectMethod(
			"lines",
			"()Ljava/util/stream/Stream;"
		);
	}
	void BufferedReader::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedReader::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring BufferedReader::readLine()
	{
		return __thiz.callObjectMethod(
			"readLine",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean BufferedReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
	void BufferedReader::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedReader::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


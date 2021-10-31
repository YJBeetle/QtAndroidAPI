#include "./PipedWriter.hpp"
#include "../lang/Thread.hpp"
#include "./PipedReader.hpp"

namespace java::io
{
	// Fields
	
	PipedReader::PipedReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PipedReader::PipedReader()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"()V"
		);
	}
	PipedReader::PipedReader(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(I)V",
			arg0
		);
	}
	PipedReader::PipedReader(java::io::PipedWriter arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object()
		);
	}
	PipedReader::PipedReader(java::io::PipedWriter arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedReader",
			"(Ljava/io/PipedWriter;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void PipedReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedReader::connect(java::io::PipedWriter arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedWriter;)V",
			arg0.__jniObject().object()
		);
	}
	jint PipedReader::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedReader::read(jcharArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([CII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean PipedReader::ready()
	{
		return __thiz.callMethod<jboolean>(
			"ready",
			"()Z"
		);
	}
} // namespace java::io


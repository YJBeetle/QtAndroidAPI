#include "./PipedOutputStream.hpp"
#include "../lang/Thread.hpp"
#include "./PipedInputStream.hpp"

namespace java::io
{
	// Fields
	
	PipedInputStream::PipedInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PipedInputStream::PipedInputStream()
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"()V"
		);
	}
	PipedInputStream::PipedInputStream(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(I)V",
			arg0
		);
	}
	PipedInputStream::PipedInputStream(java::io::PipedOutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	PipedInputStream::PipedInputStream(java::io::PipedOutputStream &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PipedInputStream",
			"(Ljava/io/PipedOutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint PipedInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PipedInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PipedInputStream::connect(java::io::PipedOutputStream arg0)
	{
		__thiz.callMethod<void>(
			"connect",
			"(Ljava/io/PipedOutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	jint PipedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PipedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


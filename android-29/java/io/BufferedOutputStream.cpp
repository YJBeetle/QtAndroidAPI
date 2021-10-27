#include "./OutputStream.hpp"
#include "./BufferedOutputStream.hpp"

namespace java::io
{
	// Fields
	
	BufferedOutputStream::BufferedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferedOutputStream::BufferedOutputStream(java::io::OutputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	BufferedOutputStream::BufferedOutputStream(java::io::OutputStream &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedOutputStream",
			"(Ljava/io/OutputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BufferedOutputStream::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void BufferedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void BufferedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


#include "./InputStream.hpp"
#include "./BufferedInputStream.hpp"

namespace java::io
{
	// Fields
	
	BufferedInputStream::BufferedInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BufferedInputStream::BufferedInputStream(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	BufferedInputStream::BufferedInputStream(java::io::InputStream &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.BufferedInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint BufferedInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void BufferedInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void BufferedInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean BufferedInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint BufferedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint BufferedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void BufferedInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong BufferedInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
} // namespace java::io


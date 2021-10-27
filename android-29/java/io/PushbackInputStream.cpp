#include "./InputStream.hpp"
#include "./PushbackInputStream.hpp"

namespace java::io
{
	// Fields
	
	PushbackInputStream::PushbackInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PushbackInputStream::PushbackInputStream(java::io::InputStream &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	PushbackInputStream::PushbackInputStream(java::io::InputStream &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.io.PushbackInputStream",
			"(Ljava/io/InputStream;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jint PushbackInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void PushbackInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void PushbackInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean PushbackInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint PushbackInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint PushbackInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void PushbackInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong PushbackInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	void PushbackInputStream::unread(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"([B)V",
			arg0
		);
	}
	void PushbackInputStream::unread(jint arg0)
	{
		__thiz.callMethod<void>(
			"unread",
			"(I)V",
			arg0
		);
	}
	void PushbackInputStream::unread(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"unread",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::io


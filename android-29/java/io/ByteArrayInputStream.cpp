#include "./OutputStream.hpp"
#include "./ByteArrayInputStream.hpp"

namespace java::io
{
	// Fields
	
	ByteArrayInputStream::ByteArrayInputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ByteArrayInputStream::ByteArrayInputStream(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayInputStream",
			"([B)V",
			arg0
		);
	}
	ByteArrayInputStream::ByteArrayInputStream(jbyteArray &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayInputStream",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint ByteArrayInputStream::available()
	{
		return __thiz.callMethod<jint>(
			"available",
			"()I"
		);
	}
	void ByteArrayInputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayInputStream::mark(jint arg0)
	{
		__thiz.callMethod<void>(
			"mark",
			"(I)V",
			arg0
		);
	}
	jboolean ByteArrayInputStream::markSupported()
	{
		return __thiz.callMethod<jboolean>(
			"markSupported",
			"()Z"
		);
	}
	jint ByteArrayInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I"
		);
	}
	jint ByteArrayInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray ByteArrayInputStream::readAllBytes()
	{
		return __thiz.callObjectMethod(
			"readAllBytes",
			"()[B"
		).object<jbyteArray>();
	}
	jint ByteArrayInputStream::readNBytes(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"readNBytes",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	void ByteArrayInputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jlong ByteArrayInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0
		);
	}
	jlong ByteArrayInputStream::transferTo(java::io::OutputStream arg0)
	{
		return __thiz.callMethod<jlong>(
			"transferTo",
			"(Ljava/io/OutputStream;)J",
			arg0.__jniObject().object()
		);
	}
} // namespace java::io


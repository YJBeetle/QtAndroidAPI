#include "./OutputStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "./ByteArrayOutputStream.hpp"

namespace java::io
{
	// Fields
	
	ByteArrayOutputStream::ByteArrayOutputStream(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ByteArrayOutputStream::ByteArrayOutputStream()
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayOutputStream",
			"()V"
		);
	}
	ByteArrayOutputStream::ByteArrayOutputStream(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.ByteArrayOutputStream",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void ByteArrayOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayOutputStream::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint ByteArrayOutputStream::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jbyteArray ByteArrayOutputStream::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ByteArrayOutputStream::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(java::nio::charset::Charset arg0)
	{
		return __thiz.callObjectMethod(
			"toString",
			"(Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	void ByteArrayOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ByteArrayOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ByteArrayOutputStream::writeBytes(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0
		);
	}
	void ByteArrayOutputStream::writeTo(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::io


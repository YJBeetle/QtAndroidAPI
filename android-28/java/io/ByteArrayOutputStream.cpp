#include "./OutputStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "./ByteArrayOutputStream.hpp"

namespace java::io
{
	// Fields
	
	// QJniObject forward
	ByteArrayOutputStream::ByteArrayOutputStream(QJniObject obj) : java::io::OutputStream(obj) {}
	
	// Constructors
	ByteArrayOutputStream::ByteArrayOutputStream()
		: java::io::OutputStream(
			"java.io.ByteArrayOutputStream",
			"()V"
		) {}
	ByteArrayOutputStream::ByteArrayOutputStream(jint arg0)
		: java::io::OutputStream(
			"java.io.ByteArrayOutputStream",
			"(I)V",
			arg0
		) {}
	
	// Methods
	void ByteArrayOutputStream::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayOutputStream::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint ByteArrayOutputStream::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	jbyteArray ByteArrayOutputStream::toByteArray()
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ByteArrayOutputStream::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jint arg0)
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(jstring arg0)
	{
		return callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ByteArrayOutputStream::toString(java::nio::charset::Charset arg0)
	{
		return callObjectMethod(
			"toString",
			"(Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	void ByteArrayOutputStream::write(jint arg0)
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ByteArrayOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ByteArrayOutputStream::writeBytes(jbyteArray arg0)
	{
		callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0
		);
	}
	void ByteArrayOutputStream::writeTo(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::io


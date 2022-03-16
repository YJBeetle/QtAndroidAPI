#include "../../JByteArray.hpp"
#include "./OutputStream.hpp"
#include "../../JString.hpp"
#include "../nio/charset/Charset.hpp"
#include "./ByteArrayOutputStream.hpp"

namespace java::io
{
	// Fields
	
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
	void ByteArrayOutputStream::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ByteArrayOutputStream::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	jint ByteArrayOutputStream::size() const
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	JByteArray ByteArrayOutputStream::toByteArray() const
	{
		return callObjectMethod(
			"toByteArray",
			"()[B"
		);
	}
	JString ByteArrayOutputStream::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JString ByteArrayOutputStream::toString(jint arg0) const
	{
		return callObjectMethod(
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString ByteArrayOutputStream::toString(JString arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString ByteArrayOutputStream::toString(java::nio::charset::Charset arg0) const
	{
		return callObjectMethod(
			"toString",
			"(Ljava/nio/charset/Charset;)Ljava/lang/String;",
			arg0.object()
		);
	}
	void ByteArrayOutputStream::write(jint arg0) const
	{
		callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void ByteArrayOutputStream::write(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"write",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void ByteArrayOutputStream::writeBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"writeBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void ByteArrayOutputStream::writeTo(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"writeTo",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::io


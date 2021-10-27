#include "../io/InputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Decoder.hpp"

namespace java::util
{
	// Fields
	
	Base64_Decoder::Base64_Decoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray Base64_Decoder::decode(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Base64_Decoder::decode(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Base64_Decoder::decode(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jint Base64_Decoder::decode(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Base64_Decoder::decode(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Base64_Decoder::wrap(java::io::InputStream arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/io/InputStream;)Ljava/io/InputStream;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util


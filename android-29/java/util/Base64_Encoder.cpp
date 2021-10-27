#include "../io/OutputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Encoder.hpp"

namespace java::util
{
	// Fields
	
	Base64_Encoder::Base64_Encoder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray Base64_Encoder::encode(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint Base64_Encoder::encode(jbyteArray arg0, jbyteArray arg1)
	{
		return __thiz.callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Base64_Encoder::encode(java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"encode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object()
		);
	}
	jstring Base64_Encoder::encodeToString(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Base64_Encoder::withoutPadding()
	{
		return __thiz.callObjectMethod(
			"withoutPadding",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	QAndroidJniObject Base64_Encoder::wrap(java::io::OutputStream arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/io/OutputStream;)Ljava/io/OutputStream;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util


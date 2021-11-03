#include "../io/OutputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Encoder.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Base64_Encoder::Base64_Encoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray Base64_Encoder::encode(jbyteArray arg0)
	{
		return callObjectMethod(
			"encode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint Base64_Encoder::encode(jbyteArray arg0, jbyteArray arg1)
	{
		return callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer Base64_Encoder::encode(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	jstring Base64_Encoder::encodeToString(jbyteArray arg0)
	{
		return callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	java::util::Base64_Encoder Base64_Encoder::withoutPadding()
	{
		return callObjectMethod(
			"withoutPadding",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	java::io::OutputStream Base64_Encoder::wrap(java::io::OutputStream arg0)
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/io/OutputStream;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
} // namespace java::util


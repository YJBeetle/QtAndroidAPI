#include "../io/InputStream.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Decoder.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Base64_Decoder::Base64_Decoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jbyteArray Base64_Decoder::decode(jbyteArray arg0)
	{
		return callObjectMethod(
			"decode",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Base64_Decoder::decode(jstring arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jint Base64_Decoder::decode(jbyteArray arg0, jbyteArray arg1)
	{
		return callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0,
			arg1
		);
	}
	java::nio::ByteBuffer Base64_Decoder::decode(java::nio::ByteBuffer arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::io::InputStream Base64_Decoder::wrap(java::io::InputStream arg0)
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/io/InputStream;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
} // namespace java::util


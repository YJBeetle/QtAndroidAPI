#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/InputStream.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Decoder.hpp"

namespace java::util
{
	// Fields
	
	// QJniObject forward
	Base64_Decoder::Base64_Decoder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray Base64_Decoder::decode(JByteArray arg0)
	{
		return callObjectMethod(
			"decode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray Base64_Decoder::decode(JString arg0)
	{
		return callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	jint Base64_Decoder::decode(JByteArray arg0, JByteArray arg1)
	{
		return callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
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


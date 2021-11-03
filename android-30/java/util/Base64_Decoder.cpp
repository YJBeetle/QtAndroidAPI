#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/InputStream.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Decoder.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Base64_Decoder::Base64_Decoder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray Base64_Decoder::decode(JByteArray arg0) const
	{
		return callObjectMethod(
			"decode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray Base64_Decoder::decode(JString arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	jint Base64_Decoder::decode(JByteArray arg0, JByteArray arg1) const
	{
		return callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	java::nio::ByteBuffer Base64_Decoder::decode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	java::io::InputStream Base64_Decoder::wrap(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/io/InputStream;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
} // namespace java::util


#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../io/OutputStream.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Base64_Encoder.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	Base64_Encoder::Base64_Encoder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray Base64_Encoder::encode(JByteArray arg0)
	{
		return callObjectMethod(
			"encode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	jint Base64_Encoder::encode(JByteArray arg0, JByteArray arg1)
	{
		return callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
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
	JString Base64_Encoder::encodeToString(JByteArray arg0)
	{
		return callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0.object<jbyteArray>()
		);
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


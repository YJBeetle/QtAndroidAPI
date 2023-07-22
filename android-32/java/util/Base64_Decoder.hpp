#pragma once

#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./Base64_Decoder.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray Base64_Decoder::decode(JByteArray arg0) const
	{
		return callObjectMethod(
			"decode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray Base64_Decoder::decode(JString arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline jint Base64_Decoder::decode(JByteArray arg0, JByteArray arg1) const
	{
		return callMethod<jint>(
			"decode",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer Base64_Decoder::decode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"decode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	inline java::io::InputStream Base64_Decoder::wrap(java::io::InputStream arg0) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/io/InputStream;)Ljava/io/InputStream;",
			arg0.object()
		);
	}
} // namespace java::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util;
#endif

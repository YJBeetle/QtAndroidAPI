#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./Base64_Encoder.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray Base64_Encoder::encode(JByteArray arg0) const
	{
		return callObjectMethod(
			"encode",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline jint Base64_Encoder::encode(JByteArray arg0, JByteArray arg1) const
	{
		return callMethod<jint>(
			"encode",
			"([B[B)I",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline java::nio::ByteBuffer Base64_Encoder::encode(java::nio::ByteBuffer arg0) const
	{
		return callObjectMethod(
			"encode",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.object()
		);
	}
	inline JString Base64_Encoder::encodeToString(JByteArray arg0) const
	{
		return callObjectMethod(
			"encodeToString",
			"([B)Ljava/lang/String;",
			arg0.object<jbyteArray>()
		);
	}
	inline java::util::Base64_Encoder Base64_Encoder::withoutPadding() const
	{
		return callObjectMethod(
			"withoutPadding",
			"()Ljava/util/Base64$Encoder;"
		);
	}
	inline java::io::OutputStream Base64_Encoder::wrap(java::io::OutputStream arg0) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/io/OutputStream;)Ljava/io/OutputStream;",
			arg0.object()
		);
	}
} // namespace java::util

// Base class headers


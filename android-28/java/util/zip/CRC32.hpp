#pragma once

#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.def.hpp"
#include "./CRC32.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline CRC32::CRC32()
		: JObject(
			"java.util.zip.CRC32",
			"()V"
		) {}
	
	// Methods
	inline jlong CRC32::getValue() const
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	inline void CRC32::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void CRC32::update(jint arg0) const
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	inline void CRC32::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void CRC32::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::util::zip

// Base class headers


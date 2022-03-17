#pragma once

#include "../../../JByteArray.hpp"
#include "../../nio/ByteBuffer.def.hpp"
#include "./Adler32.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline Adler32::Adler32()
		: JObject(
			"java.util.zip.Adler32",
			"()V"
		) {}
	
	// Methods
	inline jlong Adler32::getValue() const
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	inline void Adler32::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Adler32::update(jint arg0) const
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	inline void Adler32::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Adler32::update(JByteArray arg0, jint arg1, jint arg2) const
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


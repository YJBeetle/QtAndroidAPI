#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../nio/ByteBuffer.def.hpp"
#include "./CRC32C.def.hpp"

namespace java::util::zip
{
	// Fields
	
	// Constructors
	inline CRC32C::CRC32C()
		: JObject(
			"java.util.zip.CRC32C",
			"()V"
		) {}
	
	// Methods
	inline jlong CRC32C::getValue() const
	{
		return callMethod<jlong>(
			"getValue",
			"()J"
		);
	}
	inline void CRC32C::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void CRC32C::update(jint arg0) const
	{
		callMethod<void>(
			"update",
			"(I)V",
			arg0
		);
	}
	inline void CRC32C::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void CRC32C::update(JByteArray arg0, jint arg1, jint arg2) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::zip;
#endif

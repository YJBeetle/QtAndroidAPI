#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "./MacSpi.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline MacSpi::MacSpi()
		: JObject(
			"javax.crypto.MacSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject MacSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif

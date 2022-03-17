#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./MessageDigestSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline MessageDigestSpi::MessageDigestSpi()
		: JObject(
			"java.security.MessageDigestSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject MessageDigestSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

// Base class headers


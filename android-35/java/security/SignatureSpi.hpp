#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./AlgorithmParameters.def.hpp"
#include "./SecureRandom.def.hpp"
#include "./SignatureSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SignatureSpi::SignatureSpi()
		: JObject(
			"java.security.SignatureSpi",
			"()V"
		) {}
	
	// Methods
	inline JObject SignatureSpi::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif

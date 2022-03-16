#pragma once

#include "./KeyPair.def.hpp"
#include "./SecureRandom.def.hpp"
#include "./KeyPairGeneratorSpi.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyPairGeneratorSpi::KeyPairGeneratorSpi()
		: JObject(
			"java.security.KeyPairGeneratorSpi",
			"()V"
		) {}
	
	// Methods
	inline java::security::KeyPair KeyPairGeneratorSpi::generateKeyPair() const
	{
		return callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	inline void KeyPairGeneratorSpi::initialize(jint arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	inline void KeyPairGeneratorSpi::initialize(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

// Base class headers


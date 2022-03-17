#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/Provider.def.hpp"
#include "../../java/security/SecureRandom.def.hpp"
#include "./KeyGeneratorSpi.def.hpp"
#include "./KeyGenerator.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::KeyGenerator KeyGenerator::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyGenerator::generateKey() const
	{
		return callObjectMethod(
			"generateKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	inline JString KeyGenerator::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider KeyGenerator::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void KeyGenerator::init(jint arg0) const
	{
		callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	inline void KeyGenerator::init(java::security::SecureRandom arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/SecureRandom;)V",
			arg0.object()
		);
	}
	inline void KeyGenerator::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	inline void KeyGenerator::init(jint arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	inline void KeyGenerator::init(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto

// Base class headers


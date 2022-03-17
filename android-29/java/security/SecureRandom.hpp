#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./MessageDigest.def.hpp"
#include "./Provider.def.hpp"
#include "./SecureRandomSpi.def.hpp"
#include "./SecureRandom.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline SecureRandom::SecureRandom()
		: java::util::Random(
			"java.security.SecureRandom",
			"()V"
		) {}
	inline SecureRandom::SecureRandom(JByteArray arg0)
		: java::util::Random(
			"java.security.SecureRandom",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::security::SecureRandom SecureRandom::getInstanceStrong()
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstanceStrong",
			"()Ljava/security/SecureRandom;"
		);
	}
	inline JByteArray SecureRandom::getSeed(jint arg0)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getSeed",
			"(I)[B",
			arg0
		);
	}
	inline JByteArray SecureRandom::generateSeed(jint arg0) const
	{
		return callObjectMethod(
			"generateSeed",
			"(I)[B",
			arg0
		);
	}
	inline JString SecureRandom::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SecureRandom::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/SecureRandomParameters;"
		);
	}
	inline java::security::Provider SecureRandom::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void SecureRandom::nextBytes(JByteArray arg0) const
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void SecureRandom::nextBytes(JByteArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"nextBytes",
			"([BLjava/security/SecureRandomParameters;)V",
			arg0.object<jbyteArray>(),
			arg1.object()
		);
	}
	inline void SecureRandom::reseed() const
	{
		callMethod<void>(
			"reseed",
			"()V"
		);
	}
	inline void SecureRandom::reseed(JObject arg0) const
	{
		callMethod<void>(
			"reseed",
			"(Ljava/security/SecureRandomParameters;)V",
			arg0.object()
		);
	}
	inline void SecureRandom::setSeed(JByteArray arg0) const
	{
		callMethod<void>(
			"setSeed",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void SecureRandom::setSeed(jlong arg0) const
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
	inline JString SecureRandom::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers
#include "../util/Random.hpp"


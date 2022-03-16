#pragma once

#include "../../JString.hpp"
#include "./AlgorithmParameterGeneratorSpi.def.hpp"
#include "./AlgorithmParameters.def.hpp"
#include "./Provider.def.hpp"
#include "./SecureRandom.def.hpp"
#include "./AlgorithmParameterGenerator.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0.object<jstring>()
		);
	}
	inline java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/AlgorithmParameterGenerator;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::AlgorithmParameterGenerator AlgorithmParameterGenerator::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.AlgorithmParameterGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/AlgorithmParameterGenerator;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::AlgorithmParameters AlgorithmParameterGenerator::generateParameters() const
	{
		return callObjectMethod(
			"generateParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	inline JString AlgorithmParameterGenerator::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider AlgorithmParameterGenerator::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void AlgorithmParameterGenerator::init(jint arg0) const
	{
		callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	inline void AlgorithmParameterGenerator::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	inline void AlgorithmParameterGenerator::init(jint arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.object()
		);
	}
	inline void AlgorithmParameterGenerator::init(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::security

// Base class headers


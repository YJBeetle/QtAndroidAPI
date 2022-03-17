#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/AlgorithmParameters.def.hpp"
#include "../../java/security/Provider.def.hpp"
#include "./ExemptionMechanismSpi.def.hpp"
#include "./ExemptionMechanism.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JByteArray ExemptionMechanism::genExemptionBlob() const
	{
		return callObjectMethod(
			"genExemptionBlob",
			"()[B"
		);
	}
	inline jint ExemptionMechanism::genExemptionBlob(JByteArray arg0) const
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	inline jint ExemptionMechanism::genExemptionBlob(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JString ExemptionMechanism::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint ExemptionMechanism::getOutputSize(jint arg0) const
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	inline java::security::Provider ExemptionMechanism::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void ExemptionMechanism::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	inline void ExemptionMechanism::init(JObject arg0, java::security::AlgorithmParameters arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ExemptionMechanism::init(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean ExemptionMechanism::isCryptoAllowed(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isCryptoAllowed",
			"(Ljava/security/Key;)Z",
			arg0.object()
		);
	}
} // namespace javax::crypto

// Base class headers


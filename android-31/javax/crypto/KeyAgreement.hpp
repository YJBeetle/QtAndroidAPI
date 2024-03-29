#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/security/Provider.def.hpp"
#include "../../java/security/Provider_Service.def.hpp"
#include "../../java/security/SecureRandom.def.hpp"
#include "./KeyAgreementSpi.def.hpp"
#include "./KeyAgreement.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject KeyAgreement::doPhase(JObject arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"doPhase",
			"(Ljava/security/Key;Z)Ljava/security/Key;",
			arg0.object(),
			arg1
		);
	}
	inline JByteArray KeyAgreement::generateSecret() const
	{
		return callObjectMethod(
			"generateSecret",
			"()[B"
		);
	}
	inline jint KeyAgreement::generateSecret(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"generateSecret",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JObject KeyAgreement::generateSecret(JString arg0) const
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKey;",
			arg0.object<jstring>()
		);
	}
	inline JString KeyAgreement::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::Provider KeyAgreement::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void KeyAgreement::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	inline void KeyAgreement::init(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void KeyAgreement::init(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void KeyAgreement::init(JObject arg0, JObject arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif

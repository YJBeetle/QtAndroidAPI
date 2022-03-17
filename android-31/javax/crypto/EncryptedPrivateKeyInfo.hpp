#pragma once

#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/AlgorithmParameters.def.hpp"
#include "../../java/security/Provider.def.hpp"
#include "../../java/security/spec/PKCS8EncodedKeySpec.def.hpp"
#include "./Cipher.def.hpp"
#include "./EncryptedPrivateKeyInfo.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	inline EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(JByteArray arg0)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	inline EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(JString arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	inline EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(java::security::AlgorithmParameters arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/security/AlgorithmParameters;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	inline JString EncryptedPrivateKeyInfo::getAlgName() const
	{
		return callObjectMethod(
			"getAlgName",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::AlgorithmParameters EncryptedPrivateKeyInfo::getAlgParameters() const
	{
		return callObjectMethod(
			"getAlgParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	inline JByteArray EncryptedPrivateKeyInfo::getEncoded() const
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	inline JByteArray EncryptedPrivateKeyInfo::getEncryptedData() const
	{
		return callObjectMethod(
			"getEncryptedData",
			"()[B"
		);
	}
	inline java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	inline java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(javax::crypto::Cipher arg0) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	inline java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0, JString arg1) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0, java::security::Provider arg1) const
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto

// Base class headers


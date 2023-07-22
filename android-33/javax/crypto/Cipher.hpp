#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "../../java/security/AlgorithmParameters.def.hpp"
#include "../../java/security/Provider.def.hpp"
#include "../../java/security/Provider_Service.def.hpp"
#include "../../java/security/SecureRandom.def.hpp"
#include "../../java/security/cert/Certificate.def.hpp"
#include "./CipherSpi.def.hpp"
#include "./ExemptionMechanism.def.hpp"
#include "./Cipher.def.hpp"

namespace javax::crypto
{
	// Fields
	inline jint Cipher::DECRYPT_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"DECRYPT_MODE"
		);
	}
	inline jint Cipher::ENCRYPT_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"ENCRYPT_MODE"
		);
	}
	inline jint Cipher::PRIVATE_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"PRIVATE_KEY"
		);
	}
	inline jint Cipher::PUBLIC_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"PUBLIC_KEY"
		);
	}
	inline jint Cipher::SECRET_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"SECRET_KEY"
		);
	}
	inline jint Cipher::UNWRAP_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"UNWRAP_MODE"
		);
	}
	inline jint Cipher::WRAP_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"WRAP_MODE"
		);
	}
	
	// Constructors
	
	// Methods
	inline javax::crypto::Cipher Cipher::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::Cipher Cipher::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::Cipher Cipher::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jint Cipher::getMaxAllowedKeyLength(JString arg0)
	{
		return callStaticMethod<jint>(
			"javax.crypto.Cipher",
			"getMaxAllowedKeyLength",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JObject Cipher::getMaxAllowedParameterSpec(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray Cipher::doFinal() const
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		);
	}
	inline JByteArray Cipher::doFinal(JByteArray arg0) const
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"doFinal",
			"([BII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint Cipher::doFinal(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"doFinal",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline jint Cipher::doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callMethod<jint>(
			"doFinal",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const
	{
		return callMethod<jint>(
			"doFinal",
			"([BII[B)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	inline jint Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const
	{
		return callMethod<jint>(
			"doFinal",
			"([BII[BI)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		);
	}
	inline JString Cipher::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline jint Cipher::getBlockSize() const
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	inline javax::crypto::ExemptionMechanism Cipher::getExemptionMechanism() const
	{
		return callObjectMethod(
			"getExemptionMechanism",
			"()Ljavax/crypto/ExemptionMechanism;"
		);
	}
	inline JByteArray Cipher::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	inline jint Cipher::getOutputSize(jint arg0) const
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	inline java::security::AlgorithmParameters Cipher::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	inline java::security::Provider Cipher::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Cipher::init(jint arg0, java::security::cert::Certificate arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Cipher::init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline void Cipher::init(jint arg0, JObject arg1, JObject arg2, java::security::SecureRandom arg3) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString Cipher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Cipher::unwrap(JByteArray arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	inline JByteArray Cipher::update(JByteArray arg0) const
	{
		return callObjectMethod(
			"update",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline JByteArray Cipher::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"update",
			"([BII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jint Cipher::update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callMethod<jint>(
			"update",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint Cipher::update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const
	{
		return callMethod<jint>(
			"update",
			"([BII[B)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>()
		);
	}
	inline jint Cipher::update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const
	{
		return callMethod<jint>(
			"update",
			"([BII[BI)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3.object<jbyteArray>(),
			arg4
		);
	}
	inline void Cipher::updateAAD(JByteArray arg0) const
	{
		callMethod<void>(
			"updateAAD",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Cipher::updateAAD(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"updateAAD",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Cipher::updateAAD(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"updateAAD",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JByteArray Cipher::wrap(JObject arg0) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/security/Key;)[B",
			arg0.object()
		);
	}
} // namespace javax::crypto

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace javax::crypto;
#endif

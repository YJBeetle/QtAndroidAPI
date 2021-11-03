#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "../../java/security/cert/Certificate.hpp"
#include "./CipherSpi.hpp"
#include "./ExemptionMechanism.hpp"
#include "./Cipher.hpp"

namespace javax::crypto
{
	// Fields
	jint Cipher::DECRYPT_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"DECRYPT_MODE"
		);
	}
	jint Cipher::ENCRYPT_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"ENCRYPT_MODE"
		);
	}
	jint Cipher::PRIVATE_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"PRIVATE_KEY"
		);
	}
	jint Cipher::PUBLIC_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"PUBLIC_KEY"
		);
	}
	jint Cipher::SECRET_KEY()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"SECRET_KEY"
		);
	}
	jint Cipher::UNWRAP_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"UNWRAP_MODE"
		);
	}
	jint Cipher::WRAP_MODE()
	{
		return getStaticField<jint>(
			"javax.crypto.Cipher",
			"WRAP_MODE"
		);
	}
	
	// QJniObject forward
	Cipher::Cipher(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::Cipher Cipher::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::Cipher Cipher::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::Cipher Cipher::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jint Cipher::getMaxAllowedKeyLength(JString arg0)
	{
		return callStaticMethod<jint>(
			"javax.crypto.Cipher",
			"getMaxAllowedKeyLength",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	JObject Cipher::getMaxAllowedParameterSpec(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0.object<jstring>()
		);
	}
	JByteArray Cipher::doFinal() const
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		);
	}
	JByteArray Cipher::doFinal(JByteArray arg0) const
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"doFinal",
			"([BII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint Cipher::doFinal(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"doFinal",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	jint Cipher::doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callMethod<jint>(
			"doFinal",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const
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
	jint Cipher::doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const
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
	JString Cipher::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	jint Cipher::getBlockSize() const
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	javax::crypto::ExemptionMechanism Cipher::getExemptionMechanism() const
	{
		return callObjectMethod(
			"getExemptionMechanism",
			"()Ljavax/crypto/ExemptionMechanism;"
		);
	}
	JByteArray Cipher::getIV() const
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		);
	}
	jint Cipher::getOutputSize(jint arg0) const
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	java::security::AlgorithmParameters Cipher::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	java::security::Provider Cipher::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Cipher::init(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;)V",
			arg0,
			arg1.object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;)V",
			arg0,
			arg1.object()
		);
	}
	void Cipher::init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, JObject arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2) const
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3) const
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
	void Cipher::init(jint arg0, JObject arg1, JObject arg2, java::security::SecureRandom arg3) const
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
	JString Cipher::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject Cipher::unwrap(JByteArray arg0, JString arg1, jint arg2) const
	{
		return callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0.object<jbyteArray>(),
			arg1.object<jstring>(),
			arg2
		);
	}
	JByteArray Cipher::update(JByteArray arg0) const
	{
		return callObjectMethod(
			"update",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	JByteArray Cipher::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"update",
			"([BII)[B",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jint Cipher::update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const
	{
		return callMethod<jint>(
			"update",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Cipher::update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const
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
	jint Cipher::update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const
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
	void Cipher::updateAAD(JByteArray arg0) const
	{
		callMethod<void>(
			"updateAAD",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Cipher::updateAAD(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"updateAAD",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Cipher::updateAAD(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"updateAAD",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JByteArray Cipher::wrap(JObject arg0) const
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/security/Key;)[B",
			arg0.object()
		);
	}
} // namespace javax::crypto


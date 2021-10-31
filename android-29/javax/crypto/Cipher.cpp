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
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"DECRYPT_MODE"
		);
	}
	jint Cipher::ENCRYPT_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"ENCRYPT_MODE"
		);
	}
	jint Cipher::PRIVATE_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"PRIVATE_KEY"
		);
	}
	jint Cipher::PUBLIC_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"PUBLIC_KEY"
		);
	}
	jint Cipher::SECRET_KEY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"SECRET_KEY"
		);
	}
	jint Cipher::UNWRAP_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"UNWRAP_MODE"
		);
	}
	jint Cipher::WRAP_MODE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.crypto.Cipher",
			"WRAP_MODE"
		);
	}
	
	// QAndroidJniObject forward
	Cipher::Cipher(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::Cipher Cipher::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0
		);
	}
	javax::crypto::Cipher Cipher::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0,
			arg1
		);
	}
	javax::crypto::Cipher Cipher::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			arg0,
			arg1.object()
		);
	}
	jint Cipher::getMaxAllowedKeyLength(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"javax.crypto.Cipher",
			"getMaxAllowedKeyLength",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	__JniBaseClass Cipher::getMaxAllowedParameterSpec(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0
		);
	}
	jbyteArray Cipher::doFinal()
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray Cipher::doFinal(jbyteArray arg0)
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"doFinal",
			"([BII)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"doFinal",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jint Cipher::doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return callMethod<jint>(
			"doFinal",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return callMethod<jint>(
			"doFinal",
			"([BII[B)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
	{
		return callMethod<jint>(
			"doFinal",
			"([BII[BI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jstring Cipher::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Cipher::getBlockSize()
	{
		return callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	javax::crypto::ExemptionMechanism Cipher::getExemptionMechanism()
	{
		return callObjectMethod(
			"getExemptionMechanism",
			"()Ljavax/crypto/ExemptionMechanism;"
		);
	}
	jbyteArray Cipher::getIV()
	{
		return callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint Cipher::getOutputSize(jint arg0)
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	java::security::AlgorithmParameters Cipher::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	java::security::Provider Cipher::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;)V",
			arg0,
			arg1.object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;)V",
			arg0,
			arg1.object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::SecureRandom arg2)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2)
	{
		callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3)
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
	void Cipher::init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, java::security::SecureRandom arg3)
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
	jstring Cipher::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Cipher::unwrap(jbyteArray arg0, jstring arg1, jint arg2)
	{
		return callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray Cipher::update(jbyteArray arg0)
	{
		return callObjectMethod(
			"update",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Cipher::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"update",
			"([BII)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jint Cipher::update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return callMethod<jint>(
			"update",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.object(),
			arg1.object()
		);
	}
	jint Cipher::update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return callMethod<jint>(
			"update",
			"([BII[B)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jint Cipher::update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4)
	{
		return callMethod<jint>(
			"update",
			"([BII[BI)I",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Cipher::updateAAD(jbyteArray arg0)
	{
		callMethod<void>(
			"updateAAD",
			"([B)V",
			arg0
		);
	}
	void Cipher::updateAAD(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"updateAAD",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Cipher::updateAAD(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"updateAAD",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray Cipher::wrap(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"wrap",
			"(Ljava/security/Key;)[B",
			arg0.object()
		).object<jbyteArray>();
	}
} // namespace javax::crypto


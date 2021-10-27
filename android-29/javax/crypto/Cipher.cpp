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
	
	Cipher::Cipher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Cipher::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0
		);
	}
	QAndroidJniObject Cipher::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Cipher;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Cipher::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Cipher::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Cipher;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Cipher::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Cipher::getInstance(const QString &arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Cipher;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
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
	jint Cipher::getMaxAllowedKeyLength(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"javax.crypto.Cipher",
			"getMaxAllowedKeyLength",
			"(Ljava/lang/String;)I",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Cipher::getMaxAllowedParameterSpec(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			arg0
		);
	}
	QAndroidJniObject Cipher::getMaxAllowedParameterSpec(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.Cipher",
			"getMaxAllowedParameterSpec",
			"(Ljava/lang/String;)Ljava/security/spec/AlgorithmParameterSpec;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyteArray Cipher::doFinal()
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray Cipher::doFinal(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"doFinal",
			"([BII)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jint Cipher::doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return __thiz.callMethod<jint>(
			"doFinal",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Cipher::doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
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
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Cipher::getBlockSize()
	{
		return __thiz.callMethod<jint>(
			"getBlockSize",
			"()I"
		);
	}
	QAndroidJniObject Cipher::getExemptionMechanism()
	{
		return __thiz.callObjectMethod(
			"getExemptionMechanism",
			"()Ljavax/crypto/ExemptionMechanism;"
		);
	}
	jbyteArray Cipher::getIV()
	{
		return __thiz.callObjectMethod(
			"getIV",
			"()[B"
		).object<jbyteArray>();
	}
	jint Cipher::getOutputSize(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject Cipher::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	QAndroidJniObject Cipher::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/cert/Certificate;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/AlgorithmParameters;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void Cipher::init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, java::security::SecureRandom arg3)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring Cipher::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Cipher::unwrap(jbyteArray arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Cipher::unwrap(jbyteArray arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"unwrap",
			"([BLjava/lang/String;I)Ljava/security/Key;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jbyteArray Cipher::update(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"update",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Cipher::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"update",
			"([BII)[B",
			arg0,
			arg1,
			arg2
		).object<jbyteArray>();
	}
	jint Cipher::update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Cipher::update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		return __thiz.callMethod<jint>(
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
		return __thiz.callMethod<jint>(
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
		__thiz.callMethod<void>(
			"updateAAD",
			"([B)V",
			arg0
		);
	}
	void Cipher::updateAAD(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"updateAAD",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Cipher::updateAAD(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"updateAAD",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jbyteArray Cipher::wrap(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"wrap",
			"(Ljava/security/Key;)[B",
			arg0.__jniObject().object()
		).object<jbyteArray>();
	}
} // namespace javax::crypto


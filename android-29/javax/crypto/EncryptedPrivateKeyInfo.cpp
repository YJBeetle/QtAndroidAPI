#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/spec/PKCS8EncodedKeySpec.hpp"
#include "./Cipher.hpp"
#include "./EncryptedPrivateKeyInfo.hpp"

namespace javax::crypto
{
	// Fields
	
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(jbyteArray &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"([B)V",
			arg0
		);
	}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(jstring &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(const QString &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(java::security::AlgorithmParameters &arg0, jbyteArray &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/security/AlgorithmParameters;[B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	jstring EncryptedPrivateKeyInfo::getAlgName()
	{
		return __thiz.callObjectMethod(
			"getAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getAlgParameters()
	{
		return __thiz.callObjectMethod(
			"getAlgParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jbyteArray EncryptedPrivateKeyInfo::getEncoded()
	{
		return __thiz.callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray EncryptedPrivateKeyInfo::getEncryptedData()
	{
		return __thiz.callObjectMethod(
			"getEncryptedData",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(javax::crypto::Cipher arg0)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0, java::security::Provider arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace javax::crypto


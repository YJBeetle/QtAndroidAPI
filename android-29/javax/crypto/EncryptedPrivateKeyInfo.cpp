#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/spec/PKCS8EncodedKeySpec.hpp"
#include "./Cipher.hpp"
#include "./EncryptedPrivateKeyInfo.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(jbyteArray arg0)
		: __JniBaseClass(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"([B)V",
			arg0
		) {}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(jstring arg0, jbyteArray arg1)
		: __JniBaseClass(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		) {}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(java::security::AlgorithmParameters arg0, jbyteArray arg1)
		: __JniBaseClass(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/security/AlgorithmParameters;[B)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jstring EncryptedPrivateKeyInfo::getAlgName()
	{
		return callObjectMethod(
			"getAlgName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getAlgParameters()
	{
		return callObjectMethod(
			"getAlgParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	jbyteArray EncryptedPrivateKeyInfo::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray EncryptedPrivateKeyInfo::getEncryptedData()
	{
		return callObjectMethod(
			"getEncryptedData",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(javax::crypto::Cipher arg0)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0, jstring arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject EncryptedPrivateKeyInfo::getKeySpec(__JniBaseClass arg0, java::security::Provider arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto


#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "../../java/security/spec/PKCS8EncodedKeySpec.hpp"
#include "./Cipher.hpp"
#include "./EncryptedPrivateKeyInfo.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(JByteArray arg0)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(JString arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	EncryptedPrivateKeyInfo::EncryptedPrivateKeyInfo(java::security::AlgorithmParameters arg0, JByteArray arg1)
		: JObject(
			"javax.crypto.EncryptedPrivateKeyInfo",
			"(Ljava/security/AlgorithmParameters;[B)V",
			arg0.object(),
			arg1.object<jbyteArray>()
		) {}
	
	// Methods
	JString EncryptedPrivateKeyInfo::getAlgName()
	{
		return callObjectMethod(
			"getAlgName",
			"()Ljava/lang/String;"
		);
	}
	java::security::AlgorithmParameters EncryptedPrivateKeyInfo::getAlgParameters()
	{
		return callObjectMethod(
			"getAlgParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	JByteArray EncryptedPrivateKeyInfo::getEncoded()
	{
		return callObjectMethod(
			"getEncoded",
			"()[B"
		);
	}
	JByteArray EncryptedPrivateKeyInfo::getEncryptedData()
	{
		return callObjectMethod(
			"getEncryptedData",
			"()[B"
		);
	}
	java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(javax::crypto::Cipher arg0)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/Cipher;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object()
		);
	}
	java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0, JString arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/String;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	java::security::spec::PKCS8EncodedKeySpec EncryptedPrivateKeyInfo::getKeySpec(JObject arg0, java::security::Provider arg1)
	{
		return callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/security/Provider;)Ljava/security/spec/PKCS8EncodedKeySpec;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace javax::crypto


#include "../../java/security/Provider.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "../../java/security/SecureRandom.hpp"
#include "./KeyAgreementSpi.hpp"
#include "./KeyAgreement.hpp"

namespace javax::crypto
{
	// Fields
	
	// QJniObject forward
	KeyAgreement::KeyAgreement(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::KeyAgreement KeyAgreement::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0
		);
	}
	javax::crypto::KeyAgreement KeyAgreement::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0,
			arg1
		);
	}
	javax::crypto::KeyAgreement KeyAgreement::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;",
			arg0,
			arg1.object()
		);
	}
	JObject KeyAgreement::doPhase(JObject arg0, jboolean arg1)
	{
		return callObjectMethod(
			"doPhase",
			"(Ljava/security/Key;Z)Ljava/security/Key;",
			arg0.object(),
			arg1
		);
	}
	jbyteArray KeyAgreement::generateSecret()
	{
		return callObjectMethod(
			"generateSecret",
			"()[B"
		).object<jbyteArray>();
	}
	jint KeyAgreement::generateSecret(jbyteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"generateSecret",
			"([BI)I",
			arg0,
			arg1
		);
	}
	JObject KeyAgreement::generateSecret(jstring arg0)
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKey;",
			arg0
		);
	}
	jstring KeyAgreement::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::security::Provider KeyAgreement::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void KeyAgreement::init(JObject arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	void KeyAgreement::init(JObject arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void KeyAgreement::init(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void KeyAgreement::init(JObject arg0, JObject arg1, java::security::SecureRandom arg2)
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


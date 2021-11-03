#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::KeyAgreement KeyAgreement::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;",
			arg0.object<jstring>(),
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
	JByteArray KeyAgreement::generateSecret()
	{
		return callObjectMethod(
			"generateSecret",
			"()[B"
		);
	}
	jint KeyAgreement::generateSecret(JByteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"generateSecret",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	JObject KeyAgreement::generateSecret(JString arg0)
	{
		return callObjectMethod(
			"generateSecret",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKey;",
			arg0.object<jstring>()
		);
	}
	JString KeyAgreement::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
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


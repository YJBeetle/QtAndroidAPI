#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "../../java/security/AlgorithmParameters.hpp"
#include "../../java/security/Provider.hpp"
#include "./ExemptionMechanismSpi.hpp"
#include "./ExemptionMechanism.hpp"

namespace javax::crypto
{
	// Fields
	
	// QAndroidJniObject forward
	ExemptionMechanism::ExemptionMechanism(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>()
		);
	}
	javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	javax::crypto::ExemptionMechanism ExemptionMechanism::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.ExemptionMechanism",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/ExemptionMechanism;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JByteArray ExemptionMechanism::genExemptionBlob()
	{
		return callObjectMethod(
			"genExemptionBlob",
			"()[B"
		);
	}
	jint ExemptionMechanism::genExemptionBlob(JByteArray arg0)
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([B)I",
			arg0.object<jbyteArray>()
		);
	}
	jint ExemptionMechanism::genExemptionBlob(JByteArray arg0, jint arg1)
	{
		return callMethod<jint>(
			"genExemptionBlob",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	JString ExemptionMechanism::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint ExemptionMechanism::getOutputSize(jint arg0)
	{
		return callMethod<jint>(
			"getOutputSize",
			"(I)I",
			arg0
		);
	}
	java::security::Provider ExemptionMechanism::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void ExemptionMechanism::init(JObject arg0)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	void ExemptionMechanism::init(JObject arg0, java::security::AlgorithmParameters arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/AlgorithmParameters;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void ExemptionMechanism::init(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean ExemptionMechanism::isCryptoAllowed(JObject arg0)
	{
		return callMethod<jboolean>(
			"isCryptoAllowed",
			"(Ljava/security/Key;)Z",
			arg0.object()
		);
	}
} // namespace javax::crypto


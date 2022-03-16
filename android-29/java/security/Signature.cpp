#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./AlgorithmParameters.hpp"
#include "./Provider.hpp"
#include "./Provider_Service.hpp"
#include "./SecureRandom.hpp"
#include "./cert/Certificate.hpp"
#include "./Signature.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	java::security::Signature Signature::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/Signature;",
			arg0.object<jstring>()
		);
	}
	java::security::Signature Signature::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::Signature Signature::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject Signature::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JString Signature::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject Signature::getParameter(JString arg0) const
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	java::security::AlgorithmParameters Signature::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	java::security::Provider Signature::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Signature::initSign(JObject arg0) const
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;)V",
			arg0.object()
		);
	}
	void Signature::initSign(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Signature::initVerify(JObject arg0) const
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Signature::initVerify(java::security::cert::Certificate arg0) const
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	void Signature::setParameter(JObject arg0) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void Signature::setParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	JByteArray Signature::sign() const
	{
		return callObjectMethod(
			"sign",
			"()[B"
		);
	}
	jint Signature::sign(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"sign",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JString Signature::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Signature::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void Signature::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Signature::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Signature::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	jboolean Signature::verify(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"verify",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	jboolean Signature::verify(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"verify",
			"([BII)Z",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::security


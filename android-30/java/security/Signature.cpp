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
	
	// QJniObject forward
	Signature::Signature(QJniObject obj) : java::security::SignatureSpi(obj) {}
	
	// Constructors
	
	// Methods
	java::security::Signature Signature::getInstance(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/Signature;",
			arg0
		);
	}
	java::security::Signature Signature::getInstance(jstring arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;",
			arg0,
			arg1
		);
	}
	java::security::Signature Signature::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;",
			arg0,
			arg1.object()
		);
	}
	jobject Signature::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring Signature::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Signature::getParameter(jstring arg0)
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	java::security::AlgorithmParameters Signature::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	java::security::Provider Signature::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void Signature::initSign(__JniBaseClass arg0)
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;)V",
			arg0.object()
		);
	}
	void Signature::initSign(__JniBaseClass arg0, java::security::SecureRandom arg1)
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Signature::initVerify(__JniBaseClass arg0)
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	void Signature::initVerify(java::security::cert::Certificate arg0)
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	void Signature::setParameter(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	void Signature::setParameter(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	jbyteArray Signature::sign()
	{
		return callObjectMethod(
			"sign",
			"()[B"
		).object<jbyteArray>();
	}
	jint Signature::sign(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"sign",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring Signature::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Signature::update(jbyteArray arg0)
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void Signature::update(jbyte arg0)
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void Signature::update(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void Signature::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean Signature::verify(jbyteArray arg0)
	{
		return callMethod<jboolean>(
			"verify",
			"([B)Z",
			arg0
		);
	}
	jboolean Signature::verify(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"verify",
			"([BII)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::security


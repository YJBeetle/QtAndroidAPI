#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./AlgorithmParameters.def.hpp"
#include "./Provider.def.hpp"
#include "./Provider_Service.def.hpp"
#include "./SecureRandom.def.hpp"
#include "./cert/Certificate.def.hpp"
#include "./Signature.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::Signature Signature::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/Signature;",
			arg0.object<jstring>()
		);
	}
	inline java::security::Signature Signature::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Signature;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::Signature Signature::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.Signature",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/Signature;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject Signature::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JString Signature::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline JObject Signature::getParameter(JString arg0) const
	{
		return callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline java::security::AlgorithmParameters Signature::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/AlgorithmParameters;"
		);
	}
	inline java::security::Provider Signature::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void Signature::initSign(JObject arg0) const
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;)V",
			arg0.object()
		);
	}
	inline void Signature::initSign(JObject arg0, java::security::SecureRandom arg1) const
	{
		callMethod<void>(
			"initSign",
			"(Ljava/security/PrivateKey;Ljava/security/SecureRandom;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Signature::initVerify(JObject arg0) const
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/PublicKey;)V",
			arg0.object()
		);
	}
	inline void Signature::initVerify(java::security::cert::Certificate arg0) const
	{
		callMethod<void>(
			"initVerify",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		);
	}
	inline void Signature::setParameter(JObject arg0) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object()
		);
	}
	inline void Signature::setParameter(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline JByteArray Signature::sign() const
	{
		return callObjectMethod(
			"sign",
			"()[B"
		);
	}
	inline jint Signature::sign(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"sign",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JString Signature::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Signature::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Signature::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	inline void Signature::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Signature::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline jboolean Signature::verify(JByteArray arg0) const
	{
		return callMethod<jboolean>(
			"verify",
			"([B)Z",
			arg0.object<jbyteArray>()
		);
	}
	inline jboolean Signature::verify(JByteArray arg0, jint arg1, jint arg2) const
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

// Base class headers
#include "./SignatureSpi.hpp"


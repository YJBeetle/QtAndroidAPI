#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/nio/ByteBuffer.def.hpp"
#include "../../java/security/Provider.def.hpp"
#include "../../java/security/Provider_Service.def.hpp"
#include "./MacSpi.def.hpp"
#include "./Mac.def.hpp"

namespace javax::crypto
{
	// Fields
	
	// Constructors
	
	// Methods
	inline javax::crypto::Mac Mac::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0.object<jstring>()
		);
	}
	inline javax::crypto::Mac Mac::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/Mac;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline javax::crypto::Mac Mac::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"javax.crypto.Mac",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/Mac;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject Mac::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JByteArray Mac::doFinal() const
	{
		return callObjectMethod(
			"doFinal",
			"()[B"
		);
	}
	inline JByteArray Mac::doFinal(JByteArray arg0) const
	{
		return callObjectMethod(
			"doFinal",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline void Mac::doFinal(JByteArray arg0, jint arg1) const
	{
		callMethod<void>(
			"doFinal",
			"([BI)V",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline JString Mac::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline jint Mac::getMacLength() const
	{
		return callMethod<jint>(
			"getMacLength",
			"()I"
		);
	}
	inline java::security::Provider Mac::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void Mac::init(JObject arg0) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.object()
		);
	}
	inline void Mac::init(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Mac::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Mac::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Mac::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	inline void Mac::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void Mac::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace javax::crypto

// Base class headers


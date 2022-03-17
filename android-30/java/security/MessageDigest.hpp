#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.def.hpp"
#include "./Provider.def.hpp"
#include "./MessageDigest.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::MessageDigest MessageDigest::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0.object<jstring>()
		);
	}
	inline java::security::MessageDigest MessageDigest::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline java::security::MessageDigest MessageDigest::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean MessageDigest::isEqual(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.security.MessageDigest",
			"isEqual",
			"([B[B)Z",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	inline JObject MessageDigest::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JByteArray MessageDigest::digest() const
	{
		return callObjectMethod(
			"digest",
			"()[B"
		);
	}
	inline JByteArray MessageDigest::digest(JByteArray arg0) const
	{
		return callObjectMethod(
			"digest",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	inline jint MessageDigest::digest(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"digest",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline JString MessageDigest::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	inline jint MessageDigest::getDigestLength() const
	{
		return callMethod<jint>(
			"getDigestLength",
			"()I"
		);
	}
	inline java::security::Provider MessageDigest::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline void MessageDigest::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline JString MessageDigest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MessageDigest::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MessageDigest::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	inline void MessageDigest::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	inline void MessageDigest::update(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
} // namespace java::security

// Base class headers
#include "./MessageDigestSpi.hpp"


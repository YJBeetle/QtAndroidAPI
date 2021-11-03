#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Provider.hpp"
#include "./MessageDigest.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	MessageDigest::MessageDigest(QJniObject obj) : java::security::MessageDigestSpi(obj) {}
	
	// Constructors
	
	// Methods
	java::security::MessageDigest MessageDigest::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0.object<jstring>()
		);
	}
	java::security::MessageDigest MessageDigest::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::MessageDigest MessageDigest::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean MessageDigest::isEqual(JByteArray arg0, JByteArray arg1)
	{
		return callStaticMethod<jboolean>(
			"java.security.MessageDigest",
			"isEqual",
			"([B[B)Z",
			arg0.object<jbyteArray>(),
			arg1.object<jbyteArray>()
		);
	}
	JObject MessageDigest::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JByteArray MessageDigest::digest() const
	{
		return callObjectMethod(
			"digest",
			"()[B"
		);
	}
	JByteArray MessageDigest::digest(JByteArray arg0) const
	{
		return callObjectMethod(
			"digest",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	jint MessageDigest::digest(JByteArray arg0, jint arg1, jint arg2) const
	{
		return callMethod<jint>(
			"digest",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JString MessageDigest::getAlgorithm() const
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	jint MessageDigest::getDigestLength() const
	{
		return callMethod<jint>(
			"getDigestLength",
			"()I"
		);
	}
	java::security::Provider MessageDigest::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void MessageDigest::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	JString MessageDigest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MessageDigest::update(JByteArray arg0) const
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MessageDigest::update(jbyte arg0) const
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void MessageDigest::update(java::nio::ByteBuffer arg0) const
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void MessageDigest::update(JByteArray arg0, jint arg1, jint arg2) const
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


#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../nio/ByteBuffer.hpp"
#include "./Provider.hpp"
#include "./MessageDigest.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	MessageDigest::MessageDigest(QAndroidJniObject obj) : java::security::MessageDigestSpi(obj) {}
	
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
	JObject MessageDigest::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	JByteArray MessageDigest::digest()
	{
		return callObjectMethod(
			"digest",
			"()[B"
		);
	}
	JByteArray MessageDigest::digest(JByteArray arg0)
	{
		return callObjectMethod(
			"digest",
			"([B)[B",
			arg0.object<jbyteArray>()
		);
	}
	jint MessageDigest::digest(JByteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"digest",
			"([BII)I",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	JString MessageDigest::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	jint MessageDigest::getDigestLength()
	{
		return callMethod<jint>(
			"getDigestLength",
			"()I"
		);
	}
	java::security::Provider MessageDigest::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void MessageDigest::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	JString MessageDigest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void MessageDigest::update(JByteArray arg0)
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MessageDigest::update(jbyte arg0)
	{
		callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void MessageDigest::update(java::nio::ByteBuffer arg0)
	{
		callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.object()
		);
	}
	void MessageDigest::update(JByteArray arg0, jint arg1, jint arg2)
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


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
	java::security::MessageDigest MessageDigest::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0
		);
	}
	java::security::MessageDigest MessageDigest::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0,
			arg1
		);
	}
	java::security::MessageDigest MessageDigest::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			arg0,
			arg1.object()
		);
	}
	jboolean MessageDigest::isEqual(jbyteArray arg0, jbyteArray arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.security.MessageDigest",
			"isEqual",
			"([B[B)Z",
			arg0,
			arg1
		);
	}
	jobject MessageDigest::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray MessageDigest::digest()
	{
		return callObjectMethod(
			"digest",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray MessageDigest::digest(jbyteArray arg0)
	{
		return callObjectMethod(
			"digest",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint MessageDigest::digest(jbyteArray arg0, jint arg1, jint arg2)
	{
		return callMethod<jint>(
			"digest",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring MessageDigest::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring MessageDigest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MessageDigest::update(jbyteArray arg0)
	{
		callMethod<void>(
			"update",
			"([B)V",
			arg0
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
	void MessageDigest::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::security


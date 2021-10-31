#include "../nio/ByteBuffer.hpp"
#include "./Provider.hpp"
#include "./MessageDigest.hpp"

namespace java::security
{
	// Fields
	
	MessageDigest::MessageDigest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MessageDigest::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0
		);
	}
	QAndroidJniObject MessageDigest::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/MessageDigest;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MessageDigest::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.MessageDigest",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest;",
			arg0,
			arg1.__jniObject().object()
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
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyteArray MessageDigest::digest()
	{
		return __thiz.callObjectMethod(
			"digest",
			"()[B"
		).object<jbyteArray>();
	}
	jbyteArray MessageDigest::digest(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"digest",
			"([B)[B",
			arg0
		).object<jbyteArray>();
	}
	jint MessageDigest::digest(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"digest",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jstring MessageDigest::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MessageDigest::getDigestLength()
	{
		return __thiz.callMethod<jint>(
			"getDigestLength",
			"()I"
		);
	}
	QAndroidJniObject MessageDigest::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void MessageDigest::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring MessageDigest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void MessageDigest::update(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"([B)V",
			arg0
		);
	}
	void MessageDigest::update(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(B)V",
			arg0
		);
	}
	void MessageDigest::update(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageDigest::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace java::security


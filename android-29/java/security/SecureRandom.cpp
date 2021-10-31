#include "./MessageDigest.hpp"
#include "./Provider.hpp"
#include "./SecureRandomSpi.hpp"
#include "./SecureRandom.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	SecureRandom::SecureRandom(QAndroidJniObject obj) : java::util::Random(obj) {}
	
	// Constructors
	SecureRandom::SecureRandom()
		: java::util::Random(
			"java.security.SecureRandom",
			"()V"
		) {}
	SecureRandom::SecureRandom(jbyteArray arg0)
		: java::util::Random(
			"java.security.SecureRandom",
			"([B)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject SecureRandom::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;)Ljava/security/SecureRandom;",
			arg0,
			arg1.object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	QAndroidJniObject SecureRandom::getInstanceStrong()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstanceStrong",
			"()Ljava/security/SecureRandom;"
		);
	}
	jbyteArray SecureRandom::getSeed(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getSeed",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray SecureRandom::generateSeed(jint arg0)
	{
		return callObjectMethod(
			"generateSeed",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jstring SecureRandom::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecureRandom::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/SecureRandomParameters;"
		);
	}
	QAndroidJniObject SecureRandom::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void SecureRandom::nextBytes(jbyteArray arg0)
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
	void SecureRandom::nextBytes(jbyteArray arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"nextBytes",
			"([BLjava/security/SecureRandomParameters;)V",
			arg0,
			arg1.object()
		);
	}
	void SecureRandom::reseed()
	{
		callMethod<void>(
			"reseed",
			"()V"
		);
	}
	void SecureRandom::reseed(__JniBaseClass arg0)
	{
		callMethod<void>(
			"reseed",
			"(Ljava/security/SecureRandomParameters;)V",
			arg0.object()
		);
	}
	void SecureRandom::setSeed(jbyteArray arg0)
	{
		callMethod<void>(
			"setSeed",
			"([B)V",
			arg0
		);
	}
	void SecureRandom::setSeed(jlong arg0)
	{
		callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
	jstring SecureRandom::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

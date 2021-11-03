#include "../../JByteArray.hpp"
#include "../../JString.hpp"
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
	SecureRandom::SecureRandom(JByteArray arg0)
		: java::util::Random(
			"java.security.SecureRandom",
			"([B)V",
			arg0.object<jbyteArray>()
		) {}
	
	// Methods
	java::security::SecureRandom SecureRandom::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>()
		);
	}
	java::security::SecureRandom SecureRandom::getInstance(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	java::security::SecureRandom SecureRandom::getInstance(JString arg0, java::security::Provider arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	java::security::SecureRandom SecureRandom::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	java::security::SecureRandom SecureRandom::getInstanceStrong()
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstanceStrong",
			"()Ljava/security/SecureRandom;"
		);
	}
	JByteArray SecureRandom::getSeed(jint arg0)
	{
		return callStaticObjectMethod(
			"java.security.SecureRandom",
			"getSeed",
			"(I)[B",
			arg0
		);
	}
	JByteArray SecureRandom::generateSeed(jint arg0)
	{
		return callObjectMethod(
			"generateSeed",
			"(I)[B",
			arg0
		);
	}
	JString SecureRandom::getAlgorithm()
	{
		return callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		);
	}
	JObject SecureRandom::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()Ljava/security/SecureRandomParameters;"
		);
	}
	java::security::Provider SecureRandom::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	void SecureRandom::nextBytes(JByteArray arg0)
	{
		callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void SecureRandom::nextBytes(JByteArray arg0, JObject arg1)
	{
		callMethod<void>(
			"nextBytes",
			"([BLjava/security/SecureRandomParameters;)V",
			arg0.object<jbyteArray>(),
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
	void SecureRandom::reseed(JObject arg0)
	{
		callMethod<void>(
			"reseed",
			"(Ljava/security/SecureRandomParameters;)V",
			arg0.object()
		);
	}
	void SecureRandom::setSeed(JByteArray arg0)
	{
		callMethod<void>(
			"setSeed",
			"([B)V",
			arg0.object<jbyteArray>()
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
	JString SecureRandom::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security


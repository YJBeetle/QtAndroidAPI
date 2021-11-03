#pragma once

#include "../../JObject.hpp"
#include "../util/Random.hpp"

namespace java::security
{
	class MessageDigest;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandomSpi;
}

namespace java::security
{
	class SecureRandom : public java::util::Random
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecureRandom(const char *className, const char *sig, Ts...agv) : java::util::Random(className, sig, std::forward<Ts>(agv)...) {}
		SecureRandom(QAndroidJniObject obj);
		
		// Constructors
		SecureRandom();
		SecureRandom(jbyteArray arg0);
		
		// Methods
		static java::security::SecureRandom getInstance(jstring arg0);
		static java::security::SecureRandom getInstance(jstring arg0, jstring arg1);
		static java::security::SecureRandom getInstance(jstring arg0, java::security::Provider arg1);
		static java::security::SecureRandom getInstance(jstring arg0, JObject arg1);
		static java::security::SecureRandom getInstance(jstring arg0, JObject arg1, jstring arg2);
		static java::security::SecureRandom getInstance(jstring arg0, JObject arg1, java::security::Provider arg2);
		static java::security::SecureRandom getInstanceStrong();
		static jbyteArray getSeed(jint arg0);
		jbyteArray generateSeed(jint arg0);
		jstring getAlgorithm();
		JObject getParameters();
		java::security::Provider getProvider();
		void nextBytes(jbyteArray arg0);
		void nextBytes(jbyteArray arg0, JObject arg1);
		void reseed();
		void reseed(JObject arg0);
		void setSeed(jbyteArray arg0);
		void setSeed(jlong arg0);
		jstring toString();
	};
} // namespace java::security


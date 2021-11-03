#pragma once

#include "../util/Random.hpp"

class JByteArray;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureRandom(const char *className, const char *sig, Ts...agv) : java::util::Random(className, sig, std::forward<Ts>(agv)...) {}
		SecureRandom(QJniObject obj);
		
		// Constructors
		SecureRandom();
		SecureRandom(JByteArray arg0);
		
		// Methods
		static java::security::SecureRandom getInstance(JString arg0);
		static java::security::SecureRandom getInstance(JString arg0, JString arg1);
		static java::security::SecureRandom getInstance(JString arg0, java::security::Provider arg1);
		static java::security::SecureRandom getInstance(JString arg0, JObject arg1);
		static java::security::SecureRandom getInstance(JString arg0, JObject arg1, JString arg2);
		static java::security::SecureRandom getInstance(JString arg0, JObject arg1, java::security::Provider arg2);
		static java::security::SecureRandom getInstanceStrong();
		static JByteArray getSeed(jint arg0);
		JByteArray generateSeed(jint arg0);
		JString getAlgorithm();
		JObject getParameters();
		java::security::Provider getProvider();
		void nextBytes(JByteArray arg0);
		void nextBytes(JByteArray arg0, JObject arg1);
		void reseed();
		void reseed(JObject arg0);
		void setSeed(JByteArray arg0);
		void setSeed(jlong arg0);
		JString toString();
	};
} // namespace java::security


#pragma once

#include "./KeyPairGeneratorSpi.hpp"

class JString;
namespace java::security
{
	class KeyPair;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class KeyPairGenerator : public java::security::KeyPairGeneratorSpi
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPairGenerator(const char *className, const char *sig, Ts...agv) : java::security::KeyPairGeneratorSpi(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGenerator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::KeyPairGenerator getInstance(JString arg0);
		static java::security::KeyPairGenerator getInstance(JString arg0, JString arg1);
		static java::security::KeyPairGenerator getInstance(JString arg0, java::security::Provider arg1);
		java::security::KeyPair genKeyPair() const;
		java::security::KeyPair generateKeyPair() const;
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		void initialize(jint arg0) const;
		void initialize(JObject arg0) const;
		void initialize(jint arg0, java::security::SecureRandom arg1) const;
		void initialize(JObject arg0, java::security::SecureRandom arg1) const;
	};
} // namespace java::security


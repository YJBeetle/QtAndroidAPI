#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class KeyPair;
}
namespace java::security
{
	class SecureRandom;
}

namespace java::security
{
	class KeyPairGeneratorSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyPairGeneratorSpi();
		
		// Methods
		java::security::KeyPair generateKeyPair() const;
		void initialize(jint arg0, java::security::SecureRandom arg1) const;
		void initialize(JObject arg0, java::security::SecureRandom arg1) const;
	};
} // namespace java::security


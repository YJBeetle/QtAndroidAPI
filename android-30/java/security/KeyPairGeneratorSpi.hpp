#pragma once

#include "../../__JniBaseClass.hpp"

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
	class KeyPairGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpi(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpi(QJniObject obj);
		
		// Constructors
		KeyPairGeneratorSpi();
		
		// Methods
		java::security::KeyPair generateKeyPair();
		void initialize(jint arg0, java::security::SecureRandom arg1);
		void initialize(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace java::security


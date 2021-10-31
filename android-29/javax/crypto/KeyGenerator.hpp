#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::crypto
{
	class KeyGeneratorSpi;
}

namespace javax::crypto
{
	class KeyGenerator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGenerator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenerator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::KeyGenerator getInstance(jstring arg0);
		static javax::crypto::KeyGenerator getInstance(jstring arg0, jstring arg1);
		static javax::crypto::KeyGenerator getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass generateKey();
		jstring getAlgorithm();
		java::security::Provider getProvider();
		void init(jint arg0);
		void init(java::security::SecureRandom arg0);
		void init(__JniBaseClass arg0);
		void init(jint arg0, java::security::SecureRandom arg1);
		void init(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace javax::crypto


#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class Provider;
}
namespace java::security
{
	class Provider_Service;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::crypto
{
	class KeyAgreementSpi;
}

namespace javax::crypto
{
	class KeyAgreement : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyAgreement(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyAgreement(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::KeyAgreement getInstance(jstring arg0);
		static javax::crypto::KeyAgreement getInstance(jstring arg0, jstring arg1);
		static javax::crypto::KeyAgreement getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass doPhase(__JniBaseClass arg0, jboolean arg1);
		jbyteArray generateSecret();
		jint generateSecret(jbyteArray arg0, jint arg1);
		__JniBaseClass generateSecret(jstring arg0);
		jstring getAlgorithm();
		java::security::Provider getProvider();
		void init(__JniBaseClass arg0);
		void init(__JniBaseClass arg0, java::security::SecureRandom arg1);
		void init(__JniBaseClass arg0, __JniBaseClass arg1);
		void init(__JniBaseClass arg0, __JniBaseClass arg1, java::security::SecureRandom arg2);
	};
} // namespace javax::crypto


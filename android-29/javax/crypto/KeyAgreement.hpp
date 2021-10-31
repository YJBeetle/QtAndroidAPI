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
		
		KeyAgreement(QAndroidJniObject obj);
		// Constructors
		KeyAgreement() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject doPhase(__JniBaseClass arg0, jboolean arg1);
		jbyteArray generateSecret();
		jint generateSecret(jbyteArray arg0, jint arg1);
		QAndroidJniObject generateSecret(jstring arg0);
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		void init(__JniBaseClass arg0);
		void init(__JniBaseClass arg0, java::security::SecureRandom arg1);
		void init(__JniBaseClass arg0, __JniBaseClass arg1);
		void init(__JniBaseClass arg0, __JniBaseClass arg1, java::security::SecureRandom arg2);
	};
} // namespace javax::crypto


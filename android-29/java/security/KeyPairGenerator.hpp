#pragma once

#include "../../__JniBaseClass.hpp"
#include "./KeyPairGeneratorSpi.hpp"

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
		
		KeyPairGenerator(QAndroidJniObject obj);
		// Constructors
		KeyPairGenerator() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		QAndroidJniObject genKeyPair();
		QAndroidJniObject generateKeyPair();
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		void initialize(jint arg0);
		void initialize(__JniBaseClass arg0);
		void initialize(jint arg0, java::security::SecureRandom arg1);
		void initialize(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace java::security


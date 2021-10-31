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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPairGenerator(const char *className, const char *sig, Ts...agv) : java::security::KeyPairGeneratorSpi(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGenerator(QAndroidJniObject obj);
		
		// Constructors
		
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


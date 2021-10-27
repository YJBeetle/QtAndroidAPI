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
		
		KeyGenerator(QAndroidJniObject obj);
		// Constructors
		KeyGenerator() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		QAndroidJniObject generateKey();
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		void init(jint arg0);
		void init(java::security::SecureRandom arg0);
		void init(__JniBaseClass arg0);
		void init(jint arg0, java::security::SecureRandom arg1);
		void init(__JniBaseClass arg0, java::security::SecureRandom arg1);
	};
} // namespace javax::crypto


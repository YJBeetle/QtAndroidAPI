#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Random.hpp"

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
		
		SecureRandom(QAndroidJniObject obj);
		// Constructors
		SecureRandom();
		SecureRandom(jbyteArray &arg0);
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1, jstring arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __JniBaseClass arg1, const QString &arg2);
		static QAndroidJniObject getInstance(jstring arg0, __JniBaseClass arg1, java::security::Provider arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __JniBaseClass arg1, java::security::Provider arg2);
		static QAndroidJniObject getInstanceStrong();
		static jbyteArray getSeed(jint arg0);
		jbyteArray generateSeed(jint arg0);
		jstring getAlgorithm();
		QAndroidJniObject getParameters();
		QAndroidJniObject getProvider();
		void nextBytes(jbyteArray arg0);
		void nextBytes(jbyteArray arg0, __JniBaseClass arg1);
		void reseed();
		void reseed(__JniBaseClass arg0);
		void setSeed(jbyteArray arg0);
		void setSeed(jlong arg0);
		jstring toString();
	};
} // namespace java::security


#pragma once

#ifndef JAVA_SECURITY_SECURERANDOM
#define JAVA_SECURITY_SECURERANDOM

#include "../../__JniBaseClass.hpp"
#include "../util/Random.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class SecureRandomSpi;
}
namespace __jni_impl::java::security
{
	class MessageDigest;
}

namespace __jni_impl::java::security
{
	class SecureRandom : public __jni_impl::java::util::Random
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0);
		void __constructor();
		
		// Methods
		jstring toString();
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		QAndroidJniObject getParameters();
		QAndroidJniObject getProvider();
		static jbyteArray getSeed(jint arg0);
		void setSeed(jlong arg0);
		void setSeed(jbyteArray arg0);
		void nextBytes(jbyteArray arg0);
		void nextBytes(jbyteArray arg0, __jni_impl::__JniBaseClass arg1);
		jbyteArray generateSeed(jint arg0);
		static QAndroidJniObject getInstanceStrong();
		void reseed(__jni_impl::__JniBaseClass arg0);
		void reseed();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "SecureRandomSpi.hpp"
#include "MessageDigest.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void SecureRandom::__constructor(jbyteArray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.SecureRandom",
			"([B)V",
			arg0
		);
	}
	void SecureRandom::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.SecureRandom",
			"()V"
		);
	}
	
	// Methods
	jstring SecureRandom::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;Ljava/lang/String;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;)Ljava/security/SecureRandom;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/SecureRandomParameters;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/SecureRandom;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecureRandom::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()Ljava/security/SecureRandomParameters;"
		);
	}
	QAndroidJniObject SecureRandom::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jbyteArray SecureRandom::getSeed(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getSeed",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	void SecureRandom::setSeed(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSeed",
			"(J)V",
			arg0
		);
	}
	void SecureRandom::setSeed(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setSeed",
			"([B)V",
			arg0
		);
	}
	void SecureRandom::nextBytes(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"nextBytes",
			"([B)V",
			arg0
		);
	}
	void SecureRandom::nextBytes(jbyteArray arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"nextBytes",
			"([BLjava/security/SecureRandomParameters;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jbyteArray SecureRandom::generateSeed(jint arg0)
	{
		return __thiz.callObjectMethod(
			"generateSeed",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject SecureRandom::getInstanceStrong()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.SecureRandom",
			"getInstanceStrong",
			"()Ljava/security/SecureRandom;"
		);
	}
	void SecureRandom::reseed(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"reseed",
			"(Ljava/security/SecureRandomParameters;)V",
			arg0.__jniObject().object()
		);
	}
	void SecureRandom::reseed()
	{
		__thiz.callMethod<void>(
			"reseed",
			"()V"
		);
	}
	jstring SecureRandom::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class SecureRandom : public __jni_impl::java::security::SecureRandom
	{
	public:
		SecureRandom(QAndroidJniObject obj) { __thiz = obj; }
		SecureRandom(jbyteArray arg0)
		{
			__constructor(
				arg0);
		}
		SecureRandom()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_SECURERANDOM


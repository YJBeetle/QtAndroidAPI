#pragma once

#ifndef JAVA_SECURITY_KEYPAIRGENERATOR
#define JAVA_SECURITY_KEYPAIRGENERATOR

#include "../../__JniBaseClass.hpp"
#include "KeyPairGeneratorSpi.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}
namespace __jni_impl::java::security
{
	class KeyPair;
}

namespace __jni_impl::java::security
{
	class KeyPairGenerator : public __jni_impl::java::security::KeyPairGeneratorSpi
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		void initialize(__jni_impl::__JniBaseClass arg0);
		void initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		void initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
		void initialize(jint arg0);
		QAndroidJniObject getProvider();
		QAndroidJniObject generateKeyPair();
		QAndroidJniObject genKeyPair();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "SecureRandom.hpp"
#include "KeyPair.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyPairGenerator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPairGenerator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0
		);
	}
	void KeyPairGenerator::initialize(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyPairGenerator::initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyPairGenerator::initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void KeyPairGenerator::initialize(jint arg0)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject KeyPairGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject KeyPairGenerator::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	QAndroidJniObject KeyPairGenerator::genKeyPair()
	{
		return __thiz.callObjectMethod(
			"genKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	jstring KeyPairGenerator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyPairGenerator : public __jni_impl::java::security::KeyPairGenerator
	{
	public:
		KeyPairGenerator(QAndroidJniObject obj) { __thiz = obj; }
		KeyPairGenerator()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYPAIRGENERATOR


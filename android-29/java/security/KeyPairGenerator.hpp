#pragma once

#include "../../__JniBaseClass.hpp"
#include "./KeyPairGeneratorSpi.hpp"

namespace __jni_impl::java::security
{
	class KeyPair;
}
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
	class KeyPairGenerator : public __jni_impl::java::security::KeyPairGeneratorSpi
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		QAndroidJniObject genKeyPair();
		QAndroidJniObject generateKeyPair();
		jstring getAlgorithm();
		QAndroidJniObject getProvider();
		void initialize(jint arg0);
		void initialize(__jni_impl::__JniBaseClass arg0);
		void initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		void initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
	};
} // namespace __jni_impl::java::security

#include "./KeyPair.hpp"
#include "./Provider.hpp"
#include "./SecureRandom.hpp"

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
	QAndroidJniObject KeyPairGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			arg0
		);
	}
	QAndroidJniObject KeyPairGenerator::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject KeyPairGenerator::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
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
	QAndroidJniObject KeyPairGenerator::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyPairGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyPairGenerator::genKeyPair()
	{
		return __thiz.callObjectMethod(
			"genKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	QAndroidJniObject KeyPairGenerator::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
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
	QAndroidJniObject KeyPairGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
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


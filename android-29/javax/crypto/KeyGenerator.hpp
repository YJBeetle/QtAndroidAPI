#pragma once

#ifndef JAVAX_CRYPTO_KEYGENERATOR
#define JAVAX_CRYPTO_KEYGENERATOR

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::crypto
{
	class KeyGeneratorSpi;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::javax::crypto
{
	class KeyGenerator : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		void init(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		void init(jint arg0);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
		void init(__jni_impl::__JniBaseClass arg0);
		void init(__jni_impl::java::security::SecureRandom arg0);
		QAndroidJniObject getProvider();
		QAndroidJniObject generateKey();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/Provider.hpp"
#include "KeyGeneratorSpi.hpp"
#include "../../java/security/SecureRandom.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void KeyGenerator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyGenerator",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyGenerator;",
			arg0
		);
	}
	QAndroidJniObject KeyGenerator::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyGenerator",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyGenerator;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyGenerator::init(jint arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyGenerator::init(jint arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(I)V",
			arg0
		);
	}
	void KeyGenerator::init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void KeyGenerator::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyGenerator::init(__jni_impl::java::security::SecureRandom arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyGenerator::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject KeyGenerator::generateKey()
	{
		return __thiz.callObjectMethod(
			"generateKey",
			"()Ljavax/crypto/SecretKey;"
		);
	}
	jstring KeyGenerator::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class KeyGenerator : public __jni_impl::javax::crypto::KeyGenerator
	{
	public:
		KeyGenerator(QAndroidJniObject obj) { __thiz = obj; }
		KeyGenerator()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_KEYGENERATOR


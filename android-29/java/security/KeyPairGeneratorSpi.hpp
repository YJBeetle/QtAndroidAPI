#pragma once

#ifndef JAVA_SECURITY_KEYPAIRGENERATORSPI
#define JAVA_SECURITY_KEYPAIRGENERATORSPI

#include "../../__JniBaseClass.hpp"

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
	class KeyPairGeneratorSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
		void initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		QAndroidJniObject generateKeyPair();
	};
} // namespace __jni_impl::java::security

#include "SecureRandom.hpp"
#include "KeyPair.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyPairGeneratorSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPairGeneratorSpi",
			"()V");
	}
	
	// Methods
	void KeyPairGeneratorSpi::initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void KeyPairGeneratorSpi::initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject KeyPairGeneratorSpi::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;");
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyPairGeneratorSpi : public __jni_impl::java::security::KeyPairGeneratorSpi
	{
	public:
		KeyPairGeneratorSpi(QAndroidJniObject obj) { __thiz = obj; }
		KeyPairGeneratorSpi()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYPAIRGENERATORSPI


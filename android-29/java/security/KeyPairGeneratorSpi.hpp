#pragma once

#ifndef JAVA_SECURITY_KEYPAIRGENERATORSPI
#define JAVA_SECURITY_KEYPAIRGENERATORSPI

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class KeyPair;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
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
		QAndroidJniObject generateKeyPair();
		void initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1);
		void initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
	};
} // namespace __jni_impl::java::security

#include "KeyPair.hpp"
#include "SecureRandom.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyPairGeneratorSpi::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyPairGeneratorSpi",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject KeyPairGeneratorSpi::generateKeyPair()
	{
		return __thiz.callObjectMethod(
			"generateKeyPair",
			"()Ljava/security/KeyPair;"
		);
	}
	void KeyPairGeneratorSpi::initialize(jint arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"initialize",
			"(ILjava/security/SecureRandom;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void KeyPairGeneratorSpi::initialize(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
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


#pragma once

#ifndef JAVAX_CRYPTO_KEYAGREEMENT
#define JAVAX_CRYPTO_KEYAGREEMENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::crypto
{
	class KeyAgreementSpi;
}
namespace __jni_impl::java::security
{
	class Provider_Service;
}
namespace __jni_impl::java::security
{
	class SecureRandom;
}

namespace __jni_impl::javax::crypto
{
	class KeyAgreement : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::SecureRandom arg2);
		void init(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		jstring getAlgorithm();
		QAndroidJniObject generateSecret(jstring arg0);
		QAndroidJniObject generateSecret(const QString &arg0);
		jint generateSecret(jbyteArray arg0, jint arg1);
		jbyteArray generateSecret();
		QAndroidJniObject doPhase(__jni_impl::__JniBaseClass arg0, jboolean arg1);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/Provider.hpp"
#include "KeyAgreementSpi.hpp"
#include "../../java/security/Provider_Service.hpp"
#include "../../java/security/SecureRandom.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void KeyAgreement::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.KeyAgreement",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyAgreement::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyAgreement::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/KeyAgreement;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyAgreement::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyAgreement::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject KeyAgreement::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			arg0
		);
	}
	QAndroidJniObject KeyAgreement::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.KeyAgreement",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/KeyAgreement;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void KeyAgreement::init(__jni_impl::__JniBaseClass arg0, __jni_impl::java::security::SecureRandom arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void KeyAgreement::init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void KeyAgreement::init(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::SecureRandom arg2)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void KeyAgreement::init(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Ljava/security/Key;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyAgreement::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring KeyAgreement::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject KeyAgreement::generateSecret(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"generateSecret",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKey;",
			arg0
		);
	}
	QAndroidJniObject KeyAgreement::generateSecret(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"generateSecret",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKey;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint KeyAgreement::generateSecret(jbyteArray arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"generateSecret",
			"([BI)I",
			arg0,
			arg1
		);
	}
	jbyteArray KeyAgreement::generateSecret()
	{
		return __thiz.callObjectMethod(
			"generateSecret",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject KeyAgreement::doPhase(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"doPhase",
			"(Ljava/security/Key;Z)Ljava/security/Key;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class KeyAgreement : public __jni_impl::javax::crypto::KeyAgreement
	{
	public:
		KeyAgreement(QAndroidJniObject obj) { __thiz = obj; }
		KeyAgreement()
		{
			__constructor();
		}
	};
} // namespace javax::crypto

#endif // JAVAX_CRYPTO_KEYAGREEMENT


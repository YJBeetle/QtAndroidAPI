#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::javax::crypto
{
	class SecretKeyFactorySpi;
}

namespace __jni_impl::javax::crypto
{
	class SecretKeyFactory : public __JniBaseClass
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
		QAndroidJniObject generateSecret(__jni_impl::__JniBaseClass arg0);
		jstring getAlgorithm();
		QAndroidJniObject getKeySpec(__jni_impl::__JniBaseClass arg0, jclass arg1);
		QAndroidJniObject getProvider();
		QAndroidJniObject translateKey(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::javax::crypto

#include "../../java/security/Provider.hpp"
#include "./SecretKeyFactorySpi.hpp"

namespace __jni_impl::javax::crypto
{
	// Fields
	
	// Constructors
	void SecretKeyFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.crypto.SecretKeyFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljavax/crypto/SecretKeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecretKeyFactory::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.crypto.SecretKeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljavax/crypto/SecretKeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SecretKeyFactory::generateSecret(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateSecret",
			"(Ljava/security/spec/KeySpec;)Ljavax/crypto/SecretKey;",
			arg0.__jniObject().object()
		);
	}
	jstring SecretKeyFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecretKeyFactory::getKeySpec(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljavax/crypto/SecretKey;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SecretKeyFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject SecretKeyFactory::translateKey(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"translateKey",
			"(Ljavax/crypto/SecretKey;)Ljavax/crypto/SecretKey;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::javax::crypto

namespace javax::crypto
{
	class SecretKeyFactory : public __jni_impl::javax::crypto::SecretKeyFactory
	{
	public:
		SecretKeyFactory(QAndroidJniObject obj) { __thiz = obj; }
		SecretKeyFactory()
		{
			__constructor();
		}
	};
} // namespace javax::crypto


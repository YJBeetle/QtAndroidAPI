#pragma once

#ifndef JAVA_SECURITY_KEYFACTORY
#define JAVA_SECURITY_KEYFACTORY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security
{
	class KeyFactorySpi;
}

namespace __jni_impl::java::security
{
	class KeyFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		QAndroidJniObject getProvider();
		QAndroidJniObject generatePublic(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject generatePrivate(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getKeySpec(__jni_impl::__JniBaseClass arg0, jclass arg1);
		QAndroidJniObject translateKey(__jni_impl::__JniBaseClass arg0);
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security

#include "Provider.hpp"
#include "KeyFactorySpi.hpp"

namespace __jni_impl::java::security
{
	// Fields
	
	// Constructors
	void KeyFactory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyFactory",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject KeyFactory::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject KeyFactory::getInstance(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.KeyFactory",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyFactory;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject KeyFactory::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	QAndroidJniObject KeyFactory::generatePublic(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generatePublic",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::generatePrivate(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generatePrivate",
			"(Ljava/security/spec/KeySpec;)Ljava/security/PrivateKey;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject KeyFactory::getKeySpec(__jni_impl::__JniBaseClass arg0, jclass arg1)
	{
		return __thiz.callObjectMethod(
			"getKeySpec",
			"(Ljava/security/Key;Ljava/lang/Class;)Ljava/security/spec/KeySpec;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject KeyFactory::translateKey(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"translateKey",
			"(Ljava/security/Key;)Ljava/security/Key;",
			arg0.__jniObject().object()
		);
	}
	jstring KeyFactory::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security

namespace java::security
{
	class KeyFactory : public __jni_impl::java::security::KeyFactory
	{
	public:
		KeyFactory(QAndroidJniObject obj) { __thiz = obj; }
		KeyFactory()
		{
			__constructor();
		}
	};
} // namespace java::security

#endif // JAVA_SECURITY_KEYFACTORY


#pragma once

#ifndef JAVA_SECURITY_CERT_CERTSTORE
#define JAVA_SECURITY_CERT_CERTSTORE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security
{
	class NoSuchAlgorithmException;
}
namespace __jni_impl::java::security
{
	class Provider;
}
namespace __jni_impl::java::security::cert
{
	class CertStoreSpi;
}

namespace __jni_impl::java::security::cert
{
	class CertStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring getDefaultType();
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		static QAndroidJniObject getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2);
		QAndroidJniObject getCRLs(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getCertStoreParameters();
		QAndroidJniObject getCertificates(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		jstring getType();
	};
} // namespace __jni_impl::java::security::cert

#include "../NoSuchAlgorithmException.hpp"
#include "../Provider.hpp"
#include "CertStoreSpi.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStore",
			"(V)V");
	}
	
	// Methods
	jstring CertStore::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CertStore::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject CertStore::getInstance(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getInstance(const QString &arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::security::Provider arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getCRLs(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getCertStoreParameters()
	{
		return __thiz.callObjectMethod(
			"getCertStoreParameters",
			"()Ljava/security/cert/CertStoreParameters;"
		);
	}
	QAndroidJniObject CertStore::getCertificates(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertStore::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring CertStore::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertStore : public __jni_impl::java::security::cert::CertStore
	{
	public:
		CertStore(QAndroidJniObject obj) { __thiz = obj; }
		CertStore()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTSTORE


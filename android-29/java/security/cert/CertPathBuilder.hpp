#pragma once

#ifndef JAVA_SECURITY_CERT_CERTPATHBUILDER
#define JAVA_SECURITY_CERT_CERTPATHBUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class CertPathBuilderSpi;
}
namespace __jni_impl::java::security
{
	class Provider;
}

namespace __jni_impl::java::security::cert
{
	class CertPathBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0, __jni_impl::java::security::Provider arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0);
		QAndroidJniObject build(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getProvider();
		static jstring getDefaultType();
		QAndroidJniObject getRevocationChecker();
		jstring getAlgorithm();
	};
} // namespace __jni_impl::java::security::cert

#include "CertPathBuilderSpi.hpp"
#include "../Provider.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void CertPathBuilder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertPathBuilder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0, __jni_impl::java::security::Provider arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject CertPathBuilder::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getInstance",
			"(Ljava/lang/String;)Ljava/security/cert/CertPathBuilder;",
			arg0
		);
	}
	QAndroidJniObject CertPathBuilder::build(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"build",
			"(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject CertPathBuilder::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	jstring CertPathBuilder::getDefaultType()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.security.cert.CertPathBuilder",
			"getDefaultType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject CertPathBuilder::getRevocationChecker()
	{
		return __thiz.callObjectMethod(
			"getRevocationChecker",
			"()Ljava/security/cert/CertPathChecker;"
		);
	}
	jstring CertPathBuilder::getAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class CertPathBuilder : public __jni_impl::java::security::cert::CertPathBuilder
	{
	public:
		CertPathBuilder(QAndroidJniObject obj) { __thiz = obj; }
		CertPathBuilder()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_CERTPATHBUILDER


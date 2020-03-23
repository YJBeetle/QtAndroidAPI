#pragma once

#ifndef JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER
#define JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::security::cert
{
	class Certificate;
}

namespace __jni_impl::java::security::cert
{
	class PKIXCertPathChecker : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		void init(jboolean arg0);
		void check(__jni_impl::java::security::cert::Certificate arg0, __jni_impl::__JniBaseClass arg1);
		void check(__jni_impl::java::security::cert::Certificate arg0);
		jboolean isForwardCheckingSupported();
		QAndroidJniObject getSupportedExtensions();
	};
} // namespace __jni_impl::java::security::cert

#include "Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXCertPathChecker::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXCertPathChecker",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PKIXCertPathChecker::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;");
	}
	void PKIXCertPathChecker::init(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"init",
			"(Z)V",
			arg0);
	}
	void PKIXCertPathChecker::check(__jni_impl::java::security::cert::Certificate arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;Ljava/util/Collection;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PKIXCertPathChecker::check(__jni_impl::java::security::cert::Certificate arg0)
	{
		__thiz.callMethod<void>(
			"check",
			"(Ljava/security/cert/Certificate;)V",
			arg0.__jniObject().object());
	}
	jboolean PKIXCertPathChecker::isForwardCheckingSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isForwardCheckingSupported",
			"()Z");
	}
	QAndroidJniObject PKIXCertPathChecker::getSupportedExtensions()
	{
		return __thiz.callObjectMethod(
			"getSupportedExtensions",
			"()Ljava/util/Set;");
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXCertPathChecker : public __jni_impl::java::security::cert::PKIXCertPathChecker
	{
	public:
		PKIXCertPathChecker(QAndroidJniObject obj) { __thiz = obj; }
		PKIXCertPathChecker()
		{
			__constructor();
		}
	};
} // namespace java::security::cert

#endif // JAVA_SECURITY_CERT_PKIXCERTPATHCHECKER


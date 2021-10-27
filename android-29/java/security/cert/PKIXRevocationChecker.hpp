#pragma once

#include "../../../__JniBaseClass.hpp"
#include "PKIXCertPathChecker.hpp"

namespace __jni_impl::java::net
{
	class URI;
}
namespace __jni_impl::java::security::cert
{
	class X509Certificate;
}

namespace __jni_impl::java::security::cert
{
	class PKIXRevocationChecker : public __jni_impl::java::security::cert::PKIXCertPathChecker
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject getOcspExtensions();
		QAndroidJniObject getOcspResponder();
		QAndroidJniObject getOcspResponderCert();
		QAndroidJniObject getOcspResponses();
		QAndroidJniObject getOptions();
		QAndroidJniObject getSoftFailExceptions();
		void setOcspExtensions(__jni_impl::__JniBaseClass arg0);
		void setOcspResponder(__jni_impl::java::net::URI arg0);
		void setOcspResponderCert(__jni_impl::java::security::cert::X509Certificate arg0);
		void setOcspResponses(__jni_impl::__JniBaseClass arg0);
		void setOptions(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::security::cert

#include "../../net/URI.hpp"
#include "X509Certificate.hpp"

namespace __jni_impl::java::security::cert
{
	// Fields
	
	// Constructors
	void PKIXRevocationChecker::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.PKIXRevocationChecker",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PKIXRevocationChecker::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/security/cert/PKIXRevocationChecker;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspExtensions()
	{
		return __thiz.callObjectMethod(
			"getOcspExtensions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponder()
	{
		return __thiz.callObjectMethod(
			"getOcspResponder",
			"()Ljava/net/URI;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponderCert()
	{
		return __thiz.callObjectMethod(
			"getOcspResponderCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponses()
	{
		return __thiz.callObjectMethod(
			"getOcspResponses",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOptions()
	{
		return __thiz.callObjectMethod(
			"getOptions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getSoftFailExceptions()
	{
		return __thiz.callObjectMethod(
			"getSoftFailExceptions",
			"()Ljava/util/List;"
		);
	}
	void PKIXRevocationChecker::setOcspExtensions(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOcspExtensions",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponder(__jni_impl::java::net::URI arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponder",
			"(Ljava/net/URI;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponderCert(__jni_impl::java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponderCert",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponses(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponses",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOptions(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOptions",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::security::cert

namespace java::security::cert
{
	class PKIXRevocationChecker : public __jni_impl::java::security::cert::PKIXRevocationChecker
	{
	public:
		PKIXRevocationChecker(QAndroidJniObject obj) { __thiz = obj; }
		PKIXRevocationChecker()
		{
			__constructor();
		}
	};
} // namespace java::security::cert


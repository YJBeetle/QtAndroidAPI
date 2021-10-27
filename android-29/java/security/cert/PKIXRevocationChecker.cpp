#include "../../net/URI.hpp"
#include "./X509Certificate.hpp"
#include "./PKIXRevocationChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	PKIXRevocationChecker::PKIXRevocationChecker(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void PKIXRevocationChecker::setOcspExtensions(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOcspExtensions",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponder(java::net::URI arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponder",
			"(Ljava/net/URI;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponderCert(java::security::cert::X509Certificate arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponderCert",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOcspResponses(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOcspResponses",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void PKIXRevocationChecker::setOptions(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOptions",
			"(Ljava/util/Set;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::security::cert


#include "../../net/URI.hpp"
#include "./X509Certificate.hpp"
#include "./PKIXRevocationChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	// QAndroidJniObject forward
	PKIXRevocationChecker::PKIXRevocationChecker(QAndroidJniObject obj) : java::security::cert::PKIXCertPathChecker(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PKIXRevocationChecker::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/security/cert/PKIXRevocationChecker;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspExtensions()
	{
		return callObjectMethod(
			"getOcspExtensions",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponder()
	{
		return callObjectMethod(
			"getOcspResponder",
			"()Ljava/net/URI;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponderCert()
	{
		return callObjectMethod(
			"getOcspResponderCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOcspResponses()
	{
		return callObjectMethod(
			"getOcspResponses",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getOptions()
	{
		return callObjectMethod(
			"getOptions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject PKIXRevocationChecker::getSoftFailExceptions()
	{
		return callObjectMethod(
			"getSoftFailExceptions",
			"()Ljava/util/List;"
		);
	}
	void PKIXRevocationChecker::setOcspExtensions(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOcspExtensions",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponder(java::net::URI arg0)
	{
		callMethod<void>(
			"setOcspResponder",
			"(Ljava/net/URI;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponderCert(java::security::cert::X509Certificate arg0)
	{
		callMethod<void>(
			"setOcspResponderCert",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponses(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOcspResponses",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOptions(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOptions",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
} // namespace java::security::cert


#include "../../net/URI.hpp"
#include "./X509Certificate.hpp"
#include "./PKIXRevocationChecker.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	PKIXRevocationChecker::PKIXRevocationChecker(QJniObject obj) : java::security::cert::PKIXCertPathChecker(obj) {}
	
	// Constructors
	
	// Methods
	java::security::cert::PKIXRevocationChecker PKIXRevocationChecker::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/security/cert/PKIXRevocationChecker;"
		);
	}
	__JniBaseClass PKIXRevocationChecker::getOcspExtensions()
	{
		return callObjectMethod(
			"getOcspExtensions",
			"()Ljava/util/List;"
		);
	}
	java::net::URI PKIXRevocationChecker::getOcspResponder()
	{
		return callObjectMethod(
			"getOcspResponder",
			"()Ljava/net/URI;"
		);
	}
	java::security::cert::X509Certificate PKIXRevocationChecker::getOcspResponderCert()
	{
		return callObjectMethod(
			"getOcspResponderCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	__JniBaseClass PKIXRevocationChecker::getOcspResponses()
	{
		return callObjectMethod(
			"getOcspResponses",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass PKIXRevocationChecker::getOptions()
	{
		return callObjectMethod(
			"getOptions",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass PKIXRevocationChecker::getSoftFailExceptions()
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


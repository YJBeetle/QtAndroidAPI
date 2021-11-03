#include "../../../JObject.hpp"
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
	java::security::cert::PKIXRevocationChecker PKIXRevocationChecker::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/security/cert/PKIXRevocationChecker;"
		);
	}
	JObject PKIXRevocationChecker::getOcspExtensions() const
	{
		return callObjectMethod(
			"getOcspExtensions",
			"()Ljava/util/List;"
		);
	}
	java::net::URI PKIXRevocationChecker::getOcspResponder() const
	{
		return callObjectMethod(
			"getOcspResponder",
			"()Ljava/net/URI;"
		);
	}
	java::security::cert::X509Certificate PKIXRevocationChecker::getOcspResponderCert() const
	{
		return callObjectMethod(
			"getOcspResponderCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JObject PKIXRevocationChecker::getOcspResponses() const
	{
		return callObjectMethod(
			"getOcspResponses",
			"()Ljava/util/Map;"
		);
	}
	JObject PKIXRevocationChecker::getOptions() const
	{
		return callObjectMethod(
			"getOptions",
			"()Ljava/util/Set;"
		);
	}
	JObject PKIXRevocationChecker::getSoftFailExceptions() const
	{
		return callObjectMethod(
			"getSoftFailExceptions",
			"()Ljava/util/List;"
		);
	}
	void PKIXRevocationChecker::setOcspExtensions(JObject arg0) const
	{
		callMethod<void>(
			"setOcspExtensions",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponder(java::net::URI arg0) const
	{
		callMethod<void>(
			"setOcspResponder",
			"(Ljava/net/URI;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponderCert(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setOcspResponderCert",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOcspResponses(JObject arg0) const
	{
		callMethod<void>(
			"setOcspResponses",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void PKIXRevocationChecker::setOptions(JObject arg0) const
	{
		callMethod<void>(
			"setOptions",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
} // namespace java::security::cert


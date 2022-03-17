#pragma once

#include "../../../JObject.hpp"
#include "../../net/URI.def.hpp"
#include "./X509Certificate.def.hpp"
#include "./PKIXRevocationChecker.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::security::cert::PKIXRevocationChecker PKIXRevocationChecker::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/security/cert/PKIXRevocationChecker;"
		);
	}
	inline JObject PKIXRevocationChecker::getOcspExtensions() const
	{
		return callObjectMethod(
			"getOcspExtensions",
			"()Ljava/util/List;"
		);
	}
	inline java::net::URI PKIXRevocationChecker::getOcspResponder() const
	{
		return callObjectMethod(
			"getOcspResponder",
			"()Ljava/net/URI;"
		);
	}
	inline java::security::cert::X509Certificate PKIXRevocationChecker::getOcspResponderCert() const
	{
		return callObjectMethod(
			"getOcspResponderCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JObject PKIXRevocationChecker::getOcspResponses() const
	{
		return callObjectMethod(
			"getOcspResponses",
			"()Ljava/util/Map;"
		);
	}
	inline JObject PKIXRevocationChecker::getOptions() const
	{
		return callObjectMethod(
			"getOptions",
			"()Ljava/util/Set;"
		);
	}
	inline JObject PKIXRevocationChecker::getSoftFailExceptions() const
	{
		return callObjectMethod(
			"getSoftFailExceptions",
			"()Ljava/util/List;"
		);
	}
	inline void PKIXRevocationChecker::setOcspExtensions(JObject arg0) const
	{
		callMethod<void>(
			"setOcspExtensions",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void PKIXRevocationChecker::setOcspResponder(java::net::URI arg0) const
	{
		callMethod<void>(
			"setOcspResponder",
			"(Ljava/net/URI;)V",
			arg0.object()
		);
	}
	inline void PKIXRevocationChecker::setOcspResponderCert(java::security::cert::X509Certificate arg0) const
	{
		callMethod<void>(
			"setOcspResponderCert",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		);
	}
	inline void PKIXRevocationChecker::setOcspResponses(JObject arg0) const
	{
		callMethod<void>(
			"setOcspResponses",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline void PKIXRevocationChecker::setOptions(JObject arg0) const
	{
		callMethod<void>(
			"setOptions",
			"(Ljava/util/Set;)V",
			arg0.object()
		);
	}
} // namespace java::security::cert

// Base class headers
#include "./PKIXCertPathChecker.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif

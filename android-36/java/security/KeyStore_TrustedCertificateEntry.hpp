#pragma once

#include "../../JString.hpp"
#include "./cert/Certificate.def.hpp"
#include "./KeyStore_TrustedCertificateEntry.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0)
		: JObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;)V",
			arg0.object()
		) {}
	inline KeyStore_TrustedCertificateEntry::KeyStore_TrustedCertificateEntry(java::security::cert::Certificate arg0, JObject arg1)
		: JObject(
			"java.security.KeyStore$TrustedCertificateEntry",
			"(Ljava/security/cert/Certificate;Ljava/util/Set;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject KeyStore_TrustedCertificateEntry::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/Set;"
		);
	}
	inline java::security::cert::Certificate KeyStore_TrustedCertificateEntry::getTrustedCertificate() const
	{
		return callObjectMethod(
			"getTrustedCertificate",
			"()Ljava/security/cert/Certificate;"
		);
	}
	inline JString KeyStore_TrustedCertificateEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif

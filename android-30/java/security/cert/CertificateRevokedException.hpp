#pragma once

#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JString.hpp"
#include "./CRLReason.def.hpp"
#include "../../util/Date.def.hpp"
#include "../../../javax/security/auth/x500/X500Principal.def.hpp"
#include "./CertificateRevokedException.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	inline CertificateRevokedException::CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, JObject arg3)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateRevokedException",
			"(Ljava/util/Date;Ljava/security/cert/CRLReason;Ljavax/security/auth/x500/X500Principal;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline javax::security::auth::x500::X500Principal CertificateRevokedException::getAuthorityName() const
	{
		return callObjectMethod(
			"getAuthorityName",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	inline JObject CertificateRevokedException::getExtensions() const
	{
		return callObjectMethod(
			"getExtensions",
			"()Ljava/util/Map;"
		);
	}
	inline java::util::Date CertificateRevokedException::getInvalidityDate() const
	{
		return callObjectMethod(
			"getInvalidityDate",
			"()Ljava/util/Date;"
		);
	}
	inline JString CertificateRevokedException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Date CertificateRevokedException::getRevocationDate() const
	{
		return callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	inline java::security::cert::CRLReason CertificateRevokedException::getRevocationReason() const
	{
		return callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
} // namespace java::security::cert

// Base class headers
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif

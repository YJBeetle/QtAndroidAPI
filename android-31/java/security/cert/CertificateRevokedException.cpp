#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JString.hpp"
#include "./CRLReason.hpp"
#include "../../util/Date.hpp"
#include "../../../javax/security/auth/x500/X500Principal.hpp"
#include "./CertificateRevokedException.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertificateRevokedException::CertificateRevokedException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
	
	// Constructors
	CertificateRevokedException::CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, JObject arg3)
		: java::security::cert::CertificateException(
			"java.security.cert.CertificateRevokedException",
			"(Ljava/util/Date;Ljava/security/cert/CRLReason;Ljavax/security/auth/x500/X500Principal;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	javax::security::auth::x500::X500Principal CertificateRevokedException::getAuthorityName() const
	{
		return callObjectMethod(
			"getAuthorityName",
			"()Ljavax/security/auth/x500/X500Principal;"
		);
	}
	JObject CertificateRevokedException::getExtensions() const
	{
		return callObjectMethod(
			"getExtensions",
			"()Ljava/util/Map;"
		);
	}
	java::util::Date CertificateRevokedException::getInvalidityDate() const
	{
		return callObjectMethod(
			"getInvalidityDate",
			"()Ljava/util/Date;"
		);
	}
	JString CertificateRevokedException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	java::util::Date CertificateRevokedException::getRevocationDate() const
	{
		return callObjectMethod(
			"getRevocationDate",
			"()Ljava/util/Date;"
		);
	}
	java::security::cert::CRLReason CertificateRevokedException::getRevocationReason() const
	{
		return callObjectMethod(
			"getRevocationReason",
			"()Ljava/security/cert/CRLReason;"
		);
	}
} // namespace java::security::cert


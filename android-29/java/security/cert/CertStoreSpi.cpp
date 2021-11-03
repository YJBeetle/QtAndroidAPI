#include "./CertStoreSpi.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertStoreSpi::CertStoreSpi(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CertStoreSpi::CertStoreSpi(JObject arg0)
		: JObject(
			"java.security.cert.CertStoreSpi",
			"(Ljava/security/cert/CertStoreParameters;)V",
			arg0.object()
		) {}
	
	// Methods
	JObject CertStoreSpi::engineGetCRLs(JObject arg0) const
	{
		return callObjectMethod(
			"engineGetCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject CertStoreSpi::engineGetCertificates(JObject arg0) const
	{
		return callObjectMethod(
			"engineGetCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
} // namespace java::security::cert


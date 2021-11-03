#include "../../../JString.hpp"
#include "../NoSuchAlgorithmException.hpp"
#include "../Provider.hpp"
#include "./CertStoreSpi.hpp"
#include "./CertStore.hpp"

namespace java::security::cert
{
	// Fields
	
	// QJniObject forward
	CertStore::CertStore(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString CertStore::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/lang/String;)Ljava/security/cert/CertStore;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;Ljava/security/Provider;)Ljava/security/cert/CertStore;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	JObject CertStore::getCRLs(JObject arg0) const
	{
		return callObjectMethod(
			"getCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	JObject CertStore::getCertStoreParameters() const
	{
		return callObjectMethod(
			"getCertStoreParameters",
			"()Ljava/security/cert/CertStoreParameters;"
		);
	}
	JObject CertStore::getCertificates(JObject arg0) const
	{
		return callObjectMethod(
			"getCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	java::security::Provider CertStore::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	JString CertStore::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert


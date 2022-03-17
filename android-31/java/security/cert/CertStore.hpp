#pragma once

#include "../../../JString.hpp"
#include "../NoSuchAlgorithmException.def.hpp"
#include "../Provider.def.hpp"
#include "./CertStoreSpi.def.hpp"
#include "./CertStore.def.hpp"

namespace java::security::cert
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString CertStore::getDefaultType()
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getDefaultType",
			"()Ljava/lang/String;"
		);
	}
	inline java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.security.cert.CertStore",
			"getInstance",
			"(Ljava/lang/String;Ljava/security/cert/CertStoreParameters;)Ljava/security/cert/CertStore;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1, JString arg2)
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
	inline java::security::cert::CertStore CertStore::getInstance(JString arg0, JObject arg1, java::security::Provider arg2)
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
	inline JObject CertStore::getCRLs(JObject arg0) const
	{
		return callObjectMethod(
			"getCRLs",
			"(Ljava/security/cert/CRLSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline JObject CertStore::getCertStoreParameters() const
	{
		return callObjectMethod(
			"getCertStoreParameters",
			"()Ljava/security/cert/CertStoreParameters;"
		);
	}
	inline JObject CertStore::getCertificates(JObject arg0) const
	{
		return callObjectMethod(
			"getCertificates",
			"(Ljava/security/cert/CertSelector;)Ljava/util/Collection;",
			arg0.object()
		);
	}
	inline java::security::Provider CertStore::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/security/Provider;"
		);
	}
	inline JString CertStore::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::security::cert

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security::cert;
#endif

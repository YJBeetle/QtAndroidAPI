#pragma once

#include "../../../JObject.hpp"
#include "./CRL.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security
{
	class Provider;
}
namespace java::security::cert
{
	class X509CRLEntry;
}
namespace java::security::cert
{
	class X509Certificate;
}
namespace java::util
{
	class Date;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace java::security::cert
{
	class X509CRL : public java::security::cert::CRL
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509CRL(const char *className, const char *sig, Ts...agv) : java::security::cert::CRL(className, sig, std::forward<Ts>(agv)...) {}
		X509CRL(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getEncoded();
		JObject getIssuerDN();
		javax::security::auth::x500::X500Principal getIssuerX500Principal();
		java::util::Date getNextUpdate();
		java::security::cert::X509CRLEntry getRevokedCertificate(java::math::BigInteger arg0);
		java::security::cert::X509CRLEntry getRevokedCertificate(java::security::cert::X509Certificate arg0);
		JObject getRevokedCertificates();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		jbyteArray getSignature();
		jbyteArray getTBSCertList();
		java::util::Date getThisUpdate();
		jint getVersion();
		jint hashCode();
		void verify(JObject arg0);
		void verify(JObject arg0, jstring arg1);
		void verify(JObject arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert


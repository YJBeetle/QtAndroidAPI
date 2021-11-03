#pragma once

#include "./CRL.hpp"

class JByteArray;
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit X509CRL(const char *className, const char *sig, Ts...agv) : java::security::cert::CRL(className, sig, std::forward<Ts>(agv)...) {}
		X509CRL(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getEncoded() const;
		JObject getIssuerDN() const;
		javax::security::auth::x500::X500Principal getIssuerX500Principal() const;
		java::util::Date getNextUpdate() const;
		java::security::cert::X509CRLEntry getRevokedCertificate(java::math::BigInteger arg0) const;
		java::security::cert::X509CRLEntry getRevokedCertificate(java::security::cert::X509Certificate arg0) const;
		JObject getRevokedCertificates() const;
		JString getSigAlgName() const;
		JString getSigAlgOID() const;
		JByteArray getSigAlgParams() const;
		JByteArray getSignature() const;
		JByteArray getTBSCertList() const;
		java::util::Date getThisUpdate() const;
		jint getVersion() const;
		jint hashCode() const;
		void verify(JObject arg0) const;
		void verify(JObject arg0, JString arg1) const;
		void verify(JObject arg0, java::security::Provider arg1) const;
	};
} // namespace java::security::cert


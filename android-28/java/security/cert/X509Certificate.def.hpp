#pragma once

#include "./Certificate.def.hpp"

class JByteArray;
class JBooleanArray;
class JString;
namespace java::math
{
	class BigInteger;
}
namespace java::security
{
	class Provider;
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
	class X509Certificate : public java::security::cert::Certificate
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509Certificate(const char *className, const char *sig, Ts...agv) : java::security::cert::Certificate(className, sig, std::forward<Ts>(agv)...) {}
		X509Certificate(QJniObject obj) : java::security::cert::Certificate(obj) {}
		
		// Constructors
		
		// Methods
		void checkValidity() const;
		void checkValidity(java::util::Date arg0) const;
		jint getBasicConstraints() const;
		JObject getExtendedKeyUsage() const;
		JObject getIssuerAlternativeNames() const;
		JObject getIssuerDN() const;
		JBooleanArray getIssuerUniqueID() const;
		javax::security::auth::x500::X500Principal getIssuerX500Principal() const;
		JBooleanArray getKeyUsage() const;
		java::util::Date getNotAfter() const;
		java::util::Date getNotBefore() const;
		java::math::BigInteger getSerialNumber() const;
		JString getSigAlgName() const;
		JString getSigAlgOID() const;
		JByteArray getSigAlgParams() const;
		JByteArray getSignature() const;
		JObject getSubjectAlternativeNames() const;
		JObject getSubjectDN() const;
		JBooleanArray getSubjectUniqueID() const;
		javax::security::auth::x500::X500Principal getSubjectX500Principal() const;
		JByteArray getTBSCertificate() const;
		jint getVersion() const;
		void verify(JObject arg0, java::security::Provider arg1) const;
	};
} // namespace java::security::cert


#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JBooleanArray;
namespace java::lang
{
	class Boolean;
}
class JObject;
class JString;
namespace java::math
{
	class BigInteger;
}
namespace java::security::cert
{
	class Certificate;
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
	class X509CertSelector : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509CertSelector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509CertSelector(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		X509CertSelector();
		
		// Methods
		void addPathToName(jint arg0, JByteArray arg1) const;
		void addPathToName(jint arg0, JString arg1) const;
		void addSubjectAlternativeName(jint arg0, JByteArray arg1) const;
		void addSubjectAlternativeName(jint arg0, JString arg1) const;
		JObject clone() const;
		JByteArray getAuthorityKeyIdentifier() const;
		jint getBasicConstraints() const;
		java::security::cert::X509Certificate getCertificate() const;
		java::util::Date getCertificateValid() const;
		JObject getExtendedKeyUsage() const;
		javax::security::auth::x500::X500Principal getIssuer() const;
		JByteArray getIssuerAsBytes() const;
		JString getIssuerAsString() const;
		JBooleanArray getKeyUsage() const;
		jboolean getMatchAllSubjectAltNames() const;
		JByteArray getNameConstraints() const;
		JObject getPathToNames() const;
		JObject getPolicy() const;
		java::util::Date getPrivateKeyValid() const;
		java::math::BigInteger getSerialNumber() const;
		javax::security::auth::x500::X500Principal getSubject() const;
		JObject getSubjectAlternativeNames() const;
		JByteArray getSubjectAsBytes() const;
		JString getSubjectAsString() const;
		JByteArray getSubjectKeyIdentifier() const;
		JObject getSubjectPublicKey() const;
		JString getSubjectPublicKeyAlgID() const;
		jboolean match(java::security::cert::Certificate arg0) const;
		void setAuthorityKeyIdentifier(JByteArray arg0) const;
		void setBasicConstraints(jint arg0) const;
		void setCertificate(java::security::cert::X509Certificate arg0) const;
		void setCertificateValid(java::util::Date arg0) const;
		void setExtendedKeyUsage(JObject arg0) const;
		void setIssuer(JByteArray arg0) const;
		void setIssuer(JString arg0) const;
		void setIssuer(javax::security::auth::x500::X500Principal arg0) const;
		void setKeyUsage(JBooleanArray arg0) const;
		void setMatchAllSubjectAltNames(jboolean arg0) const;
		void setNameConstraints(JByteArray arg0) const;
		void setPathToNames(JObject arg0) const;
		void setPolicy(JObject arg0) const;
		void setPrivateKeyValid(java::util::Date arg0) const;
		void setSerialNumber(java::math::BigInteger arg0) const;
		void setSubject(JByteArray arg0) const;
		void setSubject(JString arg0) const;
		void setSubject(javax::security::auth::x500::X500Principal arg0) const;
		void setSubjectAlternativeNames(JObject arg0) const;
		void setSubjectKeyIdentifier(JByteArray arg0) const;
		void setSubjectPublicKey(JByteArray arg0) const;
		void setSubjectPublicKey(JObject arg0) const;
		void setSubjectPublicKeyAlgID(JString arg0) const;
		JString toString() const;
	};
} // namespace java::security::cert


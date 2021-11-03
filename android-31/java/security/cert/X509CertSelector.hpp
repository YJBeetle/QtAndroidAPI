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
		X509CertSelector(QJniObject obj);
		
		// Constructors
		X509CertSelector();
		
		// Methods
		void addPathToName(jint arg0, JByteArray arg1);
		void addPathToName(jint arg0, JString arg1);
		void addSubjectAlternativeName(jint arg0, JByteArray arg1);
		void addSubjectAlternativeName(jint arg0, JString arg1);
		JObject clone();
		JByteArray getAuthorityKeyIdentifier();
		jint getBasicConstraints();
		java::security::cert::X509Certificate getCertificate();
		java::util::Date getCertificateValid();
		JObject getExtendedKeyUsage();
		javax::security::auth::x500::X500Principal getIssuer();
		JByteArray getIssuerAsBytes();
		JString getIssuerAsString();
		JBooleanArray getKeyUsage();
		jboolean getMatchAllSubjectAltNames();
		JByteArray getNameConstraints();
		JObject getPathToNames();
		JObject getPolicy();
		java::util::Date getPrivateKeyValid();
		java::math::BigInteger getSerialNumber();
		javax::security::auth::x500::X500Principal getSubject();
		JObject getSubjectAlternativeNames();
		JByteArray getSubjectAsBytes();
		JString getSubjectAsString();
		JByteArray getSubjectKeyIdentifier();
		JObject getSubjectPublicKey();
		JString getSubjectPublicKeyAlgID();
		jboolean match(java::security::cert::Certificate arg0);
		void setAuthorityKeyIdentifier(JByteArray arg0);
		void setBasicConstraints(jint arg0);
		void setCertificate(java::security::cert::X509Certificate arg0);
		void setCertificateValid(java::util::Date arg0);
		void setExtendedKeyUsage(JObject arg0);
		void setIssuer(JByteArray arg0);
		void setIssuer(JString arg0);
		void setIssuer(javax::security::auth::x500::X500Principal arg0);
		void setKeyUsage(JBooleanArray arg0);
		void setMatchAllSubjectAltNames(jboolean arg0);
		void setNameConstraints(JByteArray arg0);
		void setPathToNames(JObject arg0);
		void setPolicy(JObject arg0);
		void setPrivateKeyValid(java::util::Date arg0);
		void setSerialNumber(java::math::BigInteger arg0);
		void setSubject(JByteArray arg0);
		void setSubject(JString arg0);
		void setSubject(javax::security::auth::x500::X500Principal arg0);
		void setSubjectAlternativeNames(JObject arg0);
		void setSubjectKeyIdentifier(JByteArray arg0);
		void setSubjectPublicKey(JByteArray arg0);
		void setSubjectPublicKey(JObject arg0);
		void setSubjectPublicKeyAlgID(JString arg0);
		JString toString();
	};
} // namespace java::security::cert


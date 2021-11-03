#pragma once

#include "./Certificate.hpp"

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
		X509Certificate(QJniObject obj);
		
		// Constructors
		
		// Methods
		void checkValidity();
		void checkValidity(java::util::Date arg0);
		jint getBasicConstraints();
		JObject getExtendedKeyUsage();
		JObject getIssuerAlternativeNames();
		JObject getIssuerDN();
		JBooleanArray getIssuerUniqueID();
		javax::security::auth::x500::X500Principal getIssuerX500Principal();
		JBooleanArray getKeyUsage();
		java::util::Date getNotAfter();
		java::util::Date getNotBefore();
		java::math::BigInteger getSerialNumber();
		JString getSigAlgName();
		JString getSigAlgOID();
		JByteArray getSigAlgParams();
		JByteArray getSignature();
		JObject getSubjectAlternativeNames();
		JObject getSubjectDN();
		JBooleanArray getSubjectUniqueID();
		javax::security::auth::x500::X500Principal getSubjectX500Principal();
		JByteArray getTBSCertificate();
		jint getVersion();
		void verify(JObject arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert


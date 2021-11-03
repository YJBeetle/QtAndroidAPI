#pragma once

#include "../../../JObject.hpp"
#include "./Certificate.hpp"

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
		jbooleanArray getIssuerUniqueID();
		javax::security::auth::x500::X500Principal getIssuerX500Principal();
		jbooleanArray getKeyUsage();
		java::util::Date getNotAfter();
		java::util::Date getNotBefore();
		java::math::BigInteger getSerialNumber();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		jbyteArray getSignature();
		JObject getSubjectAlternativeNames();
		JObject getSubjectDN();
		jbooleanArray getSubjectUniqueID();
		javax::security::auth::x500::X500Principal getSubjectX500Principal();
		jbyteArray getTBSCertificate();
		jint getVersion();
		void verify(JObject arg0, java::security::Provider arg1);
	};
} // namespace java::security::cert


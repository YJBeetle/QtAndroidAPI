#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security::cert
{
	class CRL;
}
namespace java::security::cert
{
	class X509Certificate;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class HashSet;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace java::security::cert
{
	class X509CRLSelector : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509CRLSelector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509CRLSelector(QAndroidJniObject obj);
		
		// Constructors
		X509CRLSelector();
		
		// Methods
		void addIssuer(javax::security::auth::x500::X500Principal arg0);
		void addIssuerName(jbyteArray arg0);
		void addIssuerName(jstring arg0);
		jobject clone();
		java::security::cert::X509Certificate getCertificateChecking();
		java::util::Date getDateAndTime();
		JObject getIssuerNames();
		JObject getIssuers();
		java::math::BigInteger getMaxCRL();
		java::math::BigInteger getMinCRL();
		jboolean match(java::security::cert::CRL arg0);
		void setCertificateChecking(java::security::cert::X509Certificate arg0);
		void setDateAndTime(java::util::Date arg0);
		void setIssuerNames(JObject arg0);
		void setIssuers(JObject arg0);
		void setMaxCRLNumber(java::math::BigInteger arg0);
		void setMinCRLNumber(java::math::BigInteger arg0);
		jstring toString();
	};
} // namespace java::security::cert


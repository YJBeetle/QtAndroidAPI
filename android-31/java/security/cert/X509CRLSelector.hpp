#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
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
		X509CRLSelector(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		X509CRLSelector();
		
		// Methods
		void addIssuer(javax::security::auth::x500::X500Principal arg0) const;
		void addIssuerName(JByteArray arg0) const;
		void addIssuerName(JString arg0) const;
		JObject clone() const;
		java::security::cert::X509Certificate getCertificateChecking() const;
		java::util::Date getDateAndTime() const;
		JObject getIssuerNames() const;
		JObject getIssuers() const;
		java::math::BigInteger getMaxCRL() const;
		java::math::BigInteger getMinCRL() const;
		jboolean match(java::security::cert::CRL arg0) const;
		void setCertificateChecking(java::security::cert::X509Certificate arg0) const;
		void setDateAndTime(java::util::Date arg0) const;
		void setIssuerNames(JObject arg0) const;
		void setIssuers(JObject arg0) const;
		void setMaxCRLNumber(java::math::BigInteger arg0) const;
		void setMinCRLNumber(java::math::BigInteger arg0) const;
		JString toString() const;
	};
} // namespace java::security::cert


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
	class CRLReason;
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
	class X509CRLEntry : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509CRLEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		X509CRLEntry(QAndroidJniObject obj);
		
		// Constructors
		X509CRLEntry();
		
		// Methods
		jboolean equals(JObject arg0);
		javax::security::auth::x500::X500Principal getCertificateIssuer();
		JByteArray getEncoded();
		java::util::Date getRevocationDate();
		java::security::cert::CRLReason getRevocationReason();
		java::math::BigInteger getSerialNumber();
		jboolean hasExtensions();
		jint hashCode();
		JString toString();
	};
} // namespace java::security::cert


#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class X509CRLEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit X509CRLEntry(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		X509CRLEntry(QJniObject obj);
		
		// Constructors
		X509CRLEntry();
		
		// Methods
		jboolean equals(jobject arg0);
		javax::security::auth::x500::X500Principal getCertificateIssuer();
		jbyteArray getEncoded();
		java::util::Date getRevocationDate();
		java::security::cert::CRLReason getRevocationReason();
		java::math::BigInteger getSerialNumber();
		jboolean hasExtensions();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert


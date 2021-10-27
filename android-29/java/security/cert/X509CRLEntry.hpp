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
		
		X509CRLEntry(QAndroidJniObject obj);
		// Constructors
		X509CRLEntry();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getCertificateIssuer();
		jbyteArray getEncoded();
		QAndroidJniObject getRevocationDate();
		QAndroidJniObject getRevocationReason();
		QAndroidJniObject getSerialNumber();
		jboolean hasExtensions();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security::cert


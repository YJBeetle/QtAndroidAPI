#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
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
	class CertificateRevokedException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateRevokedException(QAndroidJniObject obj);
		// Constructors
		CertificateRevokedException(java::util::Date &arg0, java::security::cert::CRLReason &arg1, javax::security::auth::x500::X500Principal &arg2, __JniBaseClass &arg3);
		CertificateRevokedException() = default;
		
		// Methods
		QAndroidJniObject getAuthorityName();
		QAndroidJniObject getExtensions();
		QAndroidJniObject getInvalidityDate();
		jstring getMessage();
		QAndroidJniObject getRevocationDate();
		QAndroidJniObject getRevocationReason();
	};
} // namespace java::security::cert


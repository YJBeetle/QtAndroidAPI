#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateRevokedException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateRevokedException(QAndroidJniObject obj);
		
		// Constructors
		CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, JObject arg3);
		
		// Methods
		javax::security::auth::x500::X500Principal getAuthorityName();
		JObject getExtensions();
		java::util::Date getInvalidityDate();
		jstring getMessage();
		java::util::Date getRevocationDate();
		java::security::cert::CRLReason getRevocationReason();
	};
} // namespace java::security::cert


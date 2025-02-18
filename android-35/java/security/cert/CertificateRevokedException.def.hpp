#pragma once

#include "./CertificateException.def.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateRevokedException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateRevokedException(QJniObject obj) : java::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateRevokedException(java::util::Date arg0, java::security::cert::CRLReason arg1, javax::security::auth::x500::X500Principal arg2, JObject arg3);
		
		// Methods
		javax::security::auth::x500::X500Principal getAuthorityName() const;
		JObject getExtensions() const;
		java::util::Date getInvalidityDate() const;
		JString getMessage() const;
		java::util::Date getRevocationDate() const;
		java::security::cert::CRLReason getRevocationReason() const;
	};
} // namespace java::security::cert


#pragma once

#include "./CertificateException.def.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateExpiredException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateExpiredException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateExpiredException(QAndroidJniObject obj) : javax::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


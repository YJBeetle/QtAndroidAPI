#pragma once

#include "./CertificateException.hpp"

class JString;

namespace java::security::cert
{
	class CertificateExpiredException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateExpiredException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateExpiredException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(JString arg0);
		
		// Methods
	};
} // namespace java::security::cert


#pragma once

#include "./CertificateException.hpp"

class JString;

namespace java::security::cert
{
	class CertificateExpiredException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateExpiredException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateExpiredException(QJniObject obj);
		
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(JString arg0);
		
		// Methods
	};
} // namespace java::security::cert


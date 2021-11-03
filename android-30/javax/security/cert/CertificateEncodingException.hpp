#pragma once

#include "./CertificateException.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateEncodingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateEncodingException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateEncodingException(QAndroidJniObject obj);
		
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


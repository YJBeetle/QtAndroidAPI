#pragma once

#include "./CertificateException.def.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateEncodingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateEncodingException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateEncodingException(QJniObject obj) : javax::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


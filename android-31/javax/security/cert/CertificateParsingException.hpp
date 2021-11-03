#pragma once

#include "./CertificateException.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateParsingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateParsingException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateParsingException(QJniObject obj);
		
		// Constructors
		CertificateParsingException();
		CertificateParsingException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


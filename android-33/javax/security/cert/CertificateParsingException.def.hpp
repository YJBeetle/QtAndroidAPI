#pragma once

#include "./CertificateException.def.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateParsingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateParsingException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateParsingException(QAndroidJniObject obj) : javax::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateParsingException();
		CertificateParsingException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


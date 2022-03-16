#pragma once

#include "./CertificateException.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CertificateParsingException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateParsingException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateParsingException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateParsingException();
		CertificateParsingException(JString arg0);
		CertificateParsingException(JThrowable arg0);
		CertificateParsingException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


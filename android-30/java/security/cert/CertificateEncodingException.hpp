#pragma once

#include "./CertificateException.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CertificateEncodingException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertificateEncodingException(const char *className, const char *sig, Ts...agv) : java::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateEncodingException(QAndroidJniObject obj) : java::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(JString arg0);
		CertificateEncodingException(JThrowable arg0);
		CertificateEncodingException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


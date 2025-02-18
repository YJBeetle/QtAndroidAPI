#pragma once

#include "./CertificateException.def.hpp"

class JString;

namespace javax::security::cert
{
	class CertificateNotYetValidException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertificateNotYetValidException(const char *className, const char *sig, Ts...agv) : javax::security::cert::CertificateException(className, sig, std::forward<Ts>(agv)...) {}
		CertificateNotYetValidException(QJniObject obj) : javax::security::cert::CertificateException(obj) {}
		
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::cert


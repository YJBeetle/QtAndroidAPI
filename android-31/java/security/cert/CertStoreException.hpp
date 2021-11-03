#pragma once

#include "../GeneralSecurityException.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CertStoreException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CertStoreException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertStoreException(QJniObject obj);
		
		// Constructors
		CertStoreException();
		CertStoreException(JString arg0);
		CertStoreException(JThrowable arg0);
		CertStoreException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


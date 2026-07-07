#pragma once

#include "../GeneralSecurityException.def.hpp"

class JString;
class JThrowable;

namespace java::security::cert
{
	class CRLException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CRLException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CRLException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		CRLException();
		CRLException(JString arg0);
		CRLException(JThrowable arg0);
		CRLException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert


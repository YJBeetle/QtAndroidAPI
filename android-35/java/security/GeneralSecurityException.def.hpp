#pragma once

#include "../lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class GeneralSecurityException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GeneralSecurityException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		GeneralSecurityException(QJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		GeneralSecurityException();
		GeneralSecurityException(JString arg0);
		GeneralSecurityException(JThrowable arg0);
		GeneralSecurityException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security


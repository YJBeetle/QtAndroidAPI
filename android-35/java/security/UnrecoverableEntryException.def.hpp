#pragma once

#include "./GeneralSecurityException.def.hpp"

class JString;

namespace java::security
{
	class UnrecoverableEntryException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnrecoverableEntryException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		UnrecoverableEntryException(QJniObject obj) : java::security::GeneralSecurityException(obj) {}
		
		// Constructors
		UnrecoverableEntryException();
		UnrecoverableEntryException(JString arg0);
		
		// Methods
	};
} // namespace java::security


#pragma once

#include "./GeneralSecurityException.hpp"

class JString;

namespace java::security
{
	class UnrecoverableEntryException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnrecoverableEntryException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		UnrecoverableEntryException(QJniObject obj);
		
		// Constructors
		UnrecoverableEntryException();
		UnrecoverableEntryException(JString arg0);
		
		// Methods
	};
} // namespace java::security


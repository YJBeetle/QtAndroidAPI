#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"


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
		UnrecoverableEntryException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


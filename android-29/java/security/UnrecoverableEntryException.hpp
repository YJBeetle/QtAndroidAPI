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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnrecoverableEntryException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		UnrecoverableEntryException(QAndroidJniObject obj);
		
		// Constructors
		UnrecoverableEntryException();
		UnrecoverableEntryException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


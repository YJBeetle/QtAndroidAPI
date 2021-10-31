#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./GeneralSecurityException.hpp"
#include "./UnrecoverableEntryException.hpp"


namespace java::security
{
	class UnrecoverableKeyException : public java::security::UnrecoverableEntryException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnrecoverableKeyException(const char *className, const char *sig, Ts...agv) : java::security::UnrecoverableEntryException(className, sig, std::forward<Ts>(agv)...) {}
		UnrecoverableKeyException(QJniObject obj);
		
		// Constructors
		UnrecoverableKeyException();
		UnrecoverableKeyException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


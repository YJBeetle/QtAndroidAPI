#pragma once

#include "./UnrecoverableEntryException.hpp"

class JString;

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
		UnrecoverableKeyException(JString arg0);
		
		// Methods
	};
} // namespace java::security


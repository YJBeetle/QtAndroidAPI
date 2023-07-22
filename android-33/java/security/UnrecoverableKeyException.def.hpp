#pragma once

#include "./UnrecoverableEntryException.def.hpp"

class JString;

namespace java::security
{
	class UnrecoverableKeyException : public java::security::UnrecoverableEntryException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnrecoverableKeyException(const char *className, const char *sig, Ts...agv) : java::security::UnrecoverableEntryException(className, sig, std::forward<Ts>(agv)...) {}
		UnrecoverableKeyException(QAndroidJniObject obj) : java::security::UnrecoverableEntryException(obj) {}
		
		// Constructors
		UnrecoverableKeyException();
		UnrecoverableKeyException(JString arg0);
		
		// Methods
	};
} // namespace java::security


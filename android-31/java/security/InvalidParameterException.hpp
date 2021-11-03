#pragma once

#include "../lang/IllegalArgumentException.hpp"

class JString;

namespace java::security
{
	class InvalidParameterException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidParameterException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidParameterException(QAndroidJniObject obj);
		
		// Constructors
		InvalidParameterException();
		InvalidParameterException(JString arg0);
		
		// Methods
	};
} // namespace java::security


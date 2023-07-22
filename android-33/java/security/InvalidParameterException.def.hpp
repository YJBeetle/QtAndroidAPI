#pragma once

#include "../lang/IllegalArgumentException.def.hpp"

class JString;
class JThrowable;

namespace java::security
{
	class InvalidParameterException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidParameterException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidParameterException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
		
		// Constructors
		InvalidParameterException();
		InvalidParameterException(JString arg0);
		InvalidParameterException(JThrowable arg0);
		InvalidParameterException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::security


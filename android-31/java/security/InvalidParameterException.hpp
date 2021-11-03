#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"


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
		InvalidParameterException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


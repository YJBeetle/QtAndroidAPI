#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalArgumentException.hpp"


namespace java::security
{
	class InvalidParameterException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidParameterException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidParameterException(QJniObject obj);
		
		// Constructors
		InvalidParameterException();
		InvalidParameterException(jstring arg0);
		
		// Methods
	};
} // namespace java::security


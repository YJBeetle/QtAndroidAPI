#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::time
{
	class DateTimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeException(QJniObject obj);
		
		// Constructors
		DateTimeException(jstring arg0);
		DateTimeException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::time


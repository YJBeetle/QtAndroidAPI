#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"


namespace java::time
{
	class DateTimeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateTimeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeException(QAndroidJniObject obj);
		
		// Constructors
		DateTimeException(jstring arg0);
		DateTimeException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::time


#pragma once

#include "../lang/RuntimeException.hpp"

class JString;
class JThrowable;

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
		DateTimeException(JString arg0);
		DateTimeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time


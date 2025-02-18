#pragma once

#include "../lang/RuntimeException.def.hpp"

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
		DateTimeException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		DateTimeException(JString arg0);
		DateTimeException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::time


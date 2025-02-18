#pragma once

#include "./RuntimeException.def.hpp"

class JString;
class JThrowable;

namespace java::lang
{
	class SecurityException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecurityException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SecurityException(QJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		SecurityException();
		SecurityException(JString arg0);
		SecurityException(JThrowable arg0);
		SecurityException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace java::lang


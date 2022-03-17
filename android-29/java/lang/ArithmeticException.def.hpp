#pragma once

#include "./RuntimeException.def.hpp"

class JString;

namespace java::lang
{
	class ArithmeticException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArithmeticException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ArithmeticException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
		
		// Constructors
		ArithmeticException();
		ArithmeticException(JString arg0);
		
		// Methods
	};
} // namespace java::lang


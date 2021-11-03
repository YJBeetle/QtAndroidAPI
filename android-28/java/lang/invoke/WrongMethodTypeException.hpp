#pragma once

#include "../RuntimeException.hpp"

class JString;
class JThrowable;

namespace java::lang::invoke
{
	class WrongMethodTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WrongMethodTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		WrongMethodTypeException(QAndroidJniObject obj);
		
		// Constructors
		WrongMethodTypeException();
		WrongMethodTypeException(JString arg0);
		
		// Methods
	};
} // namespace java::lang::invoke


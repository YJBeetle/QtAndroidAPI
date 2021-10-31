#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../RuntimeException.hpp"


namespace java::lang::invoke
{
	class WrongMethodTypeException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		WrongMethodTypeException(QAndroidJniObject obj);
		// Constructors
		WrongMethodTypeException();
		WrongMethodTypeException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::invoke


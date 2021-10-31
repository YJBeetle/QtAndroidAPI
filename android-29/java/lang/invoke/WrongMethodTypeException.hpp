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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WrongMethodTypeException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		WrongMethodTypeException(QAndroidJniObject obj);
		
		// Constructors
		WrongMethodTypeException();
		WrongMethodTypeException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang::invoke


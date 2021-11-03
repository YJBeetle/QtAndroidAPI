#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class ArithmeticException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ArithmeticException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		ArithmeticException(QAndroidJniObject obj);
		
		// Constructors
		ArithmeticException();
		ArithmeticException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang


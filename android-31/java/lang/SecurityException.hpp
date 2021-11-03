#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class SecurityException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecurityException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		SecurityException(QAndroidJniObject obj);
		
		// Constructors
		SecurityException();
		SecurityException(jstring arg0);
		SecurityException(jthrowable arg0);
		SecurityException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang


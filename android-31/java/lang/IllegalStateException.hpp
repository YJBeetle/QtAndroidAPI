#pragma once

#include "../../JObject.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IllegalStateException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalStateException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalStateException(QAndroidJniObject obj);
		
		// Constructors
		IllegalStateException();
		IllegalStateException(jstring arg0);
		IllegalStateException(jthrowable arg0);
		IllegalStateException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang


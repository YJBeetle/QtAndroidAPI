#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class IllegalArgumentException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalArgumentException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalArgumentException(QAndroidJniObject obj);
		
		// Constructors
		IllegalArgumentException();
		IllegalArgumentException(jstring arg0);
		IllegalArgumentException(jthrowable arg0);
		IllegalArgumentException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang


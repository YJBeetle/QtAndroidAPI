#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"
#include "./RuntimeException.hpp"


namespace java::lang
{
	class NullPointerException : public java::lang::RuntimeException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NullPointerException(const char *className, const char *sig, Ts...agv) : java::lang::RuntimeException(className, sig, std::forward<Ts>(agv)...) {}
		NullPointerException(QAndroidJniObject obj);
		
		// Constructors
		NullPointerException();
		NullPointerException(jstring arg0);
		
		// Methods
		jthrowable fillInStackTrace();
		jstring getMessage();
	};
} // namespace java::lang


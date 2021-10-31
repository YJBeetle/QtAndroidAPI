#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class ReflectiveOperationException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReflectiveOperationException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ReflectiveOperationException(QAndroidJniObject obj);
		
		// Constructors
		ReflectiveOperationException();
		ReflectiveOperationException(jstring arg0);
		ReflectiveOperationException(jthrowable arg0);
		ReflectiveOperationException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::lang


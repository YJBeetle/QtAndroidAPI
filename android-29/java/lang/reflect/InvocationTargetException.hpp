#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Exception.hpp"
#include "../ReflectiveOperationException.hpp"


namespace java::lang::reflect
{
	class InvocationTargetException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		InvocationTargetException(QAndroidJniObject obj);
		// Constructors
		InvocationTargetException(jthrowable arg0);
		InvocationTargetException(jthrowable arg0, jstring arg1);
		InvocationTargetException() = default;
		
		// Methods
		jthrowable getCause();
		jthrowable getTargetException();
	};
} // namespace java::lang::reflect


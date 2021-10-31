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
		
		// QJniObject forward
		template<typename ...Ts> explicit InvocationTargetException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		InvocationTargetException(QJniObject obj);
		
		// Constructors
		InvocationTargetException(jthrowable arg0);
		InvocationTargetException(jthrowable arg0, jstring arg1);
		
		// Methods
		jthrowable getCause();
		jthrowable getTargetException();
	};
} // namespace java::lang::reflect


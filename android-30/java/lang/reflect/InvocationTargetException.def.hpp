#pragma once

#include "../ReflectiveOperationException.def.hpp"

class JString;
class JThrowable;

namespace java::lang::reflect
{
	class InvocationTargetException : public java::lang::ReflectiveOperationException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvocationTargetException(const char *className, const char *sig, Ts...agv) : java::lang::ReflectiveOperationException(className, sig, std::forward<Ts>(agv)...) {}
		InvocationTargetException(QAndroidJniObject obj) : java::lang::ReflectiveOperationException(obj) {}
		
		// Constructors
		InvocationTargetException(JThrowable arg0);
		InvocationTargetException(JThrowable arg0, JString arg1);
		
		// Methods
		JThrowable getCause() const;
		JThrowable getTargetException() const;
	};
} // namespace java::lang::reflect


#pragma once

#include "../ReflectiveOperationException.hpp"

class JString;
class JThrowable;

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
		InvocationTargetException(JThrowable arg0);
		InvocationTargetException(JThrowable arg0, JString arg1);
		
		// Methods
		JThrowable getCause() const;
		JThrowable getTargetException() const;
	};
} // namespace java::lang::reflect


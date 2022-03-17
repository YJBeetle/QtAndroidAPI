#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./InvocationTargetException.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline InvocationTargetException::InvocationTargetException(JThrowable arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline InvocationTargetException::InvocationTargetException(JThrowable arg0, JString arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.reflect.InvocationTargetException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JThrowable InvocationTargetException::getCause() const
	{
		return callObjectMethod(
			"getCause",
			"()Ljava/lang/Throwable;"
		);
	}
	inline JThrowable InvocationTargetException::getTargetException() const
	{
		return callObjectMethod(
			"getTargetException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "../Exception.hpp"
#include "../ReflectiveOperationException.hpp"


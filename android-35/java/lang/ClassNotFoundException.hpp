#pragma once

#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ClassNotFoundException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline ClassNotFoundException::ClassNotFoundException()
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"()V"
		) {}
	inline ClassNotFoundException::ClassNotFoundException(JString arg0)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ClassNotFoundException::ClassNotFoundException(JString arg0, JThrowable arg1)
		: java::lang::ReflectiveOperationException(
			"java.lang.ClassNotFoundException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
	inline JThrowable ClassNotFoundException::getException() const
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./ReflectiveOperationException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif

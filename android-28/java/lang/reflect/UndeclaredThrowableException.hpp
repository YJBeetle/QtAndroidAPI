#pragma once

#include "../../../JArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./UndeclaredThrowableException.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	inline UndeclaredThrowableException::UndeclaredThrowableException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline UndeclaredThrowableException::UndeclaredThrowableException(JThrowable arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.reflect.UndeclaredThrowableException",
			"(Ljava/lang/Throwable;Ljava/lang/String;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JThrowable UndeclaredThrowableException::getUndeclaredThrowable() const
	{
		return callObjectMethod(
			"getUndeclaredThrowable",
			"()Ljava/lang/Throwable;"
		);
	}
} // namespace java::lang::reflect

// Base class headers
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif

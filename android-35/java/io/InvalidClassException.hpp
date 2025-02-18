#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidClassException.def.hpp"

namespace java::io
{
	// Fields
	inline JString InvalidClassException::classname()
	{
		return getObjectField(
			"classname",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline InvalidClassException::InvalidClassException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidClassException::InvalidClassException(JString arg0, JString arg1)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline InvalidClassException::InvalidClassException(JString arg0, JThrowable arg1)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	inline InvalidClassException::InvalidClassException(JString arg0, JString arg1, JThrowable arg2)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline JString InvalidClassException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io

// Base class headers
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::io;
#endif

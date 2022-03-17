#pragma once

#include "../../JString.hpp"
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


#pragma once

#include "../io/ObjectInputStream.def.hpp"
#include "../io/ObjectOutputStream.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidPropertiesFormatException.def.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	inline InvalidPropertiesFormatException::InvalidPropertiesFormatException(JString arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline InvalidPropertiesFormatException::InvalidPropertiesFormatException(JThrowable arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


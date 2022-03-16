#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./InvalidPropertiesFormatException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(JString arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(JThrowable arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::util


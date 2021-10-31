#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "./InvalidPropertiesFormatException.hpp"

namespace java::util
{
	// Fields
	
	// QAndroidJniObject forward
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(QAndroidJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(jstring arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidPropertiesFormatException::InvalidPropertiesFormatException(jthrowable arg0)
		: java::io::IOException(
			"java.util.InvalidPropertiesFormatException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::util


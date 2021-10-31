#include "./InvalidClassException.hpp"

namespace java::io
{
	// Fields
	jstring InvalidClassException::classname()
	{
		return getObjectField(
			"classname",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	InvalidClassException::InvalidClassException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
	
	// Constructors
	InvalidClassException::InvalidClassException(jstring arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	InvalidClassException::InvalidClassException(jstring arg0, jstring arg1)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jstring InvalidClassException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::io


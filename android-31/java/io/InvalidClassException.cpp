#include "../../JString.hpp"
#include "./InvalidClassException.hpp"

namespace java::io
{
	// Fields
	JString InvalidClassException::classname()
	{
		return getObjectField(
			"classname",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	InvalidClassException::InvalidClassException(JString arg0)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	InvalidClassException::InvalidClassException(JString arg0, JString arg1)
		: java::io::ObjectStreamException(
			"java.io.InvalidClassException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JString InvalidClassException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::io


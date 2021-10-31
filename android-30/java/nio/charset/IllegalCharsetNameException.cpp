#include "./IllegalCharsetNameException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	IllegalCharsetNameException::IllegalCharsetNameException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalCharsetNameException::IllegalCharsetNameException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.IllegalCharsetNameException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring IllegalCharsetNameException::getCharsetName()
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::charset


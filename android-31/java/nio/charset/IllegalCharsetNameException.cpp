#include "../../../JString.hpp"
#include "./IllegalCharsetNameException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QAndroidJniObject forward
	IllegalCharsetNameException::IllegalCharsetNameException(QAndroidJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	IllegalCharsetNameException::IllegalCharsetNameException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.IllegalCharsetNameException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString IllegalCharsetNameException::getCharsetName() const
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset


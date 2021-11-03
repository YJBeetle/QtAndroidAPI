#include "../../../JString.hpp"
#include "./UnsupportedCharsetException.hpp"

namespace java::nio::charset
{
	// Fields
	
	// QJniObject forward
	UnsupportedCharsetException::UnsupportedCharsetException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	UnsupportedCharsetException::UnsupportedCharsetException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.charset.UnsupportedCharsetException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString UnsupportedCharsetException::getCharsetName() const
	{
		return callObjectMethod(
			"getCharsetName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::charset


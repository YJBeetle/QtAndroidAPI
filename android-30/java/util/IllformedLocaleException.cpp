#include "../../JString.hpp"
#include "./IllformedLocaleException.hpp"

namespace java::util
{
	// Fields
	
	// Constructors
	IllformedLocaleException::IllformedLocaleException()
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"()V"
		) {}
	IllformedLocaleException::IllformedLocaleException(JString arg0)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	IllformedLocaleException::IllformedLocaleException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"java.util.IllformedLocaleException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	jint IllformedLocaleException::getErrorIndex() const
	{
		return callMethod<jint>(
			"getErrorIndex",
			"()I"
		);
	}
} // namespace java::util

